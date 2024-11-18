/* ------------------------------------------------------------
name: "vitalRev"
Code generated with Faust 2.75.7 (https://faust.grame.fr)
Compilation options: -lang cpp -rui -nvi -ct 1 -cn _vitalRev -scn ::faust::dsp -es 1 -mcd 16 -mdd 1024 -mdy 33 -uim -single -ftz 0
------------------------------------------------------------ */

#ifndef  ___vitalRev_H__
#define  ___vitalRev_H__

#ifndef FAUSTFLOAT
#define FAUSTFLOAT float
#endif 

#include <algorithm>
#include <cmath>
#include <cstdint>
#include <math.h>

#ifndef FAUSTCLASS 
#define FAUSTCLASS _vitalRev
#endif

#ifdef __APPLE__ 
#define exp10f __exp10f
#define exp10 __exp10
#endif

#if defined(_WIN32)
#define RESTRICT __restrict
#else
#define RESTRICT __restrict__
#endif

const static float f_vitalRevSIG0Wave0[4] = {4521.54f,6518.97f,5265.56f,5630.25f};
struct _vitalRevSIG0 {
	int f_vitalRevSIG0Wave0_idx;
	
	int getNumInputs_vitalRevSIG0() {
		return 0;
	}
	int getNumOutputs_vitalRevSIG0() {
		return 1;
	}
	
	void instanceInit_vitalRevSIG0(int sample_rate) {
		f_vitalRevSIG0Wave0_idx = 0;
	}
	
	void fill_vitalRevSIG0(int count, float* table) {
		for (int i1 = 0; i1 < count; i1 = i1 + 1) {
			table[i1] = f_vitalRevSIG0Wave0[f_vitalRevSIG0Wave0_idx];
			f_vitalRevSIG0Wave0_idx = (1 + f_vitalRevSIG0Wave0_idx) % 4;
		}
	}

};

static _vitalRevSIG0* new_vitalRevSIG0() { return (_vitalRevSIG0*)new _vitalRevSIG0(); }
static void delete_vitalRevSIG0(_vitalRevSIG0* dsp) { delete dsp; }

const static int i_vitalRevSIG1Wave0[4] = {833,779,663,997};
struct _vitalRevSIG1 {
	int i_vitalRevSIG1Wave0_idx;
	
	int getNumInputs_vitalRevSIG1() {
		return 0;
	}
	int getNumOutputs_vitalRevSIG1() {
		return 1;
	}
	
	void instanceInit_vitalRevSIG1(int sample_rate) {
		i_vitalRevSIG1Wave0_idx = 0;
	}
	
	void fill_vitalRevSIG1(int count, int* table) {
		for (int i2 = 0; i2 < count; i2 = i2 + 1) {
			table[i2] = i_vitalRevSIG1Wave0[i_vitalRevSIG1Wave0_idx];
			i_vitalRevSIG1Wave0_idx = (1 + i_vitalRevSIG1Wave0_idx) % 4;
		}
	}

};

static _vitalRevSIG1* new_vitalRevSIG1() { return (_vitalRevSIG1*)new _vitalRevSIG1(); }
static void delete_vitalRevSIG1(_vitalRevSIG1* dsp) { delete dsp; }

const static float f_vitalRevSIG2Wave0[4] = {3120.73f,3429.5f,3626.37f,7713.52f};
struct _vitalRevSIG2 {
	int f_vitalRevSIG2Wave0_idx;
	
	int getNumInputs_vitalRevSIG2() {
		return 0;
	}
	int getNumOutputs_vitalRevSIG2() {
		return 1;
	}
	
	void instanceInit_vitalRevSIG2(int sample_rate) {
		f_vitalRevSIG2Wave0_idx = 0;
	}
	
	void fill_vitalRevSIG2(int count, float* table) {
		for (int i3 = 0; i3 < count; i3 = i3 + 1) {
			table[i3] = f_vitalRevSIG2Wave0[f_vitalRevSIG2Wave0_idx];
			f_vitalRevSIG2Wave0_idx = (1 + f_vitalRevSIG2Wave0_idx) % 4;
		}
	}

};

static _vitalRevSIG2* new_vitalRevSIG2() { return (_vitalRevSIG2*)new _vitalRevSIG2(); }
static void delete_vitalRevSIG2(_vitalRevSIG2* dsp) { delete dsp; }

const static int i_vitalRevSIG3Wave0[4] = {957,1019,711,567};
struct _vitalRevSIG3 {
	int i_vitalRevSIG3Wave0_idx;
	
	int getNumInputs_vitalRevSIG3() {
		return 0;
	}
	int getNumOutputs_vitalRevSIG3() {
		return 1;
	}
	
	void instanceInit_vitalRevSIG3(int sample_rate) {
		i_vitalRevSIG3Wave0_idx = 0;
	}
	
	void fill_vitalRevSIG3(int count, int* table) {
		for (int i4 = 0; i4 < count; i4 = i4 + 1) {
			table[i4] = i_vitalRevSIG3Wave0[i_vitalRevSIG3Wave0_idx];
			i_vitalRevSIG3Wave0_idx = (1 + i_vitalRevSIG3Wave0_idx) % 4;
		}
	}

};

static _vitalRevSIG3* new_vitalRevSIG3() { return (_vitalRevSIG3*)new _vitalRevSIG3(); }
static void delete_vitalRevSIG3(_vitalRevSIG3* dsp) { delete dsp; }

const static float f_vitalRevSIG4Wave0[4] = {9701.12f,5512.5f,8480.45f,5638.65f};
struct _vitalRevSIG4 {
	int f_vitalRevSIG4Wave0_idx;
	
	int getNumInputs_vitalRevSIG4() {
		return 0;
	}
	int getNumOutputs_vitalRevSIG4() {
		return 1;
	}
	
	void instanceInit_vitalRevSIG4(int sample_rate) {
		f_vitalRevSIG4Wave0_idx = 0;
	}
	
	void fill_vitalRevSIG4(int count, float* table) {
		for (int i5 = 0; i5 < count; i5 = i5 + 1) {
			table[i5] = f_vitalRevSIG4Wave0[f_vitalRevSIG4Wave0_idx];
			f_vitalRevSIG4Wave0_idx = (1 + f_vitalRevSIG4Wave0_idx) % 4;
		}
	}

};

static _vitalRevSIG4* new_vitalRevSIG4() { return (_vitalRevSIG4*)new _vitalRevSIG4(); }
static void delete_vitalRevSIG4(_vitalRevSIG4* dsp) { delete dsp; }

const static int i_vitalRevSIG5Wave0[4] = {895,807,907,853};
struct _vitalRevSIG5 {
	int i_vitalRevSIG5Wave0_idx;
	
	int getNumInputs_vitalRevSIG5() {
		return 0;
	}
	int getNumOutputs_vitalRevSIG5() {
		return 1;
	}
	
	void instanceInit_vitalRevSIG5(int sample_rate) {
		i_vitalRevSIG5Wave0_idx = 0;
	}
	
	void fill_vitalRevSIG5(int count, int* table) {
		for (int i6 = 0; i6 < count; i6 = i6 + 1) {
			table[i6] = i_vitalRevSIG5Wave0[i_vitalRevSIG5Wave0_idx];
			i_vitalRevSIG5Wave0_idx = (1 + i_vitalRevSIG5Wave0_idx) % 4;
		}
	}

};

static _vitalRevSIG5* new_vitalRevSIG5() { return (_vitalRevSIG5*)new _vitalRevSIG5(); }
static void delete_vitalRevSIG5(_vitalRevSIG5* dsp) { delete dsp; }

const static float f_vitalRevSIG6Wave0[4] = {6753.2f,9278.4f,7704.5f,11328.5f};
struct _vitalRevSIG6 {
	int f_vitalRevSIG6Wave0_idx;
	
	int getNumInputs_vitalRevSIG6() {
		return 0;
	}
	int getNumOutputs_vitalRevSIG6() {
		return 1;
	}
	
	void instanceInit_vitalRevSIG6(int sample_rate) {
		f_vitalRevSIG6Wave0_idx = 0;
	}
	
	void fill_vitalRevSIG6(int count, float* table) {
		for (int i7 = 0; i7 < count; i7 = i7 + 1) {
			table[i7] = f_vitalRevSIG6Wave0[f_vitalRevSIG6Wave0_idx];
			f_vitalRevSIG6Wave0_idx = (1 + f_vitalRevSIG6Wave0_idx) % 4;
		}
	}

};

static _vitalRevSIG6* new_vitalRevSIG6() { return (_vitalRevSIG6*)new _vitalRevSIG6(); }
static void delete_vitalRevSIG6(_vitalRevSIG6* dsp) { delete dsp; }

const static int i_vitalRevSIG7Wave0[4] = {1001,799,933,876};
struct _vitalRevSIG7 {
	int i_vitalRevSIG7Wave0_idx;
	
	int getNumInputs_vitalRevSIG7() {
		return 0;
	}
	int getNumOutputs_vitalRevSIG7() {
		return 1;
	}
	
	void instanceInit_vitalRevSIG7(int sample_rate) {
		i_vitalRevSIG7Wave0_idx = 0;
	}
	
	void fill_vitalRevSIG7(int count, int* table) {
		for (int i8 = 0; i8 < count; i8 = i8 + 1) {
			table[i8] = i_vitalRevSIG7Wave0[i_vitalRevSIG7Wave0_idx];
			i_vitalRevSIG7Wave0_idx = (1 + i_vitalRevSIG7Wave0_idx) % 4;
		}
	}

};

static _vitalRevSIG7* new_vitalRevSIG7() { return (_vitalRevSIG7*)new _vitalRevSIG7(); }
static void delete_vitalRevSIG7(_vitalRevSIG7* dsp) { delete dsp; }

static float ftbl0_vitalRevSIG0[4];
static float _vitalRev_faustpower2_f(float value) {
	return value * value;
}
static int itbl1_vitalRevSIG1[4];
static float ftbl2_vitalRevSIG2[4];
static int itbl3_vitalRevSIG3[4];
static float ftbl4_vitalRevSIG4[4];
static int itbl5_vitalRevSIG5[4];
static float ftbl6_vitalRevSIG6[4];
static int itbl7_vitalRevSIG7[4];

struct _vitalRev final : public ::faust::dsp {
	
	int fSampleRate;
	float fConst0;
	float fConst1;
	FAUSTFLOAT fHslider0;
	float fConst2;
	int iVec0[2];
	float fRec0[2];
	float fConst3;
	float fConst4;
	float fConst5;
	FAUSTFLOAT fHslider1;
	float fRec20[2];
	float fRec19[2];
	FAUSTFLOAT fHslider2;
	float fRec21[2];
	FAUSTFLOAT fHslider3;
	float fRec22[2];
	FAUSTFLOAT fHslider4;
	float fRec23[2];
	float fConst6;
	FAUSTFLOAT fHslider5;
	float fRec25[2];
	FAUSTFLOAT fHslider6;
	float fRec26[2];
	FAUSTFLOAT fHslider7;
	float fRec28[2];
	float fRec27[2];
	float fRec29[2];
	float fVec1[2];
	float fRec24[2];
	float fRec30[2];
	FAUSTFLOAT fHslider8;
	float fRec31[2];
	int IOTA0;
	float fVec2[131072];
	float fConst7;
	float fVec3[65536];
	float fConst8;
	FAUSTFLOAT fHslider9;
	float fRec34[2];
	float fVec4[2];
	FAUSTFLOAT fHslider10;
	float fRec35[2];
	float fRec33[2];
	FAUSTFLOAT fHslider11;
	float fRec36[2];
	float fRec32[2];
	float fVec5[1024];
	int iConst9;
	float fRec17[2];
	float fConst10;
	float fConst11;
	float fRec39[2];
	float fRec41[2];
	float fRec42[2];
	float fVec6[2];
	float fRec40[2];
	float fRec43[2];
	float fVec7[131072];
	float fVec8[1024];
	int iConst12;
	float fRec37[2];
	float fRec47[2];
	float fRec48[2];
	float fVec9[2];
	float fRec46[2];
	float fRec49[2];
	float fConst13;
	float fVec10[131072];
	float fConst14;
	float fVec11[1024];
	int iConst15;
	float fRec44[2];
	float fConst16;
	float fConst17;
	float fRec52[2];
	float fRec54[2];
	float fRec55[2];
	float fVec12[2];
	float fRec53[2];
	float fRec56[2];
	float fVec13[131072];
	float fVec14[1024];
	int iConst18;
	float fRec50[2];
	float fRec60[2];
	float fRec61[2];
	float fVec15[2];
	float fRec59[2];
	float fRec62[2];
	float fConst19;
	float fVec16[131072];
	float fConst20;
	float fVec17[1024];
	int iConst21;
	float fRec57[2];
	float fConst22;
	float fConst23;
	float fRec65[2];
	float fRec67[2];
	float fRec68[2];
	float fVec18[2];
	float fRec66[2];
	float fRec69[2];
	float fVec19[131072];
	float fVec20[65536];
	float fVec21[2];
	float fRec71[2];
	float fRec70[2];
	float fVec22[1024];
	int iConst24;
	float fRec63[2];
	float fRec75[2];
	float fRec76[2];
	float fVec23[2];
	float fRec74[2];
	float fRec77[2];
	float fConst25;
	float fVec24[131072];
	float fConst26;
	float fVec25[1024];
	int iConst27;
	float fRec72[2];
	float fConst28;
	float fConst29;
	float fRec81[2];
	float fRec82[2];
	float fVec26[2];
	float fRec80[2];
	float fRec83[2];
	float fVec27[131072];
	float fVec28[1024];
	int iConst30;
	float fRec78[2];
	float fConst31;
	float fConst32;
	float fRec86[2];
	float fRec88[2];
	float fRec89[2];
	float fVec29[2];
	float fRec87[2];
	float fRec90[2];
	float fVec30[131072];
	float fVec31[1024];
	int iConst33;
	float fRec84[2];
	float fRec94[2];
	float fRec95[2];
	float fVec32[2];
	float fRec93[2];
	float fRec96[2];
	float fConst34;
	float fVec33[131072];
	float fConst35;
	float fVec34[1024];
	int iConst36;
	float fRec91[2];
	float fConst37;
	float fConst38;
	float fRec99[2];
	float fRec101[2];
	float fRec102[2];
	float fVec35[2];
	float fRec100[2];
	float fRec103[2];
	float fVec36[131072];
	float fVec37[1024];
	int iConst39;
	float fRec97[2];
	float fRec107[2];
	float fRec108[2];
	float fVec38[2];
	float fRec106[2];
	float fRec109[2];
	float fConst40;
	float fVec39[131072];
	float fConst41;
	float fVec40[1024];
	int iConst42;
	float fRec104[2];
	float fConst43;
	float fConst44;
	float fRec112[2];
	float fRec114[2];
	float fRec115[2];
	float fVec41[2];
	float fRec113[2];
	float fRec116[2];
	float fVec42[131072];
	float fVec43[1024];
	int iConst45;
	float fRec110[2];
	float fConst46;
	float fConst47;
	float fRec120[2];
	float fRec121[2];
	float fVec44[2];
	float fRec119[2];
	float fRec122[2];
	float fVec45[131072];
	float fVec46[1024];
	int iConst48;
	float fRec117[2];
	float fConst49;
	float fConst50;
	float fRec125[2];
	float fRec127[2];
	float fRec128[2];
	float fVec47[2];
	float fRec126[2];
	float fRec129[2];
	float fVec48[131072];
	float fVec49[1024];
	int iConst51;
	float fRec123[2];
	float fConst52;
	float fConst53;
	float fRec133[2];
	float fRec134[2];
	float fVec50[2];
	float fRec132[2];
	float fRec135[2];
	float fVec51[131072];
	float fVec52[1024];
	int iConst54;
	float fRec130[2];
	float fRec1[3];
	float fRec2[3];
	float fRec3[3];
	float fRec4[3];
	float fRec5[3];
	float fRec6[3];
	float fRec7[3];
	float fRec8[3];
	float fRec9[3];
	float fRec10[3];
	float fRec11[3];
	float fRec12[3];
	float fRec13[3];
	float fRec14[3];
	float fRec15[3];
	float fRec16[3];
	
	_vitalRev() {
	}
	
	void metadata(Meta* m) { 
		m->declare("aanl.lib/name", "Faust Antialiased Nonlinearities");
		m->declare("aanl.lib/version", "1.3.0");
		m->declare("analyzers.lib/name", "Faust Analyzer Library");
		m->declare("analyzers.lib/version", "1.2.0");
		m->declare("basics.lib/name", "Faust Basic Element Library");
		m->declare("basics.lib/tabulateNd", "Copyright (C) 2023 Bart Brouns <bart@magnetophon.nl>");
		m->declare("basics.lib/version", "1.19.1");
		m->declare("compile_options", "-lang cpp -rui -nvi -ct 1 -cn _vitalRev -scn ::faust::dsp -es 1 -mcd 16 -mdd 1024 -mdy 33 -uim -single -ftz 0");
		m->declare("delays.lib/fdelayltv:author", "Julius O. Smith III");
		m->declare("delays.lib/name", "Faust Delay Library");
		m->declare("delays.lib/version", "1.1.0");
		m->declare("demos.lib/name", "Faust Demos Library");
		m->declare("demos.lib/version", "1.2.0");
		m->declare("demos.lib/vital_rev_demo:author", "David Braun");
		m->declare("demos.lib/vital_rev_demo:license", "GPL-3.0");
		m->declare("filename", "vitalRev.dsp");
		m->declare("filters.lib/allpass_comb:author", "Julius O. Smith III");
		m->declare("filters.lib/allpass_comb:copyright", "Copyright (C) 2003-2019 by Julius O. Smith III <jos@ccrma.stanford.edu>");
		m->declare("filters.lib/allpass_comb:license", "MIT-style STK-4.3 license");
		m->declare("filters.lib/filterbank:author", "Julius O. Smith III");
		m->declare("filters.lib/filterbank:copyright", "Copyright (C) 2003-2019 by Julius O. Smith III <jos@ccrma.stanford.edu>");
		m->declare("filters.lib/filterbank:license", "MIT-style STK-4.3 license");
		m->declare("filters.lib/highpass:author", "Julius O. Smith III");
		m->declare("filters.lib/highpass:copyright", "Copyright (C) 2003-2019 by Julius O. Smith III <jos@ccrma.stanford.edu>");
		m->declare("filters.lib/highshelf:author", "Julius O. Smith III");
		m->declare("filters.lib/highshelf:copyright", "Copyright (C) 2003-2019 by Julius O. Smith III <jos@ccrma.stanford.edu>");
		m->declare("filters.lib/highshelf:license", "MIT-style STK-4.3 license");
		m->declare("filters.lib/lowpass0_highpass1", "Copyright (C) 2003-2019 by Julius O. Smith III <jos@ccrma.stanford.edu>");
		m->declare("filters.lib/lowpass0_highpass1:author", "Julius O. Smith III");
		m->declare("filters.lib/lowpass:author", "Julius O. Smith III");
		m->declare("filters.lib/lowpass:copyright", "Copyright (C) 2003-2019 by Julius O. Smith III <jos@ccrma.stanford.edu>");
		m->declare("filters.lib/lowpass:license", "MIT-style STK-4.3 license");
		m->declare("filters.lib/lowshelf:author", "Julius O. Smith III");
		m->declare("filters.lib/lowshelf:copyright", "Copyright (C) 2003-2019 by Julius O. Smith III <jos@ccrma.stanford.edu>");
		m->declare("filters.lib/lowshelf:license", "MIT-style STK-4.3 license");
		m->declare("filters.lib/name", "Faust Filters Library");
		m->declare("filters.lib/tf1:author", "Julius O. Smith III");
		m->declare("filters.lib/tf1:copyright", "Copyright (C) 2003-2019 by Julius O. Smith III <jos@ccrma.stanford.edu>");
		m->declare("filters.lib/tf1:license", "MIT-style STK-4.3 license");
		m->declare("filters.lib/tf1s:author", "Julius O. Smith III");
		m->declare("filters.lib/tf1s:copyright", "Copyright (C) 2003-2019 by Julius O. Smith III <jos@ccrma.stanford.edu>");
		m->declare("filters.lib/tf1s:license", "MIT-style STK-4.3 license");
		m->declare("filters.lib/version", "1.3.0");
		m->declare("interpolators.lib/interpolate_linear:author", "Stéphane Letz");
		m->declare("interpolators.lib/interpolate_linear:licence", "MIT");
		m->declare("interpolators.lib/name", "Faust Interpolator Library");
		m->declare("interpolators.lib/remap:author", "David Braun");
		m->declare("interpolators.lib/version", "1.3.1");
		m->declare("maths.lib/author", "GRAME");
		m->declare("maths.lib/copyright", "GRAME");
		m->declare("maths.lib/license", "LGPL with exception");
		m->declare("maths.lib/name", "Faust Math Library");
		m->declare("maths.lib/version", "2.8.0");
		m->declare("misceffects.lib/dryWetMixerConstantPower:author", "David Braun, revised by Stéphane Letz");
		m->declare("misceffects.lib/name", "Misc Effects Library");
		m->declare("misceffects.lib/version", "2.5.0");
		m->declare("name", "vitalRev");
		m->declare("platform.lib/name", "Generic Platform Library");
		m->declare("platform.lib/version", "1.3.0");
		m->declare("reverbs.lib/name", "Faust Reverb Library");
		m->declare("reverbs.lib/version", "1.3.0");
		m->declare("reverbs.lib/vital_rev:author", "David Braun");
		m->declare("reverbs.lib/vital_rev:license", "GPL-3.0");
		m->declare("routes.lib/name", "Faust Signal Routing Library");
		m->declare("routes.lib/version", "1.2.0");
		m->declare("signals.lib/name", "Faust Signal Routing Library");
		m->declare("signals.lib/version", "1.6.0");
		m->declare("spats.lib/name", "Faust Spatialization Library");
		m->declare("spats.lib/version", "1.1.0");
	}

	static constexpr int getStaticNumInputs() {
		return 2;
	}
	static constexpr int getStaticNumOutputs() {
		return 2;
	}
	int getNumInputs() {
		return 2;
	}
	int getNumOutputs() {
		return 2;
	}
	
	static void classInit(int sample_rate) {
		_vitalRevSIG0* sig0 = new_vitalRevSIG0();
		sig0->instanceInit_vitalRevSIG0(sample_rate);
		sig0->fill_vitalRevSIG0(4, ftbl0_vitalRevSIG0);
		_vitalRevSIG1* sig1 = new_vitalRevSIG1();
		sig1->instanceInit_vitalRevSIG1(sample_rate);
		sig1->fill_vitalRevSIG1(4, itbl1_vitalRevSIG1);
		_vitalRevSIG2* sig2 = new_vitalRevSIG2();
		sig2->instanceInit_vitalRevSIG2(sample_rate);
		sig2->fill_vitalRevSIG2(4, ftbl2_vitalRevSIG2);
		_vitalRevSIG3* sig3 = new_vitalRevSIG3();
		sig3->instanceInit_vitalRevSIG3(sample_rate);
		sig3->fill_vitalRevSIG3(4, itbl3_vitalRevSIG3);
		_vitalRevSIG4* sig4 = new_vitalRevSIG4();
		sig4->instanceInit_vitalRevSIG4(sample_rate);
		sig4->fill_vitalRevSIG4(4, ftbl4_vitalRevSIG4);
		_vitalRevSIG5* sig5 = new_vitalRevSIG5();
		sig5->instanceInit_vitalRevSIG5(sample_rate);
		sig5->fill_vitalRevSIG5(4, itbl5_vitalRevSIG5);
		_vitalRevSIG6* sig6 = new_vitalRevSIG6();
		sig6->instanceInit_vitalRevSIG6(sample_rate);
		sig6->fill_vitalRevSIG6(4, ftbl6_vitalRevSIG6);
		_vitalRevSIG7* sig7 = new_vitalRevSIG7();
		sig7->instanceInit_vitalRevSIG7(sample_rate);
		sig7->fill_vitalRevSIG7(4, itbl7_vitalRevSIG7);
		delete_vitalRevSIG0(sig0);
		delete_vitalRevSIG1(sig1);
		delete_vitalRevSIG2(sig2);
		delete_vitalRevSIG3(sig3);
		delete_vitalRevSIG4(sig4);
		delete_vitalRevSIG5(sig5);
		delete_vitalRevSIG6(sig6);
		delete_vitalRevSIG7(sig7);
	}
	
	void instanceConstants(int sample_rate) {
		fSampleRate = sample_rate;
		fConst0 = std::min<float>(1.92e+05f, std::max<float>(1.0f, float(fSampleRate)));
		fConst1 = 44.1f / fConst0;
		fConst2 = 1.0f - fConst1;
		fConst3 = ftbl0_vitalRevSIG0[3];
		fConst4 = 2.2675737e-05f * fConst3;
		fConst5 = 1.0f / fConst0;
		fConst6 = 1382.3008f / fConst0;
		fConst7 = 0.62716556f * fConst0;
		fConst8 = 0.3f * fConst0;
		iConst9 = std::min<int>(1001, std::max<int>(0, itbl1_vitalRevSIG1[3] + -1));
		fConst10 = ftbl0_vitalRevSIG0[1];
		fConst11 = 2.2675737e-05f * fConst10;
		iConst12 = std::min<int>(1001, std::max<int>(0, itbl1_vitalRevSIG1[1] + -1));
		fConst13 = ftbl2_vitalRevSIG2[1];
		fConst14 = 2.2675737e-05f * fConst13;
		iConst15 = std::min<int>(1001, std::max<int>(0, itbl3_vitalRevSIG3[1] + -1));
		fConst16 = ftbl4_vitalRevSIG4[1];
		fConst17 = 2.2675737e-05f * fConst16;
		iConst18 = std::min<int>(1001, std::max<int>(0, itbl5_vitalRevSIG5[1] + -1));
		fConst19 = ftbl6_vitalRevSIG6[1];
		fConst20 = 2.2675737e-05f * fConst19;
		iConst21 = std::min<int>(1001, std::max<int>(0, itbl7_vitalRevSIG7[1] + -1));
		fConst22 = ftbl0_vitalRevSIG0[0];
		fConst23 = 2.2675737e-05f * fConst22;
		iConst24 = std::min<int>(1001, std::max<int>(0, itbl1_vitalRevSIG1[0] + -1));
		fConst25 = ftbl2_vitalRevSIG2[0];
		fConst26 = 2.2675737e-05f * fConst25;
		iConst27 = std::min<int>(1001, std::max<int>(0, itbl3_vitalRevSIG3[0] + -1));
		fConst28 = ftbl2_vitalRevSIG2[3];
		fConst29 = 2.2675737e-05f * fConst28;
		iConst30 = std::min<int>(1001, std::max<int>(0, itbl3_vitalRevSIG3[3] + -1));
		fConst31 = ftbl4_vitalRevSIG4[3];
		fConst32 = 2.2675737e-05f * fConst31;
		iConst33 = std::min<int>(1001, std::max<int>(0, itbl5_vitalRevSIG5[3] + -1));
		fConst34 = ftbl6_vitalRevSIG6[3];
		fConst35 = 2.2675737e-05f * fConst34;
		iConst36 = std::min<int>(1001, std::max<int>(0, itbl7_vitalRevSIG7[3] + -1));
		fConst37 = ftbl0_vitalRevSIG0[2];
		fConst38 = 2.2675737e-05f * fConst37;
		iConst39 = std::min<int>(1001, std::max<int>(0, itbl1_vitalRevSIG1[2] + -1));
		fConst40 = ftbl2_vitalRevSIG2[2];
		fConst41 = 2.2675737e-05f * fConst40;
		iConst42 = std::min<int>(1001, std::max<int>(0, itbl3_vitalRevSIG3[2] + -1));
		fConst43 = ftbl4_vitalRevSIG4[2];
		fConst44 = 2.2675737e-05f * fConst43;
		iConst45 = std::min<int>(1001, std::max<int>(0, itbl5_vitalRevSIG5[2] + -1));
		fConst46 = ftbl6_vitalRevSIG6[2];
		fConst47 = 2.2675737e-05f * fConst46;
		iConst48 = std::min<int>(1001, std::max<int>(0, itbl7_vitalRevSIG7[2] + -1));
		fConst49 = ftbl4_vitalRevSIG4[0];
		fConst50 = 2.2675737e-05f * fConst49;
		iConst51 = std::min<int>(1001, std::max<int>(0, itbl5_vitalRevSIG5[0] + -1));
		fConst52 = ftbl6_vitalRevSIG6[0];
		fConst53 = 2.2675737e-05f * fConst52;
		iConst54 = std::min<int>(1001, std::max<int>(0, itbl7_vitalRevSIG7[0] + -1));
	}
	
	void instanceResetUserInterface() {
		fHslider0 = FAUSTFLOAT(1.0f);
		fHslider1 = FAUSTFLOAT(0.1f);
		fHslider2 = FAUSTFLOAT(0.01f);
		fHslider3 = FAUSTFLOAT(0.5f);
		fHslider4 = FAUSTFLOAT(0.8333333f);
		fHslider5 = FAUSTFLOAT(0.62184876f);
		fHslider6 = FAUSTFLOAT(1.0f);
		fHslider7 = FAUSTFLOAT(0.0f);
		fHslider8 = FAUSTFLOAT(0.5f);
		fHslider9 = FAUSTFLOAT(0.0f);
		fHslider10 = FAUSTFLOAT(0.0f);
		fHslider11 = FAUSTFLOAT(0.789916f);
	}
	
	void instanceClear() {
		for (int l0 = 0; l0 < 2; l0 = l0 + 1) {
			iVec0[l0] = 0;
		}
		for (int l1 = 0; l1 < 2; l1 = l1 + 1) {
			fRec0[l1] = 0.0f;
		}
		for (int l2 = 0; l2 < 2; l2 = l2 + 1) {
			fRec20[l2] = 0.0f;
		}
		for (int l3 = 0; l3 < 2; l3 = l3 + 1) {
			fRec19[l3] = 0.0f;
		}
		for (int l4 = 0; l4 < 2; l4 = l4 + 1) {
			fRec21[l4] = 0.0f;
		}
		for (int l5 = 0; l5 < 2; l5 = l5 + 1) {
			fRec22[l5] = 0.0f;
		}
		for (int l6 = 0; l6 < 2; l6 = l6 + 1) {
			fRec23[l6] = 0.0f;
		}
		for (int l7 = 0; l7 < 2; l7 = l7 + 1) {
			fRec25[l7] = 0.0f;
		}
		for (int l8 = 0; l8 < 2; l8 = l8 + 1) {
			fRec26[l8] = 0.0f;
		}
		for (int l9 = 0; l9 < 2; l9 = l9 + 1) {
			fRec28[l9] = 0.0f;
		}
		for (int l10 = 0; l10 < 2; l10 = l10 + 1) {
			fRec27[l10] = 0.0f;
		}
		for (int l11 = 0; l11 < 2; l11 = l11 + 1) {
			fRec29[l11] = 0.0f;
		}
		for (int l12 = 0; l12 < 2; l12 = l12 + 1) {
			fVec1[l12] = 0.0f;
		}
		for (int l13 = 0; l13 < 2; l13 = l13 + 1) {
			fRec24[l13] = 0.0f;
		}
		for (int l14 = 0; l14 < 2; l14 = l14 + 1) {
			fRec30[l14] = 0.0f;
		}
		for (int l15 = 0; l15 < 2; l15 = l15 + 1) {
			fRec31[l15] = 0.0f;
		}
		IOTA0 = 0;
		for (int l16 = 0; l16 < 131072; l16 = l16 + 1) {
			fVec2[l16] = 0.0f;
		}
		for (int l17 = 0; l17 < 65536; l17 = l17 + 1) {
			fVec3[l17] = 0.0f;
		}
		for (int l18 = 0; l18 < 2; l18 = l18 + 1) {
			fRec34[l18] = 0.0f;
		}
		for (int l19 = 0; l19 < 2; l19 = l19 + 1) {
			fVec4[l19] = 0.0f;
		}
		for (int l20 = 0; l20 < 2; l20 = l20 + 1) {
			fRec35[l20] = 0.0f;
		}
		for (int l21 = 0; l21 < 2; l21 = l21 + 1) {
			fRec33[l21] = 0.0f;
		}
		for (int l22 = 0; l22 < 2; l22 = l22 + 1) {
			fRec36[l22] = 0.0f;
		}
		for (int l23 = 0; l23 < 2; l23 = l23 + 1) {
			fRec32[l23] = 0.0f;
		}
		for (int l24 = 0; l24 < 1024; l24 = l24 + 1) {
			fVec5[l24] = 0.0f;
		}
		for (int l25 = 0; l25 < 2; l25 = l25 + 1) {
			fRec17[l25] = 0.0f;
		}
		for (int l26 = 0; l26 < 2; l26 = l26 + 1) {
			fRec39[l26] = 0.0f;
		}
		for (int l27 = 0; l27 < 2; l27 = l27 + 1) {
			fRec41[l27] = 0.0f;
		}
		for (int l28 = 0; l28 < 2; l28 = l28 + 1) {
			fRec42[l28] = 0.0f;
		}
		for (int l29 = 0; l29 < 2; l29 = l29 + 1) {
			fVec6[l29] = 0.0f;
		}
		for (int l30 = 0; l30 < 2; l30 = l30 + 1) {
			fRec40[l30] = 0.0f;
		}
		for (int l31 = 0; l31 < 2; l31 = l31 + 1) {
			fRec43[l31] = 0.0f;
		}
		for (int l32 = 0; l32 < 131072; l32 = l32 + 1) {
			fVec7[l32] = 0.0f;
		}
		for (int l33 = 0; l33 < 1024; l33 = l33 + 1) {
			fVec8[l33] = 0.0f;
		}
		for (int l34 = 0; l34 < 2; l34 = l34 + 1) {
			fRec37[l34] = 0.0f;
		}
		for (int l35 = 0; l35 < 2; l35 = l35 + 1) {
			fRec47[l35] = 0.0f;
		}
		for (int l36 = 0; l36 < 2; l36 = l36 + 1) {
			fRec48[l36] = 0.0f;
		}
		for (int l37 = 0; l37 < 2; l37 = l37 + 1) {
			fVec9[l37] = 0.0f;
		}
		for (int l38 = 0; l38 < 2; l38 = l38 + 1) {
			fRec46[l38] = 0.0f;
		}
		for (int l39 = 0; l39 < 2; l39 = l39 + 1) {
			fRec49[l39] = 0.0f;
		}
		for (int l40 = 0; l40 < 131072; l40 = l40 + 1) {
			fVec10[l40] = 0.0f;
		}
		for (int l41 = 0; l41 < 1024; l41 = l41 + 1) {
			fVec11[l41] = 0.0f;
		}
		for (int l42 = 0; l42 < 2; l42 = l42 + 1) {
			fRec44[l42] = 0.0f;
		}
		for (int l43 = 0; l43 < 2; l43 = l43 + 1) {
			fRec52[l43] = 0.0f;
		}
		for (int l44 = 0; l44 < 2; l44 = l44 + 1) {
			fRec54[l44] = 0.0f;
		}
		for (int l45 = 0; l45 < 2; l45 = l45 + 1) {
			fRec55[l45] = 0.0f;
		}
		for (int l46 = 0; l46 < 2; l46 = l46 + 1) {
			fVec12[l46] = 0.0f;
		}
		for (int l47 = 0; l47 < 2; l47 = l47 + 1) {
			fRec53[l47] = 0.0f;
		}
		for (int l48 = 0; l48 < 2; l48 = l48 + 1) {
			fRec56[l48] = 0.0f;
		}
		for (int l49 = 0; l49 < 131072; l49 = l49 + 1) {
			fVec13[l49] = 0.0f;
		}
		for (int l50 = 0; l50 < 1024; l50 = l50 + 1) {
			fVec14[l50] = 0.0f;
		}
		for (int l51 = 0; l51 < 2; l51 = l51 + 1) {
			fRec50[l51] = 0.0f;
		}
		for (int l52 = 0; l52 < 2; l52 = l52 + 1) {
			fRec60[l52] = 0.0f;
		}
		for (int l53 = 0; l53 < 2; l53 = l53 + 1) {
			fRec61[l53] = 0.0f;
		}
		for (int l54 = 0; l54 < 2; l54 = l54 + 1) {
			fVec15[l54] = 0.0f;
		}
		for (int l55 = 0; l55 < 2; l55 = l55 + 1) {
			fRec59[l55] = 0.0f;
		}
		for (int l56 = 0; l56 < 2; l56 = l56 + 1) {
			fRec62[l56] = 0.0f;
		}
		for (int l57 = 0; l57 < 131072; l57 = l57 + 1) {
			fVec16[l57] = 0.0f;
		}
		for (int l58 = 0; l58 < 1024; l58 = l58 + 1) {
			fVec17[l58] = 0.0f;
		}
		for (int l59 = 0; l59 < 2; l59 = l59 + 1) {
			fRec57[l59] = 0.0f;
		}
		for (int l60 = 0; l60 < 2; l60 = l60 + 1) {
			fRec65[l60] = 0.0f;
		}
		for (int l61 = 0; l61 < 2; l61 = l61 + 1) {
			fRec67[l61] = 0.0f;
		}
		for (int l62 = 0; l62 < 2; l62 = l62 + 1) {
			fRec68[l62] = 0.0f;
		}
		for (int l63 = 0; l63 < 2; l63 = l63 + 1) {
			fVec18[l63] = 0.0f;
		}
		for (int l64 = 0; l64 < 2; l64 = l64 + 1) {
			fRec66[l64] = 0.0f;
		}
		for (int l65 = 0; l65 < 2; l65 = l65 + 1) {
			fRec69[l65] = 0.0f;
		}
		for (int l66 = 0; l66 < 131072; l66 = l66 + 1) {
			fVec19[l66] = 0.0f;
		}
		for (int l67 = 0; l67 < 65536; l67 = l67 + 1) {
			fVec20[l67] = 0.0f;
		}
		for (int l68 = 0; l68 < 2; l68 = l68 + 1) {
			fVec21[l68] = 0.0f;
		}
		for (int l69 = 0; l69 < 2; l69 = l69 + 1) {
			fRec71[l69] = 0.0f;
		}
		for (int l70 = 0; l70 < 2; l70 = l70 + 1) {
			fRec70[l70] = 0.0f;
		}
		for (int l71 = 0; l71 < 1024; l71 = l71 + 1) {
			fVec22[l71] = 0.0f;
		}
		for (int l72 = 0; l72 < 2; l72 = l72 + 1) {
			fRec63[l72] = 0.0f;
		}
		for (int l73 = 0; l73 < 2; l73 = l73 + 1) {
			fRec75[l73] = 0.0f;
		}
		for (int l74 = 0; l74 < 2; l74 = l74 + 1) {
			fRec76[l74] = 0.0f;
		}
		for (int l75 = 0; l75 < 2; l75 = l75 + 1) {
			fVec23[l75] = 0.0f;
		}
		for (int l76 = 0; l76 < 2; l76 = l76 + 1) {
			fRec74[l76] = 0.0f;
		}
		for (int l77 = 0; l77 < 2; l77 = l77 + 1) {
			fRec77[l77] = 0.0f;
		}
		for (int l78 = 0; l78 < 131072; l78 = l78 + 1) {
			fVec24[l78] = 0.0f;
		}
		for (int l79 = 0; l79 < 1024; l79 = l79 + 1) {
			fVec25[l79] = 0.0f;
		}
		for (int l80 = 0; l80 < 2; l80 = l80 + 1) {
			fRec72[l80] = 0.0f;
		}
		for (int l81 = 0; l81 < 2; l81 = l81 + 1) {
			fRec81[l81] = 0.0f;
		}
		for (int l82 = 0; l82 < 2; l82 = l82 + 1) {
			fRec82[l82] = 0.0f;
		}
		for (int l83 = 0; l83 < 2; l83 = l83 + 1) {
			fVec26[l83] = 0.0f;
		}
		for (int l84 = 0; l84 < 2; l84 = l84 + 1) {
			fRec80[l84] = 0.0f;
		}
		for (int l85 = 0; l85 < 2; l85 = l85 + 1) {
			fRec83[l85] = 0.0f;
		}
		for (int l86 = 0; l86 < 131072; l86 = l86 + 1) {
			fVec27[l86] = 0.0f;
		}
		for (int l87 = 0; l87 < 1024; l87 = l87 + 1) {
			fVec28[l87] = 0.0f;
		}
		for (int l88 = 0; l88 < 2; l88 = l88 + 1) {
			fRec78[l88] = 0.0f;
		}
		for (int l89 = 0; l89 < 2; l89 = l89 + 1) {
			fRec86[l89] = 0.0f;
		}
		for (int l90 = 0; l90 < 2; l90 = l90 + 1) {
			fRec88[l90] = 0.0f;
		}
		for (int l91 = 0; l91 < 2; l91 = l91 + 1) {
			fRec89[l91] = 0.0f;
		}
		for (int l92 = 0; l92 < 2; l92 = l92 + 1) {
			fVec29[l92] = 0.0f;
		}
		for (int l93 = 0; l93 < 2; l93 = l93 + 1) {
			fRec87[l93] = 0.0f;
		}
		for (int l94 = 0; l94 < 2; l94 = l94 + 1) {
			fRec90[l94] = 0.0f;
		}
		for (int l95 = 0; l95 < 131072; l95 = l95 + 1) {
			fVec30[l95] = 0.0f;
		}
		for (int l96 = 0; l96 < 1024; l96 = l96 + 1) {
			fVec31[l96] = 0.0f;
		}
		for (int l97 = 0; l97 < 2; l97 = l97 + 1) {
			fRec84[l97] = 0.0f;
		}
		for (int l98 = 0; l98 < 2; l98 = l98 + 1) {
			fRec94[l98] = 0.0f;
		}
		for (int l99 = 0; l99 < 2; l99 = l99 + 1) {
			fRec95[l99] = 0.0f;
		}
		for (int l100 = 0; l100 < 2; l100 = l100 + 1) {
			fVec32[l100] = 0.0f;
		}
		for (int l101 = 0; l101 < 2; l101 = l101 + 1) {
			fRec93[l101] = 0.0f;
		}
		for (int l102 = 0; l102 < 2; l102 = l102 + 1) {
			fRec96[l102] = 0.0f;
		}
		for (int l103 = 0; l103 < 131072; l103 = l103 + 1) {
			fVec33[l103] = 0.0f;
		}
		for (int l104 = 0; l104 < 1024; l104 = l104 + 1) {
			fVec34[l104] = 0.0f;
		}
		for (int l105 = 0; l105 < 2; l105 = l105 + 1) {
			fRec91[l105] = 0.0f;
		}
		for (int l106 = 0; l106 < 2; l106 = l106 + 1) {
			fRec99[l106] = 0.0f;
		}
		for (int l107 = 0; l107 < 2; l107 = l107 + 1) {
			fRec101[l107] = 0.0f;
		}
		for (int l108 = 0; l108 < 2; l108 = l108 + 1) {
			fRec102[l108] = 0.0f;
		}
		for (int l109 = 0; l109 < 2; l109 = l109 + 1) {
			fVec35[l109] = 0.0f;
		}
		for (int l110 = 0; l110 < 2; l110 = l110 + 1) {
			fRec100[l110] = 0.0f;
		}
		for (int l111 = 0; l111 < 2; l111 = l111 + 1) {
			fRec103[l111] = 0.0f;
		}
		for (int l112 = 0; l112 < 131072; l112 = l112 + 1) {
			fVec36[l112] = 0.0f;
		}
		for (int l113 = 0; l113 < 1024; l113 = l113 + 1) {
			fVec37[l113] = 0.0f;
		}
		for (int l114 = 0; l114 < 2; l114 = l114 + 1) {
			fRec97[l114] = 0.0f;
		}
		for (int l115 = 0; l115 < 2; l115 = l115 + 1) {
			fRec107[l115] = 0.0f;
		}
		for (int l116 = 0; l116 < 2; l116 = l116 + 1) {
			fRec108[l116] = 0.0f;
		}
		for (int l117 = 0; l117 < 2; l117 = l117 + 1) {
			fVec38[l117] = 0.0f;
		}
		for (int l118 = 0; l118 < 2; l118 = l118 + 1) {
			fRec106[l118] = 0.0f;
		}
		for (int l119 = 0; l119 < 2; l119 = l119 + 1) {
			fRec109[l119] = 0.0f;
		}
		for (int l120 = 0; l120 < 131072; l120 = l120 + 1) {
			fVec39[l120] = 0.0f;
		}
		for (int l121 = 0; l121 < 1024; l121 = l121 + 1) {
			fVec40[l121] = 0.0f;
		}
		for (int l122 = 0; l122 < 2; l122 = l122 + 1) {
			fRec104[l122] = 0.0f;
		}
		for (int l123 = 0; l123 < 2; l123 = l123 + 1) {
			fRec112[l123] = 0.0f;
		}
		for (int l124 = 0; l124 < 2; l124 = l124 + 1) {
			fRec114[l124] = 0.0f;
		}
		for (int l125 = 0; l125 < 2; l125 = l125 + 1) {
			fRec115[l125] = 0.0f;
		}
		for (int l126 = 0; l126 < 2; l126 = l126 + 1) {
			fVec41[l126] = 0.0f;
		}
		for (int l127 = 0; l127 < 2; l127 = l127 + 1) {
			fRec113[l127] = 0.0f;
		}
		for (int l128 = 0; l128 < 2; l128 = l128 + 1) {
			fRec116[l128] = 0.0f;
		}
		for (int l129 = 0; l129 < 131072; l129 = l129 + 1) {
			fVec42[l129] = 0.0f;
		}
		for (int l130 = 0; l130 < 1024; l130 = l130 + 1) {
			fVec43[l130] = 0.0f;
		}
		for (int l131 = 0; l131 < 2; l131 = l131 + 1) {
			fRec110[l131] = 0.0f;
		}
		for (int l132 = 0; l132 < 2; l132 = l132 + 1) {
			fRec120[l132] = 0.0f;
		}
		for (int l133 = 0; l133 < 2; l133 = l133 + 1) {
			fRec121[l133] = 0.0f;
		}
		for (int l134 = 0; l134 < 2; l134 = l134 + 1) {
			fVec44[l134] = 0.0f;
		}
		for (int l135 = 0; l135 < 2; l135 = l135 + 1) {
			fRec119[l135] = 0.0f;
		}
		for (int l136 = 0; l136 < 2; l136 = l136 + 1) {
			fRec122[l136] = 0.0f;
		}
		for (int l137 = 0; l137 < 131072; l137 = l137 + 1) {
			fVec45[l137] = 0.0f;
		}
		for (int l138 = 0; l138 < 1024; l138 = l138 + 1) {
			fVec46[l138] = 0.0f;
		}
		for (int l139 = 0; l139 < 2; l139 = l139 + 1) {
			fRec117[l139] = 0.0f;
		}
		for (int l140 = 0; l140 < 2; l140 = l140 + 1) {
			fRec125[l140] = 0.0f;
		}
		for (int l141 = 0; l141 < 2; l141 = l141 + 1) {
			fRec127[l141] = 0.0f;
		}
		for (int l142 = 0; l142 < 2; l142 = l142 + 1) {
			fRec128[l142] = 0.0f;
		}
		for (int l143 = 0; l143 < 2; l143 = l143 + 1) {
			fVec47[l143] = 0.0f;
		}
		for (int l144 = 0; l144 < 2; l144 = l144 + 1) {
			fRec126[l144] = 0.0f;
		}
		for (int l145 = 0; l145 < 2; l145 = l145 + 1) {
			fRec129[l145] = 0.0f;
		}
		for (int l146 = 0; l146 < 131072; l146 = l146 + 1) {
			fVec48[l146] = 0.0f;
		}
		for (int l147 = 0; l147 < 1024; l147 = l147 + 1) {
			fVec49[l147] = 0.0f;
		}
		for (int l148 = 0; l148 < 2; l148 = l148 + 1) {
			fRec123[l148] = 0.0f;
		}
		for (int l149 = 0; l149 < 2; l149 = l149 + 1) {
			fRec133[l149] = 0.0f;
		}
		for (int l150 = 0; l150 < 2; l150 = l150 + 1) {
			fRec134[l150] = 0.0f;
		}
		for (int l151 = 0; l151 < 2; l151 = l151 + 1) {
			fVec50[l151] = 0.0f;
		}
		for (int l152 = 0; l152 < 2; l152 = l152 + 1) {
			fRec132[l152] = 0.0f;
		}
		for (int l153 = 0; l153 < 2; l153 = l153 + 1) {
			fRec135[l153] = 0.0f;
		}
		for (int l154 = 0; l154 < 131072; l154 = l154 + 1) {
			fVec51[l154] = 0.0f;
		}
		for (int l155 = 0; l155 < 1024; l155 = l155 + 1) {
			fVec52[l155] = 0.0f;
		}
		for (int l156 = 0; l156 < 2; l156 = l156 + 1) {
			fRec130[l156] = 0.0f;
		}
		for (int l157 = 0; l157 < 3; l157 = l157 + 1) {
			fRec1[l157] = 0.0f;
		}
		for (int l158 = 0; l158 < 3; l158 = l158 + 1) {
			fRec2[l158] = 0.0f;
		}
		for (int l159 = 0; l159 < 3; l159 = l159 + 1) {
			fRec3[l159] = 0.0f;
		}
		for (int l160 = 0; l160 < 3; l160 = l160 + 1) {
			fRec4[l160] = 0.0f;
		}
		for (int l161 = 0; l161 < 3; l161 = l161 + 1) {
			fRec5[l161] = 0.0f;
		}
		for (int l162 = 0; l162 < 3; l162 = l162 + 1) {
			fRec6[l162] = 0.0f;
		}
		for (int l163 = 0; l163 < 3; l163 = l163 + 1) {
			fRec7[l163] = 0.0f;
		}
		for (int l164 = 0; l164 < 3; l164 = l164 + 1) {
			fRec8[l164] = 0.0f;
		}
		for (int l165 = 0; l165 < 3; l165 = l165 + 1) {
			fRec9[l165] = 0.0f;
		}
		for (int l166 = 0; l166 < 3; l166 = l166 + 1) {
			fRec10[l166] = 0.0f;
		}
		for (int l167 = 0; l167 < 3; l167 = l167 + 1) {
			fRec11[l167] = 0.0f;
		}
		for (int l168 = 0; l168 < 3; l168 = l168 + 1) {
			fRec12[l168] = 0.0f;
		}
		for (int l169 = 0; l169 < 3; l169 = l169 + 1) {
			fRec13[l169] = 0.0f;
		}
		for (int l170 = 0; l170 < 3; l170 = l170 + 1) {
			fRec14[l170] = 0.0f;
		}
		for (int l171 = 0; l171 < 3; l171 = l171 + 1) {
			fRec15[l171] = 0.0f;
		}
		for (int l172 = 0; l172 < 3; l172 = l172 + 1) {
			fRec16[l172] = 0.0f;
		}
	}
	
	void init(int sample_rate) {
		classInit(sample_rate);
		instanceInit(sample_rate);
	}
	
	void instanceInit(int sample_rate) {
		instanceConstants(sample_rate);
		instanceResetUserInterface();
		instanceClear();
	}
	
	_vitalRev* clone() {
		return new _vitalRev();
	}
	
	int getSampleRate() {
		return fSampleRate;
	}
	
	void buildUserInterface(UI* ui_interface) {
		ui_interface->openHorizontalBox("Reverb");
		ui_interface->declare(0, "0", "");
		ui_interface->openHorizontalBox("Pre-filter");
		ui_interface->declare(&fHslider10, "0", "");
		ui_interface->declare(&fHslider10, "style", "knob");
		ui_interface->addHorizontalSlider("Low Cutoff", &fHslider10, FAUSTFLOAT(0.0f), FAUSTFLOAT(0.0f), FAUSTFLOAT(1.0f), FAUSTFLOAT(0.01f));
		ui_interface->declare(&fHslider11, "1", "");
		ui_interface->declare(&fHslider11, "style", "knob");
		ui_interface->addHorizontalSlider("High Cutoff", &fHslider11, FAUSTFLOAT(0.789916f), FAUSTFLOAT(0.0f), FAUSTFLOAT(1.0f), FAUSTFLOAT(0.01f));
		ui_interface->closeBox();
		ui_interface->declare(0, "1", "");
		ui_interface->openHorizontalBox("Filter");
		ui_interface->declare(&fHslider7, "0", "");
		ui_interface->declare(&fHslider7, "style", "knob");
		ui_interface->addHorizontalSlider("Low Shelf", &fHslider7, FAUSTFLOAT(0.0f), FAUSTFLOAT(0.0f), FAUSTFLOAT(1.0f), FAUSTFLOAT(0.01f));
		ui_interface->declare(&fHslider6, "1", "");
		ui_interface->declare(&fHslider6, "style", "knob");
		ui_interface->addHorizontalSlider("Low Gain", &fHslider6, FAUSTFLOAT(1.0f), FAUSTFLOAT(0.0f), FAUSTFLOAT(1.0f), FAUSTFLOAT(0.01f));
		ui_interface->declare(&fHslider5, "2", "");
		ui_interface->declare(&fHslider5, "style", "knob");
		ui_interface->addHorizontalSlider("High Shelf", &fHslider5, FAUSTFLOAT(0.62184876f), FAUSTFLOAT(0.0f), FAUSTFLOAT(1.0f), FAUSTFLOAT(0.01f));
		ui_interface->declare(&fHslider4, "3", "");
		ui_interface->declare(&fHslider4, "style", "knob");
		ui_interface->addHorizontalSlider("High Gain", &fHslider4, FAUSTFLOAT(0.8333333f), FAUSTFLOAT(0.0f), FAUSTFLOAT(1.0f), FAUSTFLOAT(0.01f));
		ui_interface->closeBox();
		ui_interface->declare(0, "2", "");
		ui_interface->openHorizontalBox("Chorus");
		ui_interface->declare(&fHslider2, "0", "");
		ui_interface->declare(&fHslider2, "style", "knob");
		ui_interface->addHorizontalSlider("Amount", &fHslider2, FAUSTFLOAT(0.01f), FAUSTFLOAT(0.0f), FAUSTFLOAT(1.0f), FAUSTFLOAT(0.01f));
		ui_interface->declare(&fHslider1, "1", "");
		ui_interface->declare(&fHslider1, "style", "knob");
		ui_interface->addHorizontalSlider("Rate", &fHslider1, FAUSTFLOAT(0.1f), FAUSTFLOAT(0.0f), FAUSTFLOAT(1.0f), FAUSTFLOAT(0.01f));
		ui_interface->closeBox();
		ui_interface->declare(0, "3", "");
		ui_interface->openHorizontalBox("Space");
		ui_interface->declare(&fHslider9, "0", "");
		ui_interface->declare(&fHslider9, "style", "knob");
		ui_interface->addHorizontalSlider("Pre-Delay", &fHslider9, FAUSTFLOAT(0.0f), FAUSTFLOAT(0.0f), FAUSTFLOAT(1.0f), FAUSTFLOAT(0.01f));
		ui_interface->declare(&fHslider8, "1", "");
		ui_interface->declare(&fHslider8, "style", "knob");
		ui_interface->addHorizontalSlider("Decay Time", &fHslider8, FAUSTFLOAT(0.5f), FAUSTFLOAT(0.0f), FAUSTFLOAT(1.0f), FAUSTFLOAT(0.01f));
		ui_interface->declare(&fHslider3, "2", "");
		ui_interface->declare(&fHslider3, "style", "knob");
		ui_interface->addHorizontalSlider("Size", &fHslider3, FAUSTFLOAT(0.5f), FAUSTFLOAT(0.0f), FAUSTFLOAT(1.0f), FAUSTFLOAT(0.01f));
		ui_interface->closeBox();
		ui_interface->declare(&fHslider0, "4", "");
		ui_interface->declare(&fHslider0, "style", "knob");
		ui_interface->addHorizontalSlider("Mix", &fHslider0, FAUSTFLOAT(1.0f), FAUSTFLOAT(0.0f), FAUSTFLOAT(1.0f), FAUSTFLOAT(0.01f));
		ui_interface->closeBox();
	}
	
	void compute(int count, FAUSTFLOAT** RESTRICT inputs, FAUSTFLOAT** RESTRICT outputs) {
		FAUSTFLOAT* input0 = inputs[0];
		FAUSTFLOAT* input1 = inputs[1];
		FAUSTFLOAT* output0 = outputs[0];
		FAUSTFLOAT* output1 = outputs[1];
		float fSlow0 = fConst1 * std::max<float>(0.0f, std::min<float>(1.0f, float(fHslider0)));
		float fSlow1 = fConst1 * std::max<float>(0.0f, std::min<float>(1.0f, float(fHslider1)));
		float fSlow2 = fConst1 * std::max<float>(0.0f, std::min<float>(1.0f, float(fHslider2)));
		float fSlow3 = fConst1 * std::max<float>(0.0f, std::min<float>(1.0f, float(fHslider3)));
		float fSlow4 = fConst1 * std::max<float>(0.0f, std::min<float>(1.0f, float(fHslider4)));
		float fSlow5 = fConst1 * std::max<float>(0.0f, std::min<float>(1.0f, float(fHslider5)));
		float fSlow6 = fConst1 * std::max<float>(0.0f, std::min<float>(1.0f, float(fHslider6)));
		float fSlow7 = fConst1 * std::max<float>(0.0f, std::min<float>(1.0f, float(fHslider7)));
		float fSlow8 = fConst1 * std::max<float>(0.0f, std::min<float>(1.0f, float(fHslider8)));
		float fSlow9 = fConst1 * std::max<float>(0.0f, std::min<float>(1.0f, float(fHslider9)));
		float fSlow10 = fConst1 * std::max<float>(0.0f, std::min<float>(1.0f, float(fHslider10)));
		float fSlow11 = fConst1 * std::max<float>(0.0f, std::min<float>(1.0f, float(fHslider11)));
		for (int i0 = 0; i0 < count; i0 = i0 + 1) {
			iVec0[0] = 1;
			fRec0[0] = fSlow0 + fConst2 * fRec0[1];
			float fTemp0 = 1.5707964f * std::max<float>(0.0f, std::min<float>(1.0f, std::max<float>(0.0f, std::min<float>(1.0f, fRec0[0]))));
			float fTemp1 = std::sin(fTemp0);
			int iTemp2 = 1 - iVec0[1];
			fRec20[0] = fSlow1 + fConst2 * fRec20[1];
			float fTemp3 = fConst5 * std::min<float>(16.0f, std::exp(11.0f * fRec20[0] + -8.0f));
			float fTemp4 = ((iTemp2) ? 0.1875f : fRec19[1] + fTemp3);
			fRec19[0] = fTemp4 - std::floor(fTemp4);
			fRec21[0] = fSlow2 + fConst2 * fRec21[1];
			float fTemp5 = _vitalRev_faustpower2_f(std::max<float>(0.0f, std::min<float>(1.0f, fRec21[0])));
			float fTemp6 = 0.05668934f * std::sin(6.2831855f * fRec19[0]) * fTemp5;
			fRec22[0] = fSlow3 + fConst2 * fRec22[1];
			float fTemp7 = std::pow(2.0f, 4.0f * std::max<float>(0.0f, std::min<float>(1.0f, std::max<float>(0.0f, std::min<float>(1.0f, fRec22[0])))) + -3.0f);
			float fTemp8 = std::max<float>(1.0f, fConst0 * (fConst4 - fTemp6) * fTemp7);
			float fTemp9 = fTemp8 + -0.999995f;
			float fTemp10 = std::floor(fTemp9);
			float fTemp11 = fTemp8 - fTemp10;
			fRec23[0] = fSlow4 + fConst2 * fRec23[1];
			float fTemp12 = std::pow(1e+01f, -(1.2f * (1.0f - std::max<float>(0.0f, std::min<float>(1.0f, fRec23[0])))));
			fRec25[0] = fSlow5 + fConst2 * fRec25[1];
			float fTemp13 = std::tan(fConst6 * std::pow(2.0f, 0.083333336f * (119.0f * std::max<float>(0.0f, std::min<float>(1.0f, fRec25[0])) + -53.0f)));
			float fTemp14 = 1.0f / fTemp13;
			float fTemp15 = 1.0f - fTemp14;
			fRec26[0] = fSlow6 + fConst2 * fRec26[1];
			float fTemp16 = std::pow(1e+01f, -(1.2f * (1.0f - std::max<float>(0.0f, std::min<float>(1.0f, fRec26[0])))));
			fRec28[0] = fSlow7 + fConst2 * fRec28[1];
			float fTemp17 = std::tan(fConst6 * std::pow(2.0f, 0.083333336f * (119.0f * std::max<float>(0.0f, std::min<float>(1.0f, fRec28[0])) + -53.0f)));
			float fTemp18 = 1.0f / fTemp17;
			float fTemp19 = 1.0f - fTemp18;
			float fTemp20 = fTemp18 + 1.0f;
			fRec27[0] = -((fRec27[1] * fTemp19 - (fRec16[1] + fRec16[2])) / fTemp20);
			fRec29[0] = -((fRec29[1] * fTemp19 - (fRec16[1] - fRec16[2]) / fTemp17) / fTemp20);
			float fTemp21 = fTemp16 * fRec27[0] + fRec29[0];
			fVec1[0] = fTemp21;
			float fTemp22 = fTemp14 + 1.0f;
			fRec24[0] = -((fRec24[1] * fTemp15 - (fTemp21 - fVec1[1]) / fTemp13) / fTemp22);
			fRec30[0] = -((fRec30[1] * fTemp15 - (fTemp21 + fVec1[1])) / fTemp22);
			fRec31[0] = fSlow8 + fConst2 * fRec31[1];
			float fTemp23 = std::max<float>(0.1f, std::min<float>(1e+02f, std::exp(12.0f * fRec31[0] + -6.0f)));
			float fTemp24 = (fTemp12 * fRec24[0] + fRec30[0]) * std::pow(0.001f, 2.2675737e-05f * (fConst3 * fTemp7 / fTemp23));
			fVec2[IOTA0 & 131071] = fTemp24;
			int iTemp25 = int(fTemp9);
			float fTemp26 = fTemp8 + (-1.0f - fTemp10);
			float fTemp27 = fTemp8 + (-2.0f - fTemp10);
			float fTemp28 = float(input1[i0]);
			fVec3[IOTA0 & 65535] = fTemp28;
			fRec34[0] = fSlow9 + fConst2 * fRec34[1];
			float fTemp29 = std::max<float>(1.0f, fConst8 * std::max<float>(0.0f, std::min<float>(1.0f, fRec34[0])));
			float fTemp30 = fTemp29 + -0.999995f;
			int iTemp31 = int(fTemp30);
			int iTemp32 = int(std::min<float>(fConst8, float(std::max<int>(0, iTemp31 + 1))));
			float fTemp33 = std::floor(fTemp30);
			float fTemp34 = fTemp29 - fTemp33;
			int iTemp35 = int(std::min<float>(fConst8, float(std::max<int>(0, iTemp31))));
			float fTemp36 = fTemp29 + (-1.0f - fTemp33);
			float fTemp37 = fTemp29 + (-2.0f - fTemp33);
			int iTemp38 = int(std::min<float>(fConst8, float(std::max<int>(0, iTemp31 + 2))));
			float fTemp39 = fTemp29 + (-3.0f - fTemp33);
			int iTemp40 = int(std::min<float>(fConst8, float(std::max<int>(0, iTemp31 + 3))));
			float fTemp41 = ((0.5f * fVec3[(IOTA0 - iTemp32) & 65535] * fTemp34 - 0.16666667f * fVec3[(IOTA0 - iTemp35) & 65535] * fTemp36) * fTemp37 - 0.5f * fVec3[(IOTA0 - iTemp38) & 65535] * fTemp34 * fTemp36) * fTemp39 + 0.16666667f * fVec3[(IOTA0 - iTemp40) & 65535] * fTemp34 * fTemp36 * fTemp37;
			fVec4[0] = fTemp41;
			fRec35[0] = fSlow10 + fConst2 * fRec35[1];
			float fTemp42 = std::tan(fConst6 * std::pow(2.0f, 0.083333336f * (119.0f * std::max<float>(0.0f, std::min<float>(1.0f, fRec35[0])) + -53.0f)));
			float fTemp43 = 1.0f / fTemp42;
			float fTemp44 = 1.0f - fTemp43;
			float fTemp45 = fTemp43 + 1.0f;
			fRec33[0] = ((fTemp41 - fVec4[1]) / fTemp42 - fRec33[1] * fTemp44) / fTemp45;
			fRec36[0] = fSlow11 + fConst2 * fRec36[1];
			float fTemp46 = 1.0f / std::tan(fConst6 * std::pow(2.0f, 0.083333336f * (119.0f * std::max<float>(0.0f, std::min<float>(1.0f, fRec36[0])) + -53.0f)));
			float fTemp47 = 1.0f - fTemp46;
			float fTemp48 = fTemp46 + 1.0f;
			fRec32[0] = (fRec33[1] + fRec33[0] - fRec32[1] * fTemp47) / fTemp48;
			float fTemp49 = 0.25f * fRec32[0];
			float fTemp50 = ((0.5f * fTemp11 * fVec2[(IOTA0 - int(std::min<float>(fConst7, float(std::max<int>(0, iTemp25 + 1))))) & 131071] - 0.16666667f * fVec2[(IOTA0 - int(std::min<float>(fConst7, float(std::max<int>(0, iTemp25))))) & 131071] * fTemp26) * fTemp27 - 0.5f * fVec2[(IOTA0 - int(std::min<float>(fConst7, float(std::max<int>(0, iTemp25 + 2))))) & 131071] * fTemp11 * fTemp26) * (fTemp8 + (-3.0f - fTemp10)) + 0.16666667f * fVec2[(IOTA0 - int(std::min<float>(fConst7, float(std::max<int>(0, iTemp25 + 3))))) & 131071] * fTemp11 * fTemp26 * fTemp27 + fTemp49 - 0.6f * fRec17[1];
			fVec5[IOTA0 & 1023] = fTemp50;
			fRec17[0] = fVec5[(IOTA0 - iConst9) & 1023];
			float fRec18 = 0.6f * fTemp50;
			float fTemp51 = ((iTemp2) ? 0.0625f : fRec39[1] + fTemp3);
			fRec39[0] = fTemp51 - std::floor(fTemp51);
			float fTemp52 = 0.05668934f * std::sin(6.2831855f * fRec39[0]) * fTemp5;
			float fTemp53 = std::max<float>(1.0f, fConst0 * (fConst11 - fTemp52) * fTemp7);
			float fTemp54 = fTemp53 + -0.999995f;
			float fTemp55 = std::floor(fTemp54);
			float fTemp56 = fTemp53 + (-2.0f - fTemp55);
			float fTemp57 = fTemp53 - fTemp55;
			fRec41[0] = -((fRec41[1] * fTemp19 - (fRec14[1] + fRec14[2])) / fTemp20);
			fRec42[0] = -((fRec42[1] * fTemp19 - (fRec14[1] - fRec14[2]) / fTemp17) / fTemp20);
			float fTemp58 = fTemp16 * fRec41[0] + fRec42[0];
			fVec6[0] = fTemp58;
			fRec40[0] = -((fRec40[1] * fTemp15 - (fTemp58 - fVec6[1]) / fTemp13) / fTemp22);
			fRec43[0] = (fTemp58 + fVec6[1] - fRec43[1] * fTemp15) / fTemp22;
			float fTemp59 = (fTemp12 * fRec40[0] + fRec43[0]) * std::pow(0.001f, 2.2675737e-05f * (fConst10 * fTemp7 / fTemp23));
			fVec7[IOTA0 & 131071] = fTemp59;
			int iTemp60 = int(fTemp54);
			float fTemp61 = fTemp53 + (-1.0f - fTemp55);
			float fTemp62 = fTemp57 * fTemp61;
			float fTemp63 = fTemp49 + (fTemp53 + (-3.0f - fTemp55)) * (fTemp56 * (0.5f * fTemp57 * fVec7[(IOTA0 - int(std::min<float>(fConst7, float(std::max<int>(0, iTemp60 + 1))))) & 131071] - 0.16666667f * fVec7[(IOTA0 - int(std::min<float>(fConst7, float(std::max<int>(0, iTemp60))))) & 131071] * fTemp61) - 0.5f * fTemp62 * fVec7[(IOTA0 - int(std::min<float>(fConst7, float(std::max<int>(0, iTemp60 + 2))))) & 131071]) + 0.16666667f * fTemp62 * fTemp56 * fVec7[(IOTA0 - int(std::min<float>(fConst7, float(std::max<int>(0, iTemp60 + 3))))) & 131071] - 0.6f * fRec37[1];
			fVec8[IOTA0 & 1023] = fTemp63;
			fRec37[0] = fVec8[(IOTA0 - iConst12) & 1023];
			float fRec38 = 0.6f * fTemp63;
			float fTemp64 = fRec17[1] + fRec37[1];
			fRec47[0] = (fRec10[1] + fRec10[2] - fRec47[1] * fTemp19) / fTemp20;
			fRec48[0] = -((fRec48[1] * fTemp19 - (fRec10[1] - fRec10[2]) / fTemp17) / fTemp20);
			float fTemp65 = fTemp16 * fRec47[0] + fRec48[0];
			fVec9[0] = fTemp65;
			fRec46[0] = ((fTemp65 - fVec9[1]) / fTemp13 - fRec46[1] * fTemp15) / fTemp22;
			fRec49[0] = -((fRec49[1] * fTemp15 - (fTemp65 + fVec9[1])) / fTemp22);
			float fTemp66 = (fTemp12 * fRec46[0] + fRec49[0]) * std::pow(0.001f, 2.2675737e-05f * (fConst13 * fTemp7 / fTemp23));
			fVec10[IOTA0 & 131071] = fTemp66;
			float fTemp67 = std::max<float>(1.0f, fConst0 * (fConst14 + fTemp52) * fTemp7);
			float fTemp68 = fTemp67 + -0.999995f;
			int iTemp69 = int(fTemp68);
			float fTemp70 = std::floor(fTemp68);
			float fTemp71 = fTemp67 - fTemp70;
			float fTemp72 = fTemp67 + (-1.0f - fTemp70);
			float fTemp73 = fTemp67 + (-2.0f - fTemp70);
			float fTemp74 = 0.16666667f * fVec10[(IOTA0 - int(std::min<float>(fConst7, float(std::max<int>(0, iTemp69 + 3))))) & 131071] * fTemp71 * fTemp72 * fTemp73 + (fTemp67 + (-3.0f - fTemp70)) * ((0.5f * fVec10[(IOTA0 - int(std::min<float>(fConst7, float(std::max<int>(0, iTemp69 + 1))))) & 131071] * fTemp71 - 0.16666667f * fVec10[(IOTA0 - int(std::min<float>(fConst7, float(std::max<int>(0, iTemp69))))) & 131071] * fTemp72) * fTemp73 - 0.5f * fVec10[(IOTA0 - int(std::min<float>(fConst7, float(std::max<int>(0, iTemp69 + 2))))) & 131071] * fTemp71 * fTemp72) + fTemp49 - 0.6f * fRec44[1];
			fVec11[IOTA0 & 1023] = fTemp74;
			fRec44[0] = fVec11[(IOTA0 - iConst15) & 1023];
			float fRec45 = 0.6f * fTemp74;
			float fTemp75 = ((iTemp2) ? 0.3125f : fRec52[1] + fTemp3);
			fRec52[0] = fTemp75 - std::floor(fTemp75);
			float fTemp76 = 0.05668934f * std::sin(6.2831855f * fRec52[0]) * fTemp5;
			float fTemp77 = std::max<float>(1.0f, fConst0 * (fConst17 - fTemp76) * fTemp7);
			float fTemp78 = fTemp77 + -0.999995f;
			float fTemp79 = std::floor(fTemp78);
			float fTemp80 = fTemp77 + (-2.0f - fTemp79);
			float fTemp81 = fTemp77 - fTemp79;
			fRec54[0] = -((fRec54[1] * fTemp19 - (fRec6[1] + fRec6[2])) / fTemp20);
			fRec55[0] = -((fRec55[1] * fTemp19 - (fRec6[1] - fRec6[2]) / fTemp17) / fTemp20);
			float fTemp82 = fTemp16 * fRec54[0] + fRec55[0];
			fVec12[0] = fTemp82;
			fRec53[0] = -((fRec53[1] * fTemp15 - (fTemp82 - fVec12[1]) / fTemp13) / fTemp22);
			fRec56[0] = (fTemp82 + fVec12[1] - fRec56[1] * fTemp15) / fTemp22;
			float fTemp83 = (fTemp12 * fRec53[0] + fRec56[0]) * std::pow(0.001f, 2.2675737e-05f * (fConst16 * fTemp7 / fTemp23));
			fVec13[IOTA0 & 131071] = fTemp83;
			int iTemp84 = int(fTemp78);
			float fTemp85 = fTemp77 + (-1.0f - fTemp79);
			float fTemp86 = (fTemp80 * (0.5f * fTemp81 * fVec13[(IOTA0 - int(std::min<float>(fConst7, float(std::max<int>(0, iTemp84 + 1))))) & 131071] - 0.16666667f * fVec13[(IOTA0 - int(std::min<float>(fConst7, float(std::max<int>(0, iTemp84))))) & 131071] * fTemp85) - 0.5f * fTemp81 * fTemp85 * fVec13[(IOTA0 - int(std::min<float>(fConst7, float(std::max<int>(0, iTemp84 + 2))))) & 131071]) * (fTemp77 + (-3.0f - fTemp79)) + 0.16666667f * fVec13[(IOTA0 - int(std::min<float>(fConst7, float(std::max<int>(0, iTemp84 + 3))))) & 131071] * fTemp81 * fTemp85 * fTemp80 + fTemp49 - 0.6f * fRec50[1];
			fVec14[IOTA0 & 1023] = fTemp86;
			fRec50[0] = fVec14[(IOTA0 - iConst18) & 1023];
			float fRec51 = 0.6f * fTemp86;
			fRec60[0] = -((fRec60[1] * fTemp19 - (fRec2[1] + fRec2[2])) / fTemp20);
			fRec61[0] = -((fRec61[1] * fTemp19 - (fRec2[1] - fRec2[2]) / fTemp17) / fTemp20);
			float fTemp87 = fTemp16 * fRec60[0] + fRec61[0];
			fVec15[0] = fTemp87;
			fRec59[0] = ((fTemp87 - fVec15[1]) / fTemp13 - fRec59[1] * fTemp15) / fTemp22;
			fRec62[0] = -((fRec62[1] * fTemp15 - (fTemp87 + fVec15[1])) / fTemp22);
			float fTemp88 = (fTemp12 * fRec59[0] + fRec62[0]) * std::pow(0.001f, 2.2675737e-05f * (fConst19 * fTemp7 / fTemp23));
			fVec16[IOTA0 & 131071] = fTemp88;
			float fTemp89 = std::max<float>(1.0f, fConst0 * (fConst20 + fTemp76) * fTemp7);
			float fTemp90 = fTemp89 + -0.999995f;
			int iTemp91 = int(fTemp90);
			float fTemp92 = std::floor(fTemp90);
			float fTemp93 = fTemp89 - fTemp92;
			float fTemp94 = fTemp89 + (-1.0f - fTemp92);
			float fTemp95 = fTemp89 + (-2.0f - fTemp92);
			float fTemp96 = fTemp49 + ((0.5f * fVec16[(IOTA0 - int(std::min<float>(fConst7, float(std::max<int>(0, iTemp91 + 1))))) & 131071] * fTemp93 - 0.16666667f * fVec16[(IOTA0 - int(std::min<float>(fConst7, float(std::max<int>(0, iTemp91))))) & 131071] * fTemp94) * fTemp95 - 0.5f * fVec16[(IOTA0 - int(std::min<float>(fConst7, float(std::max<int>(0, iTemp91 + 2))))) & 131071] * fTemp93 * fTemp94) * (fTemp89 + (-3.0f - fTemp92)) + 0.16666667f * fVec16[(IOTA0 - int(std::min<float>(fConst7, float(std::max<int>(0, iTemp91 + 3))))) & 131071] * fTemp93 * fTemp94 * fTemp95 - 0.6f * fRec57[1];
			fVec17[IOTA0 & 1023] = fTemp96;
			fRec57[0] = fVec17[(IOTA0 - iConst21) & 1023];
			float fRec58 = 0.6f * fTemp96;
			float fTemp97 = ((iTemp2) ? 0.0f : fRec65[1] + fTemp3);
			fRec65[0] = fTemp97 - std::floor(fTemp97);
			float fTemp98 = 0.05668934f * std::sin(6.2831855f * fRec65[0]) * fTemp5;
			float fTemp99 = std::max<float>(1.0f, fConst0 * (fConst23 - fTemp98) * fTemp7);
			float fTemp100 = fTemp99 + -0.999995f;
			float fTemp101 = std::floor(fTemp100);
			float fTemp102 = fTemp99 + (-2.0f - fTemp101);
			float fTemp103 = fTemp99 - fTemp101;
			fRec67[0] = -((fRec67[1] * fTemp19 - (fRec13[1] + fRec13[2])) / fTemp20);
			fRec68[0] = -((fRec68[1] * fTemp19 - (fRec13[1] - fRec13[2]) / fTemp17) / fTemp20);
			float fTemp104 = fTemp16 * fRec67[0] + fRec68[0];
			fVec18[0] = fTemp104;
			fRec66[0] = -((fRec66[1] * fTemp15 - (fTemp104 - fVec18[1]) / fTemp13) / fTemp22);
			fRec69[0] = -((fRec69[1] * fTemp15 - (fTemp104 + fVec18[1])) / fTemp22);
			float fTemp105 = std::pow(0.001f, 2.2675737e-05f * (fConst22 * fTemp7 / fTemp23)) * (fTemp12 * fRec66[0] + fRec69[0]);
			fVec19[IOTA0 & 131071] = fTemp105;
			int iTemp106 = int(fTemp100);
			float fTemp107 = fTemp99 + (-1.0f - fTemp101);
			float fTemp108 = float(input0[i0]);
			fVec20[IOTA0 & 65535] = fTemp108;
			float fTemp109 = (fTemp37 * (0.5f * fTemp34 * fVec20[(IOTA0 - iTemp32) & 65535] - 0.16666667f * fVec20[(IOTA0 - iTemp35) & 65535] * fTemp36) - 0.5f * fVec20[(IOTA0 - iTemp38) & 65535] * fTemp34 * fTemp36) * fTemp39 + 0.16666667f * fVec20[(IOTA0 - iTemp40) & 65535] * fTemp34 * fTemp36 * fTemp37;
			fVec21[0] = fTemp109;
			fRec71[0] = ((fTemp109 - fVec21[1]) / fTemp42 - fTemp44 * fRec71[1]) / fTemp45;
			fRec70[0] = (fRec71[1] + fRec71[0] - fRec70[1] * fTemp47) / fTemp48;
			float fTemp110 = 0.25f * fRec70[0];
			float fTemp111 = (fTemp102 * (0.5f * fTemp103 * fVec19[(IOTA0 - int(std::min<float>(fConst7, float(std::max<int>(0, iTemp106 + 1))))) & 131071] - 0.16666667f * fVec19[(IOTA0 - int(std::min<float>(fConst7, float(std::max<int>(0, iTemp106))))) & 131071] * fTemp107) - 0.5f * fTemp103 * fTemp107 * fVec19[(IOTA0 - int(std::min<float>(fConst7, float(std::max<int>(0, iTemp106 + 2))))) & 131071]) * (fTemp99 + (-3.0f - fTemp101)) + 0.16666667f * fVec19[(IOTA0 - int(std::min<float>(fConst7, float(std::max<int>(0, iTemp106 + 3))))) & 131071] * fTemp103 * fTemp107 * fTemp102 + fTemp110 - 0.6f * fRec63[1];
			fVec22[IOTA0 & 1023] = fTemp111;
			fRec63[0] = fVec22[(IOTA0 - iConst24) & 1023];
			float fRec64 = 0.6f * fTemp111;
			fRec75[0] = -((fRec75[1] * fTemp19 - (fRec9[1] + fRec9[2])) / fTemp20);
			fRec76[0] = -((fRec76[1] * fTemp19 - (fRec9[1] - fRec9[2]) / fTemp17) / fTemp20);
			float fTemp112 = fTemp16 * fRec75[0] + fRec76[0];
			fVec23[0] = fTemp112;
			fRec74[0] = ((fTemp112 - fVec23[1]) / fTemp13 - fRec74[1] * fTemp15) / fTemp22;
			fRec77[0] = -((fRec77[1] * fTemp15 - (fVec23[1] + fTemp112)) / fTemp22);
			float fTemp113 = (fTemp12 * fRec74[0] + fRec77[0]) * std::pow(0.001f, 2.2675737e-05f * (fConst25 * fTemp7 / fTemp23));
			fVec24[IOTA0 & 131071] = fTemp113;
			float fTemp114 = std::max<float>(1.0f, fConst0 * (fConst26 + fTemp98) * fTemp7);
			float fTemp115 = fTemp114 + -0.999995f;
			int iTemp116 = int(fTemp115);
			float fTemp117 = std::floor(fTemp115);
			float fTemp118 = fTemp114 - fTemp117;
			float fTemp119 = fTemp114 + (-1.0f - fTemp117);
			float fTemp120 = fTemp114 + (-2.0f - fTemp117);
			float fTemp121 = ((0.5f * fVec24[(IOTA0 - int(std::min<float>(fConst7, float(std::max<int>(0, iTemp116 + 1))))) & 131071] * fTemp118 - 0.16666667f * fVec24[(IOTA0 - int(std::min<float>(fConst7, float(std::max<int>(0, iTemp116))))) & 131071] * fTemp119) * fTemp120 - 0.5f * fVec24[(IOTA0 - int(std::min<float>(fConst7, float(std::max<int>(0, iTemp116 + 2))))) & 131071] * fTemp118 * fTemp119) * (fTemp114 + (-3.0f - fTemp117)) + 0.16666667f * fVec24[(IOTA0 - int(std::min<float>(fConst7, float(std::max<int>(0, iTemp116 + 3))))) & 131071] * fTemp118 * fTemp119 * fTemp120 + fTemp110 - 0.6f * fRec72[1];
			fVec25[IOTA0 & 1023] = fTemp121;
			fRec72[0] = fVec25[(IOTA0 - iConst27) & 1023];
			float fRec73 = 0.6f * fTemp121;
			float fTemp122 = std::max<float>(1.0f, fConst0 * (fConst29 + fTemp6) * fTemp7);
			float fTemp123 = fTemp122 + -0.999995f;
			float fTemp124 = std::floor(fTemp123);
			float fTemp125 = fTemp122 - fTemp124;
			float fTemp126 = fTemp122 + (-1.0f - fTemp124);
			float fTemp127 = fTemp125 * fTemp126;
			float fTemp128 = fTemp122 + (-2.0f - fTemp124);
			fRec81[0] = -((fRec81[1] * fTemp19 - (fRec12[1] + fRec12[2])) / fTemp20);
			fRec82[0] = -(((fRec12[2] - fRec12[1]) / fTemp17 + fRec82[1] * fTemp19) / fTemp20);
			float fTemp129 = fTemp16 * fRec81[0] + fRec82[0];
			fVec26[0] = fTemp129;
			fRec80[0] = ((fTemp129 - fVec26[1]) / fTemp13 - fRec80[1] * fTemp15) / fTemp22;
			fRec83[0] = -((fRec83[1] * fTemp15 - (fTemp129 + fVec26[1])) / fTemp22);
			float fTemp130 = (fTemp12 * fRec80[0] + fRec83[0]) * std::pow(0.001f, 2.2675737e-05f * (fConst28 * fTemp7 / fTemp23));
			fVec27[IOTA0 & 131071] = fTemp130;
			int iTemp131 = int(fTemp123);
			float fTemp132 = 0.16666667f * fTemp127 * fTemp128 * fVec27[(IOTA0 - int(std::min<float>(fConst7, float(std::max<int>(0, iTemp131 + 3))))) & 131071] + (fTemp122 + (-3.0f - fTemp124)) * (fTemp128 * (0.5f * fTemp125 * fVec27[(IOTA0 - int(std::min<float>(fConst7, float(std::max<int>(0, iTemp131 + 1))))) & 131071] - 0.16666667f * fVec27[(IOTA0 - int(std::min<float>(fConst7, float(std::max<int>(0, iTemp131))))) & 131071] * fTemp126) - 0.5f * fTemp127 * fVec27[(IOTA0 - int(std::min<float>(fConst7, float(std::max<int>(0, iTemp131 + 2))))) & 131071]) + fTemp49 - 0.6f * fRec78[1];
			fVec28[IOTA0 & 1023] = fTemp132;
			fRec78[0] = fVec28[(IOTA0 - iConst30) & 1023];
			float fRec79 = 0.6f * fTemp132;
			float fTemp133 = ((iTemp2) ? 0.4375f : fRec86[1] + fTemp3);
			fRec86[0] = fTemp133 - std::floor(fTemp133);
			float fTemp134 = 0.05668934f * std::sin(6.2831855f * fRec86[0]) * fTemp5;
			float fTemp135 = std::max<float>(1.0f, fConst0 * (fConst32 - fTemp134) * fTemp7);
			float fTemp136 = fTemp135 + -0.999995f;
			float fTemp137 = std::floor(fTemp136);
			float fTemp138 = fTemp135 - fTemp137;
			fRec88[0] = -((fRec88[1] * fTemp19 - (fRec8[1] + fRec8[2])) / fTemp20);
			fRec89[0] = -((fRec89[1] * fTemp19 - (fRec8[1] - fRec8[2]) / fTemp17) / fTemp20);
			float fTemp139 = fTemp16 * fRec88[0] + fRec89[0];
			fVec29[0] = fTemp139;
			fRec87[0] = -((fRec87[1] * fTemp15 - (fTemp139 - fVec29[1]) / fTemp13) / fTemp22);
			fRec90[0] = -((fRec90[1] * fTemp15 - (fTemp139 + fVec29[1])) / fTemp22);
			float fTemp140 = (fTemp12 * fRec87[0] + fRec90[0]) * std::pow(0.001f, 2.2675737e-05f * (fConst31 * fTemp7 / fTemp23));
			fVec30[IOTA0 & 131071] = fTemp140;
			int iTemp141 = int(fTemp136);
			float fTemp142 = fTemp135 + (-1.0f - fTemp137);
			float fTemp143 = fTemp135 + (-2.0f - fTemp137);
			float fTemp144 = fTemp49 + ((0.5f * fTemp138 * fVec30[(IOTA0 - int(std::min<float>(fConst7, float(std::max<int>(0, iTemp141 + 1))))) & 131071] - 0.16666667f * fVec30[(IOTA0 - int(std::min<float>(fConst7, float(std::max<int>(0, iTemp141))))) & 131071] * fTemp142) * fTemp143 - 0.5f * fVec30[(IOTA0 - int(std::min<float>(fConst7, float(std::max<int>(0, iTemp141 + 2))))) & 131071] * fTemp138 * fTemp142) * (fTemp135 + (-3.0f - fTemp137)) + 0.16666667f * fVec30[(IOTA0 - int(std::min<float>(fConst7, float(std::max<int>(0, iTemp141 + 3))))) & 131071] * fTemp138 * fTemp142 * fTemp143 - 0.6f * fRec84[1];
			fVec31[IOTA0 & 1023] = fTemp144;
			fRec84[0] = fVec31[(IOTA0 - iConst33) & 1023];
			float fRec85 = 0.6f * fTemp144;
			fRec94[0] = -((fRec94[1] * fTemp19 - (fRec4[1] + fRec4[2])) / fTemp20);
			fRec95[0] = ((fRec4[1] - fRec4[2]) / fTemp17 - fRec95[1] * fTemp19) / fTemp20;
			float fTemp145 = fTemp16 * fRec94[0] + fRec95[0];
			fVec32[0] = fTemp145;
			fRec93[0] = ((fTemp145 - fVec32[1]) / fTemp13 - fRec93[1] * fTemp15) / fTemp22;
			fRec96[0] = -((fRec96[1] * fTemp15 - (fTemp145 + fVec32[1])) / fTemp22);
			float fTemp146 = (fTemp12 * fRec93[0] + fRec96[0]) * std::pow(0.001f, 2.2675737e-05f * (fConst34 * fTemp7 / fTemp23));
			fVec33[IOTA0 & 131071] = fTemp146;
			float fTemp147 = std::max<float>(1.0f, fConst0 * (fConst35 + fTemp134) * fTemp7);
			float fTemp148 = fTemp147 + -0.999995f;
			int iTemp149 = int(fTemp148);
			float fTemp150 = std::floor(fTemp148);
			float fTemp151 = fTemp147 - fTemp150;
			float fTemp152 = fTemp147 + (-1.0f - fTemp150);
			float fTemp153 = fTemp147 + (-2.0f - fTemp150);
			float fTemp154 = fTemp49 + 0.16666667f * fVec33[(IOTA0 - int(std::min<float>(fConst7, float(std::max<int>(0, iTemp149 + 3))))) & 131071] * fTemp151 * fTemp152 * fTemp153 + (fTemp147 + (-3.0f - fTemp150)) * (fTemp153 * (0.5f * fTemp151 * fVec33[(IOTA0 - int(std::min<float>(fConst7, float(std::max<int>(0, iTemp149 + 1))))) & 131071] - 0.16666667f * fVec33[(IOTA0 - int(std::min<float>(fConst7, float(std::max<int>(0, iTemp149))))) & 131071] * fTemp152) - 0.5f * fTemp151 * fTemp152 * fVec33[(IOTA0 - int(std::min<float>(fConst7, float(std::max<int>(0, iTemp149 + 2))))) & 131071]) - 0.6f * fRec91[1];
			fVec34[IOTA0 & 1023] = fTemp154;
			fRec91[0] = fVec34[(IOTA0 - iConst36) & 1023];
			float fRec92 = 0.6f * fTemp154;
			float fTemp155 = ((iTemp2) ? 0.125f : fRec99[1] + fTemp3);
			fRec99[0] = fTemp155 - std::floor(fTemp155);
			float fTemp156 = 0.05668934f * std::sin(6.2831855f * fRec99[0]) * fTemp5;
			float fTemp157 = std::max<float>(1.0f, fConst0 * (fConst38 - fTemp156) * fTemp7);
			float fTemp158 = fTemp157 + -0.999995f;
			float fTemp159 = std::floor(fTemp158);
			float fTemp160 = fTemp157 + (-2.0f - fTemp159);
			float fTemp161 = fTemp157 - fTemp159;
			fRec101[0] = -((fRec101[1] * fTemp19 - (fRec15[1] + fRec15[2])) / fTemp20);
			fRec102[0] = -((fRec102[1] * fTemp19 - (fRec15[1] - fRec15[2]) / fTemp17) / fTemp20);
			float fTemp162 = fTemp16 * fRec101[0] + fRec102[0];
			fVec35[0] = fTemp162;
			fRec100[0] = -((fRec100[1] * fTemp15 - (fTemp162 - fVec35[1]) / fTemp13) / fTemp22);
			fRec103[0] = (fTemp162 + fVec35[1] - fRec103[1] * fTemp15) / fTemp22;
			float fTemp163 = (fTemp12 * fRec100[0] + fRec103[0]) * std::pow(0.001f, 2.2675737e-05f * (fConst37 * fTemp7 / fTemp23));
			fVec36[IOTA0 & 131071] = fTemp163;
			int iTemp164 = int(fTemp158);
			float fTemp165 = fTemp157 + (-1.0f - fTemp159);
			float fTemp166 = (fTemp160 * (0.5f * fTemp161 * fVec36[(IOTA0 - int(std::min<float>(fConst7, float(std::max<int>(0, iTemp164 + 1))))) & 131071] - 0.16666667f * fVec36[(IOTA0 - int(std::min<float>(fConst7, float(std::max<int>(0, iTemp164))))) & 131071] * fTemp165) - 0.5f * fVec36[(IOTA0 - int(std::min<float>(fConst7, float(std::max<int>(0, iTemp164 + 2))))) & 131071] * fTemp161 * fTemp165) * (fTemp157 + (-3.0f - fTemp159)) + 0.16666667f * fVec36[(IOTA0 - int(std::min<float>(fConst7, float(std::max<int>(0, iTemp164 + 3))))) & 131071] * fTemp161 * fTemp165 * fTemp160 + fTemp110 - 0.6f * fRec97[1];
			fVec37[IOTA0 & 1023] = fTemp166;
			fRec97[0] = fVec37[(IOTA0 - iConst39) & 1023];
			float fRec98 = 0.6f * fTemp166;
			fRec107[0] = (fRec11[1] + fRec11[2] - fRec107[1] * fTemp19) / fTemp20;
			fRec108[0] = -((fRec108[1] * fTemp19 - (fRec11[1] - fRec11[2]) / fTemp17) / fTemp20);
			float fTemp167 = fTemp16 * fRec107[0] + fRec108[0];
			fVec38[0] = fTemp167;
			fRec106[0] = ((fTemp167 - fVec38[1]) / fTemp13 - fRec106[1] * fTemp15) / fTemp22;
			fRec109[0] = -((fRec109[1] * fTemp15 - (fTemp167 + fVec38[1])) / fTemp22);
			float fTemp168 = (fTemp12 * fRec106[0] + fRec109[0]) * std::pow(0.001f, 2.2675737e-05f * (fConst40 * fTemp7 / fTemp23));
			fVec39[IOTA0 & 131071] = fTemp168;
			float fTemp169 = std::max<float>(1.0f, fConst0 * (fConst41 + fTemp156) * fTemp7);
			float fTemp170 = fTemp169 + -0.999995f;
			int iTemp171 = int(fTemp170);
			float fTemp172 = std::floor(fTemp170);
			float fTemp173 = fTemp169 - fTemp172;
			float fTemp174 = fTemp169 + (-1.0f - fTemp172);
			float fTemp175 = fTemp169 + (-2.0f - fTemp172);
			float fTemp176 = 0.16666667f * fVec39[(IOTA0 - int(std::min<float>(fConst7, float(std::max<int>(0, iTemp171 + 3))))) & 131071] * fTemp173 * fTemp174 * fTemp175 + (fTemp169 + (-3.0f - fTemp172)) * ((0.5f * fVec39[(IOTA0 - int(std::min<float>(fConst7, float(std::max<int>(0, iTemp171 + 1))))) & 131071] * fTemp173 - 0.16666667f * fVec39[(IOTA0 - int(std::min<float>(fConst7, float(std::max<int>(0, iTemp171))))) & 131071] * fTemp174) * fTemp175 - 0.5f * fVec39[(IOTA0 - int(std::min<float>(fConst7, float(std::max<int>(0, iTemp171 + 2))))) & 131071] * fTemp173 * fTemp174) + fTemp110 - 0.6f * fRec104[1];
			fVec40[IOTA0 & 1023] = fTemp176;
			fRec104[0] = fVec40[(IOTA0 - iConst42) & 1023];
			float fRec105 = 0.6f * fTemp176;
			float fTemp177 = ((iTemp2) ? 0.375f : fRec112[1] + fTemp3);
			fRec112[0] = fTemp177 - std::floor(fTemp177);
			float fTemp178 = 0.05668934f * std::sin(6.2831855f * fRec112[0]) * fTemp5;
			float fTemp179 = std::max<float>(1.0f, fConst0 * (fConst44 - fTemp178) * fTemp7);
			float fTemp180 = fTemp179 + -0.999995f;
			float fTemp181 = std::floor(fTemp180);
			float fTemp182 = fTemp179 + (-2.0f - fTemp181);
			float fTemp183 = fTemp179 - fTemp181;
			fRec114[0] = -((fRec114[1] * fTemp19 - (fRec7[1] + fRec7[2])) / fTemp20);
			fRec115[0] = -((fRec115[1] * fTemp19 - (fRec7[1] - fRec7[2]) / fTemp17) / fTemp20);
			float fTemp184 = fTemp16 * fRec114[0] + fRec115[0];
			fVec41[0] = fTemp184;
			fRec113[0] = -((fRec113[1] * fTemp15 - (fTemp184 - fVec41[1]) / fTemp13) / fTemp22);
			fRec116[0] = (fTemp184 + fVec41[1] - fRec116[1] * fTemp15) / fTemp22;
			float fTemp185 = (fTemp12 * fRec113[0] + fRec116[0]) * std::pow(0.001f, 2.2675737e-05f * (fConst43 * fTemp7 / fTemp23));
			fVec42[IOTA0 & 131071] = fTemp185;
			int iTemp186 = int(fTemp180);
			float fTemp187 = fTemp179 + (-1.0f - fTemp181);
			float fTemp188 = (fTemp182 * (0.5f * fTemp183 * fVec42[(IOTA0 - int(std::min<float>(fConst7, float(std::max<int>(0, iTemp186 + 1))))) & 131071] - 0.16666667f * fVec42[(IOTA0 - int(std::min<float>(fConst7, float(std::max<int>(0, iTemp186))))) & 131071] * fTemp187) - 0.5f * fTemp183 * fTemp187 * fVec42[(IOTA0 - int(std::min<float>(fConst7, float(std::max<int>(0, iTemp186 + 2))))) & 131071]) * (fTemp179 + (-3.0f - fTemp181)) + 0.16666667f * fVec42[(IOTA0 - int(std::min<float>(fConst7, float(std::max<int>(0, iTemp186 + 3))))) & 131071] * fTemp183 * fTemp187 * fTemp182 + fTemp110 - 0.6f * fRec110[1];
			fVec43[IOTA0 & 1023] = fTemp188;
			fRec110[0] = fVec43[(IOTA0 - iConst45) & 1023];
			float fRec111 = 0.6f * fTemp188;
			float fTemp189 = std::max<float>(1.0f, fConst0 * (fConst47 + fTemp178) * fTemp7);
			float fTemp190 = fTemp189 + -0.999995f;
			float fTemp191 = std::floor(fTemp190);
			float fTemp192 = fTemp189 - fTemp191;
			float fTemp193 = fTemp189 + (-1.0f - fTemp191);
			float fTemp194 = fTemp192 * fTemp193;
			float fTemp195 = fTemp189 + (-2.0f - fTemp191);
			fRec120[0] = -((fRec120[1] * fTemp19 - (fRec3[1] + fRec3[2])) / fTemp20);
			fRec121[0] = ((fRec3[1] - fRec3[2]) / fTemp17 - fRec121[1] * fTemp19) / fTemp20;
			float fTemp196 = fTemp16 * fRec120[0] + fRec121[0];
			fVec44[0] = fTemp196;
			fRec119[0] = ((fTemp196 - fVec44[1]) / fTemp13 - fRec119[1] * fTemp15) / fTemp22;
			fRec122[0] = -((fRec122[1] * fTemp15 - (fTemp196 + fVec44[1])) / fTemp22);
			float fTemp197 = (fTemp12 * fRec119[0] + fRec122[0]) * std::pow(0.001f, 2.2675737e-05f * (fConst46 * fTemp7 / fTemp23));
			fVec45[IOTA0 & 131071] = fTemp197;
			int iTemp198 = int(fTemp190);
			float fTemp199 = 0.16666667f * fTemp194 * fTemp195 * fVec45[(IOTA0 - int(std::min<float>(fConst7, float(std::max<int>(0, iTemp198 + 3))))) & 131071] + (fTemp189 + (-3.0f - fTemp191)) * (fTemp195 * (0.5f * fTemp192 * fVec45[(IOTA0 - int(std::min<float>(fConst7, float(std::max<int>(0, iTemp198 + 1))))) & 131071] - 0.16666667f * fTemp193 * fVec45[(IOTA0 - int(std::min<float>(fConst7, float(std::max<int>(0, iTemp198))))) & 131071]) - 0.5f * fTemp194 * fVec45[(IOTA0 - int(std::min<float>(fConst7, float(std::max<int>(0, iTemp198 + 2))))) & 131071]) + fTemp110 - 0.6f * fRec117[1];
			fVec46[IOTA0 & 1023] = fTemp199;
			fRec117[0] = fVec46[(IOTA0 - iConst48) & 1023];
			float fRec118 = 0.6f * fTemp199;
			float fTemp200 = ((iTemp2) ? 0.25f : fRec125[1] + fTemp3);
			fRec125[0] = fTemp200 - std::floor(fTemp200);
			float fTemp201 = 0.05668934f * fTemp5 * std::sin(6.2831855f * fRec125[0]);
			float fTemp202 = std::max<float>(1.0f, fConst0 * (fConst50 - fTemp201) * fTemp7);
			float fTemp203 = fTemp202 + -0.999995f;
			float fTemp204 = std::floor(fTemp203);
			float fTemp205 = fTemp202 + (-2.0f - fTemp204);
			float fTemp206 = fTemp202 - fTemp204;
			fRec127[0] = -((fRec127[1] * fTemp19 - (fRec5[1] + fRec5[2])) / fTemp20);
			fRec128[0] = -((fRec128[1] * fTemp19 - (fRec5[1] - fRec5[2]) / fTemp17) / fTemp20);
			float fTemp207 = fTemp16 * fRec127[0] + fRec128[0];
			fVec47[0] = fTemp207;
			fRec126[0] = -((fRec126[1] * fTemp15 - (fTemp207 - fVec47[1]) / fTemp13) / fTemp22);
			fRec129[0] = -((fRec129[1] * fTemp15 - (fTemp207 + fVec47[1])) / fTemp22);
			float fTemp208 = std::pow(0.001f, 2.2675737e-05f * (fConst49 * fTemp7 / fTemp23)) * (fTemp12 * fRec126[0] + fRec129[0]);
			fVec48[IOTA0 & 131071] = fTemp208;
			int iTemp209 = int(fTemp203);
			float fTemp210 = fTemp202 + (-1.0f - fTemp204);
			float fTemp211 = (fTemp205 * (0.5f * fTemp206 * fVec48[(IOTA0 - int(std::min<float>(fConst7, float(std::max<int>(0, iTemp209 + 1))))) & 131071] - 0.16666667f * fVec48[(IOTA0 - int(std::min<float>(fConst7, float(std::max<int>(0, iTemp209))))) & 131071] * fTemp210) - 0.5f * fTemp206 * fTemp210 * fVec48[(IOTA0 - int(std::min<float>(fConst7, float(std::max<int>(0, iTemp209 + 2))))) & 131071]) * (fTemp202 + (-3.0f - fTemp204)) + 0.16666667f * fVec48[(IOTA0 - int(std::min<float>(fConst7, float(std::max<int>(0, iTemp209 + 3))))) & 131071] * fTemp206 * fTemp210 * fTemp205 + fTemp110 - 0.6f * fRec123[1];
			fVec49[IOTA0 & 1023] = fTemp211;
			fRec123[0] = fVec49[(IOTA0 - iConst51) & 1023];
			float fRec124 = 0.6f * fTemp211;
			float fTemp212 = std::max<float>(1.0f, fConst0 * (fConst53 + fTemp201) * fTemp7);
			float fTemp213 = fTemp212 + -0.999995f;
			float fTemp214 = std::floor(fTemp213);
			float fTemp215 = fTemp212 + (-2.0f - fTemp214);
			float fTemp216 = fTemp212 - fTemp214;
			fRec133[0] = -((fRec133[1] * fTemp19 - (fRec1[1] + fRec1[2])) / fTemp20);
			fRec134[0] = -((fRec134[1] * fTemp19 - (fRec1[1] - fRec1[2]) / fTemp17) / fTemp20);
			float fTemp217 = fTemp16 * fRec133[0] + fRec134[0];
			fVec50[0] = fTemp217;
			fRec132[0] = ((fTemp217 - fVec50[1]) / fTemp13 - fRec132[1] * fTemp15) / fTemp22;
			fRec135[0] = -((fRec135[1] * fTemp15 - (fTemp217 + fVec50[1])) / fTemp22);
			float fTemp218 = (fTemp12 * fRec132[0] + fRec135[0]) * std::pow(0.001f, 2.2675737e-05f * (fConst52 * fTemp7 / fTemp23));
			fVec51[IOTA0 & 131071] = fTemp218;
			int iTemp219 = int(fTemp213);
			float fTemp220 = fTemp212 + (-1.0f - fTemp214);
			float fTemp221 = fTemp110 + (fTemp215 * (0.5f * fTemp216 * fVec51[(IOTA0 - int(std::min<float>(fConst7, float(std::max<int>(0, iTemp219 + 1))))) & 131071] - 0.16666667f * fVec51[(IOTA0 - int(std::min<float>(fConst7, float(std::max<int>(0, iTemp219))))) & 131071] * fTemp220) - 0.5f * fTemp216 * fTemp220 * fVec51[(IOTA0 - int(std::min<float>(fConst7, float(std::max<int>(0, iTemp219 + 2))))) & 131071]) * (fTemp212 + (-3.0f - fTemp214)) + 0.16666667f * fVec51[(IOTA0 - int(std::min<float>(fConst7, float(std::max<int>(0, iTemp219 + 3))))) & 131071] * fTemp216 * fTemp220 * fTemp215 - 0.6f * fRec130[1];
			fVec52[IOTA0 & 1023] = fTemp221;
			fRec130[0] = fVec52[(IOTA0 - iConst54) & 1023];
			float fRec131 = 0.6f * fTemp221;
			float fTemp222 = 0.25f * (fTemp64 + fRec44[1] + fRec50[1] + fRec57[1] + fRec63[1] + fRec72[1] + fRec78[1] + fRec84[1] + fRec91[1] + fRec97[1] + fRec104[1] + fRec110[1] + fRec117[1] + fRec123[1] + fRec130[1] + fRec18 + fRec79 + fRec64 + fRec73 + fRec124 + fRec131 + fRec85 + fRec92 + fRec98 + fRec105 + fRec111 + fRec118 + fRec38 + fRec45 + fRec51 + fRec58);
			float fTemp223 = fRec57[1] + fRec91[1] + fRec117[1] + fRec130[1] + fRec131 + fRec92 + fRec118 + fRec58;
			float fTemp224 = fRec63[1] + fRec72[1] + fRec123[1] + fRec130[1] + fRec64 + fRec73 + fRec124 + fRec131;
			fRec1[0] = fTemp222 + fRec130[1] + fRec131 - 0.5f * (fTemp223 + fTemp224);
			float fTemp225 = fRec57[1] + fRec50[1] + fRec37[1] + fRec44[1] + fRec38 + fRec45 + fRec51 + fRec58;
			fRec2[0] = fTemp222 + fRec57[1] + fRec58 - 0.5f * (fTemp223 + fTemp225);
			float fTemp226 = fRec97[1] + fRec104[1] + fRec110[1] + fRec117[1] + fRec98 + fRec105 + fRec111 + fRec118;
			fRec3[0] = fTemp222 + fRec117[1] + fRec118 - 0.5f * (fTemp223 + fTemp226);
			float fTemp227 = fRec17[1] + fRec78[1] + fRec84[1] + fRec91[1] + fRec18 + fRec79 + fRec85 + fRec92;
			fRec4[0] = fTemp222 + fRec91[1] + fRec92 - 0.5f * (fTemp223 + fTemp227);
			float fTemp228 = fRec50[1] + fRec84[1] + fRec110[1] + fRec123[1] + fRec124 + fRec85 + fRec111 + fRec51;
			fRec5[0] = fTemp222 + fRec123[1] + fRec124 - 0.5f * (fTemp228 + fTemp224);
			fRec6[0] = fTemp222 + fRec50[1] + fRec51 - 0.5f * (fTemp228 + fTemp225);
			fRec7[0] = fTemp222 + fRec110[1] + fRec111 - 0.5f * (fTemp228 + fTemp226);
			fRec8[0] = fTemp222 + fRec84[1] + fRec85 - 0.5f * (fTemp228 + fTemp227);
			float fTemp229 = fRec44[1] + fRec72[1] + fRec78[1] + fRec104[1] + fRec79 + fRec73 + fRec105 + fRec45;
			fRec9[0] = fTemp222 + fRec72[1] + fRec73 - 0.5f * (fTemp229 + fTemp224);
			fRec10[0] = fTemp222 + fRec44[1] + fRec45 - 0.5f * (fTemp229 + fTemp225);
			fRec11[0] = fTemp222 + fRec104[1] + fRec105 - 0.5f * (fTemp229 + fTemp226);
			fRec12[0] = fTemp222 + fRec78[1] + fRec79 - 0.5f * (fTemp229 + fTemp227);
			float fTemp230 = fTemp64 + fRec63[1] + fRec97[1] + fRec18 + fRec64 + fRec98 + fRec38;
			fRec13[0] = fTemp222 + fRec63[1] + fRec64 - 0.5f * (fTemp230 + fTemp224);
			fRec14[0] = fTemp222 + fRec37[1] + fRec38 - 0.5f * (fTemp230 + fTemp225);
			fRec15[0] = fTemp222 + fRec97[1] + fRec98 - 0.5f * (fTemp230 + fTemp226);
			fRec16[0] = fTemp222 + fRec17[1] + fRec18 - 0.5f * (fTemp230 + fTemp227);
			float fTemp231 = std::cos(fTemp0);
			output0[i0] = FAUSTFLOAT(1.4142135f * (0.35355338f * fTemp1 * (fRec2[0] + fRec4[0] + fRec6[0] + fRec8[0] + fRec10[0] + fRec12[0] + fRec14[0] + fRec16[0]) + 0.70710677f * fTemp108 * fTemp231));
			output1[i0] = FAUSTFLOAT(1.4142135f * (0.35355338f * fTemp1 * (fRec1[0] + fRec3[0] + fRec5[0] + fRec7[0] + fRec9[0] + fRec11[0] + fRec13[0] + fRec15[0]) + 0.70710677f * fTemp28 * fTemp231));
			iVec0[1] = iVec0[0];
			fRec0[1] = fRec0[0];
			fRec20[1] = fRec20[0];
			fRec19[1] = fRec19[0];
			fRec21[1] = fRec21[0];
			fRec22[1] = fRec22[0];
			fRec23[1] = fRec23[0];
			fRec25[1] = fRec25[0];
			fRec26[1] = fRec26[0];
			fRec28[1] = fRec28[0];
			fRec27[1] = fRec27[0];
			fRec29[1] = fRec29[0];
			fVec1[1] = fVec1[0];
			fRec24[1] = fRec24[0];
			fRec30[1] = fRec30[0];
			fRec31[1] = fRec31[0];
			IOTA0 = IOTA0 + 1;
			fRec34[1] = fRec34[0];
			fVec4[1] = fVec4[0];
			fRec35[1] = fRec35[0];
			fRec33[1] = fRec33[0];
			fRec36[1] = fRec36[0];
			fRec32[1] = fRec32[0];
			fRec17[1] = fRec17[0];
			fRec39[1] = fRec39[0];
			fRec41[1] = fRec41[0];
			fRec42[1] = fRec42[0];
			fVec6[1] = fVec6[0];
			fRec40[1] = fRec40[0];
			fRec43[1] = fRec43[0];
			fRec37[1] = fRec37[0];
			fRec47[1] = fRec47[0];
			fRec48[1] = fRec48[0];
			fVec9[1] = fVec9[0];
			fRec46[1] = fRec46[0];
			fRec49[1] = fRec49[0];
			fRec44[1] = fRec44[0];
			fRec52[1] = fRec52[0];
			fRec54[1] = fRec54[0];
			fRec55[1] = fRec55[0];
			fVec12[1] = fVec12[0];
			fRec53[1] = fRec53[0];
			fRec56[1] = fRec56[0];
			fRec50[1] = fRec50[0];
			fRec60[1] = fRec60[0];
			fRec61[1] = fRec61[0];
			fVec15[1] = fVec15[0];
			fRec59[1] = fRec59[0];
			fRec62[1] = fRec62[0];
			fRec57[1] = fRec57[0];
			fRec65[1] = fRec65[0];
			fRec67[1] = fRec67[0];
			fRec68[1] = fRec68[0];
			fVec18[1] = fVec18[0];
			fRec66[1] = fRec66[0];
			fRec69[1] = fRec69[0];
			fVec21[1] = fVec21[0];
			fRec71[1] = fRec71[0];
			fRec70[1] = fRec70[0];
			fRec63[1] = fRec63[0];
			fRec75[1] = fRec75[0];
			fRec76[1] = fRec76[0];
			fVec23[1] = fVec23[0];
			fRec74[1] = fRec74[0];
			fRec77[1] = fRec77[0];
			fRec72[1] = fRec72[0];
			fRec81[1] = fRec81[0];
			fRec82[1] = fRec82[0];
			fVec26[1] = fVec26[0];
			fRec80[1] = fRec80[0];
			fRec83[1] = fRec83[0];
			fRec78[1] = fRec78[0];
			fRec86[1] = fRec86[0];
			fRec88[1] = fRec88[0];
			fRec89[1] = fRec89[0];
			fVec29[1] = fVec29[0];
			fRec87[1] = fRec87[0];
			fRec90[1] = fRec90[0];
			fRec84[1] = fRec84[0];
			fRec94[1] = fRec94[0];
			fRec95[1] = fRec95[0];
			fVec32[1] = fVec32[0];
			fRec93[1] = fRec93[0];
			fRec96[1] = fRec96[0];
			fRec91[1] = fRec91[0];
			fRec99[1] = fRec99[0];
			fRec101[1] = fRec101[0];
			fRec102[1] = fRec102[0];
			fVec35[1] = fVec35[0];
			fRec100[1] = fRec100[0];
			fRec103[1] = fRec103[0];
			fRec97[1] = fRec97[0];
			fRec107[1] = fRec107[0];
			fRec108[1] = fRec108[0];
			fVec38[1] = fVec38[0];
			fRec106[1] = fRec106[0];
			fRec109[1] = fRec109[0];
			fRec104[1] = fRec104[0];
			fRec112[1] = fRec112[0];
			fRec114[1] = fRec114[0];
			fRec115[1] = fRec115[0];
			fVec41[1] = fVec41[0];
			fRec113[1] = fRec113[0];
			fRec116[1] = fRec116[0];
			fRec110[1] = fRec110[0];
			fRec120[1] = fRec120[0];
			fRec121[1] = fRec121[0];
			fVec44[1] = fVec44[0];
			fRec119[1] = fRec119[0];
			fRec122[1] = fRec122[0];
			fRec117[1] = fRec117[0];
			fRec125[1] = fRec125[0];
			fRec127[1] = fRec127[0];
			fRec128[1] = fRec128[0];
			fVec47[1] = fVec47[0];
			fRec126[1] = fRec126[0];
			fRec129[1] = fRec129[0];
			fRec123[1] = fRec123[0];
			fRec133[1] = fRec133[0];
			fRec134[1] = fRec134[0];
			fVec50[1] = fVec50[0];
			fRec132[1] = fRec132[0];
			fRec135[1] = fRec135[0];
			fRec130[1] = fRec130[0];
			fRec1[2] = fRec1[1];
			fRec1[1] = fRec1[0];
			fRec2[2] = fRec2[1];
			fRec2[1] = fRec2[0];
			fRec3[2] = fRec3[1];
			fRec3[1] = fRec3[0];
			fRec4[2] = fRec4[1];
			fRec4[1] = fRec4[0];
			fRec5[2] = fRec5[1];
			fRec5[1] = fRec5[0];
			fRec6[2] = fRec6[1];
			fRec6[1] = fRec6[0];
			fRec7[2] = fRec7[1];
			fRec7[1] = fRec7[0];
			fRec8[2] = fRec8[1];
			fRec8[1] = fRec8[0];
			fRec9[2] = fRec9[1];
			fRec9[1] = fRec9[0];
			fRec10[2] = fRec10[1];
			fRec10[1] = fRec10[0];
			fRec11[2] = fRec11[1];
			fRec11[1] = fRec11[0];
			fRec12[2] = fRec12[1];
			fRec12[1] = fRec12[0];
			fRec13[2] = fRec13[1];
			fRec13[1] = fRec13[0];
			fRec14[2] = fRec14[1];
			fRec14[1] = fRec14[0];
			fRec15[2] = fRec15[1];
			fRec15[1] = fRec15[0];
			fRec16[2] = fRec16[1];
			fRec16[1] = fRec16[0];
		}
	}

};

#ifdef FAUST_UIMACROS
	
	#define FAUST_FILE_NAME "vitalRev.dsp"
	#define FAUST_CLASS_NAME "_vitalRev"
	#define FAUST_COMPILATION_OPIONS "-lang cpp -rui -nvi -ct 1 -cn _vitalRev -scn ::faust::dsp -es 1 -mcd 16 -mdd 1024 -mdy 33 -uim -single -ftz 0"
	#define FAUST_INPUTS 2
	#define FAUST_OUTPUTS 2
	#define FAUST_ACTIVES 12
	#define FAUST_PASSIVES 0

	FAUST_ADDHORIZONTALSLIDER("Reverb/[0] Pre-filter/Low Cutoff", fHslider10, 0.0f, 0.0f, 1.0f, 0.01f);
	FAUST_ADDHORIZONTALSLIDER("Reverb/[0] Pre-filter/High Cutoff", fHslider11, 0.789916f, 0.0f, 1.0f, 0.01f);
	FAUST_ADDHORIZONTALSLIDER("Reverb/[1] Filter/Low Shelf", fHslider7, 0.0f, 0.0f, 1.0f, 0.01f);
	FAUST_ADDHORIZONTALSLIDER("Reverb/[1] Filter/Low Gain", fHslider6, 1.0f, 0.0f, 1.0f, 0.01f);
	FAUST_ADDHORIZONTALSLIDER("Reverb/[1] Filter/High Shelf", fHslider5, 0.62184876f, 0.0f, 1.0f, 0.01f);
	FAUST_ADDHORIZONTALSLIDER("Reverb/[1] Filter/High Gain", fHslider4, 0.8333333f, 0.0f, 1.0f, 0.01f);
	FAUST_ADDHORIZONTALSLIDER("Reverb/[2] Chorus/Amount", fHslider2, 0.01f, 0.0f, 1.0f, 0.01f);
	FAUST_ADDHORIZONTALSLIDER("Reverb/[2] Chorus/Rate", fHslider1, 0.1f, 0.0f, 1.0f, 0.01f);
	FAUST_ADDHORIZONTALSLIDER("Reverb/[3] Space/Pre-Delay", fHslider9, 0.0f, 0.0f, 1.0f, 0.01f);
	FAUST_ADDHORIZONTALSLIDER("Reverb/[3] Space/Decay Time", fHslider8, 0.5f, 0.0f, 1.0f, 0.01f);
	FAUST_ADDHORIZONTALSLIDER("Reverb/[3] Space/Size", fHslider3, 0.5f, 0.0f, 1.0f, 0.01f);
	FAUST_ADDHORIZONTALSLIDER("Reverb/Mix", fHslider0, 1.0f, 0.0f, 1.0f, 0.01f);

	#define FAUST_LIST_ACTIVES(p) \
		p(HORIZONTALSLIDER, Low_Cutoff, "Reverb/[0] Pre-filter/Low Cutoff", fHslider10, 0.0f, 0.0f, 1.0f, 0.01f) \
		p(HORIZONTALSLIDER, High_Cutoff, "Reverb/[0] Pre-filter/High Cutoff", fHslider11, 0.789916f, 0.0f, 1.0f, 0.01f) \
		p(HORIZONTALSLIDER, Low_Shelf, "Reverb/[1] Filter/Low Shelf", fHslider7, 0.0f, 0.0f, 1.0f, 0.01f) \
		p(HORIZONTALSLIDER, Low_Gain, "Reverb/[1] Filter/Low Gain", fHslider6, 1.0f, 0.0f, 1.0f, 0.01f) \
		p(HORIZONTALSLIDER, High_Shelf, "Reverb/[1] Filter/High Shelf", fHslider5, 0.62184876f, 0.0f, 1.0f, 0.01f) \
		p(HORIZONTALSLIDER, High_Gain, "Reverb/[1] Filter/High Gain", fHslider4, 0.8333333f, 0.0f, 1.0f, 0.01f) \
		p(HORIZONTALSLIDER, Amount, "Reverb/[2] Chorus/Amount", fHslider2, 0.01f, 0.0f, 1.0f, 0.01f) \
		p(HORIZONTALSLIDER, Rate, "Reverb/[2] Chorus/Rate", fHslider1, 0.1f, 0.0f, 1.0f, 0.01f) \
		p(HORIZONTALSLIDER, Pre-Delay, "Reverb/[3] Space/Pre-Delay", fHslider9, 0.0f, 0.0f, 1.0f, 0.01f) \
		p(HORIZONTALSLIDER, Decay_Time, "Reverb/[3] Space/Decay Time", fHslider8, 0.5f, 0.0f, 1.0f, 0.01f) \
		p(HORIZONTALSLIDER, Size, "Reverb/[3] Space/Size", fHslider3, 0.5f, 0.0f, 1.0f, 0.01f) \
		p(HORIZONTALSLIDER, Mix, "Reverb/Mix", fHslider0, 1.0f, 0.0f, 1.0f, 0.01f) \

	#define FAUST_LIST_PASSIVES(p) \

#endif

#endif
