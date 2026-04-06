# EchoPlex

EchoPlex is a HISE based delay project centered on a MATLAB & Faust implementation of a tape style Echoplex model. The repository combines a custom delay engine, a hardware inspired interface, supporting analog processors, and a documentation set that covers the research and development work behind the project.

## Read First

Full project context, start here:

- [Research Paper](/Users/ernest/HisePersonal/Personal/EchoPlex/Documentation/echoplex-paper.pdf)
- [Presentation Slides](/Users/ernest/HisePersonal/Personal/EchoPlex/Documentation/echoplex-slides.pdf)
- [Matlab Notes](/Users/ernest/HisePersonal/Personal/EchoPlex/Documentation/Matlab/echoplex-matlab.pdf)
- [Audio Examples](/Users/ernest/HisePersonal/Personal/EchoPlex/Documentation/Matlab/AudioExamples)

## Main Features

- Custom Faust delay model in [Echoplex_Faust.dsp](/Users/ernest/HisePersonal/Personal/EchoPlex/DspNetworks/CodeLibrary/faust/Echoplex_Faust.dsp)
- Standalone Echoplex style control layer with free delay time, synced time, feedback, drift, input, output, and wet mix
- Multi component wow and flutter style modulation built from several low frequency drift terms plus a dedicated flutter term
- Tape inspired non linear saturation and playback head filtering inside the feedback path
- Tone shaping through separate bass and treble shelf controls
- Custom HISE interface with animated VU style LED metering and needle based time feedback

## DSP Architecture

The core signal path lives in [Echoplex_Faust.dsp](/Users/ernest/HisePersonal/Personal/EchoPlex/DspNetworks/CodeLibrary/faust/Echoplex_Faust.dsp).

Key implementation details:

- Input is scaled by `Record Level`
- The delay line is driven by a variable delay time in milliseconds
- Delay time is smoothed with a moving average stage before modulation is applied
- The modulation system combines three separate drift terms, a noise term, and a flutter term
- Wow style motion is modeled with multiple slow sine based drift sources and filtered noise
- Flutter is modeled as a faster modulation layer with its own depth and frequency controls
- The delayed signal is processed by a feedforward comb stage to shape the spectral response
- The feedback loop includes soft saturation, playback head EQ, and user tone control before being returned to the line
- Output is scaled by `Playback Volume`

Main exposed parameters in the Faust model:

- `Record Level`
- `Playback Volume`
- `Delay (ms)`
- `Feedback`
- `Bass Gain`
- `Treble Gain`
- `DriftIntensity`
- `WowDepth`
- `FlutterDepth`
- `FlutterHz`

## Interface Notes

The current front end lives in [Interface.js](/Users/ernest/HisePersonal/Personal/EchoPlex/Scripts/ScriptProcessors/v10/Interface.js).

The interface work is designed to reflect playback state in a hardware style presentation:

- The time knob drives a matching needle display
- LED panels are animated from the current output level of `MasterGain`
- Metering uses smoothed interpolation rather than raw level jumps
- The layout is built around a rack and front panel metaphor

## Documentation

The [Documentation](/Users/ernest/HisePersonal/Personal/EchoPlex/Documentation) folder should be treated as part of the project itself, not as an extra archive.

- [Research Paper](/Users/ernest/HisePersonal/Personal/EchoPlex/Documentation/echoplex-paper.pdf)
  Project paper covering the design goals and model.

- [Presentation Slides](/Users/ernest/HisePersonal/Personal/EchoPlex/Documentation/echoplex-slides.pdf)
  Slide deck for presenting the project.

- [Matlab Notes](/Users/ernest/HisePersonal/Personal/EchoPlex/Documentation/Matlab/echoplex-matlab.pdf)
  Supporting Matlab material connected to the analysis and DSP work.

- [Audio Examples](/Users/ernest/HisePersonal/Personal/EchoPlex/Documentation/Matlab/AudioExamples)
  Rendered examples including comb, drift, impulse, modulation, and sine sweep material.

- [EP4 Portfolio page](https://michaelzajner.com/ep4/)

## Build

The easiest way to build this project is from inside HISE:

1. Open the project in HISE
2. Use the top toolbar and choose `Export`
3. Choose `Compile DSP networks as dll`

## License

This repository is released under GPL 3.0. See [LICENSE](/Users/ernest/HisePersonal/Personal/EchoPlex/LICENSE).
