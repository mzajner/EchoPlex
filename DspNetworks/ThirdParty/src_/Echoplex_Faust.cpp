/* ------------------------------------------------------------
name: "Echoplex_Faust"
Code generated with Faust 2.74.6 (https://faust.grame.fr)
Compilation options: -lang cpp -rui -nvi -ct 1 -cn _Echoplex_Faust -scn ::faust::dsp -es 1 -mcd 16 -mdd 1024 -mdy 33 -uim -single -ftz 0
------------------------------------------------------------ */

#ifndef  ___Echoplex_Faust_H__
#define  ___Echoplex_Faust_H__

#ifndef FAUSTFLOAT
#define FAUSTFLOAT float
#endif 

#include <algorithm>
#include <cmath>
#include <cstdint>
#include <math.h>

#ifndef FAUSTCLASS 
#define FAUSTCLASS _Echoplex_Faust
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

static float _Echoplex_Faust_faustpower2_f(float value) {
	return value * value;
}

class _Echoplex_Faust final : public ::faust::dsp {
	
 public:
	
	int iVec0[2];
	int fSampleRate;
	float fConst0;
	float fConst1;
	float fConst2;
	float fConst3;
	float fConst4;
	float fConst5;
	float fConst6;
	float fConst7;
	float fConst8;
	float fConst9;
	float fConst10;
	float fConst11;
	float fConst12;
	float fConst13;
	float fConst14;
	float fConst15;
	float fConst16;
	float fConst17;
	float fConst18;
	float fConst19;
	float fConst20;
	float fConst21;
	float fConst22;
	float fConst23;
	float fConst24;
	float fConst25;
	float fConst26;
	float fConst27;
	float fConst28;
	float fConst29;
	FAUSTFLOAT fHslider0;
	int IOTA0;
	float fConst30;
	float fConst31;
	float fConst32;
	float fConst33;
	float fConst34;
	float fConst35;
	float fConst36;
	float fConst37;
	float fConst38;
	int iRec10[2];
	FAUSTFLOAT fHslider1;
	float fRec9[3];
	float fConst39;
	float fConst40;
	float fConst41;
	float fRec8[3];
	float fConst42;
	float fConst43;
	float fRec7[3];
	float fConst44;
	float fConst45;
	float fConst46;
	float fRec11[2];
	float fConst47;
	float fConst48;
	float fConst49;
	float fConst50;
	float fConst51;
	float fConst52;
	float fConst53;
	float fConst54;
	float fConst55;
	float fConst56;
	float fConst57;
	float fConst58;
	float fConst59;
	float fRec14[3];
	float fConst60;
	float fConst61;
	float fConst62;
	float fRec13[3];
	float fConst63;
	float fConst64;
	float fRec12[3];
	float fConst65;
	float fConst66;
	float fConst67;
	float fRec15[2];
	FAUSTFLOAT fHslider2;
	float fVec1[512];
	float fConst68;
	float fConst69;
	float fConst70;
	float fConst71;
	float fConst72;
	float fConst73;
	float fConst74;
	float fConst75;
	float fConst76;
	float fConst77;
	float fConst78;
	float fConst79;
	float fConst80;
	float fRec18[3];
	float fConst81;
	float fConst82;
	float fConst83;
	float fRec17[3];
	float fConst84;
	float fConst85;
	float fRec16[3];
	float fConst86;
	float fConst87;
	float fConst88;
	float fRec19[2];
	float fConst89;
	float fConst90;
	float fConst91;
	float fConst92;
	float fConst93;
	float fConst94;
	float fConst95;
	float fConst96;
	float fConst97;
	FAUSTFLOAT fHslider3;
	float fRec22[3];
	float fConst98;
	float fConst99;
	float fConst100;
	float fRec21[3];
	float fConst101;
	float fConst102;
	float fRec20[3];
	float fConst103;
	float fConst104;
	FAUSTFLOAT fHslider4;
	float fConst105;
	float fRec23[2];
	float fConst106;
	float fConst107;
	float fConst108;
	float fConst109;
	float fConst110;
	float fConst111;
	float fConst112;
	float fRec25[3];
	float fConst113;
	float fConst114;
	float fConst115;
	float fVec2[2];
	float fConst116;
	float fConst117;
	float fRec24[2];
	FAUSTFLOAT fHslider5;
	float fConst118;
	float fVec3[16384];
	FAUSTFLOAT fHslider6;
	float fRec6[65536];
	float fRec5[3];
	float fConst119;
	float fRec4[3];
	float fVec4[2];
	float fConst120;
	float fRec3[2];
	float fRec2[3];
	FAUSTFLOAT fHslider7;
	float fConst121;
	float fRec27[2];
	float fRec26[3];
	float fVec5[2];
	float fConst122;
	float fConst123;
	float fConst124;
	float fRec1[2];
	float fRec0[3];
	FAUSTFLOAT fHslider8;
	float fRec29[2];
	float fRec28[3];
	FAUSTFLOAT fHslider9;
	float fRec36[65536];
	float fRec35[3];
	float fRec34[3];
	float fVec6[2];
	float fRec33[2];
	float fRec32[3];
	float fRec38[2];
	float fRec37[3];
	float fVec7[2];
	float fRec31[2];
	float fRec30[3];
	float fRec40[2];
	float fRec39[3];
	
 public:
	_Echoplex_Faust() {
	}
	
	void metadata(Meta* m) { 
		m->declare("analyzers.lib/name", "Faust Analyzer Library");
		m->declare("analyzers.lib/version", "1.2.0");
		m->declare("basics.lib/name", "Faust Basic Element Library");
		m->declare("basics.lib/tabulateNd", "Copyright (C) 2023 Bart Brouns <bart@magnetophon.nl>");
		m->declare("basics.lib/version", "1.18.0");
		m->declare("compile_options", "-lang cpp -rui -nvi -ct 1 -cn _Echoplex_Faust -scn ::faust::dsp -es 1 -mcd 16 -mdd 1024 -mdy 33 -uim -single -ftz 0");
		m->declare("filename", "Echoplex_Faust.dsp");
		m->declare("filters.lib/filterbank:author", "Julius O. Smith III");
		m->declare("filters.lib/filterbank:copyright", "Copyright (C) 2003-2019 by Julius O. Smith III <jos@ccrma.stanford.edu>");
		m->declare("filters.lib/filterbank:license", "MIT-style STK-4.3 license");
		m->declare("filters.lib/fir:author", "Julius O. Smith III");
		m->declare("filters.lib/fir:copyright", "Copyright (C) 2003-2019 by Julius O. Smith III <jos@ccrma.stanford.edu>");
		m->declare("filters.lib/fir:license", "MIT-style STK-4.3 license");
		m->declare("filters.lib/highpass:author", "Julius O. Smith III");
		m->declare("filters.lib/highpass:copyright", "Copyright (C) 2003-2019 by Julius O. Smith III <jos@ccrma.stanford.edu>");
		m->declare("filters.lib/highshelf:author", "Julius O. Smith III");
		m->declare("filters.lib/highshelf:copyright", "Copyright (C) 2003-2019 by Julius O. Smith III <jos@ccrma.stanford.edu>");
		m->declare("filters.lib/highshelf:license", "MIT-style STK-4.3 license");
		m->declare("filters.lib/iir:author", "Julius O. Smith III");
		m->declare("filters.lib/iir:copyright", "Copyright (C) 2003-2019 by Julius O. Smith III <jos@ccrma.stanford.edu>");
		m->declare("filters.lib/iir:license", "MIT-style STK-4.3 license");
		m->declare("filters.lib/low_shelf:author", "Julius O. Smith III");
		m->declare("filters.lib/low_shelf:copyright", "Copyright (C) 2003-2019 by Julius O. Smith III <jos@ccrma.stanford.edu>");
		m->declare("filters.lib/low_shelf:license", "MIT-style STK-4.3 license");
		m->declare("filters.lib/lowpass0_highpass1", "MIT-style STK-4.3 license");
		m->declare("filters.lib/lowpass0_highpass1:author", "Julius O. Smith III");
		m->declare("filters.lib/lowpass3e:author", "Julius O. Smith III");
		m->declare("filters.lib/lowpass3e:copyright", "Copyright (C) 2003-2019 by Julius O. Smith III <jos@ccrma.stanford.edu>");
		m->declare("filters.lib/lowpass3e:license", "MIT-style STK-4.3 license");
		m->declare("filters.lib/lowpass6e:author", "Julius O. Smith III");
		m->declare("filters.lib/lowpass6e:copyright", "Copyright (C) 2003-2019 by Julius O. Smith III <jos@ccrma.stanford.edu>");
		m->declare("filters.lib/lowpass6e:license", "MIT-style STK-4.3 license");
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
		m->declare("filters.lib/tf2:author", "Julius O. Smith III");
		m->declare("filters.lib/tf2:copyright", "Copyright (C) 2003-2019 by Julius O. Smith III <jos@ccrma.stanford.edu>");
		m->declare("filters.lib/tf2:license", "MIT-style STK-4.3 license");
		m->declare("filters.lib/tf2s:author", "Julius O. Smith III");
		m->declare("filters.lib/tf2s:copyright", "Copyright (C) 2003-2019 by Julius O. Smith III <jos@ccrma.stanford.edu>");
		m->declare("filters.lib/tf2s:license", "MIT-style STK-4.3 license");
		m->declare("filters.lib/version", "1.3.0");
		m->declare("maths.lib/author", "GRAME");
		m->declare("maths.lib/copyright", "GRAME");
		m->declare("maths.lib/license", "LGPL with exception");
		m->declare("maths.lib/name", "Faust Math Library");
		m->declare("maths.lib/version", "2.8.0");
		m->declare("name", "Echoplex_Faust");
		m->declare("noises.lib/name", "Faust Noise Generator Library");
		m->declare("noises.lib/version", "1.4.1");
		m->declare("oscillators.lib/lf_sawpos:author", "Bart Brouns, revised by Stéphane Letz");
		m->declare("oscillators.lib/lf_sawpos:licence", "STK-4.3");
		m->declare("oscillators.lib/name", "Faust Oscillator Library");
		m->declare("oscillators.lib/saw1:author", "Bart Brouns");
		m->declare("oscillators.lib/saw1:licence", "STK-4.3");
		m->declare("oscillators.lib/version", "1.5.1");
		m->declare("platform.lib/name", "Generic Platform Library");
		m->declare("platform.lib/version", "1.3.0");
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
	}
	
	void instanceConstants(int sample_rate) {
		fSampleRate = sample_rate;
		fConst0 = std::min<float>(1.92e+05f, std::max<float>(1.0f, float(fSampleRate)));
		fConst1 = std::tan(15707.963f / fConst0);
		fConst2 = 1.0f / _Echoplex_Faust_faustpower2_f(fConst1);
		fConst3 = 2.0f * (1.0f - fConst2);
		fConst4 = 1.0f / fConst1;
		fConst5 = (fConst4 + -1.0f) / fConst1 + 1.0f;
		fConst6 = 1.0f / ((fConst4 + 1.0f) / fConst1 + 1.0f);
		fConst7 = std::tan(628.31854f / fConst0);
		fConst8 = _Echoplex_Faust_faustpower2_f(fConst7);
		fConst9 = 1.0f / fConst8;
		fConst10 = 2.0f * (1.0f - fConst9);
		fConst11 = 1.0f / fConst7;
		fConst12 = (fConst11 + -1.0f) / fConst7 + 1.0f;
		fConst13 = (fConst11 + 1.0f) / fConst7 + 1.0f;
		fConst14 = 1.0f / fConst13;
		fConst15 = 1.0f - fConst11;
		fConst16 = std::tan(21991.148f / fConst0);
		fConst17 = 2.0f * (1.0f - 1.0f / _Echoplex_Faust_faustpower2_f(fConst16));
		fConst18 = 1.0f / fConst16;
		fConst19 = (fConst18 + -1.4142135f) / fConst16 + 1.0f;
		fConst20 = (fConst18 + 1.4142135f) / fConst16 + 1.0f;
		fConst21 = 1.0f / fConst20;
		fConst22 = std::tan(62.831852f / fConst0);
		fConst23 = _Echoplex_Faust_faustpower2_f(fConst22);
		fConst24 = 1.0f / fConst23;
		fConst25 = 2.0f * (1.0f - fConst24);
		fConst26 = 1.0f / fConst22;
		fConst27 = (fConst26 + -1.4142135f) / fConst22 + 1.0f;
		fConst28 = (fConst26 + 1.4142135f) / fConst22 + 1.0f;
		fConst29 = 1.0f / fConst28;
		fConst30 = 2.0f * (1.0693583f - fConst24);
		fConst31 = (fConst26 + -0.16840488f) / fConst22 + 1.0693583f;
		fConst32 = 1.0f / ((fConst26 + 0.16840488f) / fConst22 + 1.0693583f);
		fConst33 = 2.0f * (0.6896214f - fConst24);
		fConst34 = (fConst26 + -0.51247865f) / fConst22 + 0.6896214f;
		fConst35 = 1.0f / ((fConst26 + 0.51247865f) / fConst22 + 0.6896214f);
		fConst36 = 2.0f * (0.2452915f - fConst24);
		fConst37 = (fConst26 + -0.78241307f) / fConst22 + 0.2452915f;
		fConst38 = 1.0f / ((fConst26 + 0.78241307f) / fConst22 + 0.2452915f);
		fConst39 = 0.0001f / fConst23;
		fConst40 = fConst39 + 0.0004332272f;
		fConst41 = 2.0f * (0.0004332272f - fConst39);
		fConst42 = fConst24 + 7.6217313f;
		fConst43 = 2.0f * (7.6217313f - fConst24);
		fConst44 = fConst24 + 53.53615f;
		fConst45 = 2.0f * (53.53615f - fConst24);
		fConst46 = 2.5f / fConst0;
		fConst47 = std::tan(109.95574f / fConst0);
		fConst48 = _Echoplex_Faust_faustpower2_f(fConst47);
		fConst49 = 1.0f / fConst48;
		fConst50 = 2.0f * (1.0693583f - fConst49);
		fConst51 = 1.0f / fConst47;
		fConst52 = (fConst51 + -0.16840488f) / fConst47 + 1.0693583f;
		fConst53 = 1.0f / ((fConst51 + 0.16840488f) / fConst47 + 1.0693583f);
		fConst54 = 2.0f * (0.6896214f - fConst49);
		fConst55 = (fConst51 + -0.51247865f) / fConst47 + 0.6896214f;
		fConst56 = 1.0f / ((fConst51 + 0.51247865f) / fConst47 + 0.6896214f);
		fConst57 = 2.0f * (0.2452915f - fConst49);
		fConst58 = (fConst51 + -0.78241307f) / fConst47 + 0.2452915f;
		fConst59 = 1.0f / ((fConst51 + 0.78241307f) / fConst47 + 0.2452915f);
		fConst60 = 0.0001f / fConst48;
		fConst61 = fConst60 + 0.0004332272f;
		fConst62 = 2.0f * (0.0004332272f - fConst60);
		fConst63 = fConst49 + 7.6217313f;
		fConst64 = 2.0f * (7.6217313f - fConst49);
		fConst65 = fConst49 + 53.53615f;
		fConst66 = 2.0f * (53.53615f - fConst49);
		fConst67 = 5.0f / fConst0;
		fConst68 = std::tan(314.15927f / fConst0);
		fConst69 = _Echoplex_Faust_faustpower2_f(fConst68);
		fConst70 = 1.0f / fConst69;
		fConst71 = 2.0f * (1.0693583f - fConst70);
		fConst72 = 1.0f / fConst68;
		fConst73 = (fConst72 + -0.16840488f) / fConst68 + 1.0693583f;
		fConst74 = 1.0f / ((fConst72 + 0.16840488f) / fConst68 + 1.0693583f);
		fConst75 = 2.0f * (0.6896214f - fConst70);
		fConst76 = (fConst72 + -0.51247865f) / fConst68 + 0.6896214f;
		fConst77 = 1.0f / ((fConst72 + 0.51247865f) / fConst68 + 0.6896214f);
		fConst78 = 2.0f * (0.2452915f - fConst70);
		fConst79 = (fConst72 + -0.78241307f) / fConst68 + 0.2452915f;
		fConst80 = 1.0f / ((fConst72 + 0.78241307f) / fConst68 + 0.2452915f);
		fConst81 = 0.0001f / fConst69;
		fConst82 = fConst81 + 0.0004332272f;
		fConst83 = 2.0f * (0.0004332272f - fConst81);
		fConst84 = fConst70 + 7.6217313f;
		fConst85 = 2.0f * (7.6217313f - fConst70);
		fConst86 = fConst70 + 53.53615f;
		fConst87 = 2.0f * (53.53615f - fConst70);
		fConst88 = 26.0f / fConst0;
		fConst89 = 2.0f * (1.0693583f - fConst9);
		fConst90 = (fConst11 + -0.16840488f) / fConst7 + 1.0693583f;
		fConst91 = 1.0f / ((fConst11 + 0.16840488f) / fConst7 + 1.0693583f);
		fConst92 = 2.0f * (0.6896214f - fConst9);
		fConst93 = (fConst11 + -0.51247865f) / fConst7 + 0.6896214f;
		fConst94 = 1.0f / ((fConst11 + 0.51247865f) / fConst7 + 0.6896214f);
		fConst95 = 2.0f * (0.2452915f - fConst9);
		fConst96 = (fConst11 + -0.78241307f) / fConst7 + 0.2452915f;
		fConst97 = 1.0f / ((fConst11 + 0.78241307f) / fConst7 + 0.2452915f);
		fConst98 = 0.0001f / fConst8;
		fConst99 = fConst98 + 0.0004332272f;
		fConst100 = 2.0f * (0.0004332272f - fConst98);
		fConst101 = fConst9 + 7.6217313f;
		fConst102 = 2.0f * (7.6217313f - fConst9);
		fConst103 = fConst9 + 53.53615f;
		fConst104 = 2.0f * (53.53615f - fConst9);
		fConst105 = 1.0f / fConst0;
		fConst106 = std::tan(219.91148f / fConst0);
		fConst107 = _Echoplex_Faust_faustpower2_f(fConst106);
		fConst108 = 2.0f * (1.4122709f - 1.0f / fConst107);
		fConst109 = 1.0f / fConst106;
		fConst110 = (fConst109 + -0.80263674f) / fConst106 + 1.4122709f;
		fConst111 = 1.0f / ((fConst109 + 0.80263674f) / fConst106 + 1.4122709f);
		fConst112 = 3.4924598e-16f * fConst0;
		fConst113 = 0.019809145f / fConst107;
		fConst114 = fConst113 + 1.1615164f;
		fConst115 = 2.0f * (1.1615164f - fConst113);
		fConst116 = 0.8224459f - fConst109;
		fConst117 = 1.0f / (fConst109 + 0.8224459f);
		fConst118 = 2e-06f * fConst0;
		fConst119 = 1.0f / (fConst23 * fConst28);
		fConst120 = 1.0f / (fConst11 + 1.0f);
		fConst121 = 1.0f / (fConst7 * fConst20);
		fConst122 = 1.0f / (fConst1 * fConst13);
		fConst123 = 1.0f - fConst4;
		fConst124 = 1.0f / (fConst4 + 1.0f);
	}
	
	void instanceResetUserInterface() {
		fHslider0 = FAUSTFLOAT(0.8f);
		fHslider1 = FAUSTFLOAT(1.0f);
		fHslider2 = FAUSTFLOAT(3e+02f);
		fHslider3 = FAUSTFLOAT(0.01f);
		fHslider4 = FAUSTFLOAT(15.0f);
		fHslider5 = FAUSTFLOAT(0.5f);
		fHslider6 = FAUSTFLOAT(0.5f);
		fHslider7 = FAUSTFLOAT(0.0f);
		fHslider8 = FAUSTFLOAT(0.0f);
		fHslider9 = FAUSTFLOAT(1.0f);
	}
	
	void instanceClear() {
		for (int l0 = 0; l0 < 2; l0 = l0 + 1) {
			iVec0[l0] = 0;
		}
		IOTA0 = 0;
		for (int l1 = 0; l1 < 2; l1 = l1 + 1) {
			iRec10[l1] = 0;
		}
		for (int l2 = 0; l2 < 3; l2 = l2 + 1) {
			fRec9[l2] = 0.0f;
		}
		for (int l3 = 0; l3 < 3; l3 = l3 + 1) {
			fRec8[l3] = 0.0f;
		}
		for (int l4 = 0; l4 < 3; l4 = l4 + 1) {
			fRec7[l4] = 0.0f;
		}
		for (int l5 = 0; l5 < 2; l5 = l5 + 1) {
			fRec11[l5] = 0.0f;
		}
		for (int l6 = 0; l6 < 3; l6 = l6 + 1) {
			fRec14[l6] = 0.0f;
		}
		for (int l7 = 0; l7 < 3; l7 = l7 + 1) {
			fRec13[l7] = 0.0f;
		}
		for (int l8 = 0; l8 < 3; l8 = l8 + 1) {
			fRec12[l8] = 0.0f;
		}
		for (int l9 = 0; l9 < 2; l9 = l9 + 1) {
			fRec15[l9] = 0.0f;
		}
		for (int l10 = 0; l10 < 512; l10 = l10 + 1) {
			fVec1[l10] = 0.0f;
		}
		for (int l11 = 0; l11 < 3; l11 = l11 + 1) {
			fRec18[l11] = 0.0f;
		}
		for (int l12 = 0; l12 < 3; l12 = l12 + 1) {
			fRec17[l12] = 0.0f;
		}
		for (int l13 = 0; l13 < 3; l13 = l13 + 1) {
			fRec16[l13] = 0.0f;
		}
		for (int l14 = 0; l14 < 2; l14 = l14 + 1) {
			fRec19[l14] = 0.0f;
		}
		for (int l15 = 0; l15 < 3; l15 = l15 + 1) {
			fRec22[l15] = 0.0f;
		}
		for (int l16 = 0; l16 < 3; l16 = l16 + 1) {
			fRec21[l16] = 0.0f;
		}
		for (int l17 = 0; l17 < 3; l17 = l17 + 1) {
			fRec20[l17] = 0.0f;
		}
		for (int l18 = 0; l18 < 2; l18 = l18 + 1) {
			fRec23[l18] = 0.0f;
		}
		for (int l19 = 0; l19 < 3; l19 = l19 + 1) {
			fRec25[l19] = 0.0f;
		}
		for (int l20 = 0; l20 < 2; l20 = l20 + 1) {
			fVec2[l20] = 0.0f;
		}
		for (int l21 = 0; l21 < 2; l21 = l21 + 1) {
			fRec24[l21] = 0.0f;
		}
		for (int l22 = 0; l22 < 16384; l22 = l22 + 1) {
			fVec3[l22] = 0.0f;
		}
		for (int l23 = 0; l23 < 65536; l23 = l23 + 1) {
			fRec6[l23] = 0.0f;
		}
		for (int l24 = 0; l24 < 3; l24 = l24 + 1) {
			fRec5[l24] = 0.0f;
		}
		for (int l25 = 0; l25 < 3; l25 = l25 + 1) {
			fRec4[l25] = 0.0f;
		}
		for (int l26 = 0; l26 < 2; l26 = l26 + 1) {
			fVec4[l26] = 0.0f;
		}
		for (int l27 = 0; l27 < 2; l27 = l27 + 1) {
			fRec3[l27] = 0.0f;
		}
		for (int l28 = 0; l28 < 3; l28 = l28 + 1) {
			fRec2[l28] = 0.0f;
		}
		for (int l29 = 0; l29 < 2; l29 = l29 + 1) {
			fRec27[l29] = 0.0f;
		}
		for (int l30 = 0; l30 < 3; l30 = l30 + 1) {
			fRec26[l30] = 0.0f;
		}
		for (int l31 = 0; l31 < 2; l31 = l31 + 1) {
			fVec5[l31] = 0.0f;
		}
		for (int l32 = 0; l32 < 2; l32 = l32 + 1) {
			fRec1[l32] = 0.0f;
		}
		for (int l33 = 0; l33 < 3; l33 = l33 + 1) {
			fRec0[l33] = 0.0f;
		}
		for (int l34 = 0; l34 < 2; l34 = l34 + 1) {
			fRec29[l34] = 0.0f;
		}
		for (int l35 = 0; l35 < 3; l35 = l35 + 1) {
			fRec28[l35] = 0.0f;
		}
		for (int l36 = 0; l36 < 65536; l36 = l36 + 1) {
			fRec36[l36] = 0.0f;
		}
		for (int l37 = 0; l37 < 3; l37 = l37 + 1) {
			fRec35[l37] = 0.0f;
		}
		for (int l38 = 0; l38 < 3; l38 = l38 + 1) {
			fRec34[l38] = 0.0f;
		}
		for (int l39 = 0; l39 < 2; l39 = l39 + 1) {
			fVec6[l39] = 0.0f;
		}
		for (int l40 = 0; l40 < 2; l40 = l40 + 1) {
			fRec33[l40] = 0.0f;
		}
		for (int l41 = 0; l41 < 3; l41 = l41 + 1) {
			fRec32[l41] = 0.0f;
		}
		for (int l42 = 0; l42 < 2; l42 = l42 + 1) {
			fRec38[l42] = 0.0f;
		}
		for (int l43 = 0; l43 < 3; l43 = l43 + 1) {
			fRec37[l43] = 0.0f;
		}
		for (int l44 = 0; l44 < 2; l44 = l44 + 1) {
			fVec7[l44] = 0.0f;
		}
		for (int l45 = 0; l45 < 2; l45 = l45 + 1) {
			fRec31[l45] = 0.0f;
		}
		for (int l46 = 0; l46 < 3; l46 = l46 + 1) {
			fRec30[l46] = 0.0f;
		}
		for (int l47 = 0; l47 < 2; l47 = l47 + 1) {
			fRec40[l47] = 0.0f;
		}
		for (int l48 = 0; l48 < 3; l48 = l48 + 1) {
			fRec39[l48] = 0.0f;
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
	
	_Echoplex_Faust* clone() {
		return new _Echoplex_Faust();
	}
	
	int getSampleRate() {
		return fSampleRate;
	}
	
	void buildUserInterface(UI* ui_interface) {
		ui_interface->openVerticalBox("Echoplex_Faust");
		ui_interface->addHorizontalSlider("BassGain", &fHslider7, FAUSTFLOAT(0.0f), FAUSTFLOAT(-12.0f), FAUSTFLOAT(12.0f), FAUSTFLOAT(0.1f));
		ui_interface->addHorizontalSlider("Delay", &fHslider2, FAUSTFLOAT(3e+02f), FAUSTFLOAT(1.0f), FAUSTFLOAT(1e+03f), FAUSTFLOAT(1.0f));
		ui_interface->addHorizontalSlider("DriftIntensity", &fHslider1, FAUSTFLOAT(1.0f), FAUSTFLOAT(0.0f), FAUSTFLOAT(1e+01f), FAUSTFLOAT(0.1f));
		ui_interface->addHorizontalSlider("FlutterDepth", &fHslider3, FAUSTFLOAT(0.01f), FAUSTFLOAT(0.0f), FAUSTFLOAT(1.0f), FAUSTFLOAT(0.01f));
		ui_interface->addHorizontalSlider("FlutterHz", &fHslider4, FAUSTFLOAT(15.0f), FAUSTFLOAT(1e+01f), FAUSTFLOAT(3e+01f), FAUSTFLOAT(0.1f));
		ui_interface->addHorizontalSlider("Input", &fHslider0, FAUSTFLOAT(0.8f), FAUSTFLOAT(0.0f), FAUSTFLOAT(1.0f), FAUSTFLOAT(0.01f));
		ui_interface->addHorizontalSlider("Output", &fHslider9, FAUSTFLOAT(1.0f), FAUSTFLOAT(0.0f), FAUSTFLOAT(2.0f), FAUSTFLOAT(0.01f));
		ui_interface->addHorizontalSlider("Repeats", &fHslider6, FAUSTFLOAT(0.5f), FAUSTFLOAT(0.0f), FAUSTFLOAT(2.0f), FAUSTFLOAT(0.01f));
		ui_interface->addHorizontalSlider("TrebleGain", &fHslider8, FAUSTFLOAT(0.0f), FAUSTFLOAT(-12.0f), FAUSTFLOAT(12.0f), FAUSTFLOAT(0.1f));
		ui_interface->addHorizontalSlider("WowDepth", &fHslider5, FAUSTFLOAT(0.5f), FAUSTFLOAT(0.0f), FAUSTFLOAT(1.0f), FAUSTFLOAT(0.01f));
		ui_interface->closeBox();
	}
	
	void compute(int count, FAUSTFLOAT** RESTRICT inputs, FAUSTFLOAT** RESTRICT outputs) {
		FAUSTFLOAT* input0 = inputs[0];
		FAUSTFLOAT* input1 = inputs[1];
		FAUSTFLOAT* output0 = outputs[0];
		FAUSTFLOAT* output1 = outputs[1];
		float fSlow0 = std::max<float>(0.0f, std::min<float>(1.0f, float(fHslider0)));
		float fSlow1 = std::max<float>(0.0f, std::min<float>(1e+01f, float(fHslider1)));
		float fSlow2 = 1.3969839e-09f * fSlow1;
		float fSlow3 = 9.313226e-10f * fSlow1;
		float fSlow4 = std::max<float>(1.0f, std::min<float>(1e+03f, float(fHslider2)));
		float fSlow5 = 4.656613e-10f * fSlow1;
		float fSlow6 = std::max<float>(0.0f, std::min<float>(1.0f, float(fHslider3)));
		float fSlow7 = 4.6566128e-14f * fSlow6;
		float fSlow8 = fConst105 * std::max<float>(1e+01f, std::min<float>(3e+01f, float(fHslider4)));
		float fSlow9 = 0.0001f * fSlow6;
		float fSlow10 = fConst112 * fSlow4 * fSlow1;
		float fSlow11 = 0.75f * std::max<float>(0.0f, std::min<float>(1.0f, float(fHslider5)));
		int iSlow12 = int(8.8f * fSlow4 + 3.2e+03f);
		float fSlow13 = std::max<float>(0.0f, std::min<float>(2.0f, float(fHslider6)));
		float fSlow14 = std::pow(1e+01f, 0.05f * std::max<float>(-12.0f, std::min<float>(12.0f, float(fHslider7))));
		float fSlow15 = fConst2 * std::pow(1e+01f, 0.05f * std::max<float>(-12.0f, std::min<float>(12.0f, float(fHslider8))));
		float fSlow16 = fConst6 * std::max<float>(0.0f, std::min<float>(2.0f, float(fHslider9)));
		for (int i0 = 0; i0 < count; i0 = i0 + 1) {
			iVec0[0] = 1;
			iRec10[0] = 1103515245 * iRec10[1] + 12345;
			float fTemp0 = float(iRec10[0]);
			fRec9[0] = fSlow2 * fTemp0 - fConst38 * (fConst37 * fRec9[2] + fConst36 * fRec9[1]);
			fRec8[0] = fConst38 * (fConst40 * fRec9[0] + fConst41 * fRec9[1] + fConst40 * fRec9[2]) - fConst35 * (fConst34 * fRec8[2] + fConst33 * fRec8[1]);
			fRec7[0] = fConst35 * (fConst42 * fRec8[0] + fConst43 * fRec8[1] + fConst42 * fRec8[2]) - fConst32 * (fConst31 * fRec7[2] + fConst30 * fRec7[1]);
			int iTemp1 = 1 - iVec0[1];
			float fTemp2 = ((iTemp1) ? 0.0f : fConst46 + fRec11[1]);
			fRec11[0] = fTemp2 - std::floor(fTemp2);
			fRec14[0] = fSlow3 * fTemp0 - fConst59 * (fConst58 * fRec14[2] + fConst57 * fRec14[1]);
			fRec13[0] = fConst59 * (fConst61 * fRec14[0] + fConst62 * fRec14[1] + fConst61 * fRec14[2]) - fConst56 * (fConst55 * fRec13[2] + fConst54 * fRec13[1]);
			fRec12[0] = fConst56 * (fConst63 * fRec13[0] + fConst64 * fRec13[1] + fConst63 * fRec13[2]) - fConst53 * (fConst52 * fRec12[2] + fConst50 * fRec12[1]);
			float fTemp3 = ((iTemp1) ? 0.0f : fConst67 + fRec15[1]);
			fRec15[0] = fTemp3 - std::floor(fTemp3);
			fVec1[IOTA0 & 511] = fSlow4;
			fRec18[0] = fSlow5 * fTemp0 - fConst80 * (fConst79 * fRec18[2] + fConst78 * fRec18[1]);
			fRec17[0] = fConst80 * (fConst82 * fRec18[0] + fConst83 * fRec18[1] + fConst82 * fRec18[2]) - fConst77 * (fConst76 * fRec17[2] + fConst75 * fRec17[1]);
			fRec16[0] = fConst77 * (fConst84 * fRec17[0] + fConst85 * fRec17[1] + fConst84 * fRec17[2]) - fConst74 * (fConst73 * fRec16[2] + fConst71 * fRec16[1]);
			float fTemp4 = ((iTemp1) ? 0.0f : fConst88 + fRec19[1]);
			fRec19[0] = fTemp4 - std::floor(fTemp4);
			fRec22[0] = fSlow7 * fTemp0 - fConst97 * (fConst96 * fRec22[2] + fConst95 * fRec22[1]);
			fRec21[0] = fConst97 * (fConst99 * fRec22[0] + fConst100 * fRec22[1] + fConst99 * fRec22[2]) - fConst94 * (fConst93 * fRec21[2] + fConst92 * fRec21[1]);
			fRec20[0] = fConst94 * (fConst101 * fRec21[0] + fConst102 * fRec21[1] + fConst101 * fRec21[2]) - fConst91 * (fConst90 * fRec20[2] + fConst89 * fRec20[1]);
			float fTemp5 = ((iTemp1) ? 0.0f : fSlow8 + fRec23[1]);
			fRec23[0] = fTemp5 - std::floor(fTemp5);
			fRec25[0] = fSlow10 * fTemp0 - fConst111 * (fConst110 * fRec25[2] + fConst108 * fRec25[1]);
			float fTemp6 = fConst114 * fRec25[0] + fConst115 * fRec25[1] + fConst114 * fRec25[2];
			fVec2[0] = fTemp6;
			fRec24[0] = -(fConst117 * (fConst116 * fRec24[1] - fConst111 * (fTemp6 + fVec2[1])));
			float fTemp7 = fConst118 * (fSlow4 + fVec1[(IOTA0 - 499) & 511] + fVec1[(IOTA0 - 496) & 511] + fVec1[(IOTA0 - 498) & 511] + fVec1[(IOTA0 - 497) & 511] + fVec1[(IOTA0 - 490) & 511] + fVec1[(IOTA0 - 488) & 511] + fVec1[(IOTA0 - 493) & 511] + fVec1[(IOTA0 - 494) & 511] + fVec1[(IOTA0 - 495) & 511] + fVec1[(IOTA0 - 492) & 511] + fVec1[(IOTA0 - 491) & 511] + fVec1[(IOTA0 - 489) & 511] + fVec1[(IOTA0 - 487) & 511] + fVec1[(IOTA0 - 480) & 511] + fVec1[(IOTA0 - 483) & 511] + fVec1[(IOTA0 - 485) & 511] + fVec1[(IOTA0 - 481) & 511] + fVec1[(IOTA0 - 486) & 511] + fVec1[(IOTA0 - 482) & 511] + fVec1[(IOTA0 - 484) & 511] + fVec1[(IOTA0 - 474) & 511] + fVec1[(IOTA0 - 473) & 511] + fVec1[(IOTA0 - 477) & 511] + fVec1[(IOTA0 - 478) & 511] + fVec1[(IOTA0 - 479) & 511] + fVec1[(IOTA0 - 476) & 511] + fVec1[(IOTA0 - 472) & 511] + fVec1[(IOTA0 - 475) & 511] + fVec1[(IOTA0 - 471) & 511] + fVec1[(IOTA0 - 464) & 511] + fVec1[(IOTA0 - 467) & 511] + fVec1[(IOTA0 - 465) & 511] + fVec1[(IOTA0 - 470) & 511] + fVec1[(IOTA0 - 468) & 511] + fVec1[(IOTA0 - 466) & 511] + fVec1[(IOTA0 - 469) & 511] + fVec1[(IOTA0 - 457) & 511] + fVec1[(IOTA0 - 463) & 511] + fVec1[(IOTA0 - 460) & 511] + fVec1[(IOTA0 - 461) & 511] + fVec1[(IOTA0 - 459) & 511] + fVec1[(IOTA0 - 458) & 511] + fVec1[(IOTA0 - 456) & 511] + fVec1[(IOTA0 - 462) & 511] + fVec1[(IOTA0 - 454) & 511] + fVec1[(IOTA0 - 448) & 511] + fVec1[(IOTA0 - 455) & 511] + fVec1[(IOTA0 - 450) & 511] + fVec1[(IOTA0 - 449) & 511] + fVec1[(IOTA0 - 453) & 511] + fVec1[(IOTA0 - 452) & 511] + fVec1[(IOTA0 - 451) & 511] + fVec1[(IOTA0 - 441) & 511] + fVec1[(IOTA0 - 444) & 511] + fVec1[(IOTA0 - 443) & 511] + fVec1[(IOTA0 - 445) & 511] + fVec1[(IOTA0 - 447) & 511] + fVec1[(IOTA0 - 442) & 511] + fVec1[(IOTA0 - 446) & 511] + fVec1[(IOTA0 - 440) & 511] + fVec1[(IOTA0 - 437) & 511] + fVec1[(IOTA0 - 435) & 511] + fVec1[(IOTA0 - 434) & 511] + fVec1[(IOTA0 - 436) & 511] + fVec1[(IOTA0 - 438) & 511] + fVec1[(IOTA0 - 433) & 511] + fVec1[(IOTA0 - 432) & 511] + fVec1[(IOTA0 - 439) & 511] + fVec1[(IOTA0 - 427) & 511] + fVec1[(IOTA0 - 425) & 511] + fVec1[(IOTA0 - 429) & 511] + fVec1[(IOTA0 - 424) & 511] + fVec1[(IOTA0 - 426) & 511] + fVec1[(IOTA0 - 431) & 511] + fVec1[(IOTA0 - 430) & 511] + fVec1[(IOTA0 - 428) & 511] + fVec1[(IOTA0 - 421) & 511] + fVec1[(IOTA0 - 418) & 511] + fVec1[(IOTA0 - 423) & 511] + fVec1[(IOTA0 - 417) & 511] + fVec1[(IOTA0 - 420) & 511] + fVec1[(IOTA0 - 422) & 511] + fVec1[(IOTA0 - 416) & 511] + fVec1[(IOTA0 - 419) & 511] + fVec1[(IOTA0 - 413) & 511] + fVec1[(IOTA0 - 408) & 511] + fVec1[(IOTA0 - 414) & 511] + fVec1[(IOTA0 - 412) & 511] + fVec1[(IOTA0 - 410) & 511] + fVec1[(IOTA0 - 409) & 511] + fVec1[(IOTA0 - 415) & 511] + fVec1[(IOTA0 - 411) & 511] + fVec1[(IOTA0 - 401) & 511] + fVec1[(IOTA0 - 407) & 511] + fVec1[(IOTA0 - 405) & 511] + fVec1[(IOTA0 - 406) & 511] + fVec1[(IOTA0 - 402) & 511] + fVec1[(IOTA0 - 404) & 511] + fVec1[(IOTA0 - 403) & 511] + fVec1[(IOTA0 - 400) & 511] + fVec1[(IOTA0 - 392) & 511] + fVec1[(IOTA0 - 396) & 511] + fVec1[(IOTA0 - 395) & 511] + fVec1[(IOTA0 - 394) & 511] + fVec1[(IOTA0 - 399) & 511] + fVec1[(IOTA0 - 398) & 511] + fVec1[(IOTA0 - 393) & 511] + fVec1[(IOTA0 - 397) & 511] + fVec1[(IOTA0 - 388) & 511] + fVec1[(IOTA0 - 384) & 511] + fVec1[(IOTA0 - 389) & 511] + fVec1[(IOTA0 - 387) & 511] + fVec1[(IOTA0 - 385) & 511] + fVec1[(IOTA0 - 386) & 511] + fVec1[(IOTA0 - 391) & 511] + fVec1[(IOTA0 - 390) & 511] + fVec1[(IOTA0 - 379) & 511] + fVec1[(IOTA0 - 378) & 511] + fVec1[(IOTA0 - 377) & 511] + fVec1[(IOTA0 - 376) & 511] + fVec1[(IOTA0 - 382) & 511] + fVec1[(IOTA0 - 381) & 511] + fVec1[(IOTA0 - 380) & 511] + fVec1[(IOTA0 - 383) & 511] + fVec1[(IOTA0 - 370) & 511] + fVec1[(IOTA0 - 374) & 511] + fVec1[(IOTA0 - 375) & 511] + fVec1[(IOTA0 - 371) & 511] + fVec1[(IOTA0 - 369) & 511] + fVec1[(IOTA0 - 373) & 511] + fVec1[(IOTA0 - 368) & 511] + fVec1[(IOTA0 - 372) & 511] + fVec1[(IOTA0 - 366) & 511] + fVec1[(IOTA0 - 364) & 511] + fVec1[(IOTA0 - 360) & 511] + fVec1[(IOTA0 - 361) & 511] + fVec1[(IOTA0 - 362) & 511] + fVec1[(IOTA0 - 367) & 511] + fVec1[(IOTA0 - 365) & 511] + fVec1[(IOTA0 - 363) & 511] + fVec1[(IOTA0 - 352) & 511] + fVec1[(IOTA0 - 353) & 511] + fVec1[(IOTA0 - 359) & 511] + fVec1[(IOTA0 - 358) & 511] + fVec1[(IOTA0 - 357) & 511] + fVec1[(IOTA0 - 354) & 511] + fVec1[(IOTA0 - 356) & 511] + fVec1[(IOTA0 - 355) & 511] + fVec1[(IOTA0 - 348) & 511] + fVec1[(IOTA0 - 350) & 511] + fVec1[(IOTA0 - 345) & 511] + fVec1[(IOTA0 - 347) & 511] + fVec1[(IOTA0 - 346) & 511] + fVec1[(IOTA0 - 351) & 511] + fVec1[(IOTA0 - 344) & 511] + fVec1[(IOTA0 - 349) & 511] + fVec1[(IOTA0 - 342) & 511] + fVec1[(IOTA0 - 338) & 511] + fVec1[(IOTA0 - 337) & 511] + fVec1[(IOTA0 - 340) & 511] + fVec1[(IOTA0 - 336) & 511] + fVec1[(IOTA0 - 343) & 511] + fVec1[(IOTA0 - 341) & 511] + fVec1[(IOTA0 - 339) & 511] + fVec1[(IOTA0 - 328) & 511] + fVec1[(IOTA0 - 334) & 511] + fVec1[(IOTA0 - 332) & 511] + fVec1[(IOTA0 - 331) & 511] + fVec1[(IOTA0 - 329) & 511] + fVec1[(IOTA0 - 333) & 511] + fVec1[(IOTA0 - 330) & 511] + fVec1[(IOTA0 - 335) & 511] + fVec1[(IOTA0 - 323) & 511] + fVec1[(IOTA0 - 326) & 511] + fVec1[(IOTA0 - 324) & 511] + fVec1[(IOTA0 - 320) & 511] + fVec1[(IOTA0 - 321) & 511] + fVec1[(IOTA0 - 322) & 511] + fVec1[(IOTA0 - 327) & 511] + fVec1[(IOTA0 - 325) & 511] + fVec1[(IOTA0 - 314) & 511] + fVec1[(IOTA0 - 316) & 511] + fVec1[(IOTA0 - 312) & 511] + fVec1[(IOTA0 - 315) & 511] + fVec1[(IOTA0 - 319) & 511] + fVec1[(IOTA0 - 317) & 511] + fVec1[(IOTA0 - 318) & 511] + fVec1[(IOTA0 - 313) & 511] + fVec1[(IOTA0 - 310) & 511] + fVec1[(IOTA0 - 311) & 511] + fVec1[(IOTA0 - 305) & 511] + fVec1[(IOTA0 - 304) & 511] + fVec1[(IOTA0 - 306) & 511] + fVec1[(IOTA0 - 309) & 511] + fVec1[(IOTA0 - 308) & 511] + fVec1[(IOTA0 - 307) & 511] + fVec1[(IOTA0 - 303) & 511] + fVec1[(IOTA0 - 297) & 511] + fVec1[(IOTA0 - 299) & 511] + fVec1[(IOTA0 - 301) & 511] + fVec1[(IOTA0 - 296) & 511] + fVec1[(IOTA0 - 298) & 511] + fVec1[(IOTA0 - 302) & 511] + fVec1[(IOTA0 - 300) & 511] + fVec1[(IOTA0 - 294) & 511] + fVec1[(IOTA0 - 295) & 511] + fVec1[(IOTA0 - 288) & 511] + fVec1[(IOTA0 - 289) & 511] + fVec1[(IOTA0 - 293) & 511] + fVec1[(IOTA0 - 292) & 511] + fVec1[(IOTA0 - 290) & 511] + fVec1[(IOTA0 - 291) & 511] + fVec1[(IOTA0 - 285) & 511] + fVec1[(IOTA0 - 280) & 511] + fVec1[(IOTA0 - 282) & 511] + fVec1[(IOTA0 - 284) & 511] + fVec1[(IOTA0 - 283) & 511] + fVec1[(IOTA0 - 287) & 511] + fVec1[(IOTA0 - 281) & 511] + fVec1[(IOTA0 - 286) & 511] + fVec1[(IOTA0 - 272) & 511] + fVec1[(IOTA0 - 279) & 511] + fVec1[(IOTA0 - 277) & 511] + fVec1[(IOTA0 - 275) & 511] + fVec1[(IOTA0 - 274) & 511] + fVec1[(IOTA0 - 273) & 511] + fVec1[(IOTA0 - 278) & 511] + fVec1[(IOTA0 - 276) & 511] + fVec1[(IOTA0 - 266) & 511] + fVec1[(IOTA0 - 270) & 511] + fVec1[(IOTA0 - 267) & 511] + fVec1[(IOTA0 - 264) & 511] + fVec1[(IOTA0 - 269) & 511] + fVec1[(IOTA0 - 265) & 511] + fVec1[(IOTA0 - 268) & 511] + fVec1[(IOTA0 - 271) & 511] + fVec1[(IOTA0 - 262) & 511] + fVec1[(IOTA0 - 258) & 511] + fVec1[(IOTA0 - 257) & 511] + fVec1[(IOTA0 - 259) & 511] + fVec1[(IOTA0 - 260) & 511] + fVec1[(IOTA0 - 263) & 511] + fVec1[(IOTA0 - 261) & 511] + fVec1[(IOTA0 - 256) & 511] + fVec1[(IOTA0 - 248) & 511] + fVec1[(IOTA0 - 255) & 511] + fVec1[(IOTA0 - 253) & 511] + fVec1[(IOTA0 - 252) & 511] + fVec1[(IOTA0 - 251) & 511] + fVec1[(IOTA0 - 249) & 511] + fVec1[(IOTA0 - 254) & 511] + fVec1[(IOTA0 - 250) & 511] + fVec1[(IOTA0 - 242) & 511] + fVec1[(IOTA0 - 241) & 511] + fVec1[(IOTA0 - 243) & 511] + fVec1[(IOTA0 - 246) & 511] + fVec1[(IOTA0 - 245) & 511] + fVec1[(IOTA0 - 244) & 511] + fVec1[(IOTA0 - 247) & 511] + fVec1[(IOTA0 - 240) & 511] + fVec1[(IOTA0 - 239) & 511] + fVec1[(IOTA0 - 238) & 511] + fVec1[(IOTA0 - 235) & 511] + fVec1[(IOTA0 - 236) & 511] + fVec1[(IOTA0 - 237) & 511] + fVec1[(IOTA0 - 232) & 511] + fVec1[(IOTA0 - 234) & 511] + fVec1[(IOTA0 - 233) & 511] + fVec1[(IOTA0 - 227) & 511] + fVec1[(IOTA0 - 225) & 511] + fVec1[(IOTA0 - 229) & 511] + fVec1[(IOTA0 - 230) & 511] + fVec1[(IOTA0 - 226) & 511] + fVec1[(IOTA0 - 228) & 511] + fVec1[(IOTA0 - 231) & 511] + fVec1[(IOTA0 - 224) & 511] + fVec1[(IOTA0 - 220) & 511] + fVec1[(IOTA0 - 218) & 511] + fVec1[(IOTA0 - 219) & 511] + fVec1[(IOTA0 - 223) & 511] + fVec1[(IOTA0 - 216) & 511] + fVec1[(IOTA0 - 222) & 511] + fVec1[(IOTA0 - 221) & 511] + fVec1[(IOTA0 - 217) & 511] + fVec1[(IOTA0 - 208) & 511] + fVec1[(IOTA0 - 215) & 511] + fVec1[(IOTA0 - 211) & 511] + fVec1[(IOTA0 - 214) & 511] + fVec1[(IOTA0 - 212) & 511] + fVec1[(IOTA0 - 213) & 511] + fVec1[(IOTA0 - 210) & 511] + fVec1[(IOTA0 - 209) & 511] + fVec1[(IOTA0 - 207) & 511] + fVec1[(IOTA0 - 202) & 511] + fVec1[(IOTA0 - 201) & 511] + fVec1[(IOTA0 - 200) & 511] + fVec1[(IOTA0 - 206) & 511] + fVec1[(IOTA0 - 205) & 511] + fVec1[(IOTA0 - 203) & 511] + fVec1[(IOTA0 - 204) & 511] + fVec1[(IOTA0 - 198) & 511] + fVec1[(IOTA0 - 192) & 511] + fVec1[(IOTA0 - 196) & 511] + fVec1[(IOTA0 - 194) & 511] + fVec1[(IOTA0 - 199) & 511] + fVec1[(IOTA0 - 193) & 511] + fVec1[(IOTA0 - 195) & 511] + fVec1[(IOTA0 - 197) & 511] + fVec1[(IOTA0 - 189) & 511] + fVec1[(IOTA0 - 188) & 511] + fVec1[(IOTA0 - 185) & 511] + fVec1[(IOTA0 - 186) & 511] + fVec1[(IOTA0 - 187) & 511] + fVec1[(IOTA0 - 184) & 511] + fVec1[(IOTA0 - 191) & 511] + fVec1[(IOTA0 - 190) & 511] + fVec1[(IOTA0 - 177) & 511] + fVec1[(IOTA0 - 183) & 511] + fVec1[(IOTA0 - 181) & 511] + fVec1[(IOTA0 - 180) & 511] + fVec1[(IOTA0 - 176) & 511] + fVec1[(IOTA0 - 178) & 511] + fVec1[(IOTA0 - 179) & 511] + fVec1[(IOTA0 - 182) & 511] + fVec1[(IOTA0 - 170) & 511] + fVec1[(IOTA0 - 175) & 511] + fVec1[(IOTA0 - 173) & 511] + fVec1[(IOTA0 - 171) & 511] + fVec1[(IOTA0 - 174) & 511] + fVec1[(IOTA0 - 172) & 511] + fVec1[(IOTA0 - 169) & 511] + fVec1[(IOTA0 - 168) & 511] + fVec1[(IOTA0 - 163) & 511] + fVec1[(IOTA0 - 167) & 511] + fVec1[(IOTA0 - 166) & 511] + fVec1[(IOTA0 - 165) & 511] + fVec1[(IOTA0 - 161) & 511] + fVec1[(IOTA0 - 160) & 511] + fVec1[(IOTA0 - 162) & 511] + fVec1[(IOTA0 - 164) & 511] + fVec1[(IOTA0 - 154) & 511] + fVec1[(IOTA0 - 158) & 511] + fVec1[(IOTA0 - 157) & 511] + fVec1[(IOTA0 - 153) & 511] + fVec1[(IOTA0 - 152) & 511] + fVec1[(IOTA0 - 159) & 511] + fVec1[(IOTA0 - 156) & 511] + fVec1[(IOTA0 - 155) & 511] + fVec1[(IOTA0 - 144) & 511] + fVec1[(IOTA0 - 145) & 511] + fVec1[(IOTA0 - 151) & 511] + fVec1[(IOTA0 - 148) & 511] + fVec1[(IOTA0 - 146) & 511] + fVec1[(IOTA0 - 149) & 511] + fVec1[(IOTA0 - 147) & 511] + fVec1[(IOTA0 - 150) & 511] + fVec1[(IOTA0 - 136) & 511] + fVec1[(IOTA0 - 137) & 511] + fVec1[(IOTA0 - 140) & 511] + fVec1[(IOTA0 - 139) & 511] + fVec1[(IOTA0 - 142) & 511] + fVec1[(IOTA0 - 143) & 511] + fVec1[(IOTA0 - 141) & 511] + fVec1[(IOTA0 - 138) & 511] + fVec1[(IOTA0 - 135) & 511] + fVec1[(IOTA0 - 129) & 511] + fVec1[(IOTA0 - 133) & 511] + fVec1[(IOTA0 - 132) & 511] + fVec1[(IOTA0 - 134) & 511] + fVec1[(IOTA0 - 131) & 511] + fVec1[(IOTA0 - 130) & 511] + fVec1[(IOTA0 - 124) & 511] + fVec1[(IOTA0 - 128) & 511] + fVec1[(IOTA0 - 122) & 511] + fVec1[(IOTA0 - 121) & 511] + fVec1[(IOTA0 - 127) & 511] + fVec1[(IOTA0 - 125) & 511] + fVec1[(IOTA0 - 123) & 511] + fVec1[(IOTA0 - 126) & 511] + fVec1[(IOTA0 - 114) & 511] + fVec1[(IOTA0 - 113) & 511] + fVec1[(IOTA0 - 120) & 511] + fVec1[(IOTA0 - 119) & 511] + fVec1[(IOTA0 - 115) & 511] + fVec1[(IOTA0 - 117) & 511] + fVec1[(IOTA0 - 118) & 511] + fVec1[(IOTA0 - 116) & 511] + fVec1[(IOTA0 - 105) & 511] + fVec1[(IOTA0 - 112) & 511] + fVec1[(IOTA0 - 107) & 511] + fVec1[(IOTA0 - 106) & 511] + fVec1[(IOTA0 - 111) & 511] + fVec1[(IOTA0 - 108) & 511] + fVec1[(IOTA0 - 110) & 511] + fVec1[(IOTA0 - 109) & 511] + fVec1[(IOTA0 - 100) & 511] + fVec1[(IOTA0 - 102) & 511] + fVec1[(IOTA0 - 103) & 511] + fVec1[(IOTA0 - 99) & 511] + fVec1[(IOTA0 - 101) & 511] + fVec1[(IOTA0 - 98) & 511] + fVec1[(IOTA0 - 97) & 511] + fVec1[(IOTA0 - 104) & 511] + fVec1[(IOTA0 - 89) & 511] + fVec1[(IOTA0 - 96) & 511] + fVec1[(IOTA0 - 93) & 511] + fVec1[(IOTA0 - 91) & 511] + fVec1[(IOTA0 - 92) & 511] + fVec1[(IOTA0 - 95) & 511] + fVec1[(IOTA0 - 94) & 511] + fVec1[(IOTA0 - 90) & 511] + fVec1[(IOTA0 - 82) & 511] + fVec1[(IOTA0 - 88) & 511] + fVec1[(IOTA0 - 84) & 511] + fVec1[(IOTA0 - 81) & 511] + fVec1[(IOTA0 - 85) & 511] + fVec1[(IOTA0 - 83) & 511] + fVec1[(IOTA0 - 87) & 511] + fVec1[(IOTA0 - 86) & 511] + fVec1[(IOTA0 - 73) & 511] + fVec1[(IOTA0 - 79) & 511] + fVec1[(IOTA0 - 78) & 511] + fVec1[(IOTA0 - 74) & 511] + fVec1[(IOTA0 - 77) & 511] + fVec1[(IOTA0 - 75) & 511] + fVec1[(IOTA0 - 80) & 511] + fVec1[(IOTA0 - 76) & 511] + fVec1[(IOTA0 - 66) & 511] + fVec1[(IOTA0 - 72) & 511] + fVec1[(IOTA0 - 71) & 511] + fVec1[(IOTA0 - 70) & 511] + fVec1[(IOTA0 - 68) & 511] + fVec1[(IOTA0 - 65) & 511] + fVec1[(IOTA0 - 69) & 511] + fVec1[(IOTA0 - 67) & 511] + fVec1[(IOTA0 - 63) & 511] + fVec1[(IOTA0 - 64) & 511] + fVec1[(IOTA0 - 62) & 511] + fVec1[(IOTA0 - 59) & 511] + fVec1[(IOTA0 - 60) & 511] + fVec1[(IOTA0 - 61) & 511] + fVec1[(IOTA0 - 57) & 511] + fVec1[(IOTA0 - 58) & 511] + fVec1[(IOTA0 - 51) & 511] + fVec1[(IOTA0 - 54) & 511] + fVec1[(IOTA0 - 52) & 511] + fVec1[(IOTA0 - 53) & 511] + fVec1[(IOTA0 - 49) & 511] + fVec1[(IOTA0 - 56) & 511] + fVec1[(IOTA0 - 50) & 511] + fVec1[(IOTA0 - 55) & 511] + fVec1[(IOTA0 - 42) & 511] + fVec1[(IOTA0 - 47) & 511] + fVec1[(IOTA0 - 48) & 511] + fVec1[(IOTA0 - 46) & 511] + fVec1[(IOTA0 - 43) & 511] + fVec1[(IOTA0 - 41) & 511] + fVec1[(IOTA0 - 45) & 511] + fVec1[(IOTA0 - 44) & 511] + fVec1[(IOTA0 - 37) & 511] + fVec1[(IOTA0 - 34) & 511] + fVec1[(IOTA0 - 36) & 511] + fVec1[(IOTA0 - 40) & 511] + fVec1[(IOTA0 - 35) & 511] + fVec1[(IOTA0 - 39) & 511] + fVec1[(IOTA0 - 38) & 511] + fVec1[(IOTA0 - 33) & 511] + fVec1[(IOTA0 - 28) & 511] + fVec1[(IOTA0 - 32) & 511] + fVec1[(IOTA0 - 25) & 511] + fVec1[(IOTA0 - 26) & 511] + fVec1[(IOTA0 - 30) & 511] + fVec1[(IOTA0 - 29) & 511] + fVec1[(IOTA0 - 31) & 511] + fVec1[(IOTA0 - 27) & 511] + fVec1[(IOTA0 - 19) & 511] + fVec1[(IOTA0 - 24) & 511] + fVec1[(IOTA0 - 21) & 511] + fVec1[(IOTA0 - 23) & 511] + fVec1[(IOTA0 - 17) & 511] + fVec1[(IOTA0 - 20) & 511] + fVec1[(IOTA0 - 18) & 511] + fVec1[(IOTA0 - 22) & 511] + fVec1[(IOTA0 - 9) & 511] + fVec1[(IOTA0 - 16) & 511] + fVec1[(IOTA0 - 15) & 511] + fVec1[(IOTA0 - 11) & 511] + fVec1[(IOTA0 - 13) & 511] + fVec1[(IOTA0 - 14) & 511] + fVec1[(IOTA0 - 10) & 511] + fVec1[(IOTA0 - 12) & 511] + fVec1[(IOTA0 - 4) & 511] + fVec1[(IOTA0 - 5) & 511] + fVec1[(IOTA0 - 7) & 511] + fVec1[(IOTA0 - 6) & 511] + fVec1[(IOTA0 - 8) & 511] + fVec1[(IOTA0 - 1) & 511] + fVec1[(IOTA0 - 2) & 511] + fVec1[(IOTA0 - 3) & 511]) + fSlow11 * (fRec24[0] + fConst0 * (fSlow9 * std::sin(3.1415927f * (2.0f * fRec23[0] + -1.0f) + fConst91 * (fConst104 * fRec20[1] + fConst103 * (fRec20[0] + fRec20[2]))) + fSlow1 * (0.00015f * std::sin(3.1415927f * (2.0f * fRec19[0] + -1.0f) + fConst74 * (fConst87 * fRec16[1] + fConst86 * (fRec16[0] + fRec16[2])) + 4.712389f) + fSlow4 * (1e-07f * std::sin(3.1415927f * (2.0f * fRec15[0] + -1.0f) + fConst53 * (fConst66 * fRec12[1] + fConst65 * (fRec12[0] + fRec12[2]))) + 7.5e-07f * std::sin(3.1415927f * (2.0f * fRec11[0] + -1.0f) + fConst32 * (fConst45 * fRec7[1] + fConst44 * (fRec7[0] + fRec7[2])) + 2.3561945f)))));
			fVec3[IOTA0 & 16383] = fTemp7;
			int iTemp8 = std::min<int>(50000, std::max<int>(0, int(0.5f * (fTemp7 + 0.9999f * fVec3[(IOTA0 - iSlow12) & 16383])))) + 1;
			float fTemp9 = fRec6[(IOTA0 - iTemp8) & 65535];
			fRec6[IOTA0 & 65535] = fSlow13 * (fTemp9 / (std::fabs(fSlow13 * fTemp9) + 1.0f)) + fSlow0 * float(input0[i0]);
			fRec5[0] = fRec6[IOTA0 & 65535] - fConst29 * (fConst27 * fRec5[2] + fConst25 * fRec5[1]);
			fRec4[0] = fConst119 * (fRec5[2] + (fRec5[0] - 2.0f * fRec5[1])) - fConst21 * (fConst19 * fRec4[2] + fConst17 * fRec4[1]);
			float fTemp10 = fRec4[2] + fRec4[0] + 2.0f * fRec4[1];
			fVec4[0] = fTemp10;
			fRec3[0] = fConst120 * (fConst21 * (fTemp10 + fVec4[1]) - fConst15 * fRec3[1]);
			fRec2[0] = fRec3[0] - fConst14 * (fConst12 * fRec2[2] + fConst10 * fRec2[1]);
			fRec27[0] = -(fConst120 * (fConst15 * fRec27[1] + fConst121 * (fVec4[1] - fTemp10)));
			fRec26[0] = fRec27[0] - fConst14 * (fConst12 * fRec26[2] + fConst10 * fRec26[1]);
			float fTemp11 = fConst9 * (fRec26[2] + (fRec26[0] - 2.0f * fRec26[1])) + fSlow14 * (fRec2[2] + fRec2[0] + 2.0f * fRec2[1]);
			fVec5[0] = fTemp11;
			fRec1[0] = -(fConst124 * (fConst123 * fRec1[1] - fConst122 * (fTemp11 - fVec5[1])));
			fRec0[0] = fRec1[0] - fConst6 * (fConst5 * fRec0[2] + fConst3 * fRec0[1]);
			fRec29[0] = -(fConst124 * (fConst123 * fRec29[1] - fConst14 * (fTemp11 + fVec5[1])));
			fRec28[0] = fRec29[0] - fConst6 * (fConst5 * fRec28[2] + fConst3 * fRec28[1]);
			output0[i0] = FAUSTFLOAT(fSlow16 * (fRec28[0] + fRec28[2] + 2.0f * fRec28[1] + fSlow15 * (fRec0[0] + fRec0[2] - 2.0f * fRec0[1])));
			float fTemp12 = fRec36[(IOTA0 - iTemp8) & 65535];
			fRec36[IOTA0 & 65535] = fSlow13 * (fTemp12 / (std::fabs(fSlow13 * fTemp12) + 1.0f)) + fSlow0 * float(input1[i0]);
			fRec35[0] = fRec36[IOTA0 & 65535] - fConst29 * (fConst27 * fRec35[2] + fConst25 * fRec35[1]);
			fRec34[0] = fConst119 * (fRec35[2] + (fRec35[0] - 2.0f * fRec35[1])) - fConst21 * (fConst19 * fRec34[2] + fConst17 * fRec34[1]);
			float fTemp13 = fRec34[2] + fRec34[0] + 2.0f * fRec34[1];
			fVec6[0] = fTemp13;
			fRec33[0] = -(fConst120 * (fConst15 * fRec33[1] - fConst21 * (fTemp13 + fVec6[1])));
			fRec32[0] = fRec33[0] - fConst14 * (fConst12 * fRec32[2] + fConst10 * fRec32[1]);
			fRec38[0] = -(fConst120 * (fConst15 * fRec38[1] + fConst121 * (fVec6[1] - fTemp13)));
			fRec37[0] = fRec38[0] - fConst14 * (fConst12 * fRec37[2] + fConst10 * fRec37[1]);
			float fTemp14 = fConst9 * (fRec37[2] + (fRec37[0] - 2.0f * fRec37[1])) + fSlow14 * (fRec32[2] + fRec32[0] + 2.0f * fRec32[1]);
			fVec7[0] = fTemp14;
			fRec31[0] = -(fConst124 * (fConst123 * fRec31[1] + fConst122 * (fVec7[1] - fTemp14)));
			fRec30[0] = fRec31[0] - fConst6 * (fConst5 * fRec30[2] + fConst3 * fRec30[1]);
			fRec40[0] = fConst124 * (fConst14 * (fTemp14 + fVec7[1]) - fConst123 * fRec40[1]);
			fRec39[0] = fRec40[0] - fConst6 * (fConst5 * fRec39[2] + fConst3 * fRec39[1]);
			output1[i0] = FAUSTFLOAT(fSlow16 * (fRec39[0] + 2.0f * fRec39[1] + fRec39[2] + fSlow15 * (fRec30[0] + fRec30[2] - 2.0f * fRec30[1])));
			iVec0[1] = iVec0[0];
			IOTA0 = IOTA0 + 1;
			iRec10[1] = iRec10[0];
			fRec9[2] = fRec9[1];
			fRec9[1] = fRec9[0];
			fRec8[2] = fRec8[1];
			fRec8[1] = fRec8[0];
			fRec7[2] = fRec7[1];
			fRec7[1] = fRec7[0];
			fRec11[1] = fRec11[0];
			fRec14[2] = fRec14[1];
			fRec14[1] = fRec14[0];
			fRec13[2] = fRec13[1];
			fRec13[1] = fRec13[0];
			fRec12[2] = fRec12[1];
			fRec12[1] = fRec12[0];
			fRec15[1] = fRec15[0];
			fRec18[2] = fRec18[1];
			fRec18[1] = fRec18[0];
			fRec17[2] = fRec17[1];
			fRec17[1] = fRec17[0];
			fRec16[2] = fRec16[1];
			fRec16[1] = fRec16[0];
			fRec19[1] = fRec19[0];
			fRec22[2] = fRec22[1];
			fRec22[1] = fRec22[0];
			fRec21[2] = fRec21[1];
			fRec21[1] = fRec21[0];
			fRec20[2] = fRec20[1];
			fRec20[1] = fRec20[0];
			fRec23[1] = fRec23[0];
			fRec25[2] = fRec25[1];
			fRec25[1] = fRec25[0];
			fVec2[1] = fVec2[0];
			fRec24[1] = fRec24[0];
			fRec5[2] = fRec5[1];
			fRec5[1] = fRec5[0];
			fRec4[2] = fRec4[1];
			fRec4[1] = fRec4[0];
			fVec4[1] = fVec4[0];
			fRec3[1] = fRec3[0];
			fRec2[2] = fRec2[1];
			fRec2[1] = fRec2[0];
			fRec27[1] = fRec27[0];
			fRec26[2] = fRec26[1];
			fRec26[1] = fRec26[0];
			fVec5[1] = fVec5[0];
			fRec1[1] = fRec1[0];
			fRec0[2] = fRec0[1];
			fRec0[1] = fRec0[0];
			fRec29[1] = fRec29[0];
			fRec28[2] = fRec28[1];
			fRec28[1] = fRec28[0];
			fRec35[2] = fRec35[1];
			fRec35[1] = fRec35[0];
			fRec34[2] = fRec34[1];
			fRec34[1] = fRec34[0];
			fVec6[1] = fVec6[0];
			fRec33[1] = fRec33[0];
			fRec32[2] = fRec32[1];
			fRec32[1] = fRec32[0];
			fRec38[1] = fRec38[0];
			fRec37[2] = fRec37[1];
			fRec37[1] = fRec37[0];
			fVec7[1] = fVec7[0];
			fRec31[1] = fRec31[0];
			fRec30[2] = fRec30[1];
			fRec30[1] = fRec30[0];
			fRec40[1] = fRec40[0];
			fRec39[2] = fRec39[1];
			fRec39[1] = fRec39[0];
		}
	}

};

#ifdef FAUST_UIMACROS
	
	#define FAUST_FILE_NAME "Echoplex_Faust.dsp"
	#define FAUST_CLASS_NAME "_Echoplex_Faust"
	#define FAUST_COMPILATION_OPIONS "-lang cpp -rui -nvi -ct 1 -cn _Echoplex_Faust -scn ::faust::dsp -es 1 -mcd 16 -mdd 1024 -mdy 33 -uim -single -ftz 0"
	#define FAUST_INPUTS 2
	#define FAUST_OUTPUTS 2
	#define FAUST_ACTIVES 10
	#define FAUST_PASSIVES 0

	FAUST_ADDHORIZONTALSLIDER("BassGain", fHslider7, 0.0f, -12.0f, 12.0f, 0.1f);
	FAUST_ADDHORIZONTALSLIDER("Delay", fHslider2, 3e+02f, 1.0f, 1e+03f, 1.0f);
	FAUST_ADDHORIZONTALSLIDER("DriftIntensity", fHslider1, 1.0f, 0.0f, 1e+01f, 0.1f);
	FAUST_ADDHORIZONTALSLIDER("FlutterDepth", fHslider3, 0.01f, 0.0f, 1.0f, 0.01f);
	FAUST_ADDHORIZONTALSLIDER("FlutterHz", fHslider4, 15.0f, 1e+01f, 3e+01f, 0.1f);
	FAUST_ADDHORIZONTALSLIDER("Input", fHslider0, 0.8f, 0.0f, 1.0f, 0.01f);
	FAUST_ADDHORIZONTALSLIDER("Output", fHslider9, 1.0f, 0.0f, 2.0f, 0.01f);
	FAUST_ADDHORIZONTALSLIDER("Repeats", fHslider6, 0.5f, 0.0f, 2.0f, 0.01f);
	FAUST_ADDHORIZONTALSLIDER("TrebleGain", fHslider8, 0.0f, -12.0f, 12.0f, 0.1f);
	FAUST_ADDHORIZONTALSLIDER("WowDepth", fHslider5, 0.5f, 0.0f, 1.0f, 0.01f);

	#define FAUST_LIST_ACTIVES(p) \
		p(HORIZONTALSLIDER, BassGain, "BassGain", fHslider7, 0.0f, -12.0f, 12.0f, 0.1f) \
		p(HORIZONTALSLIDER, Delay, "Delay", fHslider2, 3e+02f, 1.0f, 1e+03f, 1.0f) \
		p(HORIZONTALSLIDER, DriftIntensity, "DriftIntensity", fHslider1, 1.0f, 0.0f, 1e+01f, 0.1f) \
		p(HORIZONTALSLIDER, FlutterDepth, "FlutterDepth", fHslider3, 0.01f, 0.0f, 1.0f, 0.01f) \
		p(HORIZONTALSLIDER, FlutterHz, "FlutterHz", fHslider4, 15.0f, 1e+01f, 3e+01f, 0.1f) \
		p(HORIZONTALSLIDER, Input, "Input", fHslider0, 0.8f, 0.0f, 1.0f, 0.01f) \
		p(HORIZONTALSLIDER, Output, "Output", fHslider9, 1.0f, 0.0f, 2.0f, 0.01f) \
		p(HORIZONTALSLIDER, Repeats, "Repeats", fHslider6, 0.5f, 0.0f, 2.0f, 0.01f) \
		p(HORIZONTALSLIDER, TrebleGain, "TrebleGain", fHslider8, 0.0f, -12.0f, 12.0f, 0.1f) \
		p(HORIZONTALSLIDER, WowDepth, "WowDepth", fHslider5, 0.5f, 0.0f, 1.0f, 0.01f) \

	#define FAUST_LIST_PASSIVES(p) \

#endif

#endif
