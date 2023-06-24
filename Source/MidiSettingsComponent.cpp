#include "MidiSettingsComponent.h"

void MidiSettingsComponent::sliderValueChanged(Slider* slider)
{
	//return sub_140172F90(a1 - 192);	
}
void  MidiSettingsComponent::sub_140172F90(__int64 a1)
{
	/*__int64 v1; // r12
	_QWORD* v2; // rbx
	__int64 v3; // r15
	__int64 v4; // rax
	__int64 v5; // r8
	int v6; // er13
	volatile signed __int32* v7; // rbx
	int v8; // eax
	volatile signed __int32** v9; // rax
	int v10; // eax
	volatile signed __int32* v11; // rcx
	volatile signed __int32* v12; // rcx
	__int64* v13; // rdx
	__int64 v14; // rdi
	volatile signed __int32* v15; // r14
	__int64 v16; // rcx
	_QWORD* v17; // rax
	_BYTE* v18; // rbx
	unsigned int v19; // er13
	void* v20; // rcx
	int v21; // er12
	bool v22; // r12
	volatile signed __int32* v23; // rbx
	int v24; // eax
	volatile signed __int32** v25; // rax
	int v26; // eax
	volatile signed __int32* v27; // rcx
	volatile signed __int32* v28; // rcx
	__int64 v29; // rax
	int v30; // er13
	char* v31; // rbx
	int v32; // er12
	__int64 v33; // rdi
	__int64 v34; // r12
	_BYTE** v35; // rax
	volatile signed __int32** v36; // rax
	int v37; // er12
	__int64 v38; // rdi
	volatile signed __int32* v39; // rcx
	char* v40; // rcx
	__int64* v41; // rdx
	__int64 v42; // rdi
	volatile signed __int32* v43; // r12
	__int64 v44; // rcx
	_QWORD* v45; // rax
	_BYTE* v46; // rbx
	unsigned int v47; // er13
	void* v48; // rcx
	int v49; // er14
	__int64 v50; // r12
	_BYTE** v51; // rax
	bool v52; // r14
	char* v53; // rbx
	_QWORD* v54; // r9
	int v55; // er12
	__int64 v56; // r14
	__int64 v57; // r12
	_BYTE** v58; // r13
	volatile signed __int32** v59; // rax
	int v60; // eax
	volatile signed __int32* v61; // rcx
	char* v62; // rcx
	void* v63; // rcx
	_QWORD* v64; // rbx
	char v65; // al
	_QWORD* v66; // rcx
	double v67; // xmm0_8
	void* v68; // rcx
	unsigned __int64 v69; // xmm0_8
	void* v70; // rcx
	unsigned __int64 v71; // xmm0_8
	void* v72; // rcx
	unsigned __int64 v73; // xmm0_8
	void* v74; // rcx
	unsigned __int64 v75; // xmm0_8
	void* v76; // rcx
	unsigned __int64 v77; // xmm0_8
	void* v78; // rcx
	unsigned __int64 v79; // xmm0_8
	void* v80; // rcx
	unsigned __int64 v81; // xmm0_8
	void* v82; // rcx
	unsigned __int64 v83; // xmm0_8
	void* v84; // rcx
	unsigned __int64 v85; // xmm0_8
	void* v86; // rcx
	unsigned __int64 v87; // xmm0_8
	void* v88; // rcx
	unsigned __int64 v89; // xmm0_8
	void* v90; // rcx
	unsigned __int64 v91; // xmm0_8
	void* v92; // rcx
	unsigned __int64 v93; // xmm0_8
	void* v94; // rcx
	unsigned __int64 v95; // xmm0_8
	void* v96; // rcx
	unsigned __int64 v97; // xmm0_8
	void* v98; // rcx
	unsigned __int64 v99; // xmm0_8
	void* v100; // rcx
	unsigned __int64 v101; // xmm0_8
	void* v102; // rcx
	unsigned __int64 v103; // xmm0_8
	void* v104; // rcx
	unsigned __int64 v105; // xmm0_8
	void* v106; // rcx
	unsigned __int64 v107; // xmm0_8
	void* v108; // rcx
	int v109; // eax
	void* v110; // rcx
	int v111; // eax
	void* v112; // rcx
	int v113; // eax
	void* v114; // rcx
	int v115; // eax
	void* v116; // rcx
	int v117; // eax
	void* v118; // rcx
	int v119; // eax
	void* v120; // rcx
	int v121; // eax
	void* v122; // rcx
	int v123; // eax
	void* v124; // rcx
	int v125; // eax
	void* v126; // rcx
	int v127; // eax
	void* v128; // rcx
	int v129; // eax
	void* v130; // rcx
	int v131; // eax
	void* v132; // rcx
	int v133; // eax
	void* v134; // rcx
	int v135; // eax
	void* v136; // rcx
	int v137; // eax
	void* v138; // rcx
	int v139; // eax
	void* v140; // rcx
	int v141; // eax
	void* v142; // rcx
	char v143; // al
	void* v144; // rcx
	char v145; // al
	void* v146; // rcx
	char v147; // al
	void* v148; // rcx
	char v149; // al
	void* v150; // rcx
	char v151; // al
	void* v152; // rcx
	char v153; // al
	void* v154; // rcx
	char v155; // al
	void* v156; // rcx
	char v157; // al
	void* v158; // rcx
	char v159; // al
	void* v160; // rcx
	char v161; // al
	void* v162; // rcx
	char v163; // al
	void* v164; // rcx
	char v165; // al
	void* v166; // rcx
	char v167; // al
	void* v168; // rcx
	char v169; // al
	void* v170; // rcx
	char v171; // al
	void* v172; // rcx
	char v173; // al
	void* v174; // rcx
	char v175; // al
	void* v176; // rcx
	char v177; // al
	void* v178; // rcx
	char v179; // al
	void* v180; // rcx
	char* v181; // [rsp+20h] [rbp-E0h]
	_BYTE** v182; // [rsp+20h] [rbp-E0h]
	_BYTE** v183; // [rsp+20h] [rbp-E0h]
	int v184; // [rsp+20h] [rbp-E0h]
	_DWORD* Block; // [rsp+28h] [rbp-D8h]
	__int64 Blocka; // [rsp+28h] [rbp-D8h]
	char* Blockb; // [rsp+28h] [rbp-D8h]
	__int64 Blockc; // [rsp+28h] [rbp-D8h]
	_QWORD* v189; // [rsp+30h] [rbp-D0h] BYREF
	volatile signed __int32* v190; // [rsp+38h] [rbp-C8h] BYREF
	volatile signed __int32* v191; // [rsp+40h] [rbp-C0h] BYREF
	volatile signed __int32* v192; // [rsp+48h] [rbp-B8h] BYREF
	volatile signed __int32* v193; // [rsp+50h] [rbp-B0h] BYREF
	volatile signed __int32* v194; // [rsp+58h] [rbp-A8h]
	volatile signed __int32* v195; // [rsp+60h] [rbp-A0h] BYREF
	volatile signed __int32* v196; // [rsp+68h] [rbp-98h] BYREF
	char* v197; // [rsp+70h] [rbp-90h] BYREF
	char* v198; // [rsp+78h] [rbp-88h] BYREF
	__int64 v199; // [rsp+80h] [rbp-80h] BYREF
	_DWORD* v200; // [rsp+88h] [rbp-78h] BYREF
	_DWORD* v201; // [rsp+90h] [rbp-70h] BYREF
	__int64 v202; // [rsp+98h] [rbp-68h] BYREF
	__int64 v203; // [rsp+A0h] [rbp-60h] BYREF
	__int64 v204; // [rsp+A8h] [rbp-58h] BYREF
	__int64 v205; // [rsp+B0h] [rbp-50h] BYREF
	__int64 v206; // [rsp+B8h] [rbp-48h] BYREF
	__int64 v207; // [rsp+C0h] [rbp-40h] BYREF
	__int64 v208; // [rsp+C8h] [rbp-38h] BYREF
	__int64 v209; // [rsp+D0h] [rbp-30h] BYREF
	__int64 v210; // [rsp+D8h] [rbp-28h] BYREF
	__int64 v211; // [rsp+E0h] [rbp-20h] BYREF
	__int64 v212; // [rsp+E8h] [rbp-18h] BYREF
	__int64 v213; // [rsp+F0h] [rbp-10h] BYREF
	__int64 v214; // [rsp+F8h] [rbp-8h] BYREF
	__int64 v215; // [rsp+100h] [rbp+0h] BYREF
	__int64 v216; // [rsp+108h] [rbp+8h] BYREF
	__int64 v217; // [rsp+110h] [rbp+10h] BYREF
	__int64 v218; // [rsp+118h] [rbp+18h] BYREF
	__int64 v219; // [rsp+120h] [rbp+20h] BYREF
	__int64 v220; // [rsp+128h] [rbp+28h] BYREF
	__int64 v221; // [rsp+130h] [rbp+30h] BYREF
	__int64 v222; // [rsp+138h] [rbp+38h] BYREF
	__int64 v223; // [rsp+140h] [rbp+40h] BYREF
	__int64 v224; // [rsp+148h] [rbp+48h] BYREF
	__int64 v225; // [rsp+150h] [rbp+50h] BYREF
	__int64 v226; // [rsp+158h] [rbp+58h] BYREF
	__int64 v227; // [rsp+160h] [rbp+60h] BYREF
	__int64 v228; // [rsp+168h] [rbp+68h] BYREF
	__int64 v229; // [rsp+170h] [rbp+70h] BYREF
	__int64 v230; // [rsp+178h] [rbp+78h] BYREF
	__int64 v231; // [rsp+180h] [rbp+80h] BYREF
	__int64 v232; // [rsp+188h] [rbp+88h] BYREF
	__int64 v233; // [rsp+190h] [rbp+90h] BYREF
	__int64 v234; // [rsp+198h] [rbp+98h] BYREF
	__int64 v235; // [rsp+1A0h] [rbp+A0h] BYREF
	__int64 v236; // [rsp+1A8h] [rbp+A8h] BYREF
	__int64 v237; // [rsp+1B0h] [rbp+B0h] BYREF
	__int64 v238; // [rsp+1B8h] [rbp+B8h] BYREF
	__int64 v239; // [rsp+1C0h] [rbp+C0h] BYREF
	__int64 v240; // [rsp+1C8h] [rbp+C8h] BYREF
	__int64 v241; // [rsp+1D0h] [rbp+D0h] BYREF
	__int64 v242; // [rsp+1D8h] [rbp+D8h] BYREF
	__int64 v243; // [rsp+1E0h] [rbp+E0h] BYREF
	__int64 v244; // [rsp+1E8h] [rbp+E8h] BYREF
	__int64 v245; // [rsp+1F0h] [rbp+F0h] BYREF
	__int64 v246; // [rsp+1F8h] [rbp+F8h] BYREF
	__int64 v247; // [rsp+200h] [rbp+100h] BYREF
	__int64 v248; // [rsp+208h] [rbp+108h] BYREF
	__int64 v249; // [rsp+210h] [rbp+110h] BYREF
	__int64 v250; // [rsp+218h] [rbp+118h] BYREF
	__int64 v251; // [rsp+220h] [rbp+120h] BYREF
	__int64 v252; // [rsp+228h] [rbp+128h] BYREF
	__int64 v253; // [rsp+230h] [rbp+130h] BYREF
	__int64 v254; // [rsp+238h] [rbp+138h] BYREF
	__int64 v255; // [rsp+240h] [rbp+140h] BYREF
	__int64 v256; // [rsp+248h] [rbp+148h] BYREF
	__int64 v257; // [rsp+250h] [rbp+150h] BYREF
	void* v258; // [rsp+258h] [rbp+158h] BYREF
	int v259; // [rsp+264h] [rbp+164h]
	void* v260; // [rsp+268h] [rbp+168h] BYREF
	int v261; // [rsp+274h] [rbp+174h]
	volatile signed __int32* v262; // [rsp+278h] [rbp+178h] BYREF
	volatile signed __int32* v263; // [rsp+280h] [rbp+180h] BYREF
	volatile signed __int32* v264; // [rsp+288h] [rbp+188h] BYREF
	volatile signed __int32* v265; // [rsp+290h] [rbp+190h] BYREF
	volatile signed __int32* v266; // [rsp+298h] [rbp+198h] BYREF
	volatile signed __int32* v267; // [rsp+2A0h] [rbp+1A0h] BYREF
	char* v268; // [rsp+2A8h] [rbp+1A8h] BYREF
	volatile signed __int32* v269; // [rsp+2B0h] [rbp+1B0h] BYREF
	__int64 v270; // [rsp+2B8h] [rbp+1B8h]
	volatile signed __int32* v271; // [rsp+2C0h] [rbp+1C0h] BYREF
	char* v272; // [rsp+2C8h] [rbp+1C8h] BYREF
	volatile signed __int32* v273; // [rsp+2D0h] [rbp+1D0h] BYREF
	void* v274; // [rsp+2D8h] [rbp+1D8h]
	char* v275; // [rsp+2E0h] [rbp+1E0h]
	int v276; // [rsp+2E8h] [rbp+1E8h]
	volatile signed __int32* v277; // [rsp+2F0h] [rbp+1F0h] BYREF
	__int64 v278; // [rsp+2F8h] [rbp+1F8h]
	__int64 v279; // [rsp+300h] [rbp+200h]
	__int64 v280; // [rsp+308h] [rbp+208h]
	__int64 v281; // [rsp+310h] [rbp+210h]
	__int64 v282; // [rsp+318h] [rbp+218h]
	__int64 v283; // [rsp+320h] [rbp+220h]
	__int64 v284; // [rsp+328h] [rbp+228h]
	__int64 v285; // [rsp+330h] [rbp+230h]
	__int64 v286; // [rsp+338h] [rbp+238h]
	__int64 v287; // [rsp+340h] [rbp+240h]
	__int64(__fastcall * **v288)(); // [rsp+348h] [rbp+248h]
	__int64 v289; // [rsp+350h] [rbp+250h] BYREF
	__int64(__fastcall * **v290)(); // [rsp+358h] [rbp+258h]
	__int64 v291; // [rsp+360h] [rbp+260h] BYREF
	__int64(__fastcall * **v292)(); // [rsp+368h] [rbp+268h]
	__int64 v293; // [rsp+370h] [rbp+270h] BYREF
	__int64(__fastcall * **v294)(); // [rsp+378h] [rbp+278h]
	__int64 v295; // [rsp+380h] [rbp+280h] BYREF
	__int64(__fastcall * **v296)(); // [rsp+388h] [rbp+288h] BYREF
	unsigned __int64 v297; // [rsp+390h] [rbp+290h] BYREF
	__int64(__fastcall * **v298)(); // [rsp+398h] [rbp+298h] BYREF
	unsigned __int64 v299; // [rsp+3A0h] [rbp+2A0h] BYREF
	__int64(__fastcall * **v300)(); // [rsp+3A8h] [rbp+2A8h] BYREF
	unsigned __int64 v301; // [rsp+3B0h] [rbp+2B0h] BYREF
	__int64(__fastcall * **v302)(); // [rsp+3B8h] [rbp+2B8h] BYREF
	unsigned __int64 v303; // [rsp+3C0h] [rbp+2C0h] BYREF
	__int64(__fastcall * **v304)(); // [rsp+3C8h] [rbp+2C8h] BYREF
	unsigned __int64 v305; // [rsp+3D0h] [rbp+2D0h] BYREF
	__int64(__fastcall * **v306)(); // [rsp+3D8h] [rbp+2D8h] BYREF
	unsigned __int64 v307; // [rsp+3E0h] [rbp+2E0h] BYREF
	__int64(__fastcall * **v308)(); // [rsp+3E8h] [rbp+2E8h] BYREF
	unsigned __int64 v309; // [rsp+3F0h] [rbp+2F0h] BYREF
	__int64(__fastcall * **v310)(); // [rsp+3F8h] [rbp+2F8h] BYREF
	unsigned __int64 v311; // [rsp+400h] [rbp+300h] BYREF
	__int64(__fastcall * **v312)(); // [rsp+408h] [rbp+308h] BYREF
	unsigned __int64 v313; // [rsp+410h] [rbp+310h] BYREF
	__int64(__fastcall * **v314)(); // [rsp+418h] [rbp+318h] BYREF
	unsigned __int64 v315; // [rsp+420h] [rbp+320h] BYREF
	__int64(__fastcall * **v316)(); // [rsp+428h] [rbp+328h] BYREF
	unsigned __int64 v317; // [rsp+430h] [rbp+330h] BYREF
	__int64(__fastcall * **v318)(); // [rsp+438h] [rbp+338h] BYREF
	unsigned __int64 v319; // [rsp+440h] [rbp+340h] BYREF
	__int64(__fastcall * **v320)(); // [rsp+448h] [rbp+348h] BYREF
	unsigned __int64 v321; // [rsp+450h] [rbp+350h] BYREF
	__int64(__fastcall * **v322)(); // [rsp+458h] [rbp+358h] BYREF
	unsigned __int64 v323; // [rsp+460h] [rbp+360h] BYREF
	__int64(__fastcall * **v324)(); // [rsp+468h] [rbp+368h] BYREF
	unsigned __int64 v325; // [rsp+470h] [rbp+370h] BYREF
	__int64(__fastcall * **v326)(); // [rsp+478h] [rbp+378h] BYREF
	unsigned __int64 v327; // [rsp+480h] [rbp+380h] BYREF
	__int64(__fastcall * **v328)(); // [rsp+488h] [rbp+388h] BYREF
	unsigned __int64 v329; // [rsp+490h] [rbp+390h] BYREF
	__int64(__fastcall * **v330)(); // [rsp+498h] [rbp+398h] BYREF
	unsigned __int64 v331; // [rsp+4A0h] [rbp+3A0h] BYREF
	__int64(__fastcall * **v332)(); // [rsp+4A8h] [rbp+3A8h] BYREF
	int v333; // [rsp+4B0h] [rbp+3B0h] BYREF
	__int64(__fastcall * **v334)(); // [rsp+4B8h] [rbp+3B8h] BYREF
	int v335; // [rsp+4C0h] [rbp+3C0h] BYREF
	__int64(__fastcall * **v336)(); // [rsp+4C8h] [rbp+3C8h] BYREF
	int v337; // [rsp+4D0h] [rbp+3D0h] BYREF
	__int64(__fastcall * **v338)(); // [rsp+4D8h] [rbp+3D8h] BYREF
	int v339; // [rsp+4E0h] [rbp+3E0h] BYREF
	__int64(__fastcall * **v340)(); // [rsp+4E8h] [rbp+3E8h] BYREF
	int v341; // [rsp+4F0h] [rbp+3F0h] BYREF
	__int64(__fastcall * **v342)(); // [rsp+4F8h] [rbp+3F8h] BYREF
	int v343; // [rsp+500h] [rbp+400h] BYREF
	__int64(__fastcall * **v344)(); // [rsp+508h] [rbp+408h] BYREF
	int v345; // [rsp+510h] [rbp+410h] BYREF
	__int64(__fastcall * **v346)(); // [rsp+518h] [rbp+418h] BYREF
	int v347; // [rsp+520h] [rbp+420h] BYREF
	__int64(__fastcall * **v348)(); // [rsp+528h] [rbp+428h] BYREF
	int v349; // [rsp+530h] [rbp+430h] BYREF
	__int64(__fastcall * **v350)(); // [rsp+538h] [rbp+438h] BYREF
	int v351; // [rsp+540h] [rbp+440h] BYREF
	__int64(__fastcall * **v352)(); // [rsp+548h] [rbp+448h] BYREF
	int v353; // [rsp+550h] [rbp+450h] BYREF
	__int64(__fastcall * **v354)(); // [rsp+558h] [rbp+458h] BYREF
	int v355; // [rsp+560h] [rbp+460h] BYREF
	__int64(__fastcall * **v356)(); // [rsp+568h] [rbp+468h] BYREF
	int v357; // [rsp+570h] [rbp+470h] BYREF
	__int64(__fastcall * **v358)(); // [rsp+578h] [rbp+478h] BYREF
	int v359; // [rsp+580h] [rbp+480h] BYREF
	__int64(__fastcall * **v360)(); // [rsp+588h] [rbp+488h] BYREF
	int v361; // [rsp+590h] [rbp+490h] BYREF
	__int64(__fastcall * **v362)(); // [rsp+598h] [rbp+498h] BYREF
	int v363; // [rsp+5A0h] [rbp+4A0h] BYREF
	__int64(__fastcall * **v364)(); // [rsp+5A8h] [rbp+4A8h] BYREF
	int v365; // [rsp+5B0h] [rbp+4B0h] BYREF
	__int64(__fastcall * **v366)(); // [rsp+5B8h] [rbp+4B8h] BYREF
	char v367[8]; // [rsp+5C0h] [rbp+4C0h] BYREF
	__int64(__fastcall * **v368)(); // [rsp+5C8h] [rbp+4C8h] BYREF
	char v369[8]; // [rsp+5D0h] [rbp+4D0h] BYREF
	__int64(__fastcall * **v370)(); // [rsp+5D8h] [rbp+4D8h] BYREF
	char v371[8]; // [rsp+5E0h] [rbp+4E0h] BYREF
	__int64(__fastcall * **v372)(); // [rsp+5E8h] [rbp+4E8h] BYREF
	char v373[8]; // [rsp+5F0h] [rbp+4F0h] BYREF
	__int64(__fastcall * **v374)(); // [rsp+5F8h] [rbp+4F8h] BYREF
	char v375[8]; // [rsp+600h] [rbp+500h] BYREF
	__int64(__fastcall * **v376)(); // [rsp+608h] [rbp+508h] BYREF
	char v377[8]; // [rsp+610h] [rbp+510h] BYREF
	__int64(__fastcall * **v378)(); // [rsp+618h] [rbp+518h] BYREF
	char v379[8]; // [rsp+620h] [rbp+520h] BYREF
	__int64(__fastcall * **v380)(); // [rsp+628h] [rbp+528h] BYREF
	char v381[8]; // [rsp+630h] [rbp+530h] BYREF
	__int64(__fastcall * **v382)(); // [rsp+638h] [rbp+538h] BYREF
	char v383[8]; // [rsp+640h] [rbp+540h] BYREF
	__int64(__fastcall * **v384)(); // [rsp+648h] [rbp+548h] BYREF
	char v385[8]; // [rsp+650h] [rbp+550h] BYREF
	__int64(__fastcall * **v386)(); // [rsp+658h] [rbp+558h] BYREF
	char v387[8]; // [rsp+660h] [rbp+560h] BYREF
	__int64(__fastcall * **v388)(); // [rsp+668h] [rbp+568h] BYREF
	char v389[8]; // [rsp+670h] [rbp+570h] BYREF
	__int64(__fastcall * **v390)(); // [rsp+678h] [rbp+578h] BYREF
	char v391[8]; // [rsp+680h] [rbp+580h] BYREF
	__int64(__fastcall * **v392)(); // [rsp+688h] [rbp+588h] BYREF
	char v393[8]; // [rsp+690h] [rbp+590h] BYREF
	__int64(__fastcall * **v394)(); // [rsp+698h] [rbp+598h] BYREF
	char v395[8]; // [rsp+6A0h] [rbp+5A0h] BYREF
	__int64(__fastcall * **v396)(); // [rsp+6A8h] [rbp+5A8h] BYREF
	char v397[8]; // [rsp+6B0h] [rbp+5B0h] BYREF
	__int64(__fastcall * **v398)(); // [rsp+6B8h] [rbp+5B8h] BYREF
	char v399[8]; // [rsp+6C0h] [rbp+5C0h] BYREF
	__int64(__fastcall * **v400)(); // [rsp+6C8h] [rbp+5C8h] BYREF
	char v401[8]; // [rsp+6D0h] [rbp+5D0h] BYREF
	__int64(__fastcall * **v402)(); // [rsp+6D8h] [rbp+5D8h] BYREF
	char v403[8]; // [rsp+6E0h] [rbp+5E0h] BYREF
	__int64(__fastcall * **v404)(); // [rsp+6E8h] [rbp+5E8h] BYREF
	char v405[8]; // [rsp+6F0h] [rbp+5F0h] BYREF
	__int64(__fastcall * **v406)(); // [rsp+6F8h] [rbp+5F8h] BYREF
	int v407; // [rsp+700h] [rbp+600h] BYREF
	__int64(__fastcall * **v408)(); // [rsp+708h] [rbp+608h] BYREF
	unsigned __int64 v409; // [rsp+710h] [rbp+610h] BYREF
	__int64(__fastcall * **v410)(); // [rsp+718h] [rbp+618h] BYREF
	unsigned __int64 v411; // [rsp+720h] [rbp+620h] BYREF
	__int64 v412; // [rsp+728h] [rbp+628h] BYREF
	char v413[8]; // [rsp+730h] [rbp+630h] BYREF
	__int64 v414; // [rsp+738h] [rbp+638h] BYREF
	char v415[8]; // [rsp+740h] [rbp+640h] BYREF

	v1 = a1;
	v189 = (_QWORD*)a1;
	v276 = 0;
	v2 = qword_140EBFF98;
	v3 = *((_QWORD*)qword_140EBFF98 + 7);
	if (!v3)
	{
		sub_14031E290(qword_140EBFF98);
		v3 = v2[7];
	}
	v4 = sub_14001B640();
	LOBYTE(v5) = 1;
	(*(void(__fastcall**)(__int64, void**, __int64))(*(_QWORD*)v4 + 8i64))(v4, &v260, v5);
	v6 = 1;
	v288 = off_140EB1BD0;
	sub_140048D00(&v289, &unk_14046D9EE);
	sub_140048D00(&v195, "midiInputDevice");
	v7 = v195;
	if (*(_BYTE*)v195)
	{
		((void(__fastcall*)(__int64(__fastcall***)(), volatile signed __int32**, __int64*))(*v288)[4])(
			v288,
			&v190,
			&v289);
		v6 = 3;
		v284 = v3 + 56;
		EnterCriticalSection((LPCRITICAL_SECTION)(v3 + 56));
		v8 = StringArray::indexOf(v3 + 8, v7, *(_BYTE*)(v3 + 100), 0);
		if (v8 < 0
			|| (v9 = (volatile signed __int32**)sub_140316E00(v3 + 24, (unsigned int)v8), *v9 != v190)
			&& (unsigned int)String::isNotEmpty(*v9, v190))
		{
			v10 = StringArray::indexOf(v3 + 8, v7, *(_BYTE*)(v3 + 40), 0);
			if (v10 < 0)
			{
				v262 = v7;
				if ((*(v7 - 4) & 0x30000000) == 0)
					_InterlockedIncrement(v7 - 4);
				StringArray::add(v3 + 8, &v262);
				v263 = v190;
				if ((*(v190 - 4) & 0x30000000) == 0)
					_InterlockedIncrement(v190 - 4);
				StringArray::add(v3 + 24, &v263);
			}
			else
			{
				v277 = v190;
				if ((*(v190 - 4) & 0x30000000) == 0)
					_InterlockedIncrement(v190 - 4);
				sub_1402F8CC0(v3 + 24, (unsigned int)v10, &v277);
			}
			(*(void(__fastcall**)(__int64))(*(_QWORD*)v3 + 8i64))(v3);
		}
		LeaveCriticalSection((LPCRITICAL_SECTION)(v3 + 56));
		v11 = v190 - 4;
		if ((*(v190 - 4) & 0x30000000) == 0 && !_InterlockedExchangeAdd(v11, 0xFFFFFFFF))
			j_j_free((void*)v11);
		v7 = v195;
	}
	v12 = v7 - 4;
	if ((*(v7 - 4) & 0x30000000) == 0 && !_InterlockedExchangeAdd(v12, 0xFFFFFFFF))
		j_j_free((void*)v12);
	((void(__fastcall*)(__int64(__fastcall***)(), __int64*))(*v288)[22])(v288, &v289);
	v13 = (__int64*)v260;
	v181 = (char*)v260;
	v194 = (volatile signed __int32*)((char*)v260 + 16 * v261);
	if (v260 != v194)
	{
		v14 = v285;
		do
		{
			v278 = *v13;
			Block = (_DWORD*)(v278 - 16);
			if ((*(_DWORD*)(v278 - 16) & 0x30000000) == 0)
				_InterlockedIncrement((volatile signed __int32*)(v278 - 16));
			v279 = v13[1];
			v15 = (volatile signed __int32*)(v279 - 16);
			if ((*(_DWORD*)(v279 - 16) & 0x30000000) == 0)
				_InterlockedIncrement(v15);
			v16 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v1 + 448) + 368i64) + 408i64);
			v17 = (_QWORD*)(*(__int64(__fastcall**)(__int64, __int64*))(*(_QWORD*)v16 + 8i64))(v16, &v412);
			(*(void(__fastcall**)(_QWORD, _DWORD**, _QWORD*))(*(_QWORD*)*v17 + 32i64))(*v17, &v200, v17 + 1);
			(*(void(__fastcall**)(__int64, char*))(*(_QWORD*)v412 + 176i64))(v412, v413);
			v18 = v200;
			v200 = dword_140DDCDD0;
			v19 = (v6 | 0xF0) & 0xFFFFFFEF;
			if ((v19 & 8) != 0)
			{
				v19 &= 0xFFFFFFF7;
				v20 = (void*)(v14 - 16);
				if ((*(_DWORD*)(v14 - 16) & 0x30000000) == 0
					&& !_InterlockedExchangeAdd((volatile signed __int32*)v20, 0xFFFFFFFF))
				{
					j_j_free(v20);
				}
			}
			v6 = v19 | 4;
			if (*v18)
				v21 = sub_1400498D0(v278, v18);
			else
				v21 = 0;
			v22 = v21 >= 0;
			if ((*((_DWORD*)v18 - 4) & 0x30000000) == 0
				&& !_InterlockedExchangeAdd((volatile signed __int32*)v18 - 4, 0xFFFFFFFF))
			{
				j_j_free(v18 - 16);
			}
			if (v22)
			{
				v290 = off_140EB1BD0;
				v291 = v279;
				if ((*v15 & 0x30000000) == 0)
					_InterlockedIncrement(v15);
				sub_140048D00(&v196, "midiInputDevice");
				v23 = v196;
				if (*(_BYTE*)v196)
				{
					((void(__fastcall*)(__int64(__fastcall***)(), volatile signed __int32**, __int64*))(*v290)[4])(
						v290,
						&v191,
						&v291);
					v6 |= 0x100u;
					v286 = v3 + 56;
					EnterCriticalSection((LPCRITICAL_SECTION)(v3 + 56));
					v24 = StringArray::indexOf(v3 + 8, v23, *(_BYTE*)(v3 + 100), 0);
					if (v24 < 0
						|| (v25 = (volatile signed __int32**)sub_140316E00(v3 + 24, (unsigned int)v24), *v25 != v191)
						&& (unsigned int)String::isNotEmpty(*v25, v191))
					{
						v26 = StringArray::indexOf(v3 + 8, v23, *(_BYTE*)(v3 + 40), 0);
						if (v26 < 0)
						{
							v265 = v23;
							if ((*(v23 - 4) & 0x30000000) == 0)
								_InterlockedIncrement(v23 - 4);
							StringArray::add(v3 + 8, &v265);
							v266 = v191;
							if ((*(v191 - 4) & 0x30000000) == 0)
								_InterlockedIncrement(v191 - 4);
							StringArray::add(v3 + 24, &v266);
						}
						else
						{
							v264 = v191;
							if ((*(v191 - 4) & 0x30000000) == 0)
								_InterlockedIncrement(v191 - 4);
							sub_1402F8CC0(v3 + 24, (unsigned int)v26, &v264);
						}
						(*(void(__fastcall**)(__int64))(*(_QWORD*)v3 + 8i64))(v3);
					}
					LeaveCriticalSection((LPCRITICAL_SECTION)(v3 + 56));
					v27 = v191 - 4;
					if ((*(v191 - 4) & 0x30000000) == 0 && !_InterlockedExchangeAdd(v27, 0xFFFFFFFF))
						j_j_free((void*)v27);
					v23 = v196;
				}
				v28 = v23 - 4;
				if ((*(v23 - 4) & 0x30000000) == 0 && !_InterlockedExchangeAdd(v28, 0xFFFFFFFF))
					j_j_free((void*)v28);
				((void(__fastcall*)(__int64(__fastcall***)(), __int64*))(*v290)[22])(v290, &v291);
			}
			if ((*v15 & 0x30000000) == 0 && !_InterlockedExchangeAdd(v15, 0xFFFFFFFF))
				j_j_free((void*)v15);
			if ((*Block & 0x30000000) == 0 && !_InterlockedExchangeAdd(Block, 0xFFFFFFFF))
				j_j_free(Block);
			v13 = (__int64*)(v181 + 16);
			v181 = (char*)v13;
			v1 = (__int64)v189;
		} while (v13 != (__int64*)v194);
	}
	v29 = sub_14001B640();
	(*(void(__fastcall**)(__int64, void**, _QWORD))(*(_QWORD*)v29 + 8i64))(v29, &v258, 0i64);
	v30 = v6 | 0x200;
	v292 = off_140EB1BD0;
	sub_140048D00(&v293, byte_14046D9EF);
	sub_140048D00(&v197, "midiOutputDevice");
	v31 = v197;
	if (*v197)
	{
		((void(__fastcall*)(__int64(__fastcall***)(), volatile signed __int32**, __int64*))(*v292)[4])(
			v292,
			&v192,
			&v293);
		v30 |= 0x400u;
		v287 = v3 + 56;
		EnterCriticalSection((LPCRITICAL_SECTION)(v3 + 56));
		v32 = *(_DWORD*)(v3 + 20);
		if (v32 <= 0)
			goto LABEL_84;
		v33 = 0i64;
		if (*(_BYTE*)(v3 + 100))
		{
			while ((unsigned int)compareIgnoreCase(*(char**)(*(_QWORD*)(v3 + 8) + 8 * v33), v31))
			{
				v33 = (unsigned int)(v33 + 1);
				if ((int)v33 >= v32)
					goto LABEL_84;
			}
		}
		else
		{
			Blocka = *(int*)(v3 + 20);
			v34 = 0i64;
			v35 = *(_BYTE***)(v3 + 8);
			v182 = v35;
			while ((unsigned int)String::isNotEmpty(v31, *v35))
			{
				LODWORD(v33) = v33 + 1;
				++v34;
				v35 = ++v182;
				if (v34 >= Blocka)
					goto LABEL_84;
			}
		}
		v36 = (volatile signed __int32**)sub_140316E00(v3 + 24, (unsigned int)v33);
		if (*v36 != v192)
		{
			if ((unsigned int)String::isNotEmpty(*v36, v192))
			{
			LABEL_84:
				v37 = *(_DWORD*)(v3 + 20);
				if (v37 <= 0)
				{
				LABEL_88:
					v268 = v31;
					if ((*((_DWORD*)v31 - 4) & 0x30000000) == 0)
						_InterlockedIncrement((volatile signed __int32*)v31 - 4);
					StringArray::add(v3 + 8, &v268);
					v269 = v192;
					if ((*(v192 - 4) & 0x30000000) == 0)
						_InterlockedIncrement(v192 - 4);
					StringArray::add(v3 + 24, &v269);
				}
				else
				{
					v38 = 0i64;
					if (*(_BYTE*)(v3 + 40))
					{
						while ((unsigned int)compareIgnoreCase(*(char**)(*(_QWORD*)(v3 + 8) + 8 * v38), v31))
						{
							v38 = (unsigned int)(v38 + 1);
							if ((int)v38 >= v37)
								goto LABEL_88;
						}
					}
					else
					{
						Blockc = *(int*)(v3 + 20);
						v50 = 0i64;
						v51 = *(_BYTE***)(v3 + 8);
						v183 = v51;
						while ((unsigned int)String::isNotEmpty(v31, *v51))
						{
							LODWORD(v38) = v38 + 1;
							++v50;
							v51 = ++v183;
							if (v50 >= Blockc)
								goto LABEL_88;
						}
					}
					v267 = v192;
					if ((*(v192 - 4) & 0x30000000) == 0)
						_InterlockedIncrement(v192 - 4);
					sub_1402F8CC0(v3 + 24, (unsigned int)v38, &v267);
				}
				(*(void(__fastcall**)(__int64))(*(_QWORD*)v3 + 8i64))(v3);
			}
		}
		LeaveCriticalSection((LPCRITICAL_SECTION)(v3 + 56));
		v39 = v192 - 4;
		if ((*(v192 - 4) & 0x30000000) == 0 && !_InterlockedExchangeAdd(v39, 0xFFFFFFFF))
			j_j_free((void*)v39);
		v31 = v197;
	}
	v40 = v31 - 16;
	if ((*((_DWORD*)v31 - 4) & 0x30000000) == 0 && !_InterlockedExchangeAdd((volatile signed __int32*)v40, 0xFFFFFFFF))
		j_j_free(v40);
	((void(__fastcall*)(__int64(__fastcall***)(), __int64*))(*v292)[22])(v292, &v293);
	v41 = (__int64*)v258;
	Blockb = (char*)v258;
	v275 = (char*)v258 + 16 * v259;
	if (v258 != v275)
	{
		v42 = v282;
		do
		{
			v280 = *v41;
			v274 = (void*)(v280 - 16);
			if ((*(_DWORD*)(v280 - 16) & 0x30000000) == 0)
				_InterlockedIncrement((volatile signed __int32*)(v280 - 16));
			v281 = v41[1];
			v43 = (volatile signed __int32*)(v281 - 16);
			v194 = (volatile signed __int32*)(v281 - 16);
			if ((*(_DWORD*)(v281 - 16) & 0x30000000) == 0)
				_InterlockedIncrement(v43);
			v44 = *(_QWORD*)(*(_QWORD*)(v189[61] + 368i64) + 408i64);
			v45 = (_QWORD*)(*(__int64(__fastcall**)(__int64, __int64*))(*(_QWORD*)v44 + 8i64))(v44, &v414);
			(*(void(__fastcall**)(_QWORD, _DWORD**, _QWORD*))(*(_QWORD*)*v45 + 32i64))(*v45, &v201, v45 + 1);
			(*(void(__fastcall**)(__int64, char*))(*(_QWORD*)v414 + 176i64))(v414, v415);
			v46 = v201;
			v201 = dword_140DDCDD0;
			v47 = (v30 | 0x1E000) & 0xFFFFDFFF;
			if (_bittest((const int*)&v47, 0xCu))
			{
				v47 &= 0xFFFFEFFF;
				v48 = (void*)(v42 - 16);
				if ((*(_DWORD*)(v42 - 16) & 0x30000000) == 0
					&& !_InterlockedExchangeAdd((volatile signed __int32*)v48, 0xFFFFFFFF))
				{
					j_j_free(v48);
				}
			}
			v30 = v47 | 0x800;
			if (*v46)
				v49 = sub_1400498D0(v280, v46);
			else
				v49 = 0;
			v52 = v49 >= 0;
			if ((*((_DWORD*)v46 - 4) & 0x30000000) == 0
				&& !_InterlockedExchangeAdd((volatile signed __int32*)v46 - 4, 0xFFFFFFFF))
			{
				j_j_free(v46 - 16);
			}
			if (v52)
			{
				v294 = off_140EB1BD0;
				v295 = v281;
				if ((*v43 & 0x30000000) == 0)
					_InterlockedIncrement(v43);
				sub_140048D00(&v198, "midiOutputDevice");
				v53 = v198;
				if (*v198)
				{
					((void(__fastcall*)(__int64(__fastcall***)(), volatile signed __int32**, __int64*))(*v294)[4])(
						v294,
						&v193,
						&v295);
					v184 = v30 | 0x20000;
					v283 = v3 + 56;
					EnterCriticalSection((LPCRITICAL_SECTION)(v3 + 56));
					v54 = (_QWORD*)(v3 + 8);
					v55 = *(_DWORD*)(v3 + 20);
					if (v55 <= 0)
						goto LABEL_140;
					if (*(_BYTE*)(v3 + 100))
					{
						v56 = 0i64;
						while ((unsigned int)compareIgnoreCase(*(char**)(*v54 + 8 * v56), v53))
						{
							v56 = (unsigned int)(v56 + 1);
							v54 = (_QWORD*)(v3 + 8);
							if ((int)v56 >= v55)
								goto LABEL_140;
						}
					}
					else
					{
						v270 = *(int*)(v3 + 20);
						v57 = 0i64;
						LODWORD(v56) = 0;
						v58 = (_BYTE**)*v54;
						while ((unsigned int)String::isNotEmpty(v53, *v58))
						{
							LODWORD(v56) = v56 + 1;
							++v57;
							++v58;
							if (v57 >= v270)
								goto LABEL_140;
						}
					}
					v59 = (volatile signed __int32**)sub_140316E00(v3 + 24, (unsigned int)v56);
					if (*v59 != v193)
					{
						if ((unsigned int)String::isNotEmpty(*v59, v193))
						{
						LABEL_140:
							v60 = StringArray::indexOf(v3 + 8, v53, *(_BYTE*)(v3 + 40), 0);
							if (v60 < 0)
							{
								v272 = v53;
								if ((*((_DWORD*)v53 - 4) & 0x30000000) == 0)
									_InterlockedIncrement((volatile signed __int32*)v53 - 4);
								StringArray::add(v3 + 8, &v272);
								v273 = v193;
								if ((*(v193 - 4) & 0x30000000) == 0)
									_InterlockedIncrement(v193 - 4);
								StringArray::add(v3 + 24, &v273);
							}
							else
							{
								v271 = v193;
								if ((*(v193 - 4) & 0x30000000) == 0)
									_InterlockedIncrement(v193 - 4);
								sub_1402F8CC0(v3 + 24, (unsigned int)v60, &v271);
							}
							(*(void(__fastcall**)(__int64))(*(_QWORD*)v3 + 8i64))(v3);
						}
					}
					LeaveCriticalSection((LPCRITICAL_SECTION)(v3 + 56));
					v61 = v193 - 4;
					if ((*(v193 - 4) & 0x30000000) == 0 && !_InterlockedExchangeAdd(v61, 0xFFFFFFFF))
						j_j_free((void*)v61);
					v43 = v194;
					v30 = v184;
					v53 = v198;
				}
				v62 = v53 - 16;
				if ((*((_DWORD*)v53 - 4) & 0x30000000) == 0
					&& !_InterlockedExchangeAdd((volatile signed __int32*)v62, 0xFFFFFFFF))
				{
					j_j_free(v62);
				}
				((void(__fastcall*)(__int64(__fastcall***)(), __int64*))(*v294)[22])(v294, &v295);
			}
			if ((*v43 & 0x30000000) == 0 && !_InterlockedExchangeAdd(v43, 0xFFFFFFFF))
				j_j_free((void*)v43);
			v63 = v274;
			if ((*(_DWORD*)v274 & 0x30000000) == 0 && !_InterlockedExchangeAdd((volatile signed __int32*)v274, 0xFFFFFFFF))
				j_j_free(v63);
			v41 = (__int64*)(Blockb + 16);
			Blockb = (char*)v41;
		} while (v41 != (__int64*)v275);
	}
	v64 = v189;
	v65 = Button::getToggleState(v189[52]);
	v404 = off_140EB1BC0;
	v405[0] = v65;
	sub_140048D00(&v189, "midiEnabled");
	sub_140317E00(v3, &v189, &v404);
	v66 = v189 - 2;
	if ((*(_DWORD*)(v189 - 2) & 0x30000000) == 0 && !_InterlockedExchangeAdd((volatile signed __int32*)v66, 0xFFFFFFFF))
		j_j_free(v66);
	((void(__fastcall*)(__int64(__fastcall***)(), char*))(*v404)[22])(v404, v405);
	v67 = *(double*)sub_14009F390(*(_QWORD*)(v64[58] + 512i64)).m128_u64;
	v406 = off_140EB1BE0;
	v407 = (int)v67;
	sub_140048D00(&v202, "midiChannel");
	sub_140317E00(v3, &v202, &v406);
	v68 = (void*)(v202 - 16);
	if ((*(_DWORD*)(v202 - 16) & 0x30000000) == 0
		&& !_InterlockedExchangeAdd((volatile signed __int32*)v68, 0xFFFFFFFF))
	{
		j_j_free(v68);
	}
	((void(__fastcall*)(__int64(__fastcall***)(), int*))(*v406)[22])(v406, &v407);
	v69 = sub_14009F390(*(_QWORD*)(v64[54] + 512i64)).m128_u64[0];
	v408 = off_140EB1B48;
	v409 = v69;
	sub_140048D00(&v203, "volumeMessageId");
	sub_140317E00(v3, &v203, &v408);
	v70 = (void*)(v203 - 16);
	if ((*(_DWORD*)(v203 - 16) & 0x30000000) == 0
		&& !_InterlockedExchangeAdd((volatile signed __int32*)v70, 0xFFFFFFFF))
	{
		j_j_free(v70);
	}
	((void(__fastcall*)(__int64(__fastcall***)(), unsigned __int64*))(*v408)[22])(v408, &v409);
	v71 = sub_14009F390(*(_QWORD*)(v64[64] + 512i64)).m128_u64[0];
	v410 = off_140EB1B48;
	v411 = v71;
	sub_140048D00(&v204, "volumeUpMessageId");
	sub_140317E00(v3, &v204, &v410);
	v72 = (void*)(v204 - 16);
	if ((*(_DWORD*)(v204 - 16) & 0x30000000) == 0
		&& !_InterlockedExchangeAdd((volatile signed __int32*)v72, 0xFFFFFFFF))
	{
		j_j_free(v72);
	}
	((void(__fastcall*)(__int64(__fastcall***)(), unsigned __int64*))(*v410)[22])(v410, &v411);
	v73 = sub_14009F390(*(_QWORD*)(v64[65] + 512i64)).m128_u64[0];
	v296 = off_140EB1B48;
	v297 = v73;
	sub_140048D00(&v205, "volumeDownMessageId");
	sub_140317E00(v3, &v205, &v296);
	v74 = (void*)(v205 - 16);
	if ((*(_DWORD*)(v205 - 16) & 0x30000000) == 0
		&& !_InterlockedExchangeAdd((volatile signed __int32*)v74, 0xFFFFFFFF))
	{
		j_j_free(v74);
	}
	((void(__fastcall*)(__int64(__fastcall***)(), unsigned __int64*))(*v296)[22])(v296, &v297);
	v75 = sub_14009F390(*(_QWORD*)(v64[108] + 512i64)).m128_u64[0];
	v298 = off_140EB1B48;
	v299 = v75;
	sub_140048D00(&v206, "volumeStepsize");
	sub_140317E00(v3, &v206, &v298);
	v76 = (void*)(v206 - 16);
	if ((*(_DWORD*)(v206 - 16) & 0x30000000) == 0
		&& !_InterlockedExchangeAdd((volatile signed __int32*)v76, 0xFFFFFFFF))
	{
		j_j_free(v76);
	}
	((void(__fastcall*)(__int64(__fastcall***)(), unsigned __int64*))(*v298)[22])(v298, &v299);
	v77 = sub_14009F390(*(_QWORD*)(v64[66] + 512i64)).m128_u64[0];
	v300 = off_140EB1B48;
	v301 = v77;
	sub_140048D00(&v207, "muteMessageId");
	sub_140317E00(v3, &v207, &v300);
	v78 = (void*)(v207 - 16);
	if ((*(_DWORD*)(v207 - 16) & 0x30000000) == 0
		&& !_InterlockedExchangeAdd((volatile signed __int32*)v78, 0xFFFFFFFF))
	{
		j_j_free(v78);
	}
	((void(__fastcall*)(__int64(__fastcall***)(), unsigned __int64*))(*v300)[22])(v300, &v301);
	v79 = sub_14009F390(*(_QWORD*)(v64[70] + 512i64)).m128_u64[0];
	v302 = off_140EB1B48;
	v303 = v79;
	sub_140048D00(&v208, "bmBypassMessageId");
	sub_140317E00(v3, &v208, &v302);
	v80 = (void*)(v208 - 16);
	if ((*(_DWORD*)(v208 - 16) & 0x30000000) == 0
		&& !_InterlockedExchangeAdd((volatile signed __int32*)v80, 0xFFFFFFFF))
	{
		j_j_free(v80);
	}
	((void(__fastcall*)(__int64(__fastcall***)(), unsigned __int64*))(*v302)[22])(v302, &v303);
	v81 = sub_14009F390(*(_QWORD*)(v64[67] + 512i64)).m128_u64[0];
	v304 = off_140EB1B48;
	v305 = v81;
	sub_140048D00(&v209, "dimMessageId");
	sub_140317E00(v3, &v209, &v304);
	v82 = (void*)(v209 - 16);
	if ((*(_DWORD*)(v209 - 16) & 0x30000000) == 0
		&& !_InterlockedExchangeAdd((volatile signed __int32*)v82, 0xFFFFFFFF))
	{
		j_j_free(v82);
	}
	((void(__fastcall*)(__int64(__fastcall***)(), unsigned __int64*))(*v304)[22])(v304, &v305);
	v83 = sub_14009F390(*(_QWORD*)(v64[68] + 512i64)).m128_u64[0];
	v306 = off_140EB1B48;
	v307 = v83;
	sub_140048D00(&v210, "activatePresetLevel1MessageId");
	sub_140317E00(v3, &v210, &v306);
	v84 = (void*)(v210 - 16);
	if ((*(_DWORD*)(v210 - 16) & 0x30000000) == 0
		&& !_InterlockedExchangeAdd((volatile signed __int32*)v84, 0xFFFFFFFF))
	{
		j_j_free(v84);
	}
	((void(__fastcall*)(__int64(__fastcall***)(), unsigned __int64*))(*v306)[22])(v306, &v307);
	v85 = sub_14009F390(*(_QWORD*)(v64[69] + 512i64)).m128_u64[0];
	v308 = off_140EB1B48;
	v309 = v85;
	sub_140048D00(&v211, "activatePresetLevel2MessageId");
	sub_140317E00(v3, &v211, &v308);
	v86 = (void*)(v211 - 16);
	if ((*(_DWORD*)(v211 - 16) & 0x30000000) == 0
		&& !_InterlockedExchangeAdd((volatile signed __int32*)v86, 0xFFFFFFFF))
	{
		j_j_free(v86);
	}
	((void(__fastcall*)(__int64(__fastcall***)(), unsigned __int64*))(*v308)[22])(v308, &v309);
	v87 = sub_14009F390(*(_QWORD*)(v64[84] + 512i64)).m128_u64[0];
	v310 = off_140EB1B48;
	v311 = v87;
	sub_140048D00(&v212, "groupChangeMessageId");
	sub_140317E00(v3, &v212, &v310);
	v88 = (void*)(v212 - 16);
	if ((*(_DWORD*)(v212 - 16) & 0x30000000) == 0
		&& !_InterlockedExchangeAdd((volatile signed __int32*)v88, 0xFFFFFFFF))
	{
		j_j_free(v88);
	}
	((void(__fastcall*)(__int64(__fastcall***)(), unsigned __int64*))(*v310)[22])(v310, &v311);
	v89 = sub_14009F390(*(_QWORD*)(v64[71] + 512i64)).m128_u64[0];
	v312 = off_140EB1B48;
	v313 = v89;
	sub_140048D00(&v213, "activateGroup1MessageId");
	sub_140317E00(v3, &v213, &v312);
	v90 = (void*)(v213 - 16);
	if ((*(_DWORD*)(v213 - 16) & 0x30000000) == 0
		&& !_InterlockedExchangeAdd((volatile signed __int32*)v90, 0xFFFFFFFF))
	{
		j_j_free(v90);
	}
	((void(__fastcall*)(__int64(__fastcall***)(), unsigned __int64*))(*v312)[22])(v312, &v313);
	v91 = sub_14009F390(*(_QWORD*)(v64[73] + 512i64)).m128_u64[0];
	v314 = off_140EB1B48;
	v315 = v91;
	sub_140048D00(&v214, "activateGroup2MessageId");
	sub_140317E00(v3, &v214, &v314);
	v92 = (void*)(v214 - 16);
	if ((*(_DWORD*)(v214 - 16) & 0x30000000) == 0
		&& !_InterlockedExchangeAdd((volatile signed __int32*)v92, 0xFFFFFFFF))
	{
		j_j_free(v92);
	}
	((void(__fastcall*)(__int64(__fastcall***)(), unsigned __int64*))(*v314)[22])(v314, &v315);
	v93 = sub_14009F390(*(_QWORD*)(v64[74] + 512i64)).m128_u64[0];
	v316 = off_140EB1B48;
	v317 = v93;
	sub_140048D00(&v215, "activateGroup3MessageId");
	sub_140317E00(v3, &v215, &v316);
	v94 = (void*)(v215 - 16);
	if ((*(_DWORD*)(v215 - 16) & 0x30000000) == 0
		&& !_InterlockedExchangeAdd((volatile signed __int32*)v94, 0xFFFFFFFF))
	{
		j_j_free(v94);
	}
	((void(__fastcall*)(__int64(__fastcall***)(), unsigned __int64*))(*v316)[22])(v316, &v317);
	v95 = sub_14009F390(*(_QWORD*)(v64[75] + 512i64)).m128_u64[0];
	v318 = off_140EB1B48;
	v319 = v95;
	sub_140048D00(&v216, "activateGroup4MessageId");
	sub_140317E00(v3, &v216, &v318);
	v96 = (void*)(v216 - 16);
	if ((*(_DWORD*)(v216 - 16) & 0x30000000) == 0
		&& !_InterlockedExchangeAdd((volatile signed __int32*)v96, 0xFFFFFFFF))
	{
		j_j_free(v96);
	}
	((void(__fastcall*)(__int64(__fastcall***)(), unsigned __int64*))(*v318)[22])(v318, &v319);
	v97 = sub_14009F390(*(_QWORD*)(v64[76] + 512i64)).m128_u64[0];
	v320 = off_140EB1B48;
	v321 = v97;
	sub_140048D00(&v217, "activateGroup5MessageId");
	sub_140317E00(v3, &v217, &v320);
	v98 = (void*)(v217 - 16);
	if ((*(_DWORD*)(v217 - 16) & 0x30000000) == 0
		&& !_InterlockedExchangeAdd((volatile signed __int32*)v98, 0xFFFFFFFF))
	{
		j_j_free(v98);
	}
	((void(__fastcall*)(__int64(__fastcall***)(), unsigned __int64*))(*v320)[22])(v320, &v321);
	v99 = sub_14009F390(*(_QWORD*)(v64[77] + 512i64)).m128_u64[0];
	v322 = off_140EB1B48;
	v323 = v99;
	sub_140048D00(&v218, "activateGroup6MessageId");
	sub_140317E00(v3, &v218, &v322);
	v100 = (void*)(v218 - 16);
	if ((*(_DWORD*)(v218 - 16) & 0x30000000) == 0
		&& !_InterlockedExchangeAdd((volatile signed __int32*)v100, 0xFFFFFFFF))
	{
		j_j_free(v100);
	}
	((void(__fastcall*)(__int64(__fastcall***)(), unsigned __int64*))(*v322)[22])(v322, &v323);
	v101 = sub_14009F390(*(_QWORD*)(v64[78] + 512i64)).m128_u64[0];
	v324 = off_140EB1B48;
	v325 = v101;
	sub_140048D00(&v219, "activateGroup7MessageId");
	sub_140317E00(v3, &v219, &v324);
	v102 = (void*)(v219 - 16);
	if ((*(_DWORD*)(v219 - 16) & 0x30000000) == 0
		&& !_InterlockedExchangeAdd((volatile signed __int32*)v102, 0xFFFFFFFF))
	{
		j_j_free(v102);
	}
	((void(__fastcall*)(__int64(__fastcall***)(), unsigned __int64*))(*v324)[22])(v324, &v325);
	v103 = sub_14009F390(*(_QWORD*)(v64[79] + 512i64)).m128_u64[0];
	v326 = off_140EB1B48;
	v327 = v103;
	sub_140048D00(&v220, "activateGroup8MessageId");
	sub_140317E00(v3, &v220, &v326);
	v104 = (void*)(v220 - 16);
	if ((*(_DWORD*)(v220 - 16) & 0x30000000) == 0
		&& !_InterlockedExchangeAdd((volatile signed __int32*)v104, 0xFFFFFFFF))
	{
		j_j_free(v104);
	}
	((void(__fastcall*)(__int64(__fastcall***)(), unsigned __int64*))(*v326)[22])(v326, &v327);
	v105 = sub_14009F390(*(_QWORD*)(v64[80] + 512i64)).m128_u64[0];
	v328 = off_140EB1B48;
	v329 = v105;
	sub_140048D00(&v221, "activateGroup9MessageId");
	sub_140317E00(v3, &v221, &v328);
	v106 = (void*)(v221 - 16);
	if ((*(_DWORD*)(v221 - 16) & 0x30000000) == 0
		&& !_InterlockedExchangeAdd((volatile signed __int32*)v106, 0xFFFFFFFF))
	{
		j_j_free(v106);
	}
	((void(__fastcall*)(__int64(__fastcall***)(), unsigned __int64*))(*v328)[22])(v328, &v329);
	v107 = sub_14009F390(*(_QWORD*)(v64[81] + 512i64)).m128_u64[0];
	v330 = off_140EB1B48;
	v331 = v107;
	sub_140048D00(&v222, "activateGroup10MessageId");
	sub_140317E00(v3, &v222, &v330);
	v108 = (void*)(v222 - 16);
	if ((*(_DWORD*)(v222 - 16) & 0x30000000) == 0
		&& !_InterlockedExchangeAdd((volatile signed __int32*)v108, 0xFFFFFFFF))
	{
		j_j_free(v108);
	}
	((void(__fastcall*)(__int64(__fastcall***)(), unsigned __int64*))(*v330)[22])(v330, &v331);
	v109 = ComboBox::getSelectedItemIndex(v64[85]);
	v332 = off_140EB1BE0;
	v333 = v109;
	sub_140048D00(&v223, "volumeUpMessageType");
	sub_140317E00(v3, &v223, &v332);
	v110 = (void*)(v223 - 16);
	if ((*(_DWORD*)(v223 - 16) & 0x30000000) == 0
		&& !_InterlockedExchangeAdd((volatile signed __int32*)v110, 0xFFFFFFFF))
	{
		j_j_free(v110);
	}
	((void(__fastcall*)(__int64(__fastcall***)(), int*))(*v332)[22])(v332, &v333);
	v111 = ComboBox::getSelectedItemIndex(v64[88]);
	v334 = off_140EB1BE0;
	v335 = v111;
	sub_140048D00(&v224, "volumeDownMessageType");
	sub_140317E00(v3, &v224, &v334);
	v112 = (void*)(v224 - 16);
	if ((*(_DWORD*)(v224 - 16) & 0x30000000) == 0
		&& !_InterlockedExchangeAdd((volatile signed __int32*)v112, 0xFFFFFFFF))
	{
		j_j_free(v112);
	}
	((void(__fastcall*)(__int64(__fastcall***)(), int*))(*v334)[22])(v334, &v335);
	v113 = ComboBox::getSelectedItemIndex(v64[89]);
	v336 = off_140EB1BE0;
	v337 = v113;
	sub_140048D00(&v225, "muteMessageType");
	sub_140317E00(v3, &v225, &v336);
	v114 = (void*)(v225 - 16);
	if ((*(_DWORD*)(v225 - 16) & 0x30000000) == 0
		&& !_InterlockedExchangeAdd((volatile signed __int32*)v114, 0xFFFFFFFF))
	{
		j_j_free(v114);
	}
	((void(__fastcall*)(__int64(__fastcall***)(), int*))(*v336)[22])(v336, &v337);
	v115 = ComboBox::getSelectedItemIndex(v64[93]);
	v338 = off_140EB1BE0;
	v339 = v115;
	sub_140048D00(&v226, "bmBypassMessageType");
	sub_140317E00(v3, &v226, &v338);
	v116 = (void*)(v226 - 16);
	if ((*(_DWORD*)(v226 - 16) & 0x30000000) == 0
		&& !_InterlockedExchangeAdd((volatile signed __int32*)v116, 0xFFFFFFFF))
	{
		j_j_free(v116);
	}
	((void(__fastcall*)(__int64(__fastcall***)(), int*))(*v338)[22])(v338, &v339);
	v117 = ComboBox::getSelectedItemIndex(v64[90]);
	v340 = off_140EB1BE0;
	v341 = v117;
	sub_140048D00(&v227, "dimMessageType");
	sub_140317E00(v3, &v227, &v340);
	v118 = (void*)(v227 - 16);
	if ((*(_DWORD*)(v227 - 16) & 0x30000000) == 0
		&& !_InterlockedExchangeAdd((volatile signed __int32*)v118, 0xFFFFFFFF))
	{
		j_j_free(v118);
	}
	((void(__fastcall*)(__int64(__fastcall***)(), int*))(*v340)[22])(v340, &v341);
	v119 = ComboBox::getSelectedItemIndex(v64[91]);
	v342 = off_140EB1BE0;
	v343 = v119;
	sub_140048D00(&v228, "activatePresetLevel1MessageType");
	sub_140317E00(v3, &v228, &v342);
	v120 = (void*)(v228 - 16);
	if ((*(_DWORD*)(v228 - 16) & 0x30000000) == 0
		&& !_InterlockedExchangeAdd((volatile signed __int32*)v120, 0xFFFFFFFF))
	{
		j_j_free(v120);
	}
	((void(__fastcall*)(__int64(__fastcall***)(), int*))(*v342)[22])(v342, &v343);
	v121 = ComboBox::getSelectedItemIndex(v64[92]);
	v344 = off_140EB1BE0;
	v345 = v121;
	sub_140048D00(&v229, "activatePresetLevel2MessageType");
	sub_140317E00(v3, &v229, &v344);
	v122 = (void*)(v229 - 16);
	if ((*(_DWORD*)(v229 - 16) & 0x30000000) == 0
		&& !_InterlockedExchangeAdd((volatile signed __int32*)v122, 0xFFFFFFFF))
	{
		j_j_free(v122);
	}
	((void(__fastcall*)(__int64(__fastcall***)(), int*))(*v344)[22])(v344, &v345);
	v123 = ComboBox::getSelectedItemIndex(v64[94]);
	v346 = off_140EB1BE0;
	v347 = v123;
	sub_140048D00(&v230, "activateGroup1MessageType");
	sub_140317E00(v3, &v230, &v346);
	v124 = (void*)(v230 - 16);
	if ((*(_DWORD*)(v230 - 16) & 0x30000000) == 0
		&& !_InterlockedExchangeAdd((volatile signed __int32*)v124, 0xFFFFFFFF))
	{
		j_j_free(v124);
	}
	((void(__fastcall*)(__int64(__fastcall***)(), int*))(*v346)[22])(v346, &v347);
	v125 = ComboBox::getSelectedItemIndex(v64[95]);
	v348 = off_140EB1BE0;
	v349 = v125;
	sub_140048D00(&v231, "activateGroup2MessageType");
	sub_140317E00(v3, &v231, &v348);
	v126 = (void*)(v231 - 16);
	if ((*(_DWORD*)(v231 - 16) & 0x30000000) == 0
		&& !_InterlockedExchangeAdd((volatile signed __int32*)v126, 0xFFFFFFFF))
	{
		j_j_free(v126);
	}
	((void(__fastcall*)(__int64(__fastcall***)(), int*))(*v348)[22])(v348, &v349);
	v127 = ComboBox::getSelectedItemIndex(v64[96]);
	v350 = off_140EB1BE0;
	v351 = v127;
	sub_140048D00(&v232, "activateGroup3MessageType");
	sub_140317E00(v3, &v232, &v350);
	v128 = (void*)(v232 - 16);
	if ((*(_DWORD*)(v232 - 16) & 0x30000000) == 0
		&& !_InterlockedExchangeAdd((volatile signed __int32*)v128, 0xFFFFFFFF))
	{
		j_j_free(v128);
	}
	((void(__fastcall*)(__int64(__fastcall***)(), int*))(*v350)[22])(v350, &v351);
	v129 = ComboBox::getSelectedItemIndex(v64[97]);
	v352 = off_140EB1BE0;
	v353 = v129;
	sub_140048D00(&v233, "activateGroup4MessageType");
	sub_140317E00(v3, &v233, &v352);
	v130 = (void*)(v233 - 16);
	if ((*(_DWORD*)(v233 - 16) & 0x30000000) == 0
		&& !_InterlockedExchangeAdd((volatile signed __int32*)v130, 0xFFFFFFFF))
	{
		j_j_free(v130);
	}
	((void(__fastcall*)(__int64(__fastcall***)(), int*))(*v352)[22])(v352, &v353);
	v131 = ComboBox::getSelectedItemIndex(v64[98]);
	v354 = off_140EB1BE0;
	v355 = v131;
	sub_140048D00(&v234, "activateGroup5MessageType");
	sub_140317E00(v3, &v234, &v354);
	v132 = (void*)(v234 - 16);
	if ((*(_DWORD*)(v234 - 16) & 0x30000000) == 0
		&& !_InterlockedExchangeAdd((volatile signed __int32*)v132, 0xFFFFFFFF))
	{
		j_j_free(v132);
	}
	((void(__fastcall*)(__int64(__fastcall***)(), int*))(*v354)[22])(v354, &v355);
	v133 = ComboBox::getSelectedItemIndex(v64[99]);
	v356 = off_140EB1BE0;
	v357 = v133;
	sub_140048D00(&v235, "activateGroup6MessageType");
	sub_140317E00(v3, &v235, &v356);
	v134 = (void*)(v235 - 16);
	if ((*(_DWORD*)(v235 - 16) & 0x30000000) == 0
		&& !_InterlockedExchangeAdd((volatile signed __int32*)v134, 0xFFFFFFFF))
	{
		j_j_free(v134);
	}
	((void(__fastcall*)(__int64(__fastcall***)(), int*))(*v356)[22])(v356, &v357);
	v135 = ComboBox::getSelectedItemIndex(v64[100]);
	v358 = off_140EB1BE0;
	v359 = v135;
	sub_140048D00(&v236, "activateGroup7MessageType");
	sub_140317E00(v3, &v236, &v358);
	v136 = (void*)(v236 - 16);
	if ((*(_DWORD*)(v236 - 16) & 0x30000000) == 0
		&& !_InterlockedExchangeAdd((volatile signed __int32*)v136, 0xFFFFFFFF))
	{
		j_j_free(v136);
	}
	((void(__fastcall*)(__int64(__fastcall***)(), int*))(*v358)[22])(v358, &v359);
	v137 = ComboBox::getSelectedItemIndex(v64[101]);
	v360 = off_140EB1BE0;
	v361 = v137;
	sub_140048D00(&v237, "activateGroup8MessageType");
	sub_140317E00(v3, &v237, &v360);
	v138 = (void*)(v237 - 16);
	if ((*(_DWORD*)(v237 - 16) & 0x30000000) == 0
		&& !_InterlockedExchangeAdd((volatile signed __int32*)v138, 0xFFFFFFFF))
	{
		j_j_free(v138);
	}
	((void(__fastcall*)(__int64(__fastcall***)(), int*))(*v360)[22])(v360, &v361);
	v139 = ComboBox::getSelectedItemIndex(v64[102]);
	v362 = off_140EB1BE0;
	v363 = v139;
	sub_140048D00(&v238, "activateGroup9MessageType");
	sub_140317E00(v3, &v238, &v362);
	v140 = (void*)(v238 - 16);
	if ((*(_DWORD*)(v238 - 16) & 0x30000000) == 0
		&& !_InterlockedExchangeAdd((volatile signed __int32*)v140, 0xFFFFFFFF))
	{
		j_j_free(v140);
	}
	((void(__fastcall*)(__int64(__fastcall***)(), int*))(*v362)[22])(v362, &v363);
	v141 = ComboBox::getSelectedItemIndex(v64[103]);
	v364 = off_140EB1BE0;
	v365 = v141;
	sub_140048D00(&v239, "activateGroup10MessageType");
	sub_140317E00(v3, &v239, &v364);
	v142 = (void*)(v239 - 16);
	if ((*(_DWORD*)(v239 - 16) & 0x30000000) == 0
		&& !_InterlockedExchangeAdd((volatile signed __int32*)v142, 0xFFFFFFFF))
	{
		j_j_free(v142);
	}
	((void(__fastcall*)(__int64(__fastcall***)(), int*))(*v364)[22])(v364, &v365);
	v143 = Button::getToggleState(v64[109]);
	v366 = off_140EB1BC0;
	v367[0] = v143;
	sub_140048D00(&v240, "volumeEnabled");
	sub_140317E00(v3, &v240, &v366);
	v144 = (void*)(v240 - 16);
	if ((*(_DWORD*)(v240 - 16) & 0x30000000) == 0
		&& !_InterlockedExchangeAdd((volatile signed __int32*)v144, 0xFFFFFFFF))
	{
		j_j_free(v144);
	}
	((void(__fastcall*)(__int64(__fastcall***)(), char*))(*v366)[22])(v366, v367);
	v145 = Button::getToggleState(v64[110]);
	v368 = off_140EB1BC0;
	v369[0] = v145;
	sub_140048D00(&v241, "volumeUpEnabled");
	sub_140317E00(v3, &v241, &v368);
	v146 = (void*)(v241 - 16);
	if ((*(_DWORD*)(v241 - 16) & 0x30000000) == 0
		&& !_InterlockedExchangeAdd((volatile signed __int32*)v146, 0xFFFFFFFF))
	{
		j_j_free(v146);
	}
	((void(__fastcall*)(__int64(__fastcall***)(), char*))(*v368)[22])(v368, v369);
	v147 = Button::getToggleState(v64[111]);
	v370 = off_140EB1BC0;
	v371[0] = v147;
	sub_140048D00(&v242, "volumeDownEnabled");
	sub_140317E00(v3, &v242, &v370);
	v148 = (void*)(v242 - 16);
	if ((*(_DWORD*)(v242 - 16) & 0x30000000) == 0
		&& !_InterlockedExchangeAdd((volatile signed __int32*)v148, 0xFFFFFFFF))
	{
		j_j_free(v148);
	}
	((void(__fastcall*)(__int64(__fastcall***)(), char*))(*v370)[22])(v370, v371);
	v149 = Button::getToggleState(v64[112]);
	v372 = off_140EB1BC0;
	v373[0] = v149;
	sub_140048D00(&v243, "muteEnabled");
	sub_140317E00(v3, &v243, &v372);
	v150 = (void*)(v243 - 16);
	if ((*(_DWORD*)(v243 - 16) & 0x30000000) == 0
		&& !_InterlockedExchangeAdd((volatile signed __int32*)v150, 0xFFFFFFFF))
	{
		j_j_free(v150);
	}
	((void(__fastcall*)(__int64(__fastcall***)(), char*))(*v372)[22])(v372, v373);
	v151 = Button::getToggleState(v64[113]);
	v374 = off_140EB1BC0;
	v375[0] = v151;
	sub_140048D00(&v244, "dimEnabled");
	sub_140317E00(v3, &v244, &v374);
	v152 = (void*)(v244 - 16);
	if ((*(_DWORD*)(v244 - 16) & 0x30000000) == 0
		&& !_InterlockedExchangeAdd((volatile signed __int32*)v152, 0xFFFFFFFF))
	{
		j_j_free(v152);
	}
	((void(__fastcall*)(__int64(__fastcall***)(), char*))(*v374)[22])(v374, v375);
	v153 = Button::getToggleState(v64[116]);
	v376 = off_140EB1BC0;
	v377[0] = v153;
	sub_140048D00(&v245, "bmBypassEnabled");
	sub_140317E00(v3, &v245, &v376);
	v154 = (void*)(v245 - 16);
	if ((*(_DWORD*)(v245 - 16) & 0x30000000) == 0
		&& !_InterlockedExchangeAdd((volatile signed __int32*)v154, 0xFFFFFFFF))
	{
		j_j_free(v154);
	}
	((void(__fastcall*)(__int64(__fastcall***)(), char*))(*v376)[22])(v376, v377);
	v155 = Button::getToggleState(v64[114]);
	v378 = off_140EB1BC0;
	v379[0] = v155;
	sub_140048D00(&v246, "PresetLevel1Enabled");
	sub_140317E00(v3, &v246, &v378);
	v156 = (void*)(v246 - 16);
	if ((*(_DWORD*)(v246 - 16) & 0x30000000) == 0
		&& !_InterlockedExchangeAdd((volatile signed __int32*)v156, 0xFFFFFFFF))
	{
		j_j_free(v156);
	}
	((void(__fastcall*)(__int64(__fastcall***)(), char*))(*v378)[22])(v378, v379);
	v157 = Button::getToggleState(v64[115]);
	v380 = off_140EB1BC0;
	v381[0] = v157;
	sub_140048D00(&v247, "PresetLevel2Enabled");
	sub_140317E00(v3, &v247, &v380);
	v158 = (void*)(v247 - 16);
	if ((*(_DWORD*)(v247 - 16) & 0x30000000) == 0
		&& !_InterlockedExchangeAdd((volatile signed __int32*)v158, 0xFFFFFFFF))
	{
		j_j_free(v158);
	}
	((void(__fastcall*)(__int64(__fastcall***)(), char*))(*v380)[22])(v380, v381);
	v159 = Button::getToggleState(v64[127]);
	v382 = off_140EB1BC0;
	v383[0] = v159;
	sub_140048D00(&v248, "groupChangeEnabled");
	sub_140317E00(v3, &v248, &v382);
	v160 = (void*)(v248 - 16);
	if ((*(_DWORD*)(v248 - 16) & 0x30000000) == 0
		&& !_InterlockedExchangeAdd((volatile signed __int32*)v160, 0xFFFFFFFF))
	{
		j_j_free(v160);
	}
	((void(__fastcall*)(__int64(__fastcall***)(), char*))(*v382)[22])(v382, v383);
	v161 = Button::getToggleState(v64[117]);
	v384 = off_140EB1BC0;
	v385[0] = v161;
	sub_140048D00(&v249, "Group1Enabled");
	sub_140317E00(v3, &v249, &v384);
	v162 = (void*)(v249 - 16);
	if ((*(_DWORD*)(v249 - 16) & 0x30000000) == 0
		&& !_InterlockedExchangeAdd((volatile signed __int32*)v162, 0xFFFFFFFF))
	{
		j_j_free(v162);
	}
	((void(__fastcall*)(__int64(__fastcall***)(), char*))(*v384)[22])(v384, v385);
	v163 = Button::getToggleState(v64[118]);
	v386 = off_140EB1BC0;
	v387[0] = v163;
	sub_140048D00(&v250, "Group2Enabled");
	sub_140317E00(v3, &v250, &v386);
	v164 = (void*)(v250 - 16);
	if ((*(_DWORD*)(v250 - 16) & 0x30000000) == 0
		&& !_InterlockedExchangeAdd((volatile signed __int32*)v164, 0xFFFFFFFF))
	{
		j_j_free(v164);
	}
	((void(__fastcall*)(__int64(__fastcall***)(), char*))(*v386)[22])(v386, v387);
	v165 = Button::getToggleState(v64[119]);
	v388 = off_140EB1BC0;
	v389[0] = v165;
	sub_140048D00(&v251, "Group3Enabled");
	sub_140317E00(v3, &v251, &v388);
	v166 = (void*)(v251 - 16);
	if ((*(_DWORD*)(v251 - 16) & 0x30000000) == 0
		&& !_InterlockedExchangeAdd((volatile signed __int32*)v166, 0xFFFFFFFF))
	{
		j_j_free(v166);
	}
	((void(__fastcall*)(__int64(__fastcall***)(), char*))(*v388)[22])(v388, v389);
	v167 = Button::getToggleState(v64[120]);
	v390 = off_140EB1BC0;
	v391[0] = v167;
	sub_140048D00(&v252, "Group4Enabled");
	sub_140317E00(v3, &v252, &v390);
	v168 = (void*)(v252 - 16);
	if ((*(_DWORD*)(v252 - 16) & 0x30000000) == 0
		&& !_InterlockedExchangeAdd((volatile signed __int32*)v168, 0xFFFFFFFF))
	{
		j_j_free(v168);
	}
	((void(__fastcall*)(__int64(__fastcall***)(), char*))(*v390)[22])(v390, v391);
	v169 = Button::getToggleState(v64[121]);
	v392 = off_140EB1BC0;
	v393[0] = v169;
	sub_140048D00(&v253, "Group5Enabled");
	sub_140317E00(v3, &v253, &v392);
	v170 = (void*)(v253 - 16);
	if ((*(_DWORD*)(v253 - 16) & 0x30000000) == 0
		&& !_InterlockedExchangeAdd((volatile signed __int32*)v170, 0xFFFFFFFF))
	{
		j_j_free(v170);
	}
	((void(__fastcall*)(__int64(__fastcall***)(), char*))(*v392)[22])(v392, v393);
	v171 = Button::getToggleState(v64[122]);
	v394 = off_140EB1BC0;
	v395[0] = v171;
	sub_140048D00(&v254, "Group6Enabled");
	sub_140317E00(v3, &v254, &v394);
	v172 = (void*)(v254 - 16);
	if ((*(_DWORD*)(v254 - 16) & 0x30000000) == 0
		&& !_InterlockedExchangeAdd((volatile signed __int32*)v172, 0xFFFFFFFF))
	{
		j_j_free(v172);
	}
	((void(__fastcall*)(__int64(__fastcall***)(), char*))(*v394)[22])(v394, v395);
	v173 = Button::getToggleState(v64[123]);
	v396 = off_140EB1BC0;
	v397[0] = v173;
	sub_140048D00(&v255, "Group7Enabled");
	sub_140317E00(v3, &v255, &v396);
	v174 = (void*)(v255 - 16);
	if ((*(_DWORD*)(v255 - 16) & 0x30000000) == 0
		&& !_InterlockedExchangeAdd((volatile signed __int32*)v174, 0xFFFFFFFF))
	{
		j_j_free(v174);
	}
	((void(__fastcall*)(__int64(__fastcall***)(), char*))(*v396)[22])(v396, v397);
	v175 = Button::getToggleState(v64[124]);
	v398 = off_140EB1BC0;
	v399[0] = v175;
	sub_140048D00(&v256, "Group8Enabled");
	sub_140317E00(v3, &v256, &v398);
	v176 = (void*)(v256 - 16);
	if ((*(_DWORD*)(v256 - 16) & 0x30000000) == 0
		&& !_InterlockedExchangeAdd((volatile signed __int32*)v176, 0xFFFFFFFF))
	{
		j_j_free(v176);
	}
	((void(__fastcall*)(__int64(__fastcall***)(), char*))(*v398)[22])(v398, v399);
	v177 = Button::getToggleState(v64[125]);
	v400 = off_140EB1BC0;
	v401[0] = v177;
	sub_140048D00(&v257, "Group9Enabled");
	sub_140317E00(v3, &v257, &v400);
	v178 = (void*)(v257 - 16);
	if ((*(_DWORD*)(v257 - 16) & 0x30000000) == 0
		&& !_InterlockedExchangeAdd((volatile signed __int32*)v178, 0xFFFFFFFF))
	{
		j_j_free(v178);
	}
	((void(__fastcall*)(__int64(__fastcall***)(), char*))(*v400)[22])(v400, v401);
	v179 = Button::getToggleState(v64[126]);
	v402 = off_140EB1BC0;
	v403[0] = v179;
	sub_140048D00(&v199, "Group10Enabled");
	sub_140317E00(v3, &v199, &v402);
	v180 = (void*)(v199 - 16);
	if ((*(_DWORD*)(v199 - 16) & 0x30000000) == 0
		&& !_InterlockedExchangeAdd((volatile signed __int32*)v180, 0xFFFFFFFF))
	{
		j_j_free(v180);
	}
	((void(__fastcall*)(__int64(__fastcall***)(), char*))(*v402)[22])(v402, v403);
	sub_140325DE0(v3 + 104);
	sub_140005C30(&v258);
	free(v258);
	sub_140005C30(&v260);
	free(v260);*/
	
}
void MidiSettingsComponent::paint(Graphics&)
{
	/*__int64 v3; // rax
	__int64 v4; // rax
	__int64 v5; // rax
	unsigned int* v6; // rax
	int v8; // [rsp+30h] [rbp+8h] BYREF
	void* v9; // [rsp+40h] [rbp+18h]

	if (a1)
	{
		while (1)
		{
			v3 = *(_QWORD*)(a1 + 80);
			if (v3)
			{
				v4 = *(_QWORD*)(v3 + 16);
				if (v4)
					break;
			}
			a1 = *(_QWORD*)(a1 + 24);
			if (!a1)
				goto LABEL_5;
		}
	}
	else
	{
	LABEL_5:
		v5 = qword_140EC0000;
		if (!qword_140EC0000)
		{
			v9 = operator new(0x130ui64);
			v5 = Desktop::Desktop((__int64)v9);
			qword_140EC0000 = v5;
		}
		v4 = Desktop::getDefaultLookAndFeel(v5);
	}
	v6 = LookAndFeel::findColour(v4, &v8, 16799488);
	return Graphics::fillAll(a2, *v6);*/

}
void MidiSettingsComponent::resized() 
{
	/*Component::setBounds(*(_QWORD*)(a1 + 416), 16, 8, 376, 24);
	Component::setBounds(*(_QWORD*)(a1 + 448), 16, 90, 376, 24);
	Component::setBounds(*(_QWORD*)(a1 + 456), 408, 88, 376, 140);
	Component::setBounds(*(_QWORD*)(a1 + 496), 404, 63, 376, 24);
	Component::setBounds(*(_QWORD*)(a1 + 656), *(_DWORD*)(a1 + 40) - 150, *(_DWORD*)(a1 + 44) - 41, 150, 32);
	Component::setBounds(*(_QWORD*)(a1 + 664), 0, *(_DWORD*)(a1 + 44) - 41, 150, 32);
	Component::setBounds(*(_QWORD*)(a1 + 872), 8, 294, 152, 24);
	Component::setBounds(*(_QWORD*)(a1 + 880), 8, 325, 152, 24);
	Component::setBounds(*(_QWORD*)(a1 + 888), 8, 355, 152, 24);
	Component::setBounds(*(_QWORD*)(a1 + 896), 8, 385, 152, 24);
	Component::setBounds(*(_QWORD*)(a1 + 904), 8, 415, 152, 24);
	Component::setBounds(*(_QWORD*)(a1 + 912), 8, 457, 152, 24);
	Component::setBounds(*(_QWORD*)(a1 + 920), 8, 487, 152, 24);
	Component::setBounds(*(_QWORD*)(a1 + 928), 8, 517, 152, 24);
	Component::setBounds(*(_QWORD*)(a1 + 936), 426, 295, 152, 24);
	Component::setBounds(*(_QWORD*)(a1 + 944), 426, 327, 152, 24);
	Component::setBounds(*(_QWORD*)(a1 + 952), 426, 356, 152, 24);
	Component::setBounds(*(_QWORD*)(a1 + 960), 426, 385, 152, 24);
	Component::setBounds(*(_QWORD*)(a1 + 968), 426, 416, 152, 24);
	Component::setBounds(*(_QWORD*)(a1 + 976), 426, 457, 152, 24);
	Component::setBounds(*(_QWORD*)(a1 + 984), 426, 488, 152, 24);
	Component::setBounds(*(_QWORD*)(a1 + 992), 426, 518, 152, 24);
	Component::setBounds(*(_QWORD*)(a1 + 1000), 426, 547, 152, 24);
	Component::setBounds(*(_QWORD*)(a1 + 1008), 426, 576, 152, 24);
	return Component::setBounds(*(_QWORD*)(a1 + 1016), 426, 608, 152, 24);*/

}
void MidiSettingsComponent::comboBoxChanged(ComboBox* comboBoxThatHasChanged)
{
	//sub_140172F90(a1 - 200);
}
void MidiSettingsComponent::buttonClicked(Button*)
{
	/*void(__fastcall * **v2)(_QWORD, __int64); // rcx

	if (a2 == a1[29])
		goto LABEL_26;
	if (a2 == a1[59])
	{
		sub_140171350(a1 - 23);
		return;
	}
	if (a2 == a1[60])
	{
		v2 = (void(__fastcall***)(_QWORD, __int64)) * (a1 - 20);
		if (v2)
			(**v2)(v2, 1i64);
		return;
	}
	if (a2 == a1[86]
		|| a2 == a1[87]
		|| a2 == a1[88]
		|| a2 == a1[89]
		|| a2 == a1[90]
		|| a2 == a1[91]
		|| a2 == a1[92]
		|| a2 == a1[93]
		|| a2 == a1[94]
		|| a2 == a1[95]
		|| a2 == a1[96]
		|| a2 == a1[97]
		|| a2 == a1[98]
		|| a2 == a1[99]
		|| a2 == a1[100]
		|| a2 == a1[101]
		|| a2 == a1[102]
		|| a2 == a1[103]
		|| a2 == a1[104])
	{
	LABEL_26:
		sub_140172F90((__int64)(a1 - 23));
	}
*/

}
void MidiSettingsComponent::changeListenerCallback(ChangeBroadcaster* source)
{
	/*__int64 v2; // r13
	int v3; // er14
	__int64 v4; // rdi
	void** v5; // r15
	bool v6; // cf
	void** v7; // rcx
	__int64 v8; // rcx
	signed int v9; // ecx
	__int64 v10; // rbx
	size_t v11; // rdi
	_BYTE* v12; // rbx
	_BYTE* v13; // rcx
	_DWORD* v14; // rcx
	__int64 v15; // r8
	_BYTE* v16; // rbx
	_BYTE* v17; // rcx
	_BYTE* v18; // rcx
	_DWORD* v19; // rcx
	_QWORD* v20; // rbx
	_DWORD* v21; // rcx
	char* v22; // rcx
	void* Block; // [rsp+38h] [rbp-20h] BYREF
	__int64 v24; // [rsp+40h] [rbp-18h]
	__int64 v25; // [rsp+A0h] [rbp+48h]
	_BYTE* v26; // [rsp+A8h] [rbp+50h] BYREF
	_BYTE* v27; // [rsp+B0h] [rbp+58h] BYREF
	_BYTE* v28; // [rsp+B8h] [rbp+60h] BYREF

	v25 = a1;
	v2 = a1;
	if (a2 == qword_140EBFFA0 + 24)
	{
		sub_140048D00(&v28, &unk_14046DA03);
		v3 = 0;
		Block = 0i64;
		v24 = 0i64;
		sub_140049DA0((__int64*)&Block, *(__int64**)(qword_140EBFFA0 + 1480), *(_DWORD*)(qword_140EBFFA0 + 1492));
		v4 = HIDWORD(v24);
		if (SHIDWORD(v24) > 0)
		{
			v5 = (void**)Block;
			v6 = HIDWORD(v24) != 0;
			do
			{
				if (v6)
				{
					v7 = v5;
				}
				else
				{
					if (dword_140EC06A8 > *(_DWORD*)(*(_QWORD*)NtCurrentTeb()->ThreadLocalStoragePointer + 4i64))
					{
						Init_thread_header(&dword_140EC06A8);
						if (dword_140EC06A8 == -1)
						{
							off_140EB1E28 = dword_140DDCDD0;
							atexit(sub_14046AE50);
							Init_thread_footer(&dword_140EC06A8);
						}
					}
					v7 = &off_140EB1E28;
				}
				v8 = (__int64)*v7;
				v27 = (_BYTE*)v8;
				if ((*(_DWORD*)(v8 - 16) & 0x30000000) == 0)
					_InterlockedIncrement((volatile signed __int32*)(v8 - 16));
				v9 = (unsigned int)"" - (unsigned int)"\n";
				if (v9 > 0)
				{
					v10 = -1i64;
					do
						++v10;
					while (v27[v10]);
					v11 = v9;
					sub_1402FD230(&v27, v10 + v9);
					v12 = &v27[(int)v10];
					memcpy(v12, "\n", v11);
					v12[v11] = 0;
				}
				v26 = v27;
				if ((*((_DWORD*)v27 - 4) & 0x30000000) == 0)
					_InterlockedIncrement((volatile signed __int32*)v27 - 4);
				v13 = v27 - 16;
				if ((*((_DWORD*)v27 - 4) & 0x30000000) == 0
					&& !_InterlockedExchangeAdd((volatile signed __int32*)v13, 0xFFFFFFFF))
				{
					j_j_free(v13);
				}
				if (*v26)
				{
					v15 = -1i64;
					do
						++v15;
					while (v28[v15]);
					ImageCache::getFromHashCode(&v26, v28, (_DWORD)v28 + v15);
				}
				else
				{
					if ((*((_DWORD*)v28 - 4) & 0x30000000) == 0)
						_InterlockedIncrement((volatile signed __int32*)v28 - 4);
					v14 = (_DWORD*)(_InterlockedExchange64((volatile __int64*)&v26, (__int64)v28) - 16);
					if ((*v14 & 0x30000000) == 0 && !_InterlockedExchangeAdd(v14, 0xFFFFFFFF))
						j_j_free(v14);
				}
				v16 = v26;
				if ((*((_DWORD*)v26 - 4) & 0x30000000) == 0)
					_InterlockedIncrement((volatile signed __int32*)v26 - 4);
				v17 = v26 - 16;
				if ((*((_DWORD*)v26 - 4) & 0x30000000) == 0
					&& !_InterlockedExchangeAdd((volatile signed __int32*)v17, 0xFFFFFFFF))
				{
					j_j_free(v17);
				}
				v18 = v28;
				v28 = v16;
				v19 = v18 - 16;
				if ((*v19 & 0x30000000) == 0 && !_InterlockedExchangeAdd(v19, 0xFFFFFFFF))
					j_j_free(v19);
				++v3;
				++v5;
				v4 = HIDWORD(v24);
				v6 = (unsigned int)v3 < HIDWORD(v24);
			} while (v3 < SHIDWORD(v24));
			v2 = v25;
		}
		sub_14040E360(*(_QWORD*)(v2 + 280), &v28, 0i64);
		if ((int)v4 > 0)
		{
			v20 = Block;
			do
			{
				v21 = (_DWORD*)(*v20 - 16i64);
				if ((*v21 & 0x30000000) == 0 && !_InterlockedExchangeAdd(v21, 0xFFFFFFFF))
					j_j_free(v21);
				++v20;
				--v4;
			} while (v4);
		}
		free(Block);
		v22 = v28 - 16;
		if ((*((_DWORD*)v28 - 4) & 0x30000000) == 0
			&& !_InterlockedExchangeAdd((volatile signed __int32*)v22, 0xFFFFFFFF))
		{
			j_j_free(v22);
		}
	}*/
}

