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

namespace Fx2_ScriptFx_impl
{
// ======================| Node & Parameter type declarations |======================

namespace Fx2_ScriptFx_t_parameters
{
}

template <int NV>
using Fx2_ScriptFx_t_ = container::chain<parameter::plain<project::greyhole<NV>, 7>, 
                                         wrap::fix<2, project::greyhole<NV>>>;

// ==========================| Root node initialiser class |==========================

template <int NV> struct instance: public Fx2_ScriptFx_impl::Fx2_ScriptFx_t_<NV>
{
	
	struct metadata
	{
		static const int NumTables = 0;
		static const int NumSliderPacks = 0;
		static const int NumAudioFiles = 0;
		static const int NumFilters = 0;
		static const int NumDisplayBuffers = 0;
		
		SNEX_METADATA_ID(Fx2_ScriptFx);
		SNEX_METADATA_NUM_CHANNELS(2);
		SNEX_METADATA_ENCODED_PARAMETERS(18)
		{
			0x005B, 0x0000, 0x6B00, 0x626E, 0x6150, 0x6172, 0x316D, 0x0000, 
            0x0000, 0x0000, 0x8000, 0x003F, 0x8000, 0x003F, 0x8000, 0xCD3F, 
            0x4CCC, 0x003D
		};
	};
	
	instance()
	{
		// Node References ----------------------------------------------------------
		
		auto& faust = this->getT(0); // project::greyhole<NV>
		
		// Parameter Connections ----------------------------------------------------
		
		this->getParameterT(0).connectT(0, faust); // knbParam1 -> faust::drywet
		
		// Default Values -----------------------------------------------------------
		
		faust.setParameterT(0, 0.2); // core::faust::delayTime
		faust.setParameterT(1, 0.);  // core::faust::damping
		faust.setParameterT(2, 1.);  // core::faust::size
		faust.setParameterT(3, 0.5); // core::faust::diffusion
		faust.setParameterT(4, 0.9); // core::faust::feedback
		faust.setParameterT(5, 0.1); // core::faust::modDepth
		faust.setParameterT(6, 2.);  // core::faust::modFreq
		;                            // faust::drywet is automated
		
		this->setParameterT(0, 1.);
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
// ===============================| Public Definition |===============================

namespace project
{
// polyphonic template declaration

template <int NV>
using Fx2_ScriptFx = wrap::node<Fx2_ScriptFx_impl::instance<NV>>;
}


