Processor 
Type SynthChain ID v1.0 Bypassed Gain 	      �?Balance 	        VoiceLimit 	      P@KillFadeTime 	      4@IconColour 0 packageName  BuildVersion �  EditorStates BodyShown 0 Visible 1 Solo 0 Folded 1  ChildProcessors  Processor Type MidiProcessorChain ID Midi Processor Bypassed EditorStates BodyShown 1 Visible 0 Solo 0  ChildProcessors  Processor Type ScriptProcessor ID Interface Bypassed Script y-Content.makeFrontInterface(820, 584);

const var dsp = Engine.createDspNetwork("Echoplex_Sc.xml");
dsp.setForwardControlsToParameters(false);

const var knb_Time = Content.getComponent("knb_Time");
const var knb_Needle = Content.getComponent("knb_Needle");
const var knb_Wet = Content.getComponent("knb_Wet");

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



inline function onknb_WetControl(component, value)
{
    local threshold = -100; // Threshold in dB
    pnl_Led1.data.useAltColor = value > threshold; // Toggle the color state
    pnl_Led1.repaint(); // Redraw the panel with the new state
    
    Echoplex.setAttribute(Echoplex.KnbInput, value);
};

Content.getComponent("knb_Wet").setControlCallback(onknb_WetControl);

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
  EditorStates BodyShown 1 Visible 1 Solo 0 contentShown 1 onInitOpen 1  ChildProcessors   Content  Control type ScriptSlider id 
knb_Time value 	   @3�y@ Control type ScriptSlider id knb_Needle value 	   @3�y@ Control type ScriptSlider id knb_Repeats value 	   �G��? Control type ScriptSlider id 	knb_Dry value 	   �23� Control type ScriptSlider id 	knb_Wet value 	   `��� Control type ScriptSlider id knb_Treble value 	      �? Control type ScriptSlider id knb_Treble1 value 	         Control type ScriptSlider id 
knb_Bass value 	      �? Networks  Network ID Echoplex_ScriptFx Version 0.0.0  Network ID Echoplex_ScriptFx Version 0.0.0  Network ID 
Echoplex Version 0.0.0 Node FactoryPath container.chain ID 
Echoplex Bypassed Name 
Echoplex Nodes   Parameters   Network ID Echoplex_Sc.xml Version 0.0.0 Node FactoryPath container.chain ID Echoplex_Sc.xml Bypassed Name Echoplex_Sc.xml Nodes   Parameters   UIData  ContentProperties DeviceType 	Desktop Component type ScriptPanel id pnl_Bg x 	        y 	        width 	     ��@height 	     p�@itemColour 4289440683 itemColour2 4283585106  Component type ScriptImage id 	img_Box x 	        y 	        width 	     ��@height 	     @�@fileName {PROJECT_FOLDER}Box.png locked 1  Component 
type ScriptPanel id 
pnl_Leds x 	      z@y 	     v@width 	      Y@height 	      D@bgColour 
16777215 itemColour 0 itemColour2 0 textColour 
16777215 Component 	type ScriptPanel id 
pnl_Led1 x 	      $@y 	      ,@width 	      (@height 	      (@itemColour 	999v    itemColour2 4294960384 parentComponent 
pnl_Leds  Component 	type ScriptPanel id 
pnl_Led2 x 	      @@y 	      ,@width 	      (@height 	      (@itemColour 792279353 itemColour2 4278255386 parentComponent 
pnl_Leds  Component 	type ScriptPanel id 
pnl_Led3 x 	      K@y 	      ,@width 	      (@height 	      (@itemColour 792279353 itemColour2 4278255386 parentComponent 
pnl_Leds  Component 	type ScriptPanel id 
pnl_Led4 x 	      S@y 	      ,@width 	      (@height 	      (@itemColour 792279353 itemColour2 4294910720 parentComponent 
pnl_Leds  Component type ScriptSlider id 
knb_Time x 	     �v@y 	     �h@filmstripImage {PROJECT_FOLDER}Slider.png numStrips 	      N@isVertical 0 dragDirection Horizontal width 	     @o@height 	      I@scaleFactor 	      �?mouseSensitivity 	      �?showTextBox 0 max 	     @�@ Component type ScriptSlider id knb_Needle x 	     �v@y 	     0q@filmstripImage {PROJECT_FOLDER}Needle.png numStrips 	      N@isVertical 0 dragDirection Horizontal width 	     @o@height 	      D@mouseSensitivity 	      �?max 	     @�@processorId 
Echoplex parameterId KnbTimeFree scaleFactor 	      �?showTextBox 0  Component type ScriptSlider id knb_Repeats x 	      Z@y 	     �t@filmstripImage {PROJECT_FOLDER}KnobMain.png numStrips 	      N@width 	     �V@height 	     �V@scaleFactor 	      �?showTextBox 0 max 	       @processorId 
Echoplex parameterId KnbRepeats  Component type ScriptSlider id 	knb_Dry x 	     �h@y 	     �t@mode 	Decibel min 	      Y�max 	        stepSize 	   ����?suffix  dB middlePosition 	      2�width 	     �V@height 	     �V@filmstripImage {PROJECT_FOLDER}KnobMain.png numStrips 	      N@scaleFactor 	      �?showTextBox 0 processorId 
Echoplex parameterId KnbOutput  Component type ScriptSlider id 	knb_Wet x 	     @r@y 	     �t@mode 	Decibel min 	      Y�max 	        stepSize 	   ����?suffix  dB middlePosition 	      2�width 	     �V@height 	     �V@filmstripImage {PROJECT_FOLDER}KnobMain.png numStrips 	      N@scaleFactor 	      �?showTextBox 0  Component 
type ScriptSlider id knb_Treble x 	     ��@y 	     �t@width 	     �V@height 	     �V@filmstripImage {PROJECT_FOLDER}KnobMain.png numStrips 	      N@scaleFactor 	      �?showTextBox 0  Component 
type ScriptSlider id knb_Treble1 x 	     �@y 	     �t@width 	     �V@height 	     �V@filmstripImage {PROJECT_FOLDER}KnobMain.png numStrips 	      N@scaleFactor 	      �?showTextBox 0  Component 
type ScriptSlider id 
knb_Bass x 	     h�@y 	     �t@width 	     �V@height 	     �V@filmstripImage {PROJECT_FOLDER}KnobMain.png numStrips 	      N@scaleFactor 	      �?showTextBox 0  Processor Type ModulatorChain ID GainModulation Bypassed Intensity 	      �?EditorStates BodyShown 1 Visible 0 Solo 0  ChildProcessors   Processor Type ModulatorChain ID PitchModulation Bypassed Intensity 	        EditorStates BodyShown 1 Visible 0 Solo 0  ChildProcessors   Processor Type EffectChain ID FX Bypassed EditorStates BodyShown 1 Visible 0 Solo 0  ChildProcessors  Processor Type SimpleGain ID MasterGain Bypassed Gain 	   �G���Delay 	        Width 	      Y@Balance 	        InvertPolarity 	        EditorStates BodyShown 1 Visible 1 Solo 0  ChildProcessors  Processor Type ModulatorChain ID Gain Modulation Bypassed Intensity 	      �?EditorStates BodyShown 1 Visible 0 Solo 0  ChildProcessors   Processor Type ModulatorChain ID Delay Modulation Bypassed Intensity 	      �?EditorStates BodyShown 1 Visible 0 Solo 0  ChildProcessors   Processor Type ModulatorChain ID Width Modulation Bypassed Intensity 	      �?EditorStates BodyShown 1 Visible 0 Solo 0  ChildProcessors   Processor Type ModulatorChain ID Pan Modulation Bypassed Intensity 	      �?EditorStates BodyShown 1 Visible 0 Solo 0  ChildProcessors   RoutingMatrix NumSourceChannels    Channel0     Send0 ����Channel1    Send1 ���� Processor Type 
ScriptFX ID 
Echoplex Bypassed Script � function prepareToPlay(sampleRate, blockSize)
{
	
}
 function processBlock(channels)
{
	
}
 function onControl(number, value)
{
	
}
  EditorStates BodyShown 1 Visible 1 Solo 0  ChildProcessors   RoutingMatrix NumSourceChannels    Channel0     Send0 ����Channel1    Send1 ���� Content   Networks  Network ID Echoplex_ScriptFx Version 0.0.0  UIData  ContentProperties DeviceType 	Desktop  Processor Type WaveSynth ID Waveform Generator1 Bypassed Gain 	      �?Balance 	        VoiceLimit 	      p@KillFadeTime 	      4@IconColour 0 OctaveTranspose1 	        SemiTones1 	        OctaveTranspose2 	        SemiTones2 	        Detune1 	        Detune2 	        WaveForm1 	      "@WaveForm2 	       @Pan1 	      Y�Pan2 	      Y@Mix 	    )\�?EnableSecondOscillator 	      �?PulseWidth1 	      �?PulseWidth2 	      �?HardSync 	        EditorStates BodyShown 1 Visible 1 Solo 0 Folded 1  ChildProcessors  Processor Type MidiProcessorChain ID Midi Processor Bypassed EditorStates BodyShown 1 Visible 0 Solo 0  ChildProcessors   Processor Type ModulatorChain ID GainModulation Bypassed Intensity 	      �?EditorStates BodyShown 1 Visible 0 Solo 0  ChildProcessors  Processor 	Type SimpleEnvelope ID DefaultEnvelope1 Bypassed Monophonic 	        Retrigger 	      �?Intensity 	      �?Attack 	      @Release 	      $@LinearMode 	      �?EditorStates BodyShown 1 Visible 1 Solo 0  ChildProcessors  Processor Type ModulatorChain ID Attack Time Modulation Bypassed Intensity 	      �?EditorStates BodyShown 1 Visible 0 Solo 0  ChildProcessors   Processor Type ModulatorChain ID PitchModulation Bypassed Intensity 	        EditorStates BodyShown 1 Visible 0 Solo 0  ChildProcessors   Processor Type EffectChain ID FX Bypassed EditorStates BodyShown 1 Visible 0 Solo 0  ChildProcessors   Processor Type ModulatorChain ID Mix Modulation Bypassed Intensity 	      �?EditorStates BodyShown 1 Visible 0 Solo 0  ChildProcessors   Processor Type ModulatorChain ID Osc2 Pitch Modulation Bypassed Intensity 	        EditorStates BodyShown 1 Visible 0 Solo 0  ChildProcessors   RoutingMatrix NumSourceChannels    Channel0     Send0 ����Channel1    Send1 ���� RoutingMatrix NumSourceChannels    Channel0     Send0 ����Channel1    Send1 ���� macro_controls  macro name 	Macro 1 value 	        midi_cc ���� macro name 	Macro 2 value 	        midi_cc ���� macro name 	Macro 3 value 	        midi_cc ���� macro name 	Macro 4 value 	        midi_cc ���� macro name 	Macro 5 value 	        midi_cc ���� macro name 	Macro 6 value 	        midi_cc ���� macro name 	Macro 7 value 	        midi_cc ���� macro name 	Macro 8 value 	        midi_cc ���� MidiAutomation   MPEData Enabled  