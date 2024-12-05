import("stdfaust.lib");

// ================== User Parameters ==================
// Delay time and feedback controls
recordLevel = hslider("Input", 0.8, 0, 1, 0.01);  // Input scaling
playbackVolume = hslider("Output", 1.0, 0, 2, 0.01);  // Output scaling
delayMs = hslider("Delay", 300, 1, 1000, 1);  // Delay time control (1-1000 ms)
repeats = hslider("Repeats", 0.5, 0, 2, 0.01);  // Feedback control (0 to 2)
bassGain = hslider("BassGain", 0, -12, 12, 0.1);  // Adjustable bass gain
trebleGain = hslider("TrebleGain", 0, -12, 12, 0.1);  // Adjustable treble gain

// Additional Parameters
driftIntensity = hslider("DriftIntensity", 1, 0, 10, 0.1);  // Slider for controlling drift intensity (1-10)
modDepth = hslider("WowDepth", 0.5, 0, 1, 0.01);  // Scales overall drift contribution
flutterDepthKnob = hslider("FlutterDepth", 0.01, 0.0, 1.0, 0.01);  // Controls flutter depth
flutterFreqKnob = hslider("FlutterHz", 15, 10, 30, 0.1);  // Controls flutter frequency

// ================== Additional Features ==================
// Features mentioned in the paper but not directly studied. 
// Tape Saturation (the type is not specified, only mention of a non-linear saturation)
tapeSaturation(x) = x / (1 + abs(x));  // Soft clipping for non-linear saturation

// Playback Head EQ
playbackHeadEQ(x) = x : fi.highpass(2, 20) : fi.lowpass(2, 7000);  // Simulates tape head response


// ================== Tone Control ==================
bassFreq = 200;  // Center frequency for bass adjustment (Hz)
trebleFreq = 5000;  // Center frequency for treble adjustment (Hz)
toneControl(x) = x 
    : fi.low_shelf(bassGain, bassFreq) 
    : fi.high_shelf(trebleGain, trebleFreq);  


// ================== Average Filter for Smoothing ==================
// Applies a moving average filter to smooth out delay value changes
filterLength = 500;
movingAvg(x) = par(i, filterLength, x@(i)) :> _ / filterLength;

// Convert delay from milliseconds to samples and apply smoothing
delayAvg = delayMs * (ma.SR / 1000) : movingAvg;
delaySec = delayMs / 1000;  // Delay time in seconds


// ================== Angular Frequency Generator ==================
// Creates an angular frequency for drift modulation purposes
pulse(freq) = os.lf_saw(freq) * (ma.PI);  // Generates a low-frequency sawtooth wave


// ================== Delay Modulation for Capstan and Pinch Wheel Drift ==================
// Capstan drift: observed amplitude is around 0.15 ms
delayDrift1 = sin(sinArg) * ampSec * ma.SR
with {
    phaseNoise = (no.noise * driftIntensity) : fi.lowpass6e(100);  // Adjusted noise intensity
    freq = 26;  // Frequency associated with capstan drift
    phase = ma.PI * 3/2 + phaseNoise;  // Initial phase with noise
    sinArg = pulse(freq) + phase;  // Angle in radians for sin modulation
    ampSec = 0.00015 * driftIntensity;  // Scaled amplitude
}; 

// Pinch wheel drift 1
delayDrift2 = sin(sinArg) * ampSec * ma.SR
with {
    phaseNoise = (no.noise * driftIntensity * 2) : fi.lowpass6e(35);
    freq = 5;
    phase = phaseNoise;
    sinArg = pulse(freq) + phase;
    ampSec = 0.00010 * delaySec * driftIntensity;  // Scaled amplitude
};   

// Pinch wheel drift 2
delayDrift3 = sin(sinArg) * ampSec * ma.SR
with {
    phaseNoise = (no.noise * driftIntensity * 3) : fi.lowpass6e(20);
    freq = 2.5;
    phase = ma.PI * 3/4 + phaseNoise;
    sinArg = pulse(freq) + phase;
    ampSec = 0.00075 * delaySec * driftIntensity;  // Scaled amplitude
};  

// ================== Additional Noise Component ==================
// Adds extra low-frequency noise proportional to head separation
delayNoise = (no.noise * noiseAmp * driftIntensity * ma.SR) : LPfilter
with {
    noiseAmp = 0.00075 * delaySec;  // Noise amplitude based on delay time
    LPfilter = fi.lowpass3e(70);  // Smoothing low-pass filter for natural variation
};

// ================== Flutter Modulation ==================
// High-frequency flutter modulation
flutter = sin(sinArg) * ampSec * ma.SR
with {
    phaseNoise = (no.noise * (flutterDepthKnob/10000)) : fi.lowpass6e(200);  // Add subtle noise to phase
    sinArg = pulse(flutterFreqKnob) + phaseNoise;  // Generate angular frequency with phase noise
    ampSec = flutterDepthKnob/10000;  // Flutter depth (amplitude in seconds)
};

// ================== Total Delay Calculation ==================
// Combines drift modulation and noise with the smoothed delay value
//0.75 is a factor to make the overall variation level similar to the paper
// Combine wow (drift), flutter, and noise
modulation = delayDrift1 + delayDrift2 + delayDrift3  + flutter + delayNoise;
delayTotal = (modulation * modDepth * 0.75) + delayAvg;


// ================== Variable Comb Filter ==================
// Frequency-dependent comb filter to shape the delay’s spectral character
pole = 0.9999;
filterDelay  = minNotchDelay + ((maxNotchDelay - minNotchDelay) * delaySec) : int
with {
    minNotchFrequency = 7.5;  // Initial target notch frequency in Hz
    maxNotchFrequency = 2;    // Final target notch frequency in Hz

    // Convert frequencies to delay times in samples at a sample rate of 48000 Hz
    minNotchDelay = 48000 / (2 * minNotchFrequency);  // Delay needed to achieve min notch frequency
    maxNotchDelay = 48000 / (2 * maxNotchFrequency);  // Delay needed to achieve max notch frequency
};

// Comb filter function with feedback
ffComb(delay, pole) = _<:_, _@delay*pole :> _/2; 

delayProcessed = delayTotal : ffComb(filterDelay, pole) : int;
    // 1) The delayed signal is weighted by pole and delayed by filterDelay samples. 
    // 2) The filter’s output is an average of the original and delayed signals.
    // 3) By tying filterDelay to delaySec, the filter automatically adapts to different delay settings, shifting the notches’ positions as the delay time changes.

//delayProcessed = delayTotal : feedforwardComb(filterDelay, pole) : int;

// ================== Delay + Feedback Processing ==================
// Implements the delay function and feedback mechanism with tape-style saturation
delayFunction(n, d, x) = x @ min(n, max(0, d));  // Delays the input signal by d samples (up to the maximum limit n), creating the core delay effect by reading past samples.
feedback(x) = (x : tapeSaturation + x ~ (delay * repeats)) : playbackHeadEQ : toneControl
 //Implements feedback by looping the delayed signal back into the input with added saturation and filtering
with {
    tapeSat = co.limiter_1176_R4_mono;  // Tape saturation limiter
    delay = delayFunction(50000, delayProcessed, x);  // Applies calculated delay
    filter = fi.lowpass(2, 7000);  // Low-pass filter to emulate tape frequency response
};

// ================== Output Signal Processing ==================
// Main processing line output with feedback loop
process = ((_ * recordLevel) : feedback(_) : *(playbackVolume)),
          ((_ * recordLevel) : feedback(_) : *(playbackVolume));

