#pragma once

// These will improve the readability of the connection definition

#define getT(Idx) template get<Idx>()
#define connectT(Idx, target) template connect<Idx>(target)
#define getParameterT(Idx) template getParameter<Idx>()
#define setParameterT(Idx, value) template setParameter<Idx>(value)
#define setParameterWT(Idx, value) template setWrapParameter<Idx>(value)
using namespace scriptnode;
using namespace snex;
using namespace snex::Types;

namespace Echoplex_ScriptFx_impl
{
// ==============================| Node & Parameter type declarations |==============================

DECLARE_PARAMETER_RANGE_SKEW(xfader_c0Range, 
                             -100., 
                             0., 
                             5.42227);

template <int NV>
using xfader_c0 = parameter::from0To1<core::gain<NV>, 
                                      0, 
                                      xfader_c0Range>;

template <int NV> using xfader_c1 = xfader_c0<NV>;

template <int NV>
using xfader_multimod = parameter::list<xfader_c0<NV>, xfader_c1<NV>>;

template <int NV>
using xfader_t = control::xfader<xfader_multimod<NV>, faders::rms>;

template <int NV>
using chain_t = container::chain<parameter::empty, 
                                 wrap::fix<2, core::gain<NV>>>;

template <int NV>
using tempo_sync_t = wrap::mod<parameter::plain<project::Echoplex_Faust<NV>, 1>, 
                               control::tempo_sync<NV>>;

template <int NV>
using chain1_t = container::chain<parameter::empty, 
                                  wrap::fix<2, core::gain<NV>>, 
                                  tempo_sync_t<NV>, 
                                  project::Echoplex_Faust<NV>>;

template <int NV>
using split_t = container::split<parameter::empty, 
                                 wrap::fix<2, chain_t<NV>>, 
                                 chain1_t<NV>>;

namespace Echoplex_ScriptFx_t_parameters
{
// Parameter list for Echoplex_ScriptFx_impl::Echoplex_ScriptFx_t ----------------------------------

template <int NV>
using KnbTimeFree = parameter::plain<Echoplex_ScriptFx_impl::tempo_sync_t<NV>, 
                                     3>;
template <int NV>
using KnbTimeSync = parameter::plain<Echoplex_ScriptFx_impl::tempo_sync_t<NV>, 
                                     0>;
template <int NV>
using BtnSync = parameter::plain<Echoplex_ScriptFx_impl::tempo_sync_t<NV>, 
                                 2>;
template <int NV>
using KnbRepeats = parameter::plain<project::Echoplex_Faust<NV>, 
                                    7>;
template <int NV>
using KnbDrift = parameter::plain<project::Echoplex_Faust<NV>, 
                                  2>;
template <int NV>
using KnbInput = parameter::plain<project::Echoplex_Faust<NV>, 
                                  5>;
template <int NV>
using KnbOutput = parameter::plain<project::Echoplex_Faust<NV>, 
                                   6>;
template <int NV>
using KnbBass = parameter::plain<project::Echoplex_Faust<NV>, 
                                 0>;
template <int NV>
using KnbTreble = parameter::plain<project::Echoplex_Faust<NV>, 
                                   8>;
template <int NV>
using KnbDryWet = parameter::plain<Echoplex_ScriptFx_impl::xfader_t<NV>, 
                                   0>;
template <int NV>
using KnbFlutterFreq = parameter::plain<project::Echoplex_Faust<NV>, 
                                        4>;
template <int NV>
using KnbFlutterDepth = parameter::plain<project::Echoplex_Faust<NV>, 
                                         3>;
template <int NV>
using KnbWowDepth = parameter::plain<project::Echoplex_Faust<NV>, 
                                     9>;
template <int NV>
using Echoplex_ScriptFx_t_plist = parameter::list<KnbTimeFree<NV>, 
                                                  KnbTimeSync<NV>, 
                                                  BtnSync<NV>, 
                                                  KnbRepeats<NV>, 
                                                  KnbDrift<NV>, 
                                                  KnbInput<NV>, 
                                                  KnbOutput<NV>, 
                                                  KnbBass<NV>, 
                                                  KnbTreble<NV>, 
                                                  KnbDryWet<NV>, 
                                                  KnbFlutterFreq<NV>, 
                                                  KnbFlutterDepth<NV>, 
                                                  KnbWowDepth<NV>>;
}

template <int NV>
using Echoplex_ScriptFx_t_ = container::chain<Echoplex_ScriptFx_t_parameters::Echoplex_ScriptFx_t_plist<NV>, 
                                              wrap::fix<2, xfader_t<NV>>, 
                                              split_t<NV>>;

// =================================| Root node initialiser class |=================================

template <int NV> struct instance: public Echoplex_ScriptFx_impl::Echoplex_ScriptFx_t_<NV>
{
	
	struct metadata
	{
		static const int NumTables = 0;
		static const int NumSliderPacks = 0;
		static const int NumAudioFiles = 0;
		static const int NumFilters = 0;
		static const int NumDisplayBuffers = 0;
		
		SNEX_METADATA_ID(Echoplex_ScriptFx);
		SNEX_METADATA_NUM_CHANNELS(2);
		SNEX_METADATA_ENCODED_PARAMETERS(234)
		{
			0x005B, 0x0000, 0x4B00, 0x626E, 0x6954, 0x656D, 0x7246, 0x6565, 
            0x0000, 0x0000, 0x0000, 0x7A00, 0x0044, 0xFA00, 0x0043, 0x8000, 
            0xCD3F, 0xCCCC, 0x5B3D, 0x0001, 0x0000, 0x6E4B, 0x5462, 0x6D69, 
            0x5365, 0x6E79, 0x0063, 0x0000, 0x0000, 0x0000, 0x4190, 0x0000, 
            0x0000, 0x0000, 0x3F80, 0x0000, 0x3F80, 0x025B, 0x0000, 0x4200, 
            0x6E74, 0x7953, 0x636E, 0x0000, 0x0000, 0x0000, 0x8000, 0x003F, 
            0x0000, 0x0000, 0x8000, 0x003F, 0x8000, 0x5B3F, 0x0003, 0x0000, 
            0x6E4B, 0x5262, 0x7065, 0x6165, 0x7374, 0x0000, 0x0000, 0x0000, 
            0x0000, 0xF540, 0x5C28, 0x003F, 0x8000, 0x0A3F, 0x23D7, 0x5B3C, 
            0x0004, 0x0000, 0x6E4B, 0x4462, 0x6972, 0x7466, 0x0000, 0x0000, 
            0x0000, 0x2000, 0xCD41, 0x4CCC, 0x003E, 0x8000, 0xCD3F, 0xCCCC, 
            0x5B3D, 0x0005, 0x0000, 0x6E4B, 0x4962, 0x706E, 0x7475, 0x0000, 
            0x0000, 0x0000, 0x8000, 0x003F, 0x8000, 0x003F, 0x8000, 0x0A3F, 
            0x23D7, 0x5B3C, 0x0006, 0x0000, 0x6E4B, 0x4F62, 0x7475, 0x7570, 
            0x0074, 0x0000, 0x0000, 0x0000, 0x4000, 0x0000, 0x3F80, 0x0000, 
            0x3F80, 0xD70A, 0x3C23, 0x075B, 0x0000, 0x4B00, 0x626E, 0x6142, 
            0x7373, 0x0000, 0x4000, 0x00C1, 0x4000, 0x0041, 0x4000, 0x0034, 
            0x8000, 0xCD3F, 0xCCCC, 0x5B3D, 0x0008, 0x0000, 0x6E4B, 0x5462, 
            0x6572, 0x6C62, 0x0065, 0x0000, 0xC140, 0x0000, 0x4140, 0x0000, 
            0x3440, 0x0000, 0x3F80, 0xCCCD, 0x3DCC, 0x095B, 0x0000, 0x4B00, 
            0x626E, 0x7244, 0x5779, 0x7465, 0x0000, 0x0000, 0x0000, 0x8000, 
            0x003F, 0x8000, 0x003F, 0x8000, 0x003F, 0x0000, 0x5B00, 0x000A, 
            0x0000, 0x6E4B, 0x4662, 0x756C, 0x7474, 0x7265, 0x7246, 0x7165, 
            0x0000, 0x2000, 0x0041, 0xF000, 0x9A41, 0x8999, 0x0041, 0x8000, 
            0xCD3F, 0xCCCC, 0x5B3D, 0x000B, 0x0000, 0x6E4B, 0x4662, 0x756C, 
            0x7474, 0x7265, 0x6544, 0x7470, 0x0068, 0x0000, 0x0000, 0x0000, 
            0x3F80, 0x0000, 0x3F80, 0x0000, 0x3F80, 0xD70A, 0x3C23, 0x0C5B, 
            0x0000, 0x4B00, 0x626E, 0x6F57, 0x4477, 0x7065, 0x6874, 0x0000, 
            0x0000, 0x0000, 0x8000, 0xEB3F, 0xB851, 0x003D, 0x8000, 0x0A3F, 
            0x23D7, 0x003C
		};
	};
	
	instance()
	{
		// Node References -------------------------------------------------------------------------
		
		auto& xfader = this->getT(0);                     // Echoplex_ScriptFx_impl::xfader_t<NV>
		auto& split = this->getT(1);                      // Echoplex_ScriptFx_impl::split_t<NV>
		auto& chain = this->getT(1).getT(0);              // Echoplex_ScriptFx_impl::chain_t<NV>
		auto& gain2 = this->getT(1).getT(0).getT(0);      // core::gain<NV>
		auto& chain1 = this->getT(1).getT(1);             // Echoplex_ScriptFx_impl::chain1_t<NV>
		auto& gain3 = this->getT(1).getT(1).getT(0);      // core::gain<NV>
		auto& tempo_sync = this->getT(1).getT(1).getT(1); // Echoplex_ScriptFx_impl::tempo_sync_t<NV>
		auto& faust1 = this->getT(1).getT(1).getT(2);     // project::Echoplex_Faust<NV>
		
		// Parameter Connections -------------------------------------------------------------------
		
		this->getParameterT(0).connectT(0, tempo_sync); // KnbTimeFree -> tempo_sync::UnsyncedTime
		
		this->getParameterT(1).connectT(0, tempo_sync); // KnbTimeSync -> tempo_sync::Tempo
		
		this->getParameterT(2).connectT(0, tempo_sync); // BtnSync -> tempo_sync::Enabled
		
		this->getParameterT(3).connectT(0, faust1); // KnbRepeats -> faust1::Repeats
		
		this->getParameterT(4).connectT(0, faust1); // KnbDrift -> faust1::DriftIntensity
		
		this->getParameterT(5).connectT(0, faust1); // KnbInput -> faust1::Input
		
		this->getParameterT(6).connectT(0, faust1); // KnbOutput -> faust1::Output
		
		this->getParameterT(7).connectT(0, faust1); // KnbBass -> faust1::BassGain
		
		this->getParameterT(8).connectT(0, faust1); // KnbTreble -> faust1::TrebleGain
		
		this->getParameterT(9).connectT(0, xfader); // KnbDryWet -> xfader::Value
		
		this->getParameterT(10).connectT(0, faust1); // KnbFlutterFreq -> faust1::FlutterHz
		
		this->getParameterT(11).connectT(0, faust1); // KnbFlutterDepth -> faust1::FlutterDepth
		
		this->getParameterT(12).connectT(0, faust1); // KnbWowDepth -> faust1::WowDepth
		
		// Modulation Connections ------------------------------------------------------------------
		
		auto& xfader_p = xfader.getWrappedObject().getParameter();
		xfader_p.getParameterT(0).connectT(0, gain2);  // xfader -> gain2::Gain
		xfader_p.getParameterT(1).connectT(0, gain3);  // xfader -> gain3::Gain
		tempo_sync.getParameter().connectT(0, faust1); // tempo_sync -> faust1::Delay
		
		// Default Values --------------------------------------------------------------------------
		
		; // xfader::Value is automated
		
		;                            // gain2::Gain is automated
		gain2.setParameterT(1, 20.); // core::gain::Smoothing
		gain2.setParameterT(2, 0.);  // core::gain::ResetValue
		
		;                            // gain3::Gain is automated
		gain3.setParameterT(1, 20.); // core::gain::Smoothing
		gain3.setParameterT(2, 0.);  // core::gain::ResetValue
		
		;                                // tempo_sync::Tempo is automated
		tempo_sync.setParameterT(1, 1.); // control::tempo_sync::Multiplier
		;                                // tempo_sync::Enabled is automated
		;                                // tempo_sync::UnsyncedTime is automated
		
		; // faust1::BassGain is automated
		; // faust1::Delay is automated
		; // faust1::DriftIntensity is automated
		; // faust1::FlutterDepth is automated
		; // faust1::FlutterHz is automated
		; // faust1::Input is automated
		; // faust1::Output is automated
		; // faust1::Repeats is automated
		; // faust1::TrebleGain is automated
		; // faust1::WowDepth is automated
		
		this->setParameterT(0, 500.);
		this->setParameterT(1, 0.);
		this->setParameterT(2, 0.);
		this->setParameterT(3, 0.86);
		this->setParameterT(4, 0.2);
		this->setParameterT(5, 1);
		this->setParameterT(6, 1);
		this->setParameterT(7, 1.78814e-07);
		this->setParameterT(8, 1.78814e-07);
		this->setParameterT(9, 1.);
		this->setParameterT(10, 17.2);
		this->setParameterT(11, 1);
		this->setParameterT(12, 0.09);
	}
	
	static constexpr bool isPolyphonic() { return NV > 1; };
	
	static constexpr bool isProcessingHiseEvent() { return true; };
	
	static constexpr bool hasTail() { return true; };
	
	static constexpr bool isSuspendedOnSilence() { return false; };
};
}

#undef getT
#undef connectT
#undef setParameterT
#undef setParameterWT
#undef getParameterT
// ======================================| Public Definition |======================================

namespace project
{
// polyphonic template declaration

template <int NV>
using Echoplex_ScriptFx = wrap::node<Echoplex_ScriptFx_impl::instance<NV>>;
}


