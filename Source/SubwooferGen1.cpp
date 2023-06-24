#include "SubwooferGen1.h"
__int64 SubwooferGen1::sub_140233180(__int64 a1)
{
	return 1;
	/*char v2; // [rsp+30h] [rbp-18h]

	v2 = 0;
	return (*(__int64(SubwooferGen1::**)(__int64, _QWORD, __int64, __int64, _DWORD, _DWORD, char))(*(_QWORD*)a1 + 400i64))(
		a1,
		0i64,
		120i64,
		1i64,
		0,
		0,
		v2);*/
}
char SubwooferGen1::sub_140210CA0(__int64 a1, __int64 a2, __int64* a3, __int64* a4)
{
	return 1;
	/*__int64 v7; // rcx
	void* v8; // rcx
	void* v9; // rcx
	_DWORD* v10; // rcx
	_DWORD* v11; // rcx
	__int64 v13; // [rsp+30h] [rbp-38h] BYREF
	__int64 v14[6]; // [rsp+38h] [rbp-30h] BYREF

	v7 = *a4;
	v13 = v7;
	if ((*(_DWORD*)(v7 - 16) & 0x30000000) == 0)
		_InterlockedIncrement((volatile signed __int32*)(v7 - 16));
	v14[1] = (__int64)&v13;
	ImageCache::getFromHashCode(&v13, "\r\n", (int)"");
	v14[0] = v13;
	if ((*(_DWORD*)(v13 - 16) & 0x30000000) == 0)
		_InterlockedIncrement((volatile signed __int32*)(v13 - 16));
	v8 = (void*)(v13 - 16);
	if ((*(_DWORD*)(v13 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v8) == -1)
		j_j_free(v8);
	(*(void(SubwooferGen1::**)(__int64, _QWORD*, _QWORD, _QWORD, _QWORD))(*(_QWORD*)a2 + 160i64))(a2, a3, 0i64, 0i64, 0i64);
	(*(void(SubwooferGen1::**)(__int64, __int64*, _QWORD, _QWORD, _QWORD))(*(_QWORD*)a2 + 160i64))(
		a2,
		v14,
		0i64,
		0i64,
		0i64);
	v9 = (void*)(v14[0] - 16);
	if ((*(_DWORD*)(v14[0] - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v9) == -1)
		j_j_free(v9);
	v10 = (_DWORD*)(*a3 - 16i64);
	if ((*v10 & 0x30000000) == 0 && _InterlockedDecrement(v10) == -1)
		j_j_free(v10);
	v11 = (_DWORD*)(*a4 - 16);
	if ((*v11 & 0x30000000) == 0 && _InterlockedDecrement(v11) == -1)
		j_j_free(v11);
	return 1;*/
}
char SubwooferGen1::sub_140232530(__int64* a1, __int64 a2)
{
	/*void(SubwooferGen1::* v4)(_QWORD*, __int64, __int64*, __int64*, __int64*); // rbx
	__int64 v5; // rcx
	void(SubwooferGen1::* v6)(_QWORD*, __int64, __int64*, __int64*, __int64*); // rbx
	void(SubwooferGen1::* v7)(_QWORD*, __int64, __int64*, char*, char*); // rbx
	__int64 v8; // rax
	void(SubwooferGen1::* v9)(_QWORD*, __int64, _QWORD*, char*, char*); // rbx
	__int64 v10; // rax
	void(SubwooferGen1::* v11)(_QWORD*, __int64, __int64*, char*, char*); // rbx
	__int64 v12; // rdx
	void(SubwooferGen1::* v13)(_QWORD*, __int64, __int64*, char*, char*); // rbx
	__int64 v14; // rdx
	void(SubwooferGen1::* v15)(_QWORD*, __int64, __int64*, char*, char*); // rbx
	__int64 v16; // rdx
	void(SubwooferGen1::* v17)(_QWORD*, __int64, __int64*, char*, char*); // rbx
	__int64 v18; // rdx
	void(SubwooferGen1::* v19)(_QWORD*, __int64, __int64*, char*, char*); // rbx
	__int64 v20; // rdx
	void(SubwooferGen1::* v21)(_QWORD*, __int64, __int64*, char*, char*); // rbx
	__int64 v22; // rax
	void(SubwooferGen1::* v23)(_QWORD*, __int64, __int64*, char*, char*); // rbx
	__int64 v24; // rax
	void(SubwooferGen1::* v25)(_QWORD*, __int64, __int64*, char*, char*); // rbx
	__int64 v26; // rax
	void(SubwooferGen1::* v27)(_QWORD*, __int64, __int64*, char*, char*); // rbx
	__int64 v28; // rax
	void(SubwooferGen1::* v29)(_QWORD*, __int64, __int64*, char*, char*); // rbx
	__int64 v30; // rax
	void(SubwooferGen1::* v31)(_QWORD*, __int64, __int64*, char*, char*); // rbx
	__int64 v32; // rax
	void(SubwooferGen1::* v33)(_QWORD*, __int64, __int64*, char*, char*); // rbx
	__int64 v34; // rax
	void(SubwooferGen1::* v35)(_QWORD*, __int64, __int64*, char*, char*); // rbx
	__int64 v36; // rax
	void(SubwooferGen1::* v37)(_QWORD*, __int64, __int64*, char*, char*); // rbx
	__int64 v38; // rax
	void(SubwooferGen1::* v39)(_QWORD*, __int64, __int64*, char*, char*); // rbx
	__int64 v40; // rax
	void(SubwooferGen1::* v41)(_QWORD*, __int64, __int64*, __int64*, __int64*); // rbx
	__int64 v42; // rcx
	void(SubwooferGen1::* v43)(_QWORD*, __int64, __int64*, char*, char*, __int64); // rbx
	__int64 v44; // rax
	void(SubwooferGen1::* v45)(_QWORD*, __int64, __int64*, char*, char*); // rbx
	__int64 v46; // rax
	void(SubwooferGen1::* v47)(_QWORD*, __int64, __int64*, char*, char*); // rbx
	__int64 v48; // rax
	void(SubwooferGen1::* v49)(_QWORD*, __int64, __int64*, char*, char*); // rbx
	__int64 v50; // rax
	void(SubwooferGen1::* v51)(_QWORD*, __int64, __int64*, char*, char*); // rbx
	__int64 v52; // rax
	void(SubwooferGen1::* v53)(_QWORD*, __int64, __int64*, char*, char*); // rbx
	__int64 v54; // rax
	int v55; // er15
	_QWORD* v56; // r14
	__int64 v57; // r12
	void(SubwooferGen1::* v58)(_QWORD*, __int64, __int64*, char*, char*); // rbx
	__int64 v59; // rax
	void(SubwooferGen1::* v60)(_QWORD*, __int64, __int64*, char*, char*); // rbx
	__int64 v61; // rdx
	void(SubwooferGen1::* v62)(_QWORD*, __int64, __int64*, char*, char*); // rbx
	__int64 v63; // rdx
	void(SubwooferGen1::* v64)(_QWORD*, __int64, __int64*, char*, char*); // rbx
	__int64 v65; // rdx
	void(SubwooferGen1::* v66)(_QWORD*, __int64, __int64*, char*, char*); // rbx
	__int64 v67; // rax
	void(SubwooferGen1::* v68)(_QWORD*, __int64, __int64*, __int64*, __int64*); // rbx
	void(SubwooferGen1::* v69)(_QWORD*, __int64, __int64*, __int64*, __int64*); // rbx
	__int64 v71; // [rsp+28h] [rbp-D8h] BYREF
	__int64 v72; // [rsp+30h] [rbp-D0h] BYREF
	__int64 v73; // [rsp+38h] [rbp-C8h] BYREF
	__int64 v74; // [rsp+40h] [rbp-C0h] BYREF
	__int64 v75; // [rsp+48h] [rbp-B8h] BYREF
	__int64 v76; // [rsp+50h] [rbp-B0h] BYREF
	__int64 v77; // [rsp+58h] [rbp-A8h] BYREF
	__int64 v78; // [rsp+60h] [rbp-A0h] BYREF
	__int64 v79; // [rsp+68h] [rbp-98h] BYREF
	__int64 v80; // [rsp+70h] [rbp-90h] BYREF
	__int64 v81; // [rsp+78h] [rbp-88h] BYREF
	char v82[8]; // [rsp+80h] [rbp-80h] BYREF
	__int64 v83; // [rsp+88h] [rbp-78h] BYREF
	char v84[8]; // [rsp+90h] [rbp-70h] BYREF
	__int64 v85; // [rsp+98h] [rbp-68h] BYREF
	char v86[8]; // [rsp+A0h] [rbp-60h] BYREF
	__int64 v87; // [rsp+A8h] [rbp-58h] BYREF
	char v88[8]; // [rsp+B0h] [rbp-50h] BYREF
	__int64 v89; // [rsp+B8h] [rbp-48h] BYREF
	char v90[8]; // [rsp+C0h] [rbp-40h] BYREF
	__int64 v91; // [rsp+C8h] [rbp-38h] BYREF
	char v92[8]; // [rsp+D0h] [rbp-30h] BYREF
	__int64 v93; // [rsp+D8h] [rbp-28h] BYREF
	char v94[8]; // [rsp+E0h] [rbp-20h] BYREF
	__int64 v95; // [rsp+E8h] [rbp-18h] BYREF
	char v96[8]; // [rsp+F0h] [rbp-10h] BYREF
	__int64 v97; // [rsp+F8h] [rbp-8h] BYREF
	char v98[8]; // [rsp+100h] [rbp+0h] BYREF
	__int64 v99; // [rsp+108h] [rbp+8h] BYREF
	char v100[8]; // [rsp+110h] [rbp+10h] BYREF
	__int64 v101; // [rsp+118h] [rbp+18h] BYREF
	char v102[8]; // [rsp+120h] [rbp+20h] BYREF
	__int64 v103; // [rsp+128h] [rbp+28h] BYREF
	char v104[8]; // [rsp+130h] [rbp+30h] BYREF
	__int64 v105; // [rsp+138h] [rbp+38h] BYREF
	char v106[8]; // [rsp+140h] [rbp+40h] BYREF
	__int64 v107; // [rsp+148h] [rbp+48h] BYREF
	char v108[8]; // [rsp+150h] [rbp+50h] BYREF
	__int64 v109; // [rsp+158h] [rbp+58h] BYREF
	char v110[8]; // [rsp+160h] [rbp+60h] BYREF
	char v111[8]; // [rsp+168h] [rbp+68h] BYREF
	char v112[8]; // [rsp+170h] [rbp+70h] BYREF
	__int64 v113; // [rsp+178h] [rbp+78h] BYREF
	char v114[8]; // [rsp+180h] [rbp+80h] BYREF
	__int64 v115; // [rsp+188h] [rbp+88h] BYREF
	char v116[8]; // [rsp+190h] [rbp+90h] BYREF
	__int64 v117; // [rsp+198h] [rbp+98h] BYREF
	char v118[8]; // [rsp+1A0h] [rbp+A0h] BYREF
	__int64 v119; // [rsp+1A8h] [rbp+A8h] BYREF
	char v120[8]; // [rsp+1B0h] [rbp+B0h] BYREF
	char v121[8]; // [rsp+1B8h] [rbp+B8h] BYREF
	char v122[8]; // [rsp+1C0h] [rbp+C0h] BYREF
	__int64 v123; // [rsp+1C8h] [rbp+C8h] BYREF
	char v124[8]; // [rsp+1D0h] [rbp+D0h] BYREF
	__int64 v125; // [rsp+1D8h] [rbp+D8h] BYREF
	char v126[8]; // [rsp+1E0h] [rbp+E0h] BYREF
	__int64 v127; // [rsp+1E8h] [rbp+E8h] BYREF
	char v128[8]; // [rsp+1F0h] [rbp+F0h] BYREF
	__int64 v129; // [rsp+1F8h] [rbp+F8h] BYREF
	char v130[8]; // [rsp+200h] [rbp+100h] BYREF
	__int64 v131; // [rsp+208h] [rbp+108h] BYREF
	__int64 v132; // [rsp+210h] [rbp+110h] BYREF
	char v133[8]; // [rsp+218h] [rbp+118h] BYREF
	__int64 v134; // [rsp+220h] [rbp+120h] BYREF
	__int64 v135; // [rsp+228h] [rbp+128h] BYREF
	_QWORD v136[4]; // [rsp+230h] [rbp+130h] BYREF
	char v137; // [rsp+257h] [rbp+157h] BYREF
	char v138[31]; // [rsp+258h] [rbp+158h] BYREF
	char v139; // [rsp+277h] [rbp+177h] BYREF
	char v140[31]; // [rsp+278h] [rbp+178h] BYREF
	char v141; // [rsp+297h] [rbp+197h] BYREF
	char v142[31]; // [rsp+298h] [rbp+198h] BYREF
	char v143; // [rsp+2B7h] [rbp+1B7h] BYREF
	char v144[31]; // [rsp+2B8h] [rbp+1B8h] BYREF
	char v145; // [rsp+2D7h] [rbp+1D7h] BYREF
	char v146[31]; // [rsp+2D8h] [rbp+1D8h] BYREF
	char v147; // [rsp+2F7h] [rbp+1F7h] BYREF
	char v148[31]; // [rsp+2F8h] [rbp+1F8h] BYREF
	char v149; // [rsp+317h] [rbp+217h] BYREF
	char v150[31]; // [rsp+318h] [rbp+218h] BYREF
	char v151; // [rsp+337h] [rbp+237h] BYREF
	char v152[31]; // [rsp+338h] [rbp+238h] BYREF
	char v153; // [rsp+357h] [rbp+257h] BYREF
	char v154[31]; // [rsp+358h] [rbp+258h] BYREF
	char v155; // [rsp+377h] [rbp+277h] BYREF
	char v156[31]; // [rsp+378h] [rbp+278h] BYREF
	char v157; // [rsp+397h] [rbp+297h] BYREF
	char v158[31]; // [rsp+398h] [rbp+298h] BYREF
	char v159; // [rsp+3B7h] [rbp+2B7h] BYREF
	char v160[31]; // [rsp+3B8h] [rbp+2B8h] BYREF
	char v161; // [rsp+3D7h] [rbp+2D7h] BYREF
	char v162[31]; // [rsp+3D8h] [rbp+2D8h] BYREF
	char v163; // [rsp+3F7h] [rbp+2F7h] BYREF
	char v164[31]; // [rsp+3F8h] [rbp+2F8h] BYREF
	char v165; // [rsp+417h] [rbp+317h] BYREF
	char v166[31]; // [rsp+418h] [rbp+318h] BYREF
	char v167; // [rsp+437h] [rbp+337h] BYREF
	char v168[31]; // [rsp+438h] [rbp+338h] BYREF
	char v169; // [rsp+457h] [rbp+357h] BYREF
	char v170[31]; // [rsp+458h] [rbp+358h] BYREF
	char v171; // [rsp+477h] [rbp+377h] BYREF
	__int64 v172; // [rsp+478h] [rbp+378h] BYREF

	v4 = *(void(SubwooferGen1::**)(_QWORD*, __int64, __int64*, __int64*, __int64*))(*a1 + 16i64);
	v5 = a1[3];
	v113 = v5;
	if ((*(_DWORD*)(v5 - 16) & 0x30000000) == 0)
		_InterlockedIncrement((volatile signed __int32*)(v5 - 16));
	sub_140048D00(&v115, "Class:");
	v4(a1, a2, &v115, &v113, &v113);
	v6 = *(void(SubwooferGen1::**)(_QWORD*, __int64, __int64*, __int64*, __int64*))(*a1 + 16i64);
	sub_140048D00(&v117, &unk_14046DF92);
	sub_140048D00(&v119, "----------------------------------------------");
	v6(a1, a2, &v119, &v117, &v117);
	v7 = *(void(SubwooferGen1::**)(_QWORD*, __int64, __int64*, char*, char*))(*a1 + 16i64);
	v8 = sub_1402FCD90(v140, a1[10]);
	sub_140040360(v121, v8, &v139 - v8);
	sub_140048D00(&v131, "Serial:");
	v7(a1, a2, &v131, v121, v121);
	v9 = *(void(SubwooferGen1::**)(_QWORD*, __int64, _QWORD*, char*, char*))(*a1 + 16i64);
	v10 = sub_1402FCCA0(v142);
	sub_140040360(v133, v10, &v141 - v10);
	sub_140048D00(v136, "Group_ON:");
	v9(a1, a2, v136, v133, v133);
	v11 = *(void(SubwooferGen1::**)(_QWORD*, __int64, __int64*, char*, char*))(*a1 + 16i64);
	String::String_3((__int64)v82, v12, 0, 0);
	sub_140048D00(&v83, "Level_Sensitivity:");
	v11(a1, a2, &v83, v82, v82);
	v13 = *(void(SubwooferGen1::**)(_QWORD*, __int64, __int64*, char*, char*))(*a1 + 16i64);
	String::String_3((__int64)v84, v14, 0, 0);
	sub_140048D00(&v85, "Calibration_Level:");
	v13(a1, a2, &v85, v84, v84);
	v15 = *(void(SubwooferGen1::**)(_QWORD*, __int64, __int64*, char*, char*))(*a1 + 16i64);
	String::String_3((__int64)v86, v16, 0, 0);
	sub_140048D00(&v87, "Time-of-flight_Compensation:");
	v15(a1, a2, &v87, v86, v86);
	v17 = *(void(SubwooferGen1::**)(_QWORD*, __int64, __int64*, char*, char*))(*a1 + 16i64);
	String::String_3((__int64)v88, v18, 0, 0);
	sub_140048D00(&v89, "Video_Delay:");
	v17(a1, a2, &v89, v88, v88);
	v19 = *(void(SubwooferGen1::**)(_QWORD*, __int64, __int64*, char*, char*))(*a1 + 16i64);
	String::String_3((__int64)v90, v20, 0, 0);
	sub_140048D00(&v91, "Group_Sensitivity:");
	v19(a1, a2, &v91, v90, v90);
	v21 = *(void(SubwooferGen1::**)(_QWORD*, __int64, __int64*, char*, char*))(*a1 + 16i64);
	v22 = sub_1402FCCA0(v144);
	sub_140040360(v92, v22, &v143 - v22);
	sub_140048D00(&v93, "SubwooferGroupID:");
	v21(a1, a2, &v93, v92, v92);
	v23 = *(void(SubwooferGen1::**)(_QWORD*, __int64, __int64*, char*, char*))(*a1 + 16i64);
	v24 = sub_1402FCCA0(v146);
	sub_140040360(v94, v24, &v145 - v24);
	sub_140048D00(&v95, "CalibrationStatusFlag:");
	v23(a1, a2, &v95, v94, v94);
	v25 = *(void(SubwooferGen1::**)(_QWORD*, __int64, __int64*, char*, char*))(*a1 + 16i64);
	v26 = sub_1402FCCA0(v148);
	sub_140040360(v96, v26, &v147 - v26);
	sub_140048D00(&v97, "Input:");
	v25(a1, a2, &v97, v96, v96);
	v27 = *(void(SubwooferGen1::**)(_QWORD*, __int64, __int64*, char*, char*))(*a1 + 16i64);
	v28 = sub_1402FCCA0(v150);
	sub_140040360(v98, v28, &v149 - v28);
	sub_140048D00(&v99, "Input1_AES_EBUChannel:");
	v27(a1, a2, &v99, v98, v98);
	v29 = *(void(SubwooferGen1::**)(_QWORD*, __int64, __int64*, char*, char*))(*a1 + 16i64);
	v30 = sub_1402FCCA0(v152);
	sub_140040360(v100, v30, &v151 - v30);
	sub_140048D00(&v101, "Input2_AES_EBUChannel:");
	v29(a1, a2, &v101, v100, v100);
	v31 = *(void(SubwooferGen1::**)(_QWORD*, __int64, __int64*, char*, char*))(*a1 + 16i64);
	v32 = sub_1402FCCA0(&v172);
	sub_140040360(v102, v32, &v171 - v32);
	sub_140048D00(&v103, "Input3_AES_EBUChannel:");
	v31(a1, a2, &v103, v102, v102);
	v33 = *(void(SubwooferGen1::**)(_QWORD*, __int64, __int64*, char*, char*))(*a1 + 16i64);
	v34 = sub_1402FCCA0(v154);
	sub_140040360(v104, v34, &v153 - v34);
	sub_140048D00(&v105, "Input4_AES_EBUChannel:");
	v33(a1, a2, &v105, v104, v104);
	v35 = *(void(SubwooferGen1::**)(_QWORD*, __int64, __int64*, char*, char*))(*a1 + 16i64);
	v36 = sub_1402FCCA0(v156);
	sub_140040360(v106, v36, &v155 - v36);
	sub_140048D00(&v107, "PassThrough:");
	v35(a1, a2, &v107, v106, v106);
	v37 = *(void(SubwooferGen1::**)(_QWORD*, __int64, __int64*, char*, char*))(*a1 + 16i64);
	v38 = sub_1402FCCA0(v158);
	sub_140040360(v108, v38, &v157 - v38);
	sub_140048D00(&v109, "Crossover_Frequency:");
	v37(a1, a2, &v109, v108, v108);
	v39 = *(void(SubwooferGen1::**)(_QWORD*, __int64, __int64*, char*, char*))(*a1 + 16i64);
	v40 = sub_1402FCCA0(v160);
	sub_140040360(v110, v40, &v159 - v40);
	sub_140048D00(&v74, "Phase(degrees):");
	v39(a1, a2, &v74, v110, v110);
	v41 = *(void(SubwooferGen1::**)(_QWORD*, __int64, __int64*, __int64*, __int64*))(*a1 + 16i64);
	v42 = a1[35];
	v71 = v42;
	if ((*(_DWORD*)(v42 - 16) & 0x30000000) == 0)
		_InterlockedIncrement((volatile signed __int32*)(v42 - 16));
	sub_140048D00(&v75, "PhaseCalibratedWith:");
	v41(a1, a2, &v75, &v71, &v71);
	v43 = *(void(SubwooferGen1::**)(_QWORD*, __int64, __int64*, char*, char*, __int64))(*a1 + 16i64);
	v44 = sub_1402FCCA0(v162);
	sub_140040360(v111, v44, &v161 - v44);
	sub_140048D00(&v73, "LFE_+10dB:");
	v43(a1, a2, &v73, v111, v111, v71);
	v45 = *(void(SubwooferGen1::**)(_QWORD*, __int64, __int64*, char*, char*))(*a1 + 16i64);
	v46 = sub_1402FCCA0(v164);
	sub_140040360(v112, v46, &v163 - v46);
	sub_140048D00(&v76, "LFE_Redirect:");
	v45(a1, a2, &v76, v112, v112);
	v47 = *(void(SubwooferGen1::**)(_QWORD*, __int64, __int64*, char*, char*))(*a1 + 16i64);
	v48 = sub_1402FCCA0(v166);
	sub_140040360(v114, v48, &v165 - v48);
	sub_140048D00(&v77, "LFE_Channel:");
	v47(a1, a2, &v77, v114, v114);
	v49 = *(void(SubwooferGen1::**)(_QWORD*, __int64, __int64*, char*, char*))(*a1 + 16i64);
	v50 = sub_1402FCCA0(v168);
	sub_140040360(v116, v50, &v167 - v50);
	sub_140048D00(&v78, "LFE_RedirectChannel:");
	v49(a1, a2, &v78, v116, v116);
	v51 = *(void(SubwooferGen1::**)(_QWORD*, __int64, __int64*, char*, char*))(*a1 + 16i64);
	v52 = sub_1402FCCA0(v170);
	sub_140040360(v118, v52, &v169 - v52);
	sub_140048D00(&v79, "LFE_CrossoverFrequency(Hz):");
	v51(a1, a2, &v79, v118, v118);
	v53 = *(void(SubwooferGen1::**)(_QWORD*, __int64, __int64*, char*, char*))(*a1 + 16i64);
	v54 = sub_1402FCCA0(v138);
	sub_140040360(v120, v54, &v137 - v54);
	sub_140048D00(&v72, "Roll-off:");
	v53(a1, a2, &v72, v120, v120);
	v55 = 1;
	v56 = a1 + 43;
	v57 = 4i64;
	do
	{
		v58 = *(void(SubwooferGen1::**)(_QWORD*, __int64, __int64*, char*, char*))(*a1 + 16i64);
		v59 = sub_1402FCCA0(v138);
		sub_140040360(v122, v59, &v137 - v59);
		sub_140048D00(&v123, "Notch:");
		v58(a1, a2, &v123, v122, v122);
		v60 = *(void(SubwooferGen1::**)(_QWORD*, __int64, __int64*, char*, char*))(*a1 + 16i64);
		String::String_3((__int64)v124, v61, 0, 0);
		sub_140048D00(&v125, "Frequency:");
		v60(a1, a2, &v125, v124, v124);
		v62 = *(void(SubwooferGen1::**)(_QWORD*, __int64, __int64*, char*, char*))(*a1 + 16i64);
		String::String_3((__int64)v126, v63, 0, 0);
		sub_140048D00(&v127, "Gain:");
		v62(a1, a2, &v127, v126, v126);
		v64 = *(void(SubwooferGen1::**)(_QWORD*, __int64, __int64*, char*, char*))(*a1 + 16i64);
		String::String_3((__int64)v128, v65, 0, 0);
		sub_140048D00(&v129, "Q_Value:");
		v64(a1, a2, &v129, v128, v128);
		v66 = *(void(SubwooferGen1::**)(_QWORD*, __int64, __int64*, char*, char*))(*a1 + 16i64);
		v67 = sub_1402FCCA0(v138);
		sub_140040360(v130, v67, &v137 - v67);
		sub_140048D00(&v80, "SR:");
		v66(a1, a2, &v80, v130, v130);
		++v55;
		v56 = (_QWORD*)((char*)v56 + 4);
		--v57;
	} while (v57);
	v68 = *(void(SubwooferGen1::**)(_QWORD*, __int64, __int64*, __int64*, __int64*))(*a1 + 16i64);
	sub_140048D00(&v132, &unk_14046DF93);
	sub_140048D00(&v81, "Data_End:");
	v68(a1, a2, &v81, &v132, &v132);
	v69 = *(void(SubwooferGen1::**)(_QWORD*, __int64, __int64*, __int64*, __int64*))(*a1 + 16i64);
	sub_140048D00(&v134, &unk_14046DFA5);
	sub_140048D00(&v135, " ");
	v69(a1, a2, &v135, &v134, &v134);*/
	return 1;
}
char SubwooferGen1::sub_140210830(__int64 a1, __int64 a2, __int64* a3, char** a4)
{
	/*__int64 v7; // rax
	void* v8; // rcx
	char* v9; // rax
	char* v10; // rcx
	char** v11; // rax
	char* v12; // r8
	char v13; // dl
	char* v14; // rcx
	char* v15; // rax
	unsigned __int8 i; // cl
	void* v17; // rcx
	void** v18; // rcx
	__int64* v19; // rax
	__int64 v20; // rcx
	void* v21; // rcx
	int v22; // ebx
	int v23; // edi
	char* v24; // r12
	void** v25; // rdx
	char v26; // dl
	char* v27; // rcx
	char* v28; // rax
	unsigned __int8 j; // cl
	char* v30; // rax
	char* v31; // rcx
	_QWORD* v32; // rbx
	__int64 v33; // rdi
	_DWORD* v34; // rcx
	char* v35; // rcx
	char* v37; // [rsp+20h] [rbp-68h] BYREF
	char* v38; // [rsp+28h] [rbp-60h] BYREF
	char* v39; // [rsp+30h] [rbp-58h]
	__int64 v40; // [rsp+38h] [rbp-50h] BYREF
	char* v41; // [rsp+40h] [rbp-48h] BYREF
	__int64 v42; // [rsp+48h] [rbp-40h] BYREF
	__int64 v43; // [rsp+50h] [rbp-38h] BYREF
	void* Block; // [rsp+58h] [rbp-30h] BYREF
	__int64 v45; // [rsp+60h] [rbp-28h]

	sub_140048D00(&v40, " ");
	v7 = *a3;
	*a3 = v40;
	v8 = (void*)(v7 - 16);
	if ((*(_DWORD*)(v7 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v8) == -1)
		j_j_free(v8);
	sub_140048D00(&v41, " ");
	v9 = *a4;
	*a4 = v41;
	v10 = v9 - 16;
	if ((*((_DWORD*)v9 - 4) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v10) == -1)
		j_j_free(v10);
	v39 = (char*)dword_140DDCDD0;
	Block = 0i64;
	v45 = 0i64;
	v11 = (char**)(*(__int64(SubwooferGen1::**)(__int64, __int64*))(*(_QWORD*)a2 + 136i64))(a2, &v42);
	v12 = *v11;
	v13 = **v11;
	v14 = *v11;
	if (!v13)
		goto LABEL_18;
	v15 = *v11;
	while (v13 == 32 || (unsigned __int8)(v13 - 9) <= 4u)
	{
		++v15;
		if (v13 < 0)
		{
			for (i = 64; ((unsigned __int8)v13 & i) != 0; i >>= 1)
			{
				if (i <= 8u)
					break;
				++v15;
			}
		}
		v13 = *v15;
	}
	v14 = v12;
	if (v15 == v12)
	{
	LABEL_18:
		v37 = v14;
		if ((*((_DWORD*)v14 - 4) & 0x30000000) == 0)
			_InterlockedIncrement((volatile signed __int32*)v14 - 4);
	}
	else
	{
		String::String(&v37, v15);
	}
	v39 = v37;
	v17 = (void*)(v42 - 16);
	if ((*(_DWORD*)(v42 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v17) == -1)
		j_j_free(v17);
	if ((int)StringArray::addTokens((__int64)&Block, v37, ":", (char*)&unk_14046DD7D) >= 2)
	{
		if (HIDWORD(v45))
		{
			v18 = (void**)Block;
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
			v18 = &off_140EB1E28;
		}
		v19 = (__int64*)sub_140318C90(v18, &v43, "\t");
		v20 = *a3;
		*a3 = *v19;
		*v19 = v20;
		v21 = (void*)(v43 - 16);
		if ((*(_DWORD*)(v43 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v21) == -1)
			j_j_free(v21);
		v22 = 1;
		v23 = HIDWORD(v45);
		v24 = (char*)Block;
		while (v22 < v23)
		{
			if (v22 >= (unsigned int)v23)
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
				v25 = &off_140EB1E28;
			}
			else
			{
				v25 = (void**)&v24[8 * v22];
			}
			sub_14031B920(a4, v25);
			if (v22 < v23 - 1)
				ImageCache::getFromHashCode(a4, ":", (int)"");
			++v22;
		}
	}
	v26 = **a4;
	v27 = *a4;
	if (!v26)
		goto LABEL_51;
	v28 = *a4;
	while (v26 == 32 || (unsigned __int8)(v26 - 9) <= 4u)
	{
		++v28;
		if (v26 < 0)
		{
			for (j = 64; ((unsigned __int8)v26 & j) != 0; j >>= 1)
			{
				if (j <= 8u)
					break;
				++v28;
			}
		}
		v26 = *v28;
	}
	v27 = *a4;
	if (v28 == *a4)
	{
	LABEL_51:
		v38 = v27;
		if ((*((_DWORD*)v27 - 4) & 0x30000000) == 0)
			_InterlockedIncrement((volatile signed __int32*)v27 - 4);
	}
	else
	{
		String::String(&v38, v28);
	}
	v30 = *a4;
	*a4 = v38;
	v31 = v30 - 16;
	if ((*((_DWORD*)v30 - 4) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v31) == -1)
		j_j_free(v31);
	if (SHIDWORD(v45) > 0)
	{
		v32 = Block;
		v33 = HIDWORD(v45);
		do
		{
			v34 = (_DWORD*)(*v32 - 16i64);
			if ((*v34 & 0x30000000) == 0 && _InterlockedDecrement(v34) == -1)
				j_j_free(v34);
			++v32;
			--v33;
		} while (v33);
	}
	free(Block);
	v35 = v39 - 16;
	if ((*((_DWORD*)v39 - 4) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v35) == -1)
		j_j_free(v35);*/
	return 1;
}
bool SubwooferGen1::sub_140231DF0(__int64 a1, __int64 a2)
{
	return true;
/*
	bool v4; // r15
	__int64 v5; // rbx
	_BYTE* v6; // rbx
	__int64 v7; // rcx
	__int64 v8; // rcx
	__int64 v9; // rcx
	float v10; // xmm1_4
	char* v11; // rcx
	__int64 v12; // rax
	void* v13; // rcx
	int v14; // ebx
	char* v15; // rcx
	float v16; // xmm1_4
	__int64 v17; // rcx
	float v18; // xmm1_4
	__int64 v19; // rcx
	float v20; // xmm1_4
	char* v21; // rax
	char* v22; // rcx
	_BYTE* v23; // rax
	_BYTE* v24; // rcx
	char* v25; // rcx
	_BYTE* v26; // rcx
	char* v28; // [rsp+20h] [rbp-40h] BYREF
	char* v29; // [rsp+28h] [rbp-38h] BYREF
	char* v30; // [rsp+30h] [rbp-30h] BYREF
	char* v31; // [rsp+38h] [rbp-28h] BYREF
	char* v32; // [rsp+40h] [rbp-20h] BYREF
	_BYTE* v33; // [rsp+48h] [rbp-18h] BYREF
	char* v34; // [rsp+50h] [rbp-10h] BYREF
	char* String; // [rsp+A0h] [rbp+40h] BYREF
	_BYTE* v36; // [rsp+A8h] [rbp+48h] BYREF
	char* v37; // [rsp+B0h] [rbp+50h] BYREF
	char* v38; // [rsp+B8h] [rbp+58h] BYREF

	v4 = 0;
	v36 = dword_140DDCDD0;
	String = (char*)dword_140DDCDD0;
	while (1)
	{
		v5 = (*(__int64(SubwooferGen1::**)(__int64))(*(_QWORD*)a2 + 8i64))(a2);
		if (v5 >= 0)
			v5 -= (*(__int64(SubwooferGen1::**)(__int64))(*(_QWORD*)a2 + 168i64))(a2);
		if (v5 <= 0 || v4)
			break;
		(*(void(SubwooferGen1::**)(__int64, __int64, _BYTE**, char**))(*(_QWORD*)a1 + 32i64))(a1, a2, &v36, &String);
		v6 = v36;
		if ((unsigned int)String::isNotEmpty(v36, "Serial"))
		{
			if ((unsigned int)String::isNotEmpty(v6, "Level_Sensitivity"))
			{
				if ((unsigned int)String::isNotEmpty(v6, "Calibration_Level"))
				{
					if ((unsigned int)String::isNotEmpty(v6, "Time-of-flight_Compensation"))
					{
						if ((unsigned int)String::isNotEmpty(v6, "Video_Delay"))
						{
							if ((unsigned int)String::isNotEmpty(v6, "Group_Sensitivity"))
							{
								if ((unsigned int)String::isNotEmpty(v6, "SubwooferGroupID"))
								{
									if ((unsigned int)String::isNotEmpty(v6, "CalibrationStatusFlag"))
									{
										if ((unsigned int)String::isNotEmpty(v6, "Input"))
										{
											if ((unsigned int)String::isNotEmpty(v6, "Input1_AES_EBUChannel"))
											{
												if ((unsigned int)String::isNotEmpty(v6, "Input2_AES_EBUChannel"))
												{
													if ((unsigned int)String::isNotEmpty(v6, "Input3_AES_EBUChannel"))
													{
														if ((unsigned int)String::isNotEmpty(v6, "Input4_AES_EBUChannel"))
														{
															if ((unsigned int)String::isNotEmpty(v6, "Group_ON"))
															{
																if ((unsigned int)String::isNotEmpty(v6, "Crossover_Frequency"))
																{
																	if ((unsigned int)String::isNotEmpty(v6, "Phase(degrees)"))
																	{
																		if ((unsigned int)String::isNotEmpty(v6, "PhaseCalibratedWith"))
																		{
																			if ((unsigned int)String::isNotEmpty(v6, "PassThrough"))
																			{
																				if ((unsigned int)String::isNotEmpty(v6, "Roll-off"))
																				{
																					if ((unsigned int)String::isNotEmpty(v6, "LFE_+10dB"))
																					{
																						if ((unsigned int)String::isNotEmpty(v6, "LFE_Redirect"))
																						{
																							if ((unsigned int)String::isNotEmpty(v6, "LFE_Channel"))
																							{
																								if ((unsigned int)String::isNotEmpty(v6, "LFE_RedirectChannel"))
																								{
																									if ((unsigned int)String::isNotEmpty(
																										v6,
																										"LFE_CrossoverFrequency(Hz)"))
																									{
																										if ((unsigned int)String::isNotEmpty(v6, "Notch"))
																										{
																											v4 = (unsigned int)String::isNotEmpty(v6, "Data_End") == 0;
																										}
																										else
																										{
																											v14 = atoi(String);
																											(*(void(SubwooferGen1::**)(__int64, __int64, _BYTE**, char**))(*(_QWORD*)a1 + 32i64))(
																												a1,
																												a2,
																												&v36,
																												&String);
																											if (v14 <= 4)
																											{
																												v15 = String;
																												v29 = String;
																												if ((*((_DWORD*)String - 4) & 0x30000000) == 0)
																													_InterlockedIncrement((volatile signed __int32*)String - 4);
																												v16 = sub_14020F700(v15, &v29);
																												*(float*)(a1 + 4i64 * (v14 - 1) + 328) = v16;
																											}
																											(*(void(SubwooferGen1::**)(__int64, __int64, _BYTE**, char**))(*(_QWORD*)a1 + 32i64))(
																												a1,
																												a2,
																												&v36,
																												&String);
																											if (v14 <= 4)
																											{
																												v30 = String;
																												v17 = *((unsigned int*)String - 4);
																												if ((v17 & 0x30000000) == 0)
																													_InterlockedIncrement((volatile signed __int32*)String - 4);
																												v18 = sub_14020F700(v17, &v30);
																												*(float*)(a1 + 4i64 * (v14 - 1) + 344) = v18;
																											}
																											(*(void(SubwooferGen1::**)(__int64, __int64, _BYTE**, char**))(*(_QWORD*)a1 + 32i64))(
																												a1,
																												a2,
																												&v36,
																												&String);
																											if (v14 <= 4)
																											{
																												v31 = String;
																												v19 = *((unsigned int*)String - 4);
																												if ((v19 & 0x30000000) == 0)
																													_InterlockedIncrement((volatile signed __int32*)String - 4);
																												v20 = sub_14020F700(v19, &v31);
																												*(float*)(a1 + 4i64 * (v14 - 1) + 360) = v20;
																											}
																											(*(void(SubwooferGen1::**)(__int64, __int64, _BYTE**, char**))(*(_QWORD*)a1 + 32i64))(
																												a1,
																												a2,
																												&v36,
																												&String);
																											if (v14 <= 4)
																												*(_DWORD*)(a1 + 4i64 * (v14 - 1) + 376) = atoi(String);
																										}
																									}
																									else
																									{
																										*(_DWORD*)(a1 + 320) = atoi(String);
																									}
																								}
																								else
																								{
																									*(_DWORD*)(a1 + 316) = atoi(String);
																								}
																							}
																							else
																							{
																								*(_DWORD*)(a1 + 312) = atoi(String);
																							}
																						}
																						else
																						{
																							*(_DWORD*)(a1 + 308) = atoi(String);
																						}
																					}
																					else
																					{
																						*(_DWORD*)(a1 + 304) = atoi(String);
																					}
																				}
																				else
																				{
																					*(_DWORD*)(a1 + 296) = atoi(String);
																				}
																			}
																			else
																			{
																				*(_BYTE*)(a1 + 292) = (unsigned int)String::isNotEmpty(String, "0") != 0;
																			}
																		}
																		else
																		{
																			v11 = String;
																			if ((*((_DWORD*)String - 4) & 0x30000000) == 0)
																				_InterlockedIncrement((volatile signed __int32*)String - 4);
																			v12 = *(_QWORD*)(a1 + 280);
																			*(_QWORD*)(a1 + 280) = v11;
																			v13 = (void*)(v12 - 16);
																			if ((*(_DWORD*)(v12 - 16) & 0x30000000) == 0
																				&& _InterlockedDecrement((volatile signed __int32*)v13) == -1)
																			{
																				j_j_free(v13);
																			}
																		}
																	}
																	else
																	{
																		*(_DWORD*)(a1 + 300) = atoi(String);
																	}
																}
																else
																{
																	*(_DWORD*)(a1 + 288) = atoi(String);
																}
															}
															else
															{
																*(_BYTE*)(a1 + 96) = (unsigned int)String::isNotEmpty(String, "0") != 0;
															}
														}
														else
														{
															*(_DWORD*)(a1 + 172) = atoi(String);
														}
													}
													else
													{
														*(_DWORD*)(a1 + 168) = atoi(String);
													}
												}
												else
												{
													*(_DWORD*)(a1 + 164) = atoi(String);
												}
											}
											else
											{
												*(_DWORD*)(a1 + 160) = atoi(String);
											}
										}
										else
										{
											*(_DWORD*)(a1 + 192) = atoi(String);
										}
									}
									else
									{
										*(_DWORD*)(a1 + 108) = atoi(String);
									}
								}
								else
								{
									*(_DWORD*)(a1 + 104) = atoi(String);
								}
							}
							else
							{
								v34 = String;
								v10 = sub_140048640(&v34);
								*(float*)(a1 + 16) = v10;
							}
						}
						else
						{
							*(double*)(a1 + 136) = (double)atoi(String);
						}
					}
					else
					{
						v28 = String;
						v9 = *((unsigned int*)String - 4);
						if ((v9 & 0x30000000) == 0)
							_InterlockedIncrement((volatile signed __int32*)String - 4);
						*(double*)(a1 + 128) = sub_14020F700(v9, &v28);
					}
				}
				else
				{
					v38 = String;
					v8 = *((unsigned int*)String - 4);
					if ((v8 & 0x30000000) == 0)
						_InterlockedIncrement((volatile signed __int32*)String - 4);
					*(double*)(a1 + 120) = sub_14020F700(v8, &v38);
				}
			}
			else
			{
				v37 = String;
				v7 = *((unsigned int*)String - 4);
				if ((v7 & 0x30000000) == 0)
					_InterlockedIncrement((volatile signed __int32*)String - 4);
				*(double*)(a1 + 112) = sub_14020F700(v7, &v37);
			}
		}
		else
		{
			*(_QWORD*)(a1 + 80) = atoi(String);
		}
		sub_140048D00(&v32, &unk_14046DFA6);
		v21 = String;
		String = v32;
		v32 = v21;
		v22 = v21 - 16;
		if ((*((_DWORD*)v21 - 4) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v22) == -1)
			j_j_free(v22);
		sub_140048D00(&v33, &unk_14046DFA7);
		v23 = v36;
		v36 = v33;
		v33 = v23;
		v24 = v23 - 16;
		if ((*((_DWORD*)v23 - 4) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v24) == -1)
			j_j_free(v24);
	}
	*(_DWORD*)(a1 + 260) = *(_DWORD*)(a1 + 288);
	*(_DWORD*)(a1 + 264) = *(_DWORD*)(a1 + 300);
	v25 = String - 16;
	if ((*((_DWORD*)String - 4) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v25) == -1)
		j_j_free(v25);
	v26 = v36 - 16;
	if ((*((_DWORD*)v36 - 4) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v26) == -1)
		j_j_free(v26);
	return v4;*/
}
__int64 SubwooferGen1::sub_1402107D0(__int64 a1, __int64 a2)
{
	return 1;
	/*__int64 v3; // rax
	char v5; // [rsp+47h] [rbp-11h] BYREF
	__int64 v6; // [rsp+48h] [rbp-10h] BYREF

	v3 = sub_1402FCD90(&v6, *(_QWORD*)(a1 + 80));
	sub_140040360(a2, v3, &v5 - v3);
	return a2;*/
}
void SubwooferGen1::sub_140231140(__int64 a1, int a2, __int64 a3, __int64 a4, int a5, char a6)
{
	/*if (!a6)
		*(_DWORD*)(a1 + 192) = a2;*/
}
__int64 SubwooferGen1::sub_140231130(__int64 a1)
{
	//return *(unsigned int*)(a1 + 192);
	return 1;
}
char SubwooferGen1::sub_140230840(__int64* a1, __int64 a2, __int64 a3, char a4)
{
	/*__int64 v6; // rdx
	__int64 v7; // rdx
	__int64 v8; // rdx
	char v10; // [rsp+20h] [rbp-58h]
	int v11; // [rsp+20h] [rbp-58h]
	char v12; // [rsp+28h] [rbp-50h]
	int v13; // [rsp+28h] [rbp-50h]
	char v14; // [rsp+30h] [rbp-48h]
	int v15; // [rsp+30h] [rbp-48h]
	char v16; // [rsp+38h] [rbp-40h]
	int v17; // [rsp+38h] [rbp-40h]
	char v18; // [rsp+40h] [rbp-38h]
	int v19; // [rsp+40h] [rbp-38h]
	char v20; // [rsp+48h] [rbp-30h]
	int v21; // [rsp+48h] [rbp-30h]

	if (!(unsigned __int8)sub_140210740())
		return 0;
	v20 = 0;
	v18 = 0;
	v16 = 0;
	v14 = 0;
	v12 = 0;
	v10 = 1;
	(*(void(SubwooferGen1::**)(_QWORD*, _QWORD, _QWORD, _QWORD, char, char, char, char, char, char, int, int))(*a1 + 144i64))(
		a1,
		0i64,
		0i64,
		0i64,
		v10,
		v12,
		v14,
		v16,
		v18,
		v20,
		-100,
		85);
	(*(void(SubwooferGen1::**)(_QWORD*))(*a1 + 160i64))(a1);
	if (a4)
	{
		(*(void(SubwooferGen1::**)(_QWORD*, __int64, _QWORD))(*a1 + 152i64))(a1, v6, 0i64);
		LOBYTE(v7) = 1;
		(*(void(SubwooferGen1::**)(_QWORD*, __int64))(*a1 + 136i64))(a1, v7);
	}
	sub_1402127F0(a1[8]);
	Sleep(0xC8u);
	LOBYTE(v21) = 0;
	LOBYTE(v19) = 0;
	LOBYTE(v17) = 0;
	LOBYTE(v15) = 0;
	LOBYTE(v13) = 1;
	LOBYTE(v11) = 0;
	(*(void(SubwooferGen1::**)(_QWORD*, _QWORD, _QWORD, _QWORD, int, int, int, int, int, int, _DWORD, _DWORD))(*a1 + 144i64))(
		a1,
		0i64,
		0i64,
		0i64,
		v11,
		v13,
		v15,
		v17,
		v19,
		v21,
		0,
		0);
	if (a4)
		(*(void(SubwooferGen1::**)(_QWORD*, __int64, _QWORD))(*a1 + 152i64))(a1, v8, 0i64);*/
	return 1;
}
char SubwooferGen1::sub_1402107C0()
{
	return 0;
}
__int64 SubwooferGen1::sub_1402310F0(unsigned int* a1, int a2)
{
	switch (a2)
	{
	case 1:
		return a1[40];
	case 2:
		return a1[41];
	case 3:
		return a1[42];
	case 4:
		return a1[43];
	}
	return 0i64;
}
__int64 SubwooferGen1::sub_140231010(__int64 a1, __int64 a2, __int64 a3, unsigned int a4, unsigned int a5, char a6, char a7)
{
	return 1;
	/*unsigned int v8; // esi
	__int64 result; // rax
	__int64 v11; // rcx
	__int64 v12; // rcx
	__int64 v13; // rcx
	__int64 v14; // rcx

	v8 = a3;
	if (!a7)
	{
		*(_DWORD*)(a1 + 160) = a2;
		*(_DWORD*)(a1 + 164) = a3;
		*(_DWORD*)(a1 + 168) = a4;
		*(_DWORD*)(a1 + 172) = a5;
	}
	result = sub_140210740(a1, a2, a3, (unsigned int)a2);
	if ((_BYTE)result)
	{
		if (a6)
		{
			sub_14021B840(v11, *(_QWORD*)(a1 + 56), *(unsigned int*)(a1 + 72));
			sub_140212F70(*(_QWORD*)(a1 + 64), *(_QWORD*)(a1 + 56));
			sub_14021B790(v12, *(_QWORD*)(a1 + 56), *(unsigned int*)(a1 + 72), v8);
			sub_140212F70(*(_QWORD*)(a1 + 64), *(_QWORD*)(a1 + 56));
			sub_14021B6E0(v13, *(_QWORD*)(a1 + 56), *(unsigned int*)(a1 + 72), a4);
			sub_140212F70(*(_QWORD*)(a1 + 64), *(_QWORD*)(a1 + 56));
			sub_14021B630(v14, *(_QWORD*)(a1 + 56), *(unsigned int*)(a1 + 72), a5);
			result = sub_140212F70(*(_QWORD*)(a1 + 64), *(_QWORD*)(a1 + 56));
		}
	}
	return result;*/
}
__int64 SubwooferGen1::sub_140231D10(__int64 a1)
{
	return 1;
	/*__int64 result; // rax

	*(_QWORD*)(a1 + 152) = *(_QWORD*)(a1 + 128);
	*(_QWORD*)(a1 + 144) = *(_QWORD*)(a1 + 112);
	*(_DWORD*)(a1 + 392) = *(_DWORD*)(a1 + 288);
	*(_DWORD*)(a1 + 396) = *(_DWORD*)(a1 + 296);
	*(_DWORD*)(a1 + 400) = *(_DWORD*)(a1 + 300);
	*(_DWORD*)(a1 + 404) = *(_DWORD*)(a1 + 328);
	*(_DWORD*)(a1 + 420) = *(_DWORD*)(a1 + 344);
	*(_DWORD*)(a1 + 436) = *(_DWORD*)(a1 + 360);
	*(_DWORD*)(a1 + 408) = *(_DWORD*)(a1 + 332);
	*(_DWORD*)(a1 + 424) = *(_DWORD*)(a1 + 348);
	*(_DWORD*)(a1 + 440) = *(_DWORD*)(a1 + 364);
	*(_DWORD*)(a1 + 412) = *(_DWORD*)(a1 + 336);
	*(_DWORD*)(a1 + 428) = *(_DWORD*)(a1 + 352);
	*(_DWORD*)(a1 + 444) = *(_DWORD*)(a1 + 368);
	*(_DWORD*)(a1 + 416) = *(_DWORD*)(a1 + 340);
	*(_DWORD*)(a1 + 432) = *(_DWORD*)(a1 + 356);
	result = *(unsigned int*)(a1 + 372);
	*(_DWORD*)(a1 + 448) = result;
	return result;*/
}
__int64 SubwooferGen1::sub_140231C40(__int64 a1)
{
	return 1;
	/*__int64 result; // rax

	*(_QWORD*)(a1 + 128) = *(_QWORD*)(a1 + 152);
	*(_QWORD*)(a1 + 112) = *(_QWORD*)(a1 + 144);
	*(_DWORD*)(a1 + 288) = *(_DWORD*)(a1 + 392);
	*(_DWORD*)(a1 + 296) = *(_DWORD*)(a1 + 396);
	*(_DWORD*)(a1 + 328) = *(_DWORD*)(a1 + 404);
	*(_DWORD*)(a1 + 344) = *(_DWORD*)(a1 + 420);
	*(_DWORD*)(a1 + 360) = *(_DWORD*)(a1 + 436);
	*(_DWORD*)(a1 + 332) = *(_DWORD*)(a1 + 408);
	*(_DWORD*)(a1 + 348) = *(_DWORD*)(a1 + 424);
	*(_DWORD*)(a1 + 364) = *(_DWORD*)(a1 + 440);
	*(_DWORD*)(a1 + 336) = *(_DWORD*)(a1 + 412);
	*(_DWORD*)(a1 + 352) = *(_DWORD*)(a1 + 428);
	*(_DWORD*)(a1 + 368) = *(_DWORD*)(a1 + 444);
	*(_DWORD*)(a1 + 340) = *(_DWORD*)(a1 + 416);
	*(_DWORD*)(a1 + 356) = *(_DWORD*)(a1 + 432);
	result = *(unsigned int*)(a1 + 448);
	*(_DWORD*)(a1 + 372) = result;
	return result;*/
}
__int64 SubwooferGen1::sub_140231A10(__int64* a1)
{
	return 1;
	/*__int64 v2; // rax
	__int64 v3; // rdx
	__int64 v4; // rdx
	int v5; // edi
	__int64* v6; // rbx
	_QWORD* v7; // rdi
	int v8; // ebx
	_DWORD* v9; // rax
	_DWORD* v10; // rax
	__int64 v11; // rdx
	int v13; // [rsp+20h] [rbp-48h]
	int v14; // [rsp+20h] [rbp-48h]
	int v15; // [rsp+28h] [rbp-40h]
	int v16; // [rsp+28h] [rbp-40h]
	int v17; // [rsp+30h] [rbp-38h]
	int v18; // [rsp+30h] [rbp-38h]
	int v19; // [rsp+30h] [rbp-38h]
	int v20; // [rsp+38h] [rbp-30h]
	int v21; // [rsp+40h] [rbp-28h]
	int v22; // [rsp+48h] [rbp-20h]

	*((_BYTE*)a1 + 32) = 0;
	sub_140230BA0();
	v2 = *a1;
	*((_DWORD*)a1 + 64) = 0;
	(*(void(SubwooferGen1::**)(__int64*, __int64, _QWORD))(v2 + 184))(a1, v3, 0i64);
	(*(void(SubwooferGen1::**)(__int64*, __int64, _QWORD))(*a1 + 152))(a1, v4, 0i64);
	(*(void(SubwooferGen1::**)(__int64*, _QWORD, _QWORD, _QWORD, _DWORD, char, _BYTE))(*a1 + 96))(
		a1,
		*((unsigned int*)a1 + 40),
		*((unsigned int*)a1 + 41),
		*((unsigned int*)a1 + 42),
		*((_DWORD*)a1 + 43),
		1,
		0);
	(*(void(SubwooferGen1::**)(__int64*, _QWORD, _QWORD))(*a1 + 328))(a1, *((unsigned int*)a1 + 72), 0i64);
	(*(void(SubwooferGen1::**)(__int64*, _QWORD, _QWORD))(*a1 + 368))(a1, *((unsigned int*)a1 + 75), 0i64);
	LOBYTE(v17) = 0;
	(*(void(SubwooferGen1::**)(__int64*, _QWORD, _QWORD, _QWORD, _DWORD, _DWORD, int))(*a1 + 400))(
		a1,
		*((unsigned int*)a1 + 78),
		*((unsigned int*)a1 + 80),
		*((unsigned int*)a1 + 76),
		*((_DWORD*)a1 + 77),
		*((_DWORD*)a1 + 79),
		v17);
	(*(void(SubwooferGen1::**)(__int64*, _QWORD, _QWORD))(*a1 + 296))(a1, *((unsigned __int8*)a1 + 292), 0i64);
	(*(void(SubwooferGen1::**)(__int64*, _QWORD, _QWORD))(*a1 + 304))(a1, *((unsigned int*)a1 + 74), 0i64);
	v5 = 0;
	v6 = a1 + 43;
	do
	{
		LOBYTE(v15) = 0;
		(*(void(SubwooferGen1::**)(__int64*, _QWORD, __int64*, __int64*, __int64*, int))(*a1 + 256))(
			a1,
			(unsigned int)v5++,
			v6 - 2,
			v6,
			v6 + 2,
			v15);
		v6 = (__int64*)((char*)v6 + 4);
	} while (v5 < 4);
	LOBYTE(v18) = 0;
	LOBYTE(v15) = 0;
	LOBYTE(v13) = 0;
	(*(void(SubwooferGen1::**)(__int64*, _QWORD, _QWORD, _QWORD, int, int, int, _BYTE, _BYTE, _BYTE, _DWORD, _DWORD))(*a1 + 144))(
		a1,
		0i64,
		0i64,
		0i64,
		v13,
		v15,
		v18,
		0,
		0,
		0,
		0,
		0);
	LOBYTE(v22) = 0;
	LOBYTE(v21) = 0;
	LOBYTE(v20) = 0;
	LOBYTE(v19) = 0;
	LOBYTE(v16) = 0;
	LOBYTE(v14) = 0;
	(*(void(SubwooferGen1::**)(__int64*, _QWORD, _QWORD, _QWORD, int, int, int, int, int, int, _DWORD, _DWORD))(*a1 + 144))(
		a1,
		0i64,
		0i64,
		0i64,
		v14,
		v16,
		v19,
		v20,
		v21,
		v22,
		0,
		0);
	v7 = (_QWORD*)a1[7];
	v8 = *((_DWORD*)a1 + 18);
	sub_140007A80(v7);
	v9 = (_DWORD*)*v7;
	++v9[5];
	**(_BYTE**)v9 = v8;
	v10 = (_DWORD*)*v7;
	++v10[5];
	*(_BYTE*)(*(_QWORD*)v10 + 1i64) = 61;
	sub_140007AF0(*v7, 0i64);
	sub_140007AF0(*v7, v11);
	*(_DWORD*)(*v7 + 12i64) = 7;
	return sub_140212F70(a1[8], a1[7]);*/
}
__int64 SubwooferGen1::sub_140231960(char* a1, __int64 a2, __int64 a3)
{
	return 1;
	/*__int64 v3; // rax
	char v4; // bl
	__int64 v6; // rdx
	__int64 v7; // r8
	int v8; // ebx
	_BYTE* v9; // rsi
	__int64 result; // rax
	int v11; // [rsp+28h] [rbp-10h]
	int v12; // [rsp+48h] [rbp+10h] BYREF

	v3 = *(_QWORD*)a1;
	LOBYTE(a3) = 1;
	v12 = 0;
	a1[32] = a2;
	v4 = a2;
	(*(void(SubwooferGen1::**)(_BYTE*, __int64, __int64))(v3 + 184))(a1, a2, a3);
	if (v4)
	{
		LOBYTE(v7) = 1;
		(*(void(SubwooferGen1::**)(_BYTE*, __int64, __int64))(*(_QWORD*)a1 + 152i64))(a1, v6, v7);
	}
	LOBYTE(v7) = 1;
	(*(void(SubwooferGen1::**)(_BYTE*, _QWORD, __int64))(*(_QWORD*)a1 + 304i64))(a1, 0i64, v7);
	v8 = 0;
	v9 = a1 + 328;
	do
	{
		LOBYTE(v11) = 1;
		result = (*(__int64(SubwooferGen1::**)(_BYTE*, _QWORD, _BYTE*, int*, _BYTE*, int))(*(_QWORD*)a1 + 256i64))(
			a1,
			(unsigned int)v8++,
			v9,
			&v12,
			v9 + 32,
			v11);
		v9 += 4;
	} while (v8 < 4);
	return result;*/
}
bool SubwooferGen1::sub_140231370(__int64 a1, __int64 a2, __int64 a3, __int64 a4, char a5, char a6, char a7, char a8, char a9, char a10, int a11, int a12)
{
	return true;
	/*char v12; // r13
	char v13; // r12
	unsigned __int8 v14; // bp
	__int64 v16; // rcx
	__int64 v17; // rcx
	__int64 v18; // rcx
	__int64 v19; // rcx
	int v20; // ecx
	__int64 v21; // rdx
	__int64 v22; // r8
	char v23; // bl
	int v24; // xmm0_4
	int v25; // ecx
	int v26; // er8
	__int64 v27; // rdx
	__int64 v28; // rcx
	__int64 v29; // r9
	__int64 v30; // r8
	char v31; // dl
	_QWORD* v33; // rdi
	int v34; // ebx
	_DWORD* v35; // rax
	_DWORD* v36; // rax
	_QWORD* v37; // rdi
	int v38; // ebx
	_DWORD* v39; // rax
	__int64 v40; // rdx
	_DWORD* v41; // rax
	__int64 v42; // rdx
	_QWORD* v43; // rdi
	int v44; // ebx
	_DWORD* v45; // rax
	__int64 v46; // rdx
	_DWORD* v47; // rax
	__int64 v48; // rdx
	_QWORD* v49; // rdi
	int v50; // ebx
	_DWORD* v51; // rax
	_DWORD* v52; // rax
	__int64 v53; // rdx
	__int64 v54; // rdx
	int v55; // eax
	_QWORD* v56; // rbx
	int v57; // edi
	_DWORD* v58; // rax
	__int64 v59; // rdx
	_DWORD* v60; // rax
	__int64 v61; // rdx
	int v62; // edi
	__int64 v63; // rax
	__int64 v64; // rdx
	_DWORD* v65; // rax
	__int64 v66; // rdx
	__int64 v67; // rax
	__int64 v68; // rdx
	_DWORD* v69; // rax
	__int64 v70; // rdx
	int v71; // ecx
	__int64 v72; // rdx
	__int64 v73; // r8
	float v74; // xmm0_4
	__int64 v75; // r9
	__int64 v76; // r8
	char v77; // dl
	int v78; // [rsp+28h] [rbp-70h]
	int v79; // [rsp+28h] [rbp-70h]

	v12 = a4;
	v13 = a3;
	v14 = a2;
	if (!(unsigned __int8)sub_140210740(a1, a2, a3, a4))
		return 0;
	if (!v14 && !v13 && !a5 && !a6)
	{
		sub_14021B840(v16, *(_QWORD*)(a1 + 56), *(unsigned int*)(a1 + 72));
		sub_140212F70(*(_QWORD*)(a1 + 64), *(_QWORD*)(a1 + 56));
		sub_14021B790(v17, *(_QWORD*)(a1 + 56), *(unsigned int*)(a1 + 72), *(unsigned int*)(a1 + 164));
		sub_140212F70(*(_QWORD*)(a1 + 64), *(_QWORD*)(a1 + 56));
		sub_14021B6E0(v18, *(_QWORD*)(a1 + 56), *(unsigned int*)(a1 + 72), *(unsigned int*)(a1 + 168));
		sub_140212F70(*(_QWORD*)(a1 + 64), *(_QWORD*)(a1 + 56));
		sub_14021B630(v19, *(_QWORD*)(a1 + 56), *(unsigned int*)(a1 + 72), *(unsigned int*)(a1 + 172));
		sub_140212F70(*(_QWORD*)(a1 + 64), *(_QWORD*)(a1 + 56));
		sub_14021A540(
			v20,
			*(_QWORD*)(a1 + 56),
			*(_DWORD*)(a1 + 72),
			*(_DWORD*)(a1 + 160),
			*(_DWORD*)(a1 + 164),
			*(_DWORD*)(a1 + 168),
			*(_DWORD*)(a1 + 172));
		sub_140212F70(*(_QWORD*)(a1 + 64), *(_QWORD*)(a1 + 56));
		v23 = a7;
		if (a7)
			v24 = -1018691584;
		else
			v24 = 0;
		*(_DWORD*)(a1 + 256) = v24;
		LOBYTE(v22) = 1;
		(*(void(SubwooferGen1::**)(__int64, __int64, __int64))(*(_QWORD*)a1 + 152i64))(a1, v21, v22);
		v26 = *(_DWORD*)(a1 + 72);
		v27 = *(_QWORD*)(a1 + 56);
		goto LABEL_10;
	}
	v33 = *(_QWORD**)(a1 + 56);
	v34 = *(_DWORD*)(a1 + 72);
	sub_140007A80(v33);
	v35 = (_DWORD*)*v33;
	++v35[5];
	**(_BYTE**)v35 = v34;
	v36 = (_DWORD*)*v33;
	++v36[5];
	*(_BYTE*)(*(_QWORD*)v36 + 1i64) = 45;
	sub_140007AF0(*v33, 0i64);
	*(_DWORD*)(*v33 + 12i64) = 6;
	sub_140212F70(*(_QWORD*)(a1 + 64), *(_QWORD*)(a1 + 56));
	*(_DWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 56) + 8i64) + 20i64) = 1;
	++* (_DWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 56) + 8i64) + 20i64);
	v37 = *(_QWORD**)(a1 + 56);
	v38 = *(_DWORD*)(a1 + 72);
	sub_140007A80(v37);
	v39 = (_DWORD*)*v37;
	LOBYTE(v40) = 17;
	++v39[5];
	**(_BYTE**)v39 = v38;
	v41 = (_DWORD*)*v37;
	++v41[5];
	*(_BYTE*)(*(_QWORD*)v41 + 1i64) = 13;
	sub_140007AF0(*v37, v40);
	LOBYTE(v42) = 3;
	sub_140007AF0(*v37, v42);
	*(_DWORD*)(*v37 + 12i64) = 7;
	sub_140212F70(*(_QWORD*)(a1 + 64), *(_QWORD*)(a1 + 56));
	v43 = *(_QWORD**)(a1 + 56);
	v44 = *(_DWORD*)(a1 + 72);
	sub_140007A80(v43);
	v45 = (_DWORD*)*v43;
	LOBYTE(v46) = 33;
	++v45[5];
	**(_BYTE**)v45 = v44;
	v47 = (_DWORD*)*v43;
	++v47[5];
	*(_BYTE*)(*(_QWORD*)v47 + 1i64) = 13;
	sub_140007AF0(*v43, v46);
	LOBYTE(v48) = 3;
	sub_140007AF0(*v43, v48);
	*(_DWORD*)(*v43 + 12i64) = 7;
	sub_140212F70(*(_QWORD*)(a1 + 64), *(_QWORD*)(a1 + 56));
	v49 = *(_QWORD**)(a1 + 56);
	v50 = *(_DWORD*)(a1 + 72);
	sub_140007A80(v49);
	v51 = (_DWORD*)*v49;
	++v51[5];
	**(_BYTE**)v51 = v50;
	v52 = (_DWORD*)*v49;
	++v52[5];
	LOBYTE(v53) = 49;
	*(_BYTE*)(*(_QWORD*)v52 + 1i64) = 13;
	sub_140007AF0(*v49, v53);
	LOBYTE(v54) = 3;
	sub_140007AF0(*v49, v54);
	*(_DWORD*)(*v49 + 12i64) = 7;
	sub_140212F70(*(_QWORD*)(a1 + 64), *(_QWORD*)(a1 + 56));
	v55 = *(_DWORD*)(a1 + 312);
	v56 = *(_QWORD**)(a1 + 56);
	v57 = *(_DWORD*)(a1 + 72);
	if (v55 == 7)
	{
		sub_140007A80(v56);
		v58 = (_DWORD*)*v56;
		LOBYTE(v59) = 65;
		++v58[5];
		**(_BYTE**)v58 = v57;
		v60 = (_DWORD*)*v56;
		++v60[5];
		*(_BYTE*)(*(_QWORD*)v60 + 1i64) = 13;
		sub_140007AF0(*v56, v59);
		LOBYTE(v61) = 2;
		sub_140007AF0(*v56, v61);
		v62 = -17;
	}
	else if (v55 == 8)
	{
		sub_140007A80(v56);
		v63 = *v56;
		LOBYTE(v64) = 65;
		++* (_DWORD*)(v63 + 20);
		**(_BYTE**)v63 = v57;
		v65 = (_DWORD*)*v56;
		++v65[5];
		*(_BYTE*)(*(_QWORD*)v65 + 1i64) = 13;
		sub_140007AF0(*v56, v64);
		LOBYTE(v66) = 1;
		sub_140007AF0(*v56, v66);
		v62 = -17;
	}
	else
	{
		sub_140007A80(v56);
		v67 = *v56;
		LOBYTE(v68) = 65;
		++* (_DWORD*)(v67 + 20);
		**(_BYTE**)v67 = v57;
		v69 = (_DWORD*)*v56;
		++v69[5];
		*(_BYTE*)(*(_QWORD*)v69 + 1i64) = 13;
		sub_140007AF0(*v56, v68);
		LOBYTE(v70) = 3;
		sub_140007AF0(*v56, v70);
		v62 = -18;
	}
	*(_DWORD*)(*v56 + 12i64) = 7;
	sub_140212F70(*(_QWORD*)(a1 + 64), *(_QWORD*)(a1 + 56));
	sub_14021A540(v71, *(_QWORD*)(a1 + 56), *(_DWORD*)(a1 + 72), 3, 3, 3, 3);
	sub_140212F70(*(_QWORD*)(a1 + 64), *(_QWORD*)(a1 + 56));
	v23 = a7;
	if (v14)
	{
		v74 = 0.0;
	}
	else if (a7)
	{
		v74 = -200.0;
	}
	else
	{
		v74 = (float)v62;
	}
	*(float*)(a1 + 256) = v74;
	LOBYTE(v73) = 1;
	(*(void(SubwooferGen1::**)(__int64, __int64, __int64))(*(_QWORD*)a1 + 152i64))(a1, v72, v73);
	v26 = *(_DWORD*)(a1 + 72);
	v27 = *(_QWORD*)(a1 + 56);
	if (!v14)
	{
	LABEL_10:
		LOBYTE(v78) = v12;
		sub_14021B8F0(v25, v27, v26, 0, v13, v78, a5, a6, v23, a8, a9, a10, a11, a12);
		sub_140212F70(*(_QWORD*)(a1 + 64), *(_QWORD*)(a1 + 56));
		v28 = *(_QWORD*)(*(_QWORD*)(a1 + 56) + 8i64);
		*(_DWORD*)(v28 + 20) = 1;
		v29 = *(_QWORD*)(*(_QWORD*)(a1 + 56) + 8i64);
		v30 = *(int*)(v29 + 20);
		v31 = *(_BYTE*)(v30 + *(_QWORD*)v29);
		*(_DWORD*)(v29 + 20) = v30 + 1;
		if (v31 != 9)
		{
			if (a6)
			{
				LOBYTE(v79) = v12;
				sub_14021B8F0(v28, *(_QWORD*)(a1 + 56), *(_DWORD*)(a1 + 72), 0, v13, v79, a5, 0, v23, a8, a9, a10, 0, 85);
				sub_140212F70(*(_QWORD*)(a1 + 64), *(_QWORD*)(a1 + 56));
			}
			return 0;
		}
		return 1;
	}
	LOBYTE(v78) = v12;
	sub_14021B8F0(v25, v27, v26, v14, v13, v78, a5, a6, a7, a8, a9, a10, a11, 85);
	sub_140212F70(*(_QWORD*)(a1 + 64), *(_QWORD*)(a1 + 56));
	*(_DWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 56) + 8i64) + 20i64) = 1;
	v75 = *(_QWORD*)(*(_QWORD*)(a1 + 56) + 8i64);
	v76 = *(int*)(v75 + 20);
	v77 = *(_BYTE*)(v76 + *(_QWORD*)v75);
	*(_DWORD*)(v75 + 20) = v76 + 1;
	return v77 == 9;*/
}
__int64 SubwooferGen1::sub_1402311A0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
	return 1;
	/*__int64 v4; // xmm1_8
	__int64 result; // rax
	__int64 v7; // rcx

	if (!(_BYTE)a3)
		*(_QWORD*)(a1 + 112) = v4;
	result = sub_140210740(a1, a2, a3, a4);
	if ((_BYTE)result)
	{
		sub_14021B2A0(v7, *(_QWORD*)(a1 + 56), *(unsigned int*)(a1 + 72));
		sub_140212F70(*(_QWORD*)(a1 + 64), *(_QWORD*)(a1 + 56));
		*(_DWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 56) + 8i64) + 20i64) = 1;
		result = *(_QWORD*)(a1 + 56);
		++* (_DWORD*)(*(_QWORD*)(result + 8) + 20i64);
	}
	return result;*/
}
double SubwooferGen1::sub_140231190(__int64 a1)
{
	return *(double*)(a1 + 112);
}
void SubwooferGen1::sub_140231180(__int64 a1, double a2)
{
	*(double*)(a1 + 120) = a2;
}
double SubwooferGen1::sub_140231160(__int64 a1)
{
	double result; // xmm0_8

	result = *(double*)(a1 + 120);
	if (result == -999.0)
		result = 0.0;
	return result;
}
char SubwooferGen1::sub_140231240(__int64 a1, __int64 a2, __int64 a3)
{
/*
	double v3; // xmm1_8
	__int64 v5; // rdx
	unsigned __int8 v6; // r9
	__int64 v7; // rcx
	__int64 v8; // rcx
	__int64 v9; // rax

	if (!(_BYTE)a3)
	{
		if (v3 <= 200.0)
		{
			if (v3 >= 0.0)
				*(double*)(a1 + 128) = v3;
			else
				*(_QWORD*)(a1 + 128) = 0i64;
		}
		else
		{
			*(_QWORD*)(a1 + 128) = 0x4069000000000000i64;
		}
	}
	*(double*)(a1 + 272) = v3;
	if (!(unsigned __int8)sub_140210740(a1, a2, a3, (unsigned __int8)a3))
		return 0;
	if (*(int*)(a1 + 264) >= 0)
		v5 = 0i64;
	else
		LOBYTE(v5) = 1;
	(*(void(SubwooferGen1::**)(__int64, __int64, _QWORD))(*(_QWORD*)a1 + 544i64))(a1, v5, v6);
	sub_14020F7C0(v7, *(unsigned int*)(a1 + 264), *(unsigned int*)(a1 + 260));
	sub_140007A80(*(_QWORD*)(a1 + 56));
	v8 = *(unsigned __int8*)(a1 + 72);
	v9 = **(_QWORD**)(a1 + 56);
	++* (_DWORD*)(v9 + 20);
	**(_BYTE**)v9 = v8;
	sub_14021B060(v8, *(_QWORD*)(a1 + 56), *(unsigned int*)(a1 + 72));
	sub_140212F70(*(_QWORD*)(a1 + 64), *(_QWORD*)(a1 + 56));*/
	return 1;
}
double SubwooferGen1::sub_140231230(__int64 a1)
{
	return *(double*)(a1 + 128);
}
char SubwooferGen1::sub_140230CB0(__int64 a1, __int64* a2, __int64 a3, __int64 a4)
{
	return 1;
	/*__int64 v6; // rdx
	char v7; // r8
	__int64 v8; // rax
	_DWORD* v9; // rax
	__int64 v10; // r9
	__int64 v11; // r8
	char v12; // dl
	__int64 v13; // r9
	__int64 v14; // r8
	int v15; // edx
	__int64 v16; // r9
	__int64 v17; // r8
	int v18; // edx
	__int64 v19; // r9
	__int64 v20; // r8
	int v21; // edx
	__int64 v22; // r9
	__int64 v23; // r8
	int v24; // edx
	char result; // al

	if (!(unsigned __int8)sub_140210740(a1, a2, a3, a4))
		return 0;
	sub_140007A80(*(_QWORD*)(a1 + 56));
	LOBYTE(v6) = 4;
	v7 = *(_BYTE*)(a1 + 72);
	v8 = **(_QWORD**)(a1 + 56);
	++* (_DWORD*)(v8 + 20);
	**(_BYTE**)v8 = v7;
	v9 = **(_DWORD***)(a1 + 56);
	++v9[5];
	*(_BYTE*)(*(_QWORD*)v9 + 1i64) = 23;
	sub_140007AF0(**(_QWORD**)(a1 + 56), v6);
	*(_DWORD*)(**(_QWORD**)(a1 + 56) + 12i64) = 6;
	sub_140212F70(*(_QWORD*)(a1 + 64), *(_QWORD*)(a1 + 56));
	*(_DWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 56) + 8i64) + 20i64) = 1;
	v10 = *(_QWORD*)(*(_QWORD*)(a1 + 56) + 8i64);
	v11 = *(int*)(v10 + 20);
	v12 = *(_BYTE*)(v11 + *(_QWORD*)v10);
	*(_DWORD*)(v10 + 20) = v11 + 1;
	if (v12 != 9)
		return 0;
	v13 = *(_QWORD*)(*(_QWORD*)(a1 + 56) + 8i64);
	v14 = *(int*)(v13 + 20);
	v15 = *(unsigned __int8*)(v14 + *(_QWORD*)v13);
	*(_DWORD*)(v13 + 20) = v14 + 1;
	*a2 = v15;
	v16 = *(_QWORD*)(*(_QWORD*)(a1 + 56) + 8i64);
	v17 = *(int*)(v16 + 20);
	v18 = *(unsigned __int8*)(v17 + *(_QWORD*)v16);
	*(_DWORD*)(v16 + 20) = v17 + 1;
	a2[1] = v18;
	v19 = *(_QWORD*)(*(_QWORD*)(a1 + 56) + 8i64);
	v20 = *(int*)(v19 + 20);
	v21 = *(unsigned __int8*)(v20 + *(_QWORD*)v19);
	*(_DWORD*)(v19 + 20) = v20 + 1;
	a2[2] = v21;
	v22 = *(_QWORD*)(*(_QWORD*)(a1 + 56) + 8i64);
	v23 = *(int*)(v22 + 20);
	v24 = *(unsigned __int8*)(v23 + *(_QWORD*)v22);
	*(_DWORD*)(v22 + 20) = v23 + 1;
	result = 1;
	a2[3] = v24;
	return result;*/
}
bool SubwooferGen1::sub_140230C30(__int64 a1, __int64 a2, __int64 a3)
{
	return true;
	/*__int64* v3; // r9
	__int64 v4; // rax
	bool result; // al
	__int64 v6; // [rsp+20h] [rbp-48h] BYREF
	char v7[40]; // [rsp+28h] [rbp-40h] BYREF

	result = 0;
	if ((unsigned __int8)sub_140210740(a1, a2, a3, a1))
	{
		v4 = *v3;
		v6 = 0i64;
		if ((*(unsigned __int8(SubwooferGen1::**)(__int64*, char*, __int64*))(v4 + 200))(v3, v7, &v6))
		{
			if ((v7[0] & 4) != 0)
				result = 1;
		}
	}
	return result;*/
}
int* SubwooferGen1::sub_140230F00(__int64 a1, __int64 a2, int* a3, int* a4, __int64* a5)
{
	int* result;
	return result;
	/*__int64 v6; // rsi
	__int64 v9; // rcx
	__int64 v10; // rcx
	__int64 v11; // r9
	__int64 v12; // r8
	char v13; // dl
	_DWORD* result; // rax
	char v15; // [rsp+70h] [rbp+8h] BYREF
	int v16; // [rsp+78h] [rbp+10h] BYREF
	char v17; // [rsp+80h] [rbp+18h] BYREF
	char v18; // [rsp+88h] [rbp+20h] BYREF

	v6 = (int)a2;
	if ((unsigned __int8)sub_140210740(a1, a2, a3, a4))
	{
		if (!*(_DWORD*)(a1 + 4 * v6 + 376))
		{
			sub_14021ABA0(v9, *(_QWORD*)(a1 + 56), *(unsigned int*)(a1 + 72), (unsigned int)(v6 + 1));
			sub_140212F70(*(_QWORD*)(a1 + 64), *(_QWORD*)(a1 + 56));
			v10 = *(_QWORD*)(*(_QWORD*)(a1 + 56) + 8i64);
			*(_DWORD*)(v10 + 20) = 1;
			v11 = *(_QWORD*)(*(_QWORD*)(a1 + 56) + 8i64);
			v12 = *(int*)(v11 + 20);
			v13 = *(_BYTE*)(v12 + *(_QWORD*)v11);
			*(_DWORD*)(v11 + 20) = v12 + 1;
			if (v13 == 9)
			{
				if ((unsigned __int8)sub_14021A5F0(
					v10,
					*(_QWORD*)(a1 + 56),
					v12,
					(unsigned int)&v18,
					(__int64)&v17,
					(__int64)&v15,
					(__int64)&v16))
					*(_DWORD*)(a1 + 4 * v6 + 376) = v16;
			}
		}
	}
	*a3 = *(_DWORD*)(a1 + 4 * v6 + 328);
	*a4 = *(_DWORD*)(a1 + 4 * v6 + 344);
	result = a5;
	*a5 = *(_DWORD*)(a1 + 4 * v6 + 360);
	return result;*/
}
__int64 SubwooferGen1::sub_140230E00(__int64 a1, __int64 a2, __int64* a3, __int64* a4, __int64* a5, char a6)
{
	return 1;
	/*int v6; // ebp
	__int64 v10; // rdi
	_DWORD* v11; // r10
	__int64 result; // rax
	int v13; // ecx
	_DWORD* v14; // r10
	char v15; // [rsp+70h] [rbp+8h] BYREF
	char v16; // [rsp+78h] [rbp+10h] BYREF
	char v17; // [rsp+88h] [rbp+20h] BYREF

	v6 = a2 + 1;
	if (*(float*)a4 > 0.0)
		*a4 = 0;
	v10 = (int)a2;
	if (!*(_DWORD*)(a1 + 4i64 * (int)a2 + 376))
		(*(void(SubwooferGen1::**)(__int64, __int64, char*, char*, char*))(*(_QWORD*)a1 + 248i64))(
			a1,
			a2,
			&v17,
			&v15,
			&v16);
	v11 = a5;
	if (!a6)
	{
		*(_DWORD*)(a1 + 4 * v10 + 328) = *a3;
		*(_DWORD*)(a1 + 4 * v10 + 344) = *a4;
		*(_DWORD*)(a1 + 4 * v10 + 360) = *v11;
	}
	result = sub_140210740(a1, a2, a3, a4);
	if ((_BYTE)result)
	{
		result = *(unsigned int*)(a1 + 4 * v10 + 376);
		if ((_DWORD)result)
		{
			sub_14021A8A0(
				v13,
				*(_QWORD*)(a1 + 56),
				*(_DWORD*)(a1 + 72),
				v6,
				*a3,
				*a4,
				*v14,
				*(_DWORD*)(a1 + 4 * v10 + 376));
			result = sub_140212F70(*(_QWORD*)(a1 + 64), *(_QWORD*)(a1 + 56));
		}
	}
	return result;*/
}
__int64 SubwooferGen1::sub_140230800(__int64 a1)
{
	return 1;
	/*double v1; // xmm0_8
	double v2; // xmm4_8

	v1 = sub_14020F7C0(a1, *(unsigned int*)(a1 + 264), *(unsigned int*)(a1 + 260));
	return (unsigned int)(int)(v2 - v1);*/
}
__int64 SubwooferGen1::sub_1402307D0(double* a1, int a2, char a3)
{
	return 1;
	/*if (!a3)
		a1[17] = (double)a2;
	return (*(__int64 (**)(void))(*(_QWORD*)a1 + 184i64))();*/
}
__int64 SubwooferGen1::sub_1402307C0(__int64 a1)
{
	return 1;
	//return (unsigned int)(int)*(double*)(a1 + 136);
}
__int64 SubwooferGen1::sub_1402307B0(__int64 a1, __int8* a2)
{
	return 1;
	/*_int64 result; // rax

	result = *(unsigned __int8*)(a1 + 292);
	*a2 = result;
	return result;*/
}
__int64 SubwooferGen1::sub_1402306F0(__int64 a1, __int64 a2, __int64 a3)
{
	return 1;
	/*__int64 result; // rax
	__int64 v5; // rcx
	char v6; // r9
	int v7; // ebx
	_QWORD* v8; // rdi
	_DWORD* v9; // rax
	__int64 v10; // rdx
	_DWORD* v11; // rax

	if (!(_BYTE)a3)
		*(_BYTE*)(a1 + 292) = a2;
	result = sub_140210740(a1, a2, a3, (unsigned __int8)a2);
	if ((_BYTE)result)
	{
		if (v6 || !*(_BYTE*)(a1 + 96))
		{
			v7 = *(_DWORD*)(a1 + 72);
			v8 = *(_QWORD**)(a1 + 56);
			sub_140007A80(v8);
			v9 = (_DWORD*)*v8;
			LOBYTE(v10) = 1;
			++v9[5];
			**(_BYTE**)v9 = v7;
			v11 = (_DWORD*)*v8;
			++v11[5];
			*(_BYTE*)(*(_QWORD*)v11 + 1i64) = 22;
			sub_140007AF0(*v8, v10);
			*(_DWORD*)(*v8 + 12i64) = 6;
			result = sub_140212F70(*(_QWORD*)(a1 + 64), *(_QWORD*)(a1 + 56));
		}
		else
		{
			sub_140219FC0(v5, *(_QWORD*)(a1 + 56), *(unsigned int*)(a1 + 72));
			result = sub_140212F70(*(_QWORD*)(a1 + 64), *(_QWORD*)(a1 + 56));
		}
	}
	return result;*/
}
__int64 SubwooferGen1::sub_1402306A0(__int64 a1, __int64 a2, __int64 a3)
{
	return 1;
	/*__int64 result; // rax
	__int64 v5; // rcx

	if (!(_BYTE)a3)
		*(_DWORD*)(a1 + 296) = a2;
	result = sub_140210740(a1, a2, a3, (unsigned int)a2);
	if ((_BYTE)result)
	{
		sub_14021A4A0(v5, *(_QWORD*)(a1 + 56), *(unsigned int*)(a1 + 72));
		result = sub_140212F70(*(_QWORD*)(a1 + 64), *(_QWORD*)(a1 + 56));
	}
	return result;*/
}
__int64 SubwooferGen1::sub_140230690(__int64 a1, __int64* a2)
{
	/*__int64 result; // rax

	result = *(unsigned int*)(a1 + 296);
	*a2 = result;
	return result;*/
	return 1;
}
__int64 SubwooferGen1::sub_140230B90(__int64 a1, __int64* a2)
{
	/*__int64 result; // rax

	result = *(unsigned int*)(a1 + 288);
	*a2 = result;
	return result;*/
	return 1;
}
bool SubwooferGen1::sub_140230AC0(__int64 a1, __int64 a2, __int64 a3)
{
	return true;
	/*unsigned __int8 v3; // si
	__int64 v5; // rcx
	__int64 v6; // r9
	__int64 v7; // r8
	__int64 v8; // rdx
	char v9; // bl

	v3 = a3;
	if (!(_BYTE)a3)
		*(_DWORD*)(a1 + 288) = a2;
	*(_DWORD*)(a1 + 260) = a2;
	if (!(unsigned __int8)sub_140210740(a1, a2, a3, (unsigned int)a2))
		return 0;
	if ((_DWORD)v6 == 1)
		v6 = 100i64;
	sub_14021A320(v5, *(_QWORD*)(a1 + 56), *(unsigned int*)(a1 + 72), v6);
	sub_140212F70(*(_QWORD*)(a1 + 64), *(_QWORD*)(a1 + 56));
	*(_DWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 56) + 8i64) + 20i64) = 1;
	v7 = *(_QWORD*)(*(_QWORD*)(a1 + 56) + 8i64);
	v8 = *(int*)(v7 + 20);
	v9 = *(_BYTE*)(v8 + *(_QWORD*)v7);
	*(_DWORD*)(v7 + 20) = v8 + 1;
	(*(void(SubwooferGen1::**)(__int64, __int64, _QWORD))(*(_QWORD*)a1 + 184i64))(a1, v8, v3);
	return v9 == 9;*/
}
__int64 SubwooferGen1::sub_1402107B0(__int64 a1, __int32* a2, __int32* a3)
{
	return 1;
	/*__int64 result; // rax

	result = 0i64;
	*a2 = 0;
	*a3 = 0;
	return result;*/
}
char SubwooferGen1::sub_1402107A0()
{
	return 0;
}
char SubwooferGen1::sub_140210790()
{
	return 0;
}
__int64 SubwooferGen1::sub_140230AB0(__int64 a1, __int32* a2)
{
	return 1;
	/*__int64 result; // rax

	result = *(unsigned int*)(a1 + 300);
	*a2 = result;
	return result;*/
}
__int64 SubwooferGen1::sub_140230A60(__int64 a1, __int64 a2, __int64 a3)
{
	return 1;
	/*__int64 result; // rax
	__int64 v4; // rdx
	__int64 v5; // r9
	unsigned __int8 v6; // r10

	if (!(_BYTE)a3)
		*(_DWORD*)(a1 + 300) = a2;
	*(_DWORD*)(a1 + 264) = a2;
	result = sub_140210740(a1, a2, a3, a1);
	if ((_BYTE)result)
		result = (*(__int64(SubwooferGen1::**)(__int64, __int64, _QWORD))(*(_QWORD*)v5 + 184i64))(v5, v4, v6);
	return result;*/
}
__int64* SubwooferGen1::sub_1402309F0(__int64 a1, __int64* a2)
{
	__int64* result;
	return result;
	/*__int64 v2; // r8
	_QWORD* result; // rax

	v2 = *(_QWORD*)(a1 + 280);
	*a2 = v2;
	result = a2;
	if ((*(_DWORD*)(v2 - 16) & 0x30000000) == 0)
		_InterlockedIncrement((volatile signed __int32*)(v2 - 16));
	return result;*/
}
void SubwooferGen1::sub_140230970(__int64 a1, __int64* a2)
{
	/*_DWORD* v3; // rcx
	_DWORD* v4; // rcx

	if ((*(_DWORD*)(*a2 - 16) & 0x30000000) == 0)
		_InterlockedIncrement((volatile signed __int32*)(*a2 - 16));
	v3 = (_DWORD*)(_InterlockedExchange64((volatile __int64*)(a1 + 280), *a2) - 16);
	if ((*v3 & 0x30000000) == 0 && _InterlockedDecrement(v3) == -1)
		j_j_free(v3);
	v4 = (_DWORD*)(*a2 - 16);
	if ((*v4 & 0x30000000) == 0 && _InterlockedDecrement(v4) == -1)
		j_j_free(v4);*/
}
_DWORD* SubwooferGen1::sub_140230650(_DWORD* a1, _DWORD* a2, _DWORD* a3, _DWORD* a4, _DWORD* a5, _DWORD* a6)
{
	_DWORD* result; // rax
	/*
	*a2 = a1[78];
	*a3 = a1[80];
	*a4 = a1[76];
	*a5 = a1[77];
	result = a6;
	*a6 = a1[79];*/
	return result;
}
double SubwooferGen1::sub_1402305B0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, int a6)
{
	return 1.0;
	/*int v7; // ecx
	__int64 v8; // rcx
	double result; // xmm0_8

	*(_DWORD*)(a1 + 308) = a5;
	*(_DWORD*)(a1 + 316) = a6;
	*(_DWORD*)(a1 + 312) = a2;
	*(_DWORD*)(a1 + 304) = a4;
	if ((unsigned __int8)sub_140210740(a1, a2, a3, a4))
	{
		LOBYTE(v7) = *(_DWORD*)(a1 + 308) != 0;
		sub_14021C230(v7, *(_QWORD*)(a1 + 56), *(_DWORD*)(a1 + 72), *(_DWORD*)(a1 + 312), *(_DWORD*)(a1 + 304) != 0, v7);
		sub_140212F70(*(_QWORD*)(a1 + 64), *(_QWORD*)(a1 + 56));
		sub_14021C080(v8, *(_QWORD*)(a1 + 56), *(unsigned int*)(a1 + 72));
		result = sub_140212F70(*(_QWORD*)(a1 + 64), *(_QWORD*)(a1 + 56));
	}
	return result;*/
}
__int64 SubwooferGen1::sub_14022FF90(__int64 a1, __int64 a2)
{
	return 1;
	/*__int64 v4; // rcx
	__int64 v5; // rbx
	_BYTE* v6; // rbx
	_DWORD* v7; // rcx
	__int64 v8; // rcx
	__int64 v9; // rcx
	float v10; // xmm1_4
	__int64 v11; // rcx
	__int64 v12; // rcx
	float v13; // xmm1_4
	__int64 v14; // rcx
	float v15; // xmm1_4
	__int64 v16; // rcx
	float v17; // xmm1_4
	__int64 v18; // rcx
	float v19; // xmm1_4
	__int64 v20; // rcx
	float v21; // xmm1_4
	__int64 v22; // rcx
	float v23; // xmm1_4
	__int64 v24; // rcx
	float v25; // xmm1_4
	__int64 v26; // rcx
	float v27; // xmm1_4
	__int64 v28; // rcx
	float v29; // xmm1_4
	__int64 v30; // rcx
	float v31; // xmm1_4
	__int64 v32; // rcx
	float v33; // xmm1_4
	__int64 v34; // rcx
	float v35; // xmm1_4
	_DWORD* v36; // rax
	_DWORD* v37; // rcx
	_BYTE* v38; // rax
	_BYTE* v39; // rcx
	_DWORD* v40; // rcx
	_DWORD* v41; // rcx
	_BYTE* v42; // rcx
	_DWORD* v44; // [rsp+20h] [rbp-59h] BYREF
	_DWORD* v45; // [rsp+28h] [rbp-51h] BYREF
	_DWORD* v46; // [rsp+30h] [rbp-49h] BYREF
	_DWORD* v47; // [rsp+38h] [rbp-41h] BYREF
	_DWORD* v48; // [rsp+40h] [rbp-39h] BYREF
	_DWORD* v49; // [rsp+48h] [rbp-31h] BYREF
	_DWORD* v50; // [rsp+50h] [rbp-29h] BYREF
	_DWORD* v51; // [rsp+58h] [rbp-21h] BYREF
	_DWORD* v52; // [rsp+60h] [rbp-19h] BYREF
	_DWORD* v53; // [rsp+68h] [rbp-11h] BYREF
	_DWORD* v54; // [rsp+70h] [rbp-9h] BYREF
	_DWORD* v55; // [rsp+78h] [rbp-1h] BYREF
	_DWORD* v56; // [rsp+80h] [rbp+7h] BYREF
	_DWORD* v57; // [rsp+88h] [rbp+Fh] BYREF
	_DWORD* v58; // [rsp+90h] [rbp+17h] BYREF
	__int64 v59[7]; // [rsp+98h] [rbp+1Fh] BYREF
	_DWORD* v60; // [rsp+E0h] [rbp+67h] BYREF
	_BYTE* v61; // [rsp+E8h] [rbp+6Fh] BYREF
	_DWORD* v62; // [rsp+F0h] [rbp+77h] BYREF
	_DWORD* v63; // [rsp+F8h] [rbp+7Fh] BYREF

	v61 = dword_140DDCDD0;
	v60 = dword_140DDCDD0;
	v62 = dword_140DDCDD0;
	while (1)
	{
		v5 = (*(__int64(SubwooferGen1::**)(__int64))(*(_QWORD*)a2 + 8i64))(a2);
		if (v5 >= 0)
			v5 -= (*(__int64(SubwooferGen1::**)(__int64))(*(_QWORD*)a2 + 168i64))(a2);
		if (v5 <= 0)
			break;
		sub_14020FC70(v4, a2, &v61, &v60, v44, v45, v46, v47, v48, v49, v50, v51, v52, v53, v54, v55, v56, v57);
		v6 = v61;
		if ((unsigned int)String::isNotEmpty(v61, "[Model]"))
		{
			if ((unsigned int)String::isNotEmpty(v6, "[Time_of_Flight_s]"))
			{
				if ((unsigned int)String::isNotEmpty(v6, "[Level_dB]"))
				{
					if ((unsigned int)String::isNotEmpty(v6, "[Shelf_Offset_dB]"))
					{
						if ((unsigned int)String::isNotEmpty(v6, "[Bass_Roll_Off]"))
						{
							if ((unsigned int)String::isNotEmpty(v6, "[Notch_1_Frequency_Hz]"))
							{
								if ((unsigned int)String::isNotEmpty(v6, "[Notch_1_Gain_dB]"))
								{
									if ((unsigned int)String::isNotEmpty(v6, "[Notch_1_Q]"))
									{
										if ((unsigned int)String::isNotEmpty(v6, "[Notch_2_Frequency_Hz]"))
										{
											if ((unsigned int)String::isNotEmpty(v6, "[Notch_2_Gain_dB]"))
											{
												if ((unsigned int)String::isNotEmpty(v6, "[Notch_2_Q]"))
												{
													if ((unsigned int)String::isNotEmpty(v6, "[Notch_3_Frequency_Hz]"))
													{
														if ((unsigned int)String::isNotEmpty(v6, "[Notch_3_Gain_dB]"))
														{
															if ((unsigned int)String::isNotEmpty(v6, "[Notch_3_Q]"))
															{
																if ((unsigned int)String::isNotEmpty(v6, "[Notch_4_Frequency_Hz]"))
																{
																	if ((unsigned int)String::isNotEmpty(v6, "[Notch_4_Gain_dB]"))
																	{
																		if (!(unsigned int)String::isNotEmpty(v6, "[Notch_4_Q]"))
																		{
																			v57 = v60;
																			v34 = (unsigned int)*(v60 - 4);
																			if ((v34 & 0x30000000) == 0)
																				_InterlockedIncrement(v60 - 4);
																			v35 = sub_14020F700(v34, &v57);
																			*(float*)(a1 + 372) = v35;
																		}
																	}
																	else
																	{
																		v56 = v60;
																		v32 = (unsigned int)*(v60 - 4);
																		if ((v32 & 0x30000000) == 0)
																			_InterlockedIncrement(v60 - 4);
																		v33 = sub_14020F700(v32, &v56);
																		*(float*)(a1 + 356) = v33;
																	}
																}
																else
																{
																	v55 = v60;
																	v30 = (unsigned int)*(v60 - 4);
																	if ((v30 & 0x30000000) == 0)
																		_InterlockedIncrement(v60 - 4);
																	v31 = sub_14020F700(v30, &v55);
																	*(float*)(a1 + 340) = v31;
																}
															}
															else
															{
																v54 = v60;
																v28 = (unsigned int)*(v60 - 4);
																if ((v28 & 0x30000000) == 0)
																	_InterlockedIncrement(v60 - 4);
																v29 = sub_14020F700(v28, &v54);
																*(float*)(a1 + 368) = v29;
															}
														}
														else
														{
															v53 = v60;
															v26 = (unsigned int)*(v60 - 4);
															if ((v26 & 0x30000000) == 0)
																_InterlockedIncrement(v60 - 4);
															v27 = sub_14020F700(v26, &v53);
															*(float*)(a1 + 352) = v27;
														}
													}
													else
													{
														v52 = v60;
														v24 = (unsigned int)*(v60 - 4);
														if ((v24 & 0x30000000) == 0)
															_InterlockedIncrement(v60 - 4);
														v25 = sub_14020F700(v24, &v52);
														*(float*)(a1 + 336) = v25;
													}
												}
												else
												{
													v51 = v60;
													v22 = (unsigned int)*(v60 - 4);
													if ((v22 & 0x30000000) == 0)
														_InterlockedIncrement(v60 - 4);
													v23 = sub_14020F700(v22, &v51);
													*(float*)(a1 + 364) = v23;
												}
											}
											else
											{
												v50 = v60;
												v20 = (unsigned int)*(v60 - 4);
												if ((v20 & 0x30000000) == 0)
													_InterlockedIncrement(v60 - 4);
												v21 = sub_14020F700(v20, &v50);
												*(float*)(a1 + 348) = v21;
											}
										}
										else
										{
											v49 = v60;
											v18 = (unsigned int)*(v60 - 4);
											if ((v18 & 0x30000000) == 0)
												_InterlockedIncrement(v60 - 4);
											v19 = sub_14020F700(v18, &v49);
											*(float*)(a1 + 332) = v19;
										}
									}
									else
									{
										v48 = v60;
										v16 = (unsigned int)*(v60 - 4);
										if ((v16 & 0x30000000) == 0)
											_InterlockedIncrement(v60 - 4);
										v17 = sub_14020F700(v16, &v48);
										*(float*)(a1 + 360) = v17;
									}
								}
								else
								{
									v47 = v60;
									v14 = (unsigned int)*(v60 - 4);
									if ((v14 & 0x30000000) == 0)
										_InterlockedIncrement(v60 - 4);
									v15 = sub_14020F700(v14, &v47);
									*(float*)(a1 + 344) = v15;
								}
							}
							else
							{
								v46 = v60;
								v12 = (unsigned int)*(v60 - 4);
								if ((v12 & 0x30000000) == 0)
									_InterlockedIncrement(v60 - 4);
								v13 = sub_14020F700(v12, &v46);
								*(float*)(a1 + 328) = v13;
							}
						}
						else
						{
							v45 = v60;
							v11 = (unsigned int)*(v60 - 4);
							if ((v11 & 0x30000000) == 0)
								_InterlockedIncrement(v60 - 4);
							*(_DWORD*)(a1 + 296) = (int)sub_14020F700(v11, &v45);
						}
					}
					else
					{
						v44 = v60;
						v9 = (unsigned int)*(v60 - 4);
						if ((v9 & 0x30000000) == 0)
							_InterlockedIncrement(v60 - 4);
						v10 = sub_14020F700(v9, &v44);
						*(double*)(a1 + 112) = *(double*)(a1 + 112) - v10;
					}
				}
				else
				{
					v63 = v60;
					v8 = (unsigned int)*(v60 - 4);
					if ((v8 & 0x30000000) == 0)
						_InterlockedIncrement(v60 - 4);
					*(double*)(a1 + 112) = sub_14020F700(v8, &v63);
				}
			}
			else
			{
				*(_QWORD*)(a1 + 128) = 0i64;
			}
		}
		else
		{
			if ((*(v60 - 4) & 0x30000000) == 0)
				_InterlockedIncrement(v60 - 4);
			v7 = (_DWORD*)(_InterlockedExchange64((volatile __int64*)&v62, (__int64)v60) - 16);
			if ((*v7 & 0x30000000) == 0 && _InterlockedDecrement(v7) == -1)
				j_j_free(v7);
		}
		sub_140048D00(&v58, &unk_14046DFBE);
		v36 = v60;
		v60 = v58;
		v58 = v36;
		v37 = v36 - 4;
		if ((*(v36 - 4) & 0x30000000) == 0 && _InterlockedDecrement(v37) == -1)
			j_j_free(v37);
		sub_140048D00(v59, &unk_14046DFAF);
		v38 = v61;
		v61 = (_BYTE*)v59[0];
		v59[0] = (__int64)v38;
		v39 = v38 - 16;
		if ((*((_DWORD*)v38 - 4) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed _DWORD*)v39) == -1)
			j_j_free(v39);
	}
	*(_DWORD*)(a1 + 108) = 1;
	v40 = v62 - 4;
	if ((*(v62 - 4) & 0x30000000) == 0 && _InterlockedDecrement(v40) == -1)
		j_j_free(v40);
	v41 = v60 - 4;
	if ((*(v60 - 4) & 0x30000000) == 0 && _InterlockedDecrement(v41) == -1)
		j_j_free(v41);
	v42 = v61 - 16;
	if ((*((_DWORD*)v61 - 4) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v42) == -1)
		j_j_free(v42);
	return 0i64;*/
}
__int64 SubwooferGen1::sub_14022FF80()
{
	return 0i64;
}
__int64 SubwooferGen1::sub_14022F690(__int64 a1, _QWORD* a2)
{
	return 1;
	/*__int64 v4; // rbx
	__int64 v5; // rax
	__int64 v6; // r15
	__int64 v7; // rax
	__int64(SubwooferGen1::* ***v8)(); // rax
	__int64(SubwooferGen1::* ***v9)(); // rbx
	void* v10; // rcx
	__int64 v11; // rcx
	__int64 v12; // rbx
	__int64 v13; // rax
	__int64 v14; // rax
	__int64(SubwooferGen1::* ***v15)(); // rax
	__int64(SubwooferGen1::* ***v16)(); // rbx
	void* v17; // rcx
	__int64 v18; // rcx
	__int64 v19; // rbx
	__int64 v20; // rax
	__int64 v21; // rax
	__int64(SubwooferGen1::* ***v22)(); // rax
	__int64* v23; // rbx
	void* v24; // rcx
	__int64 v25; // rbx
	__int64 v26; // rax
	__int64 v27; // rax
	__int64(SubwooferGen1::* ***v28)(); // rax
	__int64* v29; // rbx
	void* v30; // rcx
	int v31; // er14
	float* i; // rsi
	__int64 v33; // rax
	__int64* v34; // rax
	__int64 v35; // rdx
	__int64 v36; // rbx
	__int64 v37; // rax
	__int64 v38; // rax
	__int64(SubwooferGen1::* ***v39)(); // rbx
	void* v40; // rcx
	_BYTE* v41; // rbx
	int v42; // edi
	_BYTE* v43; // rcx
	__int64 v44; // rbx
	__int64 v45; // rax
	__int64 v46; // rax
	__int64(SubwooferGen1::* ***v47)(); // rax
	__int64(SubwooferGen1::* ***v48)(); // rbx
	void* v49; // rcx
	__int64 v50; // rcx
	float v51; // xmm1_4
	__int64 v52; // rbx
	__int64 v53; // rax
	__int64 v54; // rax
	__int64(SubwooferGen1::* ***v55)(); // rax
	__int64(SubwooferGen1::* ***v56)(); // rbx
	void* v57; // rcx
	__int64 v58; // rcx
	float v59; // xmm1_4
	__int64 v60; // rbx
	__int64 v61; // rax
	__int64 v62; // rax
	__int64(SubwooferGen1::* ***v63)(); // rax
	__int64(SubwooferGen1::* ***v64)(); // rbx
	void* v65; // rcx
	__int64 v66; // rcx
	float v67; // xmm1_4
	const char* v69; // [rsp+30h] [rbp-D0h] BYREF
	__int64 v70; // [rsp+38h] [rbp-C8h] BYREF
	__int64 v71; // [rsp+40h] [rbp-C0h] BYREF
	__int64 v72; // [rsp+48h] [rbp-B8h] BYREF
	__int64 v73; // [rsp+50h] [rbp-B0h] BYREF
	__int64 v74; // [rsp+58h] [rbp-A8h] BYREF
	__int64 v75; // [rsp+60h] [rbp-A0h] BYREF
	__int64 v76; // [rsp+68h] [rbp-98h] BYREF
	__int64 v77; // [rsp+70h] [rbp-90h] BYREF
	const char* v78; // [rsp+78h] [rbp-88h] BYREF
	const char* v79; // [rsp+80h] [rbp-80h] BYREF
	const char* v80; // [rsp+88h] [rbp-78h] BYREF
	char v81[8]; // [rsp+90h] [rbp-70h] BYREF
	char v82[8]; // [rsp+98h] [rbp-68h] BYREF
	char v83[8]; // [rsp+A0h] [rbp-60h] BYREF
	char v84[8]; // [rsp+A8h] [rbp-58h] BYREF
	char v85[8]; // [rsp+B0h] [rbp-50h] BYREF
	const char* v86; // [rsp+B8h] [rbp-48h] BYREF
	const char* v87; // [rsp+C0h] [rbp-40h] BYREF
	const char* v88; // [rsp+C8h] [rbp-38h] BYREF
	_BYTE* v89; // [rsp+D0h] [rbp-30h] BYREF
	const char* v90; // [rsp+D8h] [rbp-28h] BYREF
	__int64 v91; // [rsp+E0h] [rbp-20h]
	_QWORD* v92; // [rsp+E8h] [rbp-18h]
	__int64 v93; // [rsp+F0h] [rbp-10h]
	__int64 v94; // [rsp+F8h] [rbp-8h]
	__int64 v95; // [rsp+100h] [rbp+0h]
	__int64 v96; // [rsp+108h] [rbp+8h]
	__int64 v97; // [rsp+110h] [rbp+10h]
	__int64 v98; // [rsp+118h] [rbp+18h]
	__int64 v99; // [rsp+120h] [rbp+20h]
	__int64 v100; // [rsp+128h] [rbp+28h]
	_QWORD* v101; // [rsp+130h] [rbp+30h]
	__int64 v102; // [rsp+138h] [rbp+38h]
	char v103[8]; // [rsp+140h] [rbp+40h] BYREF
	__int64 v104; // [rsp+148h] [rbp+48h]
	char v105[8]; // [rsp+150h] [rbp+50h] BYREF
	__int64 v106; // [rsp+158h] [rbp+58h]
	char v107[8]; // [rsp+160h] [rbp+60h] BYREF

	v92 = a2;
	v91 = a1;
	v101 = a2;
	v4 = sub_1402F7E90();
	v93 = v4 + 16;
	EnterCriticalSection((LPCRITICAL_SECTION)(v4 + 16));
	sub_1402F8020(v4);
	v90 = "delayrel";
	sub_1402DDCD0(&v70, v4, &v90);
	LeaveCriticalSection((LPCRITICAL_SECTION)(v4 + 16));
	v5 = (*(__int64(SubwooferGen1::**)(_QWORD, _QWORD*))(*(_QWORD*)*a2 + 48i64))(*a2, a2 + 1);
	v6 = 0i64;
	v7 = _RTDynamicCast(
		v5,
		0i64,
		&juce::ReferenceCountedObject `RTTI Type Descriptor',
		& juce::DynamicObject `RTTI Type Descriptor',
		0);
	if (v7)
		v8 = (__int64(SubwooferGen1::****)())(*(__int64(SubwooferGen1::**)(__int64, __int64*))(*(_QWORD*)v7 + 16i64))(v7, &v70);
	else
		v8 = sub_14030AB50();
	v9 = v8;
	v10 = (void*)(v70 - 16);
	if ((*(_DWORD*)(v70 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v10) == -1)
		j_j_free(v10);
	((void(SubwooferGen1::*)(__int64(SubwooferGen1::***)(), char*, __int64(SubwooferGen1::****)()))(**v9)[4])(*v9, v81, v9 + 1);
	*(double*)(a1 + 128) = sub_14020F700(v11, v81) * 1000.0;
	v12 = sub_1402F7E90();
	v94 = v12 + 16;
	EnterCriticalSection((LPCRITICAL_SECTION)(v12 + 16));
	sub_1402F8020(v12);
	v78 = "levelcorrdb";
	sub_1402DDCD0(&v71, v12, &v78);
	LeaveCriticalSection((LPCRITICAL_SECTION)(v12 + 16));
	v13 = (*(__int64(SubwooferGen1::**)(_QWORD, _QWORD*))(*(_QWORD*)*a2 + 48i64))(*a2, a2 + 1);
	v14 = _RTDynamicCast(
		v13,
		0i64,
		&juce::ReferenceCountedObject `RTTI Type Descriptor',
		& juce::DynamicObject `RTTI Type Descriptor',
		0);
	if (v14)
		v15 = (__int64(SubwooferGen1::****)())(*(__int64(SubwooferGen1::**)(__int64, __int64*))(*(_QWORD*)v14 + 16i64))(
			v14,
			&v71);
	else
		v15 = sub_14030AB50();
	v16 = v15;
	v17 = (void*)(v71 - 16);
	if ((*(_DWORD*)(v71 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v17) == -1)
		j_j_free(v17);
	((void(SubwooferGen1::*)(__int64(SubwooferGen1::***)(), char*, __int64(SubwooferGen1::****)()))(**v16)[4])(*v16, v82, v16 + 1);
	*(double*)(a1 + 112) = sub_14020F700(v18, v82) * -1.0 - 3.0;
	v19 = sub_1402F7E90();
	v95 = v19 + 16;
	EnterCriticalSection((LPCRITICAL_SECTION)(v19 + 16));
	sub_1402F8020(v19);
	v87 = "filter";
	sub_1402DDCD0(&v72, v19, &v87);
	LeaveCriticalSection((LPCRITICAL_SECTION)(v19 + 16));
	v20 = (*(__int64(SubwooferGen1::**)(_QWORD, _QWORD*))(*(_QWORD*)*a2 + 48i64))(*a2, a2 + 1);
	v21 = _RTDynamicCast(
		v20,
		0i64,
		&juce::ReferenceCountedObject `RTTI Type Descriptor',
		& juce::DynamicObject `RTTI Type Descriptor',
		0);
	if (v21)
		v22 = (__int64(SubwooferGen1::****)())(*(__int64(SubwooferGen1::**)(__int64, __int64*))(*(_QWORD*)v21 + 16i64))(
			v21,
			&v72);
	else
		v22 = sub_14030AB50();
	v23 = (__int64*)v22;
	v24 = (void*)(v72 - 16);
	if ((*(_DWORD*)(v72 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v24) == -1)
		j_j_free(v24);
	v106 = *v23;
	(*(void(SubwooferGen1::**)(__int64, char*, __int64*))(*(_QWORD*)v106 + 184i64))(v106, v107, v23 + 1);
	v25 = sub_1402F7E90();
	v96 = v25 + 16;
	EnterCriticalSection((LPCRITICAL_SECTION)(v25 + 16));
	sub_1402F8020(v25);
	v88 = "sos";
	sub_1402DDCD0(&v73, v25, &v88);
	LeaveCriticalSection((LPCRITICAL_SECTION)(v25 + 16));
	v26 = (*(__int64(SubwooferGen1::**)(__int64, char*))(*(_QWORD*)v106 + 48i64))(v106, v107);
	v27 = _RTDynamicCast(
		v26,
		0i64,
		&juce::ReferenceCountedObject `RTTI Type Descriptor',
		& juce::DynamicObject `RTTI Type Descriptor',
		0);
	if (v27)
		v28 = (__int64(SubwooferGen1::****)())(*(__int64(SubwooferGen1::**)(__int64, __int64*))(*(_QWORD*)v27 + 16i64))(
			v27,
			&v73);
	else
		v28 = sub_14030AB50();
	v29 = (__int64*)v28;
	v30 = (void*)(v73 - 16);
	if ((*(_DWORD*)(v73 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v30) == -1)
		j_j_free(v30);
	v104 = *v29;
	(*(void(SubwooferGen1::**)(void*, char*, __int64*))(*(_QWORD*)v104 + 184i64))(v30, v105, v29 + 1);
	v31 = 0;
	for (i = (float*)(a1 + 344); ; ++i)
	{
		v33 = (*(__int64(SubwooferGen1::**)(__int64, char*))(*(_QWORD*)v104 + 56i64))(v104, v105);
		if (v33)
			LODWORD(v33) = *(_DWORD*)(v33 + 12);
		if (v31 >= (int)v33)
			break;
		v34 = (__int64*)(*(__int64(SubwooferGen1::**)(__int64, char*))(*(_QWORD*)v104 + 56i64))(v104, v105);
		v35 = *v34;
		v102 = *(_QWORD*)(v6 + *v34);
		(*(void(SubwooferGen1::**)(__int64, char*, __int64))(*(_QWORD*)v102 + 184i64))(v102, v103, v6 + v35 + 8);
		v36 = sub_1402F7E90();
		v97 = v36 + 16;
		EnterCriticalSection((LPCRITICAL_SECTION)(v36 + 16));
		sub_1402F8020(v36);
		v86 = "type";
		sub_1402DDCD0(&v74, v36, &v86);
		LeaveCriticalSection((LPCRITICAL_SECTION)(v36 + 16));
		v37 = (*(__int64(SubwooferGen1::**)(__int64, char*))(*(_QWORD*)v102 + 48i64))(v102, v103);
		v38 = _RTDynamicCast(
			v37,
			0i64,
			&juce::ReferenceCountedObject `RTTI Type Descriptor',
			& juce::DynamicObject `RTTI Type Descriptor',
			0);
		if (v38)
		{
			v39 = (__int64(SubwooferGen1::****)())(*(__int64(SubwooferGen1::**)(__int64, __int64*))(*(_QWORD*)v38 + 16i64))(
				v38,
				&v74);
		}
		else
		{
			if (dword_140EC06B4 > *(_DWORD*)(*(_QWORD*)NtCurrentTeb()->ThreadLocalStoragePointer + 4i64))
			{
				Init_thread_header(&dword_140EC06B4);
				if (dword_140EC06B4 == -1)
				{
					off_140EB1E18 = off_140EB1BC8;
					atexit(sub_14046AD80);
					Init_thread_footer(&dword_140EC06B4);
				}
			}
			v39 = &off_140EB1E18;
		}
		v40 = (void*)(v74 - 16);
		if ((*(_DWORD*)(v74 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v40) == -1)
			j_j_free(v40);
		((void(SubwooferGen1::*)(__int64(SubwooferGen1::***)(), _BYTE**, __int64(SubwooferGen1::****)()))(**v39)[4])(
			*v39,
			&v89,
			v39 + 1);
		v41 = v89;
		v42 = String::isNotEmpty(v89, "NOTCH");
		v43 = v41 - 16;
		if ((*((_DWORD*)v41 - 4) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v43) == -1)
			j_j_free(v43);
		if (!v42)
		{
			v44 = sub_1402F7E90();
			v98 = v44 + 16;
			EnterCriticalSection((LPCRITICAL_SECTION)(v44 + 16));
			sub_1402F8020(v44);
			v79 = "fc";
			sub_1402DDCD0(&v75, v44, &v79);
			LeaveCriticalSection((LPCRITICAL_SECTION)(v44 + 16));
			v45 = (*(__int64(SubwooferGen1::**)(__int64, char*))(*(_QWORD*)v102 + 48i64))(v102, v103);
			v46 = _RTDynamicCast(
				v45,
				0i64,
				&juce::ReferenceCountedObject `RTTI Type Descriptor',
				& juce::DynamicObject `RTTI Type Descriptor',
				0);
			if (v46)
				v47 = (__int64(SubwooferGen1::****)())(*(__int64(SubwooferGen1::**)(__int64, __int64*))(*(_QWORD*)v46 + 16i64))(
					v46,
					&v75);
			else
				v47 = sub_14030AB50();
			v48 = v47;
			v49 = (void*)(v75 - 16);
			if ((*(_DWORD*)(v75 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v49) == -1)
				j_j_free(v49);
			((void(SubwooferGen1::*)(__int64(SubwooferGen1::***)(), char*, __int64(SubwooferGen1::****)()))(**v48)[4])(
				*v48,
				v83,
				v48 + 1);
			v51 = sub_14020F700(v50, v83);
			*(i - 4) = v51;
			v52 = sub_1402F7E90();
			v99 = v52 + 16;
			EnterCriticalSection((LPCRITICAL_SECTION)(v52 + 16));
			sub_1402F8020(v52);
			v80 = "g";
			sub_1402DDCD0(&v76, v52, &v80);
			LeaveCriticalSection((LPCRITICAL_SECTION)(v52 + 16));
			v53 = (*(__int64(SubwooferGen1::**)(__int64, char*))(*(_QWORD*)v102 + 48i64))(v102, v103);
			v54 = _RTDynamicCast(
				v53,
				0i64,
				&juce::ReferenceCountedObject `RTTI Type Descriptor',
				& juce::DynamicObject `RTTI Type Descriptor',
				0);
			if (v54)
				v55 = (__int64(SubwooferGen1::****)())(*(__int64(SubwooferGen1::**)(__int64, __int64*))(*(_QWORD*)v54 + 16i64))(
					v54,
					&v76);
			else
				v55 = sub_14030AB50();
			v56 = v55;
			v57 = (void*)(v76 - 16);
			if ((*(_DWORD*)(v76 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v57) == -1)
				j_j_free(v57);
			((void(SubwooferGen1::*)(__int64(SubwooferGen1::***)(), char*, __int64(SubwooferGen1::****)()))(**v56)[4])(
				*v56,
				v84,
				v56 + 1);
			v59 = sub_14020F700(v58, v84);
			*i = v59;
			v60 = sub_1402F7E90();
			v100 = v60 + 16;
			EnterCriticalSection((LPCRITICAL_SECTION)(v60 + 16));
			sub_1402F8020(v60);
			v69 = "q";
			sub_1402DDCD0(&v77, v60, &v69);
			LeaveCriticalSection((LPCRITICAL_SECTION)(v60 + 16));
			v61 = (*(__int64(SubwooferGen1::**)(__int64, char*))(*(_QWORD*)v102 + 48i64))(v102, v103);
			v62 = _RTDynamicCast(
				v61,
				0i64,
				&juce::ReferenceCountedObject `RTTI Type Descriptor',
				& juce::DynamicObject `RTTI Type Descriptor',
				0);
			if (v62)
				v63 = (__int64(SubwooferGen1::****)())(*(__int64(SubwooferGen1::**)(__int64, __int64*))(*(_QWORD*)v62 + 16i64))(
					v62,
					&v77);
			else
				v63 = sub_14030AB50();
			v64 = v63;
			v65 = (void*)(v77 - 16);
			if ((*(_DWORD*)(v77 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v65) == -1)
				j_j_free(v65);
			((void(SubwooferGen1::*)(__int64(SubwooferGen1::***)(), char*, __int64(SubwooferGen1::****)()))(**v64)[4])(
				*v64,
				v85,
				v64 + 1);
			v67 = sub_14020F700(v66, v85);
			i[4] = v67;
		}
		(*(void(SubwooferGen1::**)(__int64, char*))(*(_QWORD*)v102 + 176i64))(v102, v103);
		++v31;
		v6 += 16i64;
	}
	*(_DWORD*)(v91 + 108) = 3;
	(*(void(SubwooferGen1::**)(__int64, char*))(*(_QWORD*)v104 + 176i64))(v104, v105);
	(*(void(SubwooferGen1::**)(__int64, char*))(*(_QWORD*)v106 + 176i64))(v106, v107);
	(*(void(SubwooferGen1::**)(_QWORD, _QWORD*))(*(_QWORD*)*v92 + 176i64))(*v92, v92 + 1);
	return 0i64;*/
}
char SubwooferGen1::sub_14022F680(__int64 a1, _QWORD* a2)
{
	//*a2 = 0i64;
	return 1;
}
char SubwooferGen1::sub_14022F580(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
	return 1;
	/*__int64 v5; // rdx
	__int64 v6; // r8
	__int64 v7; // rdx
	char v8; // cl
	__int64 v9; // rax
	_DWORD* v10; // rax
	__int64 v11; // rdx
	__int64 v12; // r9
	__int64 v13; // r8
	char v14; // dl
	char result; // al

	if (!(unsigned __int8)sub_140210740(a1, a2, a3, a4))
		goto LABEL_4;
	LOBYTE(v6) = 1;
	(*(void(SubwooferGen1::**)(__int64, __int64, __int64))(*(_QWORD*)a1 + 152i64))(a1, v5, v6);
	Sleep(0x32u);
	sub_140007A80(*(_QWORD*)(a1 + 56));
	LOBYTE(v7) = 23;
	v8 = *(_BYTE*)(a1 + 72);
	v9 = **(_QWORD**)(a1 + 56);
	++* (_DWORD*)(v9 + 20);
	**(_BYTE**)v9 = v8;
	v10 = **(_DWORD***)(a1 + 56);
	++v10[5];
	*(_BYTE*)(*(_QWORD*)v10 + 1i64) = 21;
	sub_140007AF0(**(_QWORD**)(a1 + 56), v7);
	LOBYTE(v11) = 2;
	sub_140007AF0(**(_QWORD**)(a1 + 56), v11);
	*(_DWORD*)(**(_QWORD**)(a1 + 56) + 12i64) = 7;
	sub_140212F70(*(_QWORD*)(a1 + 64), *(_QWORD*)(a1 + 56));
	Sleep(0xC8u);
	*(_DWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 56) + 8i64) + 20i64) = 1;
	v12 = *(_QWORD*)(*(_QWORD*)(a1 + 56) + 8i64);
	v13 = *(int*)(v12 + 20);
	v14 = *(_BYTE*)(v13 + *(_QWORD*)v12);
	*(_DWORD*)(v12 + 20) = v13 + 1;
	if (v14 == 9)
		result = 1;
	else
		LABEL_4:
	result = 0;
	return result;*/
}
char SubwooferGen1::sub_14022F4A0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
	return 1;
	/*__int64 v5; // rdx
	char v6; // cl
	__int64 v7; // rax
	_DWORD* v8; // rax
	__int64 v9; // rdx
	__int64 v10; // r9
	__int64 v11; // r8
	char v12; // dl
	char result; // al

	if (!(unsigned __int8)sub_140210740(a1, a2, a3, a4))
		goto LABEL_4;
	Sleep(0x32u);
	sub_140212D40(*(_QWORD*)(a1 + 64));
	sub_140007A80(*(_QWORD*)(a1 + 56));
	LOBYTE(v5) = 23;
	v6 = *(_BYTE*)(a1 + 72);
	v7 = **(_QWORD**)(a1 + 56);
	++* (_DWORD*)(v7 + 20);
	**(_BYTE**)v7 = v6;
	v8 = **(_DWORD***)(a1 + 56);
	++v8[5];
	*(_BYTE*)(*(_QWORD*)v8 + 1i64) = 21;
	sub_140007AF0(**(_QWORD**)(a1 + 56), v5);
	LOBYTE(v9) = 2;
	sub_140007AF0(**(_QWORD**)(a1 + 56), v9);
	*(_DWORD*)(**(_QWORD**)(a1 + 56) + 12i64) = 7;
	sub_140212F70(*(_QWORD*)(a1 + 64), *(_QWORD*)(a1 + 56));
	Sleep(0xC8u);
	*(_DWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 56) + 8i64) + 20i64) = 1;
	v10 = *(_QWORD*)(*(_QWORD*)(a1 + 56) + 8i64);
	v11 = *(int*)(v10 + 20);
	v12 = *(_BYTE*)(v11 + *(_QWORD*)v10);
	*(_DWORD*)(v10 + 20) = v11 + 1;
	if (v12 == 9)
		result = 1;
	else
		LABEL_4:
	result = 0;
	return result;*/
}
char SubwooferGen1::sub_14022F260(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
	return 1;
	/*__int64 v5; // rdx
	char v6; // cl
	__int64 v7; // rax
	_DWORD* v8; // rax
	double v9; // xmm6_8
	double v10; // xmm0_8
	double v11; // xmm0_8
	double v12; // xmm0_8
	__int64 v13; // rdx
	__int64 v14; // r9
	__int64 v15; // r8
	char v16; // dl
	__int64 v17; // r8
	__int64 v18; // rdx
	char v19; // cl
	__int64 v20; // rax
	_DWORD* v21; // rax
	__int64 v22; // rdx
	__int64 v23; // r9
	__int64 v24; // r8
	char v25; // dl

	if (!(unsigned __int8)sub_140210740(a1, a2, a3, a4))
		return 0;
	(*(void(SubwooferGen1::**)(__int64, _QWORD))(*(_QWORD*)a1 + 136i64))(a1, 0i64);
	sub_140007A80(*(_QWORD*)(a1 + 56));
	LOBYTE(v5) = 35;
	v6 = *(_BYTE*)(a1 + 72);
	v7 = **(_QWORD**)(a1 + 56);
	++* (_DWORD*)(v7 + 20);
	**(_BYTE**)v7 = v6;
	v8 = **(_DWORD***)(a1 + 56);
	++v8[5];
	*(_BYTE*)(*(_QWORD*)v8 + 1i64) = 21;
	sub_140007AF0(**(_QWORD**)(a1 + 56), v5);
	v9 = (double)(int)(pow(10.0, 0.0) * 8388607.0);
	v10 = floor(v9 * 0.0000152587890625);
	sub_140007AF0(**(_QWORD**)(a1 + 56), (unsigned int)(int)v10);
	v11 = floor(v9 * 0.00390625);
	sub_140007AF0(**(_QWORD**)(a1 + 56), (unsigned int)(int)v11);
	v12 = floor(v9);
	sub_140007AF0(**(_QWORD**)(a1 + 56), (unsigned int)(int)v12);
	LOBYTE(v13) = 1;
	sub_140007AF0(**(_QWORD**)(a1 + 56), v13);
	*(_DWORD*)(**(_QWORD**)(a1 + 56) + 12i64) = 10;
	sub_140212F70(*(_QWORD*)(a1 + 64), *(_QWORD*)(a1 + 56));
	*(_DWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 56) + 8i64) + 20i64) = 1;
	v14 = *(_QWORD*)(*(_QWORD*)(a1 + 56) + 8i64);
	v15 = *(int*)(v14 + 20);
	v16 = *(_BYTE*)(v15 + *(_QWORD*)v14);
	*(_DWORD*)(v14 + 20) = v15 + 1;
	if (v16 != 9)
		return 0;
	Sleep(0x64u);
	LOBYTE(v17) = 1;
	(*(void(SubwooferGen1::**)(__int64, __int64, __int64))(*(_QWORD*)a1 + 328i64))(a1, 85i64, v17);
	Sleep(0x32u);
	sub_140007A80(*(_QWORD*)(a1 + 56));
	LOBYTE(v18) = 23;
	v19 = *(_BYTE*)(a1 + 72);
	v20 = **(_QWORD**)(a1 + 56);
	++* (_DWORD*)(v20 + 20);
	**(_BYTE**)v20 = v19;
	v21 = **(_DWORD***)(a1 + 56);
	++v21[5];
	*(_BYTE*)(*(_QWORD*)v21 + 1i64) = 21;
	sub_140007AF0(**(_QWORD**)(a1 + 56), v18);
	LOBYTE(v22) = 2;
	sub_140007AF0(**(_QWORD**)(a1 + 56), v22);
	*(_DWORD*)(**(_QWORD**)(a1 + 56) + 12i64) = 7;
	sub_140212F70(*(_QWORD*)(a1 + 64), *(_QWORD*)(a1 + 56));
	Sleep(0xC8u);
	*(_DWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 56) + 8i64) + 20i64) = 1;
	v23 = *(_QWORD*)(*(_QWORD*)(a1 + 56) + 8i64);
	v24 = *(int*)(v23 + 20);
	v25 = *(_BYTE*)(v24 + *(_QWORD*)v23);
	*(_DWORD*)(v23 + 20) = v24 + 1;
	if (v25 != 9)
		return 0;
	LOBYTE(v24) = 1;
	(*(void(SubwooferGen1::**)(__int64, _QWORD, __int64))(*(_QWORD*)a1 + 328i64))(a1, *(unsigned int*)(a1 + 288), v24);
	return 1;*/
}
char SubwooferGen1::sub_14022EF20(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
	return 1;
	/*__int64 v5; // rdx
	char v6; // cl
	__int64 v7; // rax
	_DWORD* v8; // rax
	__int64 v9; // rdx
	__int64 v10; // r9
	__int64 v11; // r8
	char v12; // dl
	char result; // al

	if (!(unsigned __int8)sub_140210740(a1, a2, a3, a4))
		goto LABEL_4;
	sub_140230BA0(a1);
	sub_140007A80(*(_QWORD*)(a1 + 56));
	LOBYTE(v5) = 49;
	v6 = *(_BYTE*)(a1 + 72);
	v7 = **(_QWORD**)(a1 + 56);
	++* (_DWORD*)(v7 + 20);
	**(_BYTE**)v7 = v6;
	v8 = **(_DWORD***)(a1 + 56);
	++v8[5];
	*(_BYTE*)(*(_QWORD*)v8 + 1i64) = 21;
	sub_140007AF0(**(_QWORD**)(a1 + 56), v5);
	LOBYTE(v9) = 1;
	sub_140007AF0(**(_QWORD**)(a1 + 56), v9);
	*(_DWORD*)(**(_QWORD**)(a1 + 56) + 12i64) = 7;
	sub_140212F70(*(_QWORD*)(a1 + 64), *(_QWORD*)(a1 + 56));
	*(_DWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 56) + 8i64) + 20i64) = 1;
	v10 = *(_QWORD*)(*(_QWORD*)(a1 + 56) + 8i64);
	v11 = *(int*)(v10 + 20);
	v12 = *(_BYTE*)(v11 + *(_QWORD*)v10);
	*(_DWORD*)(v10 + 20) = v11 + 1;
	if (v12 == 9)
		result = 1;
	else
		LABEL_4:
	result = 0;
	return result;*/
}
char SubwooferGen1::sub_14022F250()
{
	return 0;
}
char SubwooferGen1::sub_14022F240()
{
	return 0;
}
char SubwooferGen1::sub_14022F230()
{
	return 0;
}
char SubwooferGen1::sub_14022F220()
{
	return 0;
}
char SubwooferGen1::sub_140210730()
{
	return 0;
}
char SubwooferGen1::sub_140210720()
{
	return 0;
}
char SubwooferGen1::sub_14022F0A0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
	/*double v4; // xmm1_8
	__int64 v6; // rdx
	__int64 v7; // rax
	_DWORD* v8; // rax
	float v9; // xmm0_4
	double v10; // xmm6_8
	double v11; // xmm0_8
	double v12; // xmm0_8
	double v13; // xmm0_8
	__int64 v14; // rdx
	__int64 v15; // r9
	__int64 v16; // r8
	char v17; // dl

	if (!(unsigned __int8)sub_140210740(a1, a2, a3, a4))
		return 0;
	sub_140007A80(*(_QWORD*)(a1 + 56));
	v6 = *(unsigned __int8*)(a1 + 72);
	v7 = **(_QWORD**)(a1 + 56);
	++* (_DWORD*)(v7 + 20);
	**(_BYTE**)v7 = v6;
	LOBYTE(v6) = 35;
	v8 = **(_DWORD***)(a1 + 56);
	++v8[5];
	*(_BYTE*)(*(_QWORD*)v8 + 1i64) = 21;
	sub_140007AF0(**(_QWORD**)(a1 + 56), v6);
	v9 = v4;
	v10 = (double)(int)(pow(10.0, fminf(0.0, v9) / 20.0) * 8388607.0);
	v11 = floor(v10 * 0.0000152587890625);
	sub_140007AF0(**(_QWORD**)(a1 + 56), (unsigned int)(int)v11);
	v12 = floor(v10 * 0.00390625);
	sub_140007AF0(**(_QWORD**)(a1 + 56), (unsigned int)(int)v12);
	v13 = floor(v10);
	sub_140007AF0(**(_QWORD**)(a1 + 56), (unsigned int)(int)v13);
	LOBYTE(v14) = 1;
	sub_140007AF0(**(_QWORD**)(a1 + 56), v14);
	*(_DWORD*)(**(_QWORD**)(a1 + 56) + 12i64) = 10;
	sub_140212F70(*(_QWORD*)(a1 + 64), *(_QWORD*)(a1 + 56));
	*(_DWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 56) + 8i64) + 20i64) = 1;
	v15 = *(_QWORD*)(*(_QWORD*)(a1 + 56) + 8i64);
	v16 = *(int*)(v15 + 20);
	v17 = *(_BYTE*)(v16 + *(_QWORD*)v15);
	*(_DWORD*)(v15 + 20) = v16 + 1;
	if (v17 != 9)
		return 0;
	Sleep(0x64u);*/
	return 1;
}
char SubwooferGen1::sub_14022EF10()
{
	return 0;
}
char SubwooferGen1::sub_14022EF00()
{
	return 0;
}
char SubwooferGen1::sub_140230A40(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{/*
	*(_BYTE*)(a1 + 324) = a2;
	sub_140210740(a1, a2, a3, a4);*/
	return 1;
}
char SubwooferGen1::sub_140230A20(__int64 a1, _BYTE* a2)
{
	*a2 = *(_BYTE*)(a1 + 324);
	return 1;
}
__int64 SubwooferGen1::sub_1402106E0()
{
	return 0i64;
}
char SubwooferGen1::sub_1402106D0()
{
	return 0;
}
char SubwooferGen1::sub_1402106C0()
{
	return 0;
}
char SubwooferGen1::sub_14022EEF0()
{
	return 0;
}
char SubwooferGen1::sub_1402106B0()
{
	return 0;
}
char SubwooferGen1::sub_1402106A0()
{
	return 0;
}
_QWORD* SubwooferGen1::sub_14022ED30(__int64 a1, _QWORD* a2)
{
	/*__int64 v3; // rdi
	__int64 v4; // rsi
	__int64 v5; // rax
	void* v6; // rcx
	__int64 v7; // rcx
	void* v8; // rcx
	void* v9; // rcx
	__int64 v11[3]; // [rsp+28h] [rbp-B0h] BYREF
	int v12; // [rsp+40h] [rbp-98h] BYREF
	__int64 v13; // [rsp+48h] [rbp-90h]
	__int64 v14; // [rsp+50h] [rbp-88h]
	double v15; // [rsp+58h] [rbp-80h]
	double v16; // [rsp+60h] [rbp-78h]
	double v17; // [rsp+68h] [rbp-70h]
	double v18; // [rsp+A0h] [rbp-38h]

	v11[1] = (__int64)a2;
	*a2 = 0i64;
	a2[1] = 0i64;
	a2[2] = 0i64;
	v3 = a1 + 344;
	v4 = 4i64;
	do
	{
		sub_1402021B0(&v12);
		sub_140048D00(v11, "NOTCH");
		v5 = v14;
		v14 = v11[0];
		v11[0] = v5;
		v6 = (void*)(v5 - 16);
		if ((*(_DWORD*)(v5 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v6) == -1)
			j_j_free(v6);
		v12 = -1227133513 * ((__int64)(a2[1] - *a2) >> 4);
		v15 = *(float*)(v3 - 16);
		v16 = *(float*)v3;
		v17 = *(float*)(v3 + 16);
		v18 = (double)*(int*)(v3 + 32);
		sub_1402019D0(&v12);
		v7 = a2[1];
		if (v7 == a2[2])
		{
			sub_1400080A0(a2, a2[1], &v12);
		}
		else
		{
			sub_140001DA0(v7, &v12);
			a2[1] += 112i64;
		}
		v8 = (void*)(v14 - 16);
		if ((*(_DWORD*)(v14 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v8) == -1)
			j_j_free(v8);
		v9 = (void*)(v13 - 16);
		if ((*(_DWORD*)(v13 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v9) == -1)
			j_j_free(v9);
		v3 += 4i64;
		--v4;
	} while (v4);*/
	return a2;
}