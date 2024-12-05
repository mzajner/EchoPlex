Content.makeFrontInterface(820, 584);

const var dsp = Engine.createDspNetwork("Echoplex_Sc.xml");
dsp.setForwardControlsToParameters(false);

const var knb_Time = Content.getComponent("knb_Time");
const var knb_Needle = Content.getComponent("knb_Needle");
const var knb_Wet = Content.getComponent("knb_Wet");
const var knb_Repeats = Content.getComponent("knb_Repeats");
const var btn_Playback = Content.getComponent("btn_Playback");
const var pnl_Advanced = Content.getComponent("pnl_Advanced");




const var Echoplex = Synth.getEffect("Echoplex");


inline function onknb_TimeControl(component, value)
{
	knb_Needle.setValue(value);
	Echoplex.setAttribute(Echoplex.KnbTimeFree, value);
};

Content.getComponent("knb_Time").setControlCallback(onknb_TimeControl);



const var pnl_Led1 = Content.getComponent("pnl_Led1");
const var pnl_Led2 = Content.getComponent("pnl_Led2");
const var pnl_Led3 = Content.getComponent("pnl_Led3");
const var pnl_Led4 = Content.getComponent("pnl_Led4");





// ========== LED ANIMATION ==========
const t = Engine.createTimerObject();

const GainMaster = Synth.getEffect("MasterGain");
const pnl_Leds = [
    Content.getComponent("pnl_Led2"),
    Content.getComponent("pnl_Led3"),
    Content.getComponent("pnl_Led4")
];

const DECAY_RATE = 0.9;
const SMOOTHING_FACTOR = 1 - 0.75;
const SPEED = 30.0;
const thresholdLed2 = 0.2;
const thresholdLed3 = 0.5;
const thresholdLed4 = 0.99;
reg curLevel = 0.0;
reg smoothedLevel = 0.0;

inline function interpolateColor(low, high, factor) {
    local factor = Math.range(factor, 0.0, 1.0);
    return Colours.mix(low, high, factor);
}

inline function cubicInterpolation(start, end, factor) {
    local factor = Math.range(factor, 0.0, 1.0);
    return start + (end - start) * (factor * factor * (3 - 2 * factor));
}


// LED2 PAINT ROUTINE
pnl_Led3.setPaintRoutine(function(g) {
    var bounds = this.getLocalBounds(0);

    // Use the panel's colors
    var lowColor = this.get("itemColour");
    var highColor = this.get("itemColour2");

    // Calculate a normalized factor for smooth transition
    var normalizedGain = Math.range(smoothedLevel, 0.0, 1.0);
    var factor = Math.range((normalizedGain - thresholdLed3) / (1.0 - thresholdLed3), 0.0, 1.0);

    // Interpolate between colors based on the factor
    var currentColor = interpolateColor(lowColor, highColor, factor);

    // Outer Glow: Subtle shadow for depth
    g.setGradientFill([
        Colours.withAlpha(Colours.black, 0.3), bounds[2] / 2, bounds[3] / 2,
        Colours.withAlpha(Colours.white, 0.0), bounds[0] + bounds[2] * 0.5, bounds[1] + bounds[3] * 0.5, true
    ]);
    g.fillEllipse([bounds[0], bounds[1], bounds[2], bounds[3]]);

    // LED Bulb Body: Inner core with glow
    g.setGradientFill([
        Colours.withAlpha(currentColor, 0.5), bounds[2] / 2, bounds[1] + bounds[3] * 0.25,
        Colours.withAlpha(currentColor, 0.5), bounds[2] / 2, bounds[3], true
    ]);
    g.fillEllipse([bounds[0] + bounds[2] * 0.1, bounds[1] + bounds[3] * 0.1, bounds[2] * 0.8, bounds[3] * 0.8]);

    // Rim Light: Bright highlight at the top for specular effect
    g.setGradientFill([
        Colours.withAlpha(Colours.white, 0.8), bounds[2] / 2, bounds[1],
        Colours.withAlpha(Colours.white, 0.0), bounds[2] / 2, bounds[1] + bounds[3] * 0.5, true
    ]);
    g.fillEllipse([bounds[0] + bounds[2] * 0.2, bounds[1] + bounds[3] * 0.1, bounds[2] * 0.6, bounds[3] * 0.6]);

    // Center Highlight: Small inner bulb shine
    g.setGradientFill([
        Colours.withAlpha(Colours.white, 0.05), bounds[2] / 2, bounds[1] + bounds[3] * 0.3,
        Colours.withAlpha(Colours.white, 0.0), bounds[2] / 2, bounds[3], true
    ]);
    g.fillEllipse([bounds[0] + bounds[2] * 0.3, bounds[1] + bounds[3] * 0.3, bounds[2] * 0.4, bounds[3] * 0.4]);

    // Border Ring: Thin outer circle for LED casing
    g.setColour(Colours.withAlpha(currentColor, 0.7));
    g.drawEllipse([bounds[0] + bounds[2] * 0.05, bounds[1] + bounds[3] * 0.05, bounds[2] * 0.9, bounds[3] * 0.9], 1.5);
});

// LED2 PAINT ROUTINE
pnl_Led2.setPaintRoutine(function(g) {
    var bounds = this.getLocalBounds(0);

    // Use the panel's colors
    var lowColor = this.get("itemColour");
    var highColor = this.get("itemColour2");

    // Calculate a normalized factor for smooth transition
    var normalizedGain = Math.range(smoothedLevel, 0.0, 1.0);
    var factor = Math.range((normalizedGain - thresholdLed2) / (1.0 - thresholdLed2), 0.0, 1.0);

    // Interpolate between colors based on the factor
    var currentColor = interpolateColor(lowColor, highColor, factor);

    // Outer Glow: Subtle shadow for depth
    g.setGradientFill([
        Colours.withAlpha(Colours.black, 0.3), bounds[2] / 2, bounds[3] / 2,
        Colours.withAlpha(Colours.white, 0.0), bounds[0] + bounds[2] * 0.5, bounds[1] + bounds[3] * 0.5, true
    ]);
    g.fillEllipse([bounds[0], bounds[1], bounds[2], bounds[3]]);

    // LED Bulb Body: Inner core with glow
    g.setGradientFill([
        Colours.withAlpha(currentColor, 0.5), bounds[2] / 2, bounds[1] + bounds[3] * 0.25,
        Colours.withAlpha(currentColor, 0.5), bounds[2] / 2, bounds[3], true
    ]);
    g.fillEllipse([bounds[0] + bounds[2] * 0.1, bounds[1] + bounds[3] * 0.1, bounds[2] * 0.8, bounds[3] * 0.8]);

    // Rim Light: Bright highlight at the top for specular effect
    g.setGradientFill([
        Colours.withAlpha(Colours.white, 0.8), bounds[2] / 2, bounds[1],
        Colours.withAlpha(Colours.white, 0.0), bounds[2] / 2, bounds[1] + bounds[3] * 0.5, true
    ]);
    g.fillEllipse([bounds[0] + bounds[2] * 0.2, bounds[1] + bounds[3] * 0.1, bounds[2] * 0.6, bounds[3] * 0.6]);

    // Center Highlight: Small inner bulb shine
    g.setGradientFill([
        Colours.withAlpha(Colours.white, 0.05), bounds[2] / 2, bounds[1] + bounds[3] * 0.3,
        Colours.withAlpha(Colours.white, 0.0), bounds[2] / 2, bounds[3], true
    ]);
    g.fillEllipse([bounds[0] + bounds[2] * 0.3, bounds[1] + bounds[3] * 0.3, bounds[2] * 0.4, bounds[3] * 0.4]);

    // Border Ring: Thin outer circle for LED casing
    g.setColour(Colours.withAlpha(currentColor, 0.7));
    g.drawEllipse([bounds[0] + bounds[2] * 0.05, bounds[1] + bounds[3] * 0.05, bounds[2] * 0.9, bounds[3] * 0.9], 1.5);
});

// LED4 PAINT ROUTINE
pnl_Led4.setPaintRoutine(function(g) {
    var bounds = this.getLocalBounds(0);

    // Use the panel's colors
    var lowColor = this.get("itemColour");
    var highColor = this.get("itemColour2");

    // Calculate a normalized factor for smooth transition
    var normalizedGain = Math.range(smoothedLevel, 0.0, 1.0);
    var factor = Math.range((normalizedGain - thresholdLed4) / (1.0 - thresholdLed4), 0.0, 1.0);

    // Interpolate between colors based on the factor
    var currentColor = interpolateColor(lowColor, highColor, factor);

    // Outer Glow: Subtle shadow for depth
    g.setGradientFill([
        Colours.withAlpha(Colours.black, 0.3), bounds[2] / 2, bounds[3] / 2,
        Colours.withAlpha(Colours.white, 0.0), bounds[0] + bounds[2] * 0.5, bounds[1] + bounds[3] * 0.5, true
    ]);
    g.fillEllipse([bounds[0], bounds[1], bounds[2], bounds[3]]);

    // LED Bulb Body: Inner core with glow
    g.setGradientFill([
        Colours.withAlpha(currentColor, 0.5), bounds[2] / 2, bounds[1] + bounds[3] * 0.25,
        Colours.withAlpha(currentColor, 0.5), bounds[2] / 2, bounds[3], true
    ]);
    g.fillEllipse([bounds[0] + bounds[2] * 0.1, bounds[1] + bounds[3] * 0.1, bounds[2] * 0.8, bounds[3] * 0.8]);

    // Rim Light: Bright highlight at the top for specular effect
    g.setGradientFill([
        Colours.withAlpha(Colours.white, 0.8), bounds[2] / 2, bounds[1],
        Colours.withAlpha(Colours.white, 0.0), bounds[2] / 2, bounds[1] + bounds[3] * 0.5, true
    ]);
    g.fillEllipse([bounds[0] + bounds[2] * 0.2, bounds[1] + bounds[3] * 0.1, bounds[2] * 0.6, bounds[3] * 0.6]);

    // Center Highlight: Small inner bulb shine
    g.setGradientFill([
        Colours.withAlpha(Colours.white, 0.05), bounds[2] / 2, bounds[1] + bounds[3] * 0.3,
        Colours.withAlpha(Colours.white, 0.0), bounds[2] / 2, bounds[3], true
    ]);
    g.fillEllipse([bounds[0] + bounds[2] * 0.3, bounds[1] + bounds[3] * 0.3, bounds[2] * 0.4, bounds[3] * 0.4]);

    // Border Ring: Thin outer circle for LED casing
    g.setColour(Colours.withAlpha(currentColor, 0.7));
    g.drawEllipse([bounds[0] + bounds[2] * 0.05, bounds[1] + bounds[3] * 0.05, bounds[2] * 0.9, bounds[3] * 0.9], 1.5);
});


// TIMER CALLBACK
t.setTimerCallback(function() {
    // Get the current gain levels for left and right channels
    var GainLeft = GainMaster.getCurrentLevel(1);
    var GainRight = GainMaster.getCurrentLevel(0);

    // Sum the left and right gain levels
    var combinedGain = (GainLeft + GainRight) * 0.5; // Average the two channels

    // Calculate peak level for the combined gain
    var peakLevelCombined = combinedGain;

    if (peakLevelCombined > curLevel) {
        curLevel = peakLevelCombined;
    } else {
        curLevel *= DECAY_RATE;
    }

    // Smooth the combined gain level
    smoothedLevel = cubicInterpolation(smoothedLevel, curLevel, SMOOTHING_FACTOR);
    
    pnl_Led2.repaint();
    pnl_Led3.repaint();
    pnl_Led4.repaint();
    
});

// Start the timer
t.startTimer(SPEED);




// ----- LED PANEL 1 ----- 
pnl_Led1.setPaintRoutine(function(g)
{
    // Get the bounds of the panel
    var bounds = this.getLocalBounds(0);

    // Choose the color based on the knob's value
    var color = this.data.useAltColor ? this.get("itemColour2") : this.get("itemColour");

    // Outer Glow: Subtle shadow for depth
    g.setGradientFill([
        Colours.withAlpha(Colours.black, 0.3), bounds[2] / 2, bounds[3] / 2,
        Colours.withAlpha(Colours.white, 0.0), bounds[0] + bounds[2] * 0.5, bounds[1] + bounds[3] * 0.5, true
    ]);
    g.fillEllipse([bounds[0], bounds[1], bounds[2], bounds[3]]);

    // LED Bulb Body: Inner core with glow
    g.setGradientFill([
        Colours.withAlpha(color, 0.5), bounds[2] / 2, bounds[1] + bounds[3] * 0.25,
        Colours.withAlpha(color, 0.5), bounds[2] / 2, bounds[3], true
    ]);
    g.fillEllipse([bounds[0] + bounds[2] * 0.1, bounds[1] + bounds[3] * 0.1, bounds[2] * 0.8, bounds[3] * 0.8]);

    // Rim Light: Bright highlight at the top for specular effect
    g.setGradientFill([
        Colours.withAlpha(Colours.white, 0.8), bounds[2] / 2, bounds[1],
        Colours.withAlpha(Colours.white, 0.0), bounds[2] / 2, bounds[1] + bounds[3] * 0.5, true
    ]);
    g.fillEllipse([bounds[0] + bounds[2] * 0.2, bounds[1] + bounds[3] * 0.1, bounds[2] * 0.6, bounds[3] * 0.6]);

    // Center Highlight: Small inner bulb shine
    g.setGradientFill([
        Colours.withAlpha(Colours.white, 0.05), bounds[2] / 2, bounds[1] + bounds[3] * 0.3,
        Colours.withAlpha(Colours.white, 0.0), bounds[2] / 2, bounds[3], true
    ]);
    g.fillEllipse([bounds[0] + bounds[2] * 0.3, bounds[1] + bounds[3] * 0.3, bounds[2] * 0.4, bounds[3] * 0.4]);

    // Border Ring: Thin outer circle for LED casing
    g.setColour(Colours.withAlpha(color, 0.7));
    g.drawEllipse([bounds[0] + bounds[2] * 0.05, bounds[1] + bounds[3] * 0.05, bounds[2] * 0.9, bounds[3] * 0.9], 1.5);
});

// Initialize the alternate color state
pnl_Led1.data.useAltColor = false;


inline function onknb_RepeatsControl(component, value)
{
    local threshold = 0; // Threshold in dB
    pnl_Led1.data.useAltColor = value > threshold; // Toggle the color state
    pnl_Led1.repaint(); // Redraw the panel with the new state
    
    Echoplex.setAttribute(Echoplex.KnbRepeats, value);
};

Content.getComponent("knb_Repeats").setControlCallback(onknb_RepeatsControl);


inline function onknb_WetControl(component, value)
{
    Echoplex.setAttribute(Echoplex.KnbInput, value);
};

Content.getComponent("knb_Wet").setControlCallback(onknb_WetControl);



inline function onbtn_PlaybackControl(component, value)
{
	pnl_Advanced.set("visible", value);
};

Content.getComponent("btn_Playback").setControlCallback(onbtn_PlaybackControl);

function onNoteOn()
{
	
}
 function onNoteOff()
{
	
}
 function onController()
{
	
}
 function onTimer()
{
	
}
 function onControl(number, value)
{
	
}
 