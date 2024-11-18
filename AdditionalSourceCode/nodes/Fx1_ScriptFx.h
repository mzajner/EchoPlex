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

namespace Fx1_ScriptFx_impl
{
// =====================| Node & Parameter type declarations |=====================

namespace Fx1_ScriptFx_t_parameters
{
DECLARE_PARAMETER_RANGE_STEP(knbParam1_InputRange, 
                             0., 
                             1, 
                             0.01);
DECLARE_PARAMETER_RANGE_STEP(knbParam1_0Range, 
                             0., 
                             1, 
                             0.01);

template <int NV>
using knbParam1_0 = parameter::from0To1<project::vitalRev<NV>, 
                                        11, 
                                        knbParam1_0Range>;

template <int NV>
using knbParam1 = parameter::chain<knbParam1_InputRange, 
                                   knbParam1_0<NV>, 
                                   parameter::plain<project::greyhole<NV>, 7>>;

}

template <int NV>
using Fx1_ScriptFx_t_ = container::chain<Fx1_ScriptFx_t_parameters::knbParam1<NV>, 
                                         wrap::fix<2, project::vitalRev<NV>>, 
                                         project::greyhole<NV>>;

// =========================| Root node initialiser class |=========================

template <int NV> struct instance: public Fx1_ScriptFx_impl::Fx1_ScriptFx_t_<NV>
{
	
	struct metadata
	{
		static const int NumTables = 0;
		static const int NumSliderPacks = 0;
		static const int NumAudioFiles = 0;
		static const int NumFilters = 0;
		static const int NumDisplayBuffers = 0;
		
		SNEX_METADATA_ID(Fx1_ScriptFx);
		SNEX_METADATA_NUM_CHANNELS(2);
		SNEX_METADATA_ENCODED_PARAMETERS(18)
		{
			0x005B, 0x0000, 0x6B00, 0x626E, 0x6150, 0x6172, 0x316D, 0x0000, 
            0x0000, 0x0000, 0x8000, 0x5C3F, 0xC28F, 0x003E, 0x8000, 0x0A3F, 
            0x23D7, 0x003C
		};
	};
	
	instance()
	{
		// Node References --------------------------------------------------------
		
		auto& faust = this->getT(0);  // project::vitalRev<NV>
		auto& faust1 = this->getT(1); // project::greyhole<NV>
		
		// Parameter Connections --------------------------------------------------
		
		auto& knbParam1_p = this->getParameterT(0);
		knbParam1_p.connectT(0, faust);  // knbParam1 -> faust::Mix
		knbParam1_p.connectT(1, faust1); // knbParam1 -> faust1::drywet
		
		// Default Values ---------------------------------------------------------
		
		faust.setParameterT(0, 0.);       // core::faust::LowCutoff
		faust.setParameterT(1, 0.789916); // core::faust::HighCutoff
		faust.setParameterT(2, 0.);       // core::faust::LowShelf
		faust.setParameterT(3, 1.);       // core::faust::LowGain
		faust.setParameterT(4, 0.621849); // core::faust::HighShelf
		faust.setParameterT(5, 0.833333); // core::faust::HighGain
		faust.setParameterT(6, 0.01);     // core::faust::Amount
		faust.setParameterT(7, 0.1);      // core::faust::Rate
		faust.setParameterT(8, 0.);       // core::faust::Pre_Delay
		faust.setParameterT(9, 0.5);      // core::faust::DecayTime
		faust.setParameterT(10, 0.5);     // core::faust::Size
		;                                 // faust::Mix is automated
		
		faust1.setParameterT(0, 0.2); // core::faust::delayTime
		faust1.setParameterT(1, 0.);  // core::faust::damping
		faust1.setParameterT(2, 1.);  // core::faust::size
		faust1.setParameterT(3, 0.5); // core::faust::diffusion
		faust1.setParameterT(4, 0.9); // core::faust::feedback
		faust1.setParameterT(5, 0.1); // core::faust::modDepth
		faust1.setParameterT(6, 2.);  // core::faust::modFreq
		;                             // faust1::drywet is automated
		
		this->setParameterT(0, 0.38);
	}
	
	static constexpr bool isPolyphonic() { return NV > 1; };
	
	static constexpr bool hasTail() { return true; };
	
	static constexpr bool isSuspendedOnSilence() { return false; };
};
}

#undef getT
#undef connectT
#undef setParameterT
#undef setParameterWT
#undef getParameterT
// ==============================| Public Definition |==============================

namespace project
{
// polyphonic template declaration

template <int NV>
using Fx1_ScriptFx = wrap::node<Fx1_ScriptFx_impl::instance<NV>>;
}


