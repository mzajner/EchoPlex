

declare name "RevDel";
declare version "1.1";

import("stdfaust.lib");

MAX_DELAY = 96000;

// Add delay time control in milliseconds
delayTime = hslider("delay_time (ms)", 500, 1, 2000, 1);

// Convert delay time from milliseconds to samples
calc_delay_time = si.smooth(ba.tau2pole(0.05), ma.SR * (delayTime / 1000));


// Function 
phasor_phase(dtime,phase) = ((os.lf_rawsaw(dtime)+phase)% dtime) :int;
indexphasor(dtime,phase) = phasor_phase(dtime*2,phase)<: <=(dtime),(*(-1)+dtime*2),_ : select2;

delay_module(dtime,phase) = rwtable(MAX_DELAY,0.0,indexphasor(dtime,phase):int,_,indexphasor(dtime,phase+1):int):window with{
	window = *(0.5 * (1 - cos(2 * ma.PI * phasor_phase(dtime, phase) / dtime)));  // Hann window
	/*window = *(0.42 - 0.5 * cos(2 * ma.PI * phasor_phase(dtime, phase) / dtime) 
	         + 0.08 * cos(4 * ma.PI * phasor_phase(dtime, phase) / dtime));*/  // Blackman window

};
reversedelay_mono(dtime) = _<:delay_module(dtime,0),delay_module(dtime,dtime/2):>_;
// Updated reversedelay_pingpong function
reversedelay_pingpong(dtime, spread, fb, pan) = (
    si.bus(2), pingpong_premix :>
    reversedelay_mono(dtime * 1.01),  // Right side with slight offset
    reversedelay_mono(dtime * 0.99)   // Left side with slight offset
) ~ distribute : panning with {
    distribute = _,_<:*(1-spread),*(spread),*(spread),*(1-spread):+,+:fbgain;
    pingpong_premix = _,_<:_,*(spread),*(0),*(1-spread):>+,+;
    fbgain = *(fb), *(fb * si.interpolate(spread, 1, 0.5));
    panning = _, _ : *(1-pan), *(pan);
};

reversedelay_pingpong_mix(dtime,spread,fb,pan,mix) = _,_<:_,_,reversedelay_pingpong(dtime,spread,fb,pan):ro.cross2 : si.interpolate(mix),si.interpolate(mix);

smooth_param(x) = si.smooth(ba.tau2pole(0.1 * (delayTime / 1000)), x);


process = reversedelay_pingpong_mix(
    smooth_param(calc_delay_time),
    hslider("spread", 0, 0, 1, 0.001),
    hslider("fb", 0, 0, 0.9999, 0.001),
    hslider("pan", 0.5, 0, 1, 0.001),
    hslider("mix", 0, 0, 1, 0.001)
);
