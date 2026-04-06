EchoPlex

EchoPlex is a HISE based delay project centered on a Faust implementation of a tape style Echoplex model. The project combines a custom delay engine, a hardware inspired front panel, and supporting ambience networks for extended spatial processing.

Main Features

- custom Faust delay model in `DspNetworks/CodeLibrary/faust/Echoplex_Faust.dsp`
- standalone Echoplex style control layer with free delay time, synced time, feedback, drift, input, output, and wet mix
- multi component wow and flutter style modulation built from several low frequency drift terms plus a dedicated flutter term
- tape inspired non linear saturation and playback head filtering inside the feedback path
- tone shaping through separate bass and treble shelf controls
- supporting ambience networks based on `greyhole`, `vitalRev`, and a reverse delay processor
- custom HISE interface with animated VU style LED metering and needle based time feedback

DSP Architecture

The core signal path lives in [Echoplex_Faust.dsp](/Users/ernest/HisePersonal/Personal/EchoPlex/DspNetworks/CodeLibrary/faust/Echoplex_Faust.dsp).

Key implementation details:

- input is scaled by `Record Level`
- the delay line is driven by a variable delay time in milliseconds
- delay time is smoothed with a moving average stage before modulation is applied
- the modulation system combines three separate drift terms, a noise term, and a flutter term
- wow style motion is modeled with multiple slow sine based drift sources and filtered noise
- flutter is modeled as a faster modulation layer with its own depth and frequency controls
- the delayed signal is processed by a feedforward comb stage to shape the spectral response
- the feedback loop includes soft saturation, playback head EQ, and user tone control before being returned to the line
- output is scaled by `Playback Volume`

The main exposed parameters in the Faust model are:

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

HISE And Scriptnode Structure

The main delay network is [Echoplex_ScriptFx.xml](/Users/ernest/HisePersonal/Personal/EchoPlex/DspNetworks/Networks/Echoplex_ScriptFx.xml).

That network combines:

- input gain staging
- tempo sync control through `control.tempo_sync`
- the Faust based Echoplex core
- output gain staging

The exposed HISE parameters include:

- `KnbTimeFree`
- `KnbTimeSync`
- `BtnSync`
- `KnbRepeats`
- `KnbDrift`
- `KnbInput`
- `KnbOutput`

Additional FX Layers

The project also includes supporting effect networks and wrappers:

- [greyhole.dsp](/Users/ernest/HisePersonal/Personal/EchoPlex/DspNetworks/CodeLibrary/faust/greyhole.dsp)
  - diffuse modulated reverb with delay time, damping, size, diffusion, feedback, modulation depth, and modulation frequency

- [vitalRev.dsp](/Users/ernest/HisePersonal/Personal/EchoPlex/DspNetworks/CodeLibrary/faust/vitalRev.dsp)
  - compact wrapper around `dm.vital_rev_demo`

- [ReverseDelay.dsp](/Users/ernest/HisePersonal/Personal/EchoPlex/DspNetworks/CodeLibrary/faust/ReverseDelay.dsp)
  - reverse delay built from table based read and write access, phase driven indexing, stereo spread, feedback, pan, and wet mix

- [Fx1_ScriptFx.h](/Users/ernest/HisePersonal/Personal/EchoPlex/AdditionalSourceCode/nodes/Fx1_ScriptFx.h)
  - hybrid wrapper that chains `vitalRev` and `greyhole` under a shared dry wet style control

- [Fx2_ScriptFx.h](/Users/ernest/HisePersonal/Personal/EchoPlex/AdditionalSourceCode/nodes/Fx2_ScriptFx.h)
  - direct `greyhole` wrapper with exposed mix control

Interface Notes

The current front end lives in [Interface.js](/Users/ernest/HisePersonal/Personal/EchoPlex/Scripts/ScriptProcessors/v10/Interface.js).

The UI work is not only cosmetic. It also reflects playback state:

- the time knob drives a matching needle display
- LED panels are animated from the current output level of `MasterGain`
- metering uses smoothed interpolation rather than raw level jumps
- the interface is designed around a hardware style rack and front panel metaphor

Documentation And Research Material

The `Documentation` folder is a major part of this repository and should be treated as part of the project, not just an attachment.

Included material:

- [echoplex-paper.pdf](/Users/ernest/HisePersonal/Personal/EchoPlex/Documentation/echoplex-paper.pdf)
  - research paper documenting the project and model

- [echoplex-slides.pdf](/Users/ernest/HisePersonal/Personal/EchoPlex/Documentation/echoplex-slides.pdf)
  - presentation deck for the project

- [echoplex-matlab.pdf](/Users/ernest/HisePersonal/Personal/EchoPlex/Documentation/Matlab/echoplex-matlab.pdf)
  - Matlab focused supporting material

- [AudioExamples](/Users/ernest/HisePersonal/Personal/EchoPlex/Documentation/Matlab/AudioExamples)
  - rendered examples including comb, drift, impulse, modulation, and sine sweep material

Historical Reference

This project is closely related to the EP4 style Echoplex delay lineage. A useful public reference for the underlying device family is:

- [Michael Zajner EP4 page](https://michaelzajner.com/ep4/)

Build

The easiest way to build this project is from inside HISE.

1. Open the project in HISE
2. Use the top toolbar and choose `Export`
3. Choose `Compile DSP networks as dll`

License

This repository is released under GPL 3.0. See [LICENSE](/Users/ernest/HisePersonal/Personal/EchoPlex/LICENSE).
