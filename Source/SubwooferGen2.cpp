#include "SubwooferGen2.h"

char SubwooferGen2::sub_140238A60(_QWORD* a1, __int64 a2)
{
	return 1;
	/*void(__fastcall * v4)(_QWORD*, __int64, __int64*, __int64*, __int64*); // rbx
	__int64 v5; // rcx
	void(__fastcall * v6)(_QWORD*, __int64, __int64*, __int64*, __int64*); // rbx
	void(__fastcall * v7)(_QWORD*, __int64, _QWORD*, char*, char*); // rbx
	__int64 v8; // rax
	void(__fastcall * v9)(_QWORD*, __int64, __int64*, char*, char*); // rbx
	__int64 v10; // rax
	void(__fastcall * v11)(_QWORD*, __int64, __int64*, char*, char*); // rbx
	__int64 v12; // rdx
	void(__fastcall * v13)(_QWORD*, __int64, __int64*, char*, char*); // rbx
	__int64 v14; // rdx
	void(__fastcall * v15)(_QWORD*, __int64, __int64*, char*, char*); // rbx
	__int64 v16; // rax
	void(__fastcall * v17)(_QWORD*, __int64, __int64*, char*, char*); // rbx
	__int64 v18; // rdx
	void(__fastcall * v19)(_QWORD*, __int64, __int64*, char*, char*); // rbx
	__int64 v20; // rdx
	void(__fastcall * v21)(_QWORD*, __int64, __int64*, char*, char*); // rbx
	__int64 v22; // rdx
	void(__fastcall * v23)(_QWORD*, __int64, __int64*, char*, char*); // rbx
	__int64 v24; // rax
	void(__fastcall * v25)(_QWORD*, __int64, __int64*, char*, char*); // rbx
	__int64 v26; // rax
	void(__fastcall * v27)(_QWORD*, __int64, __int64*, char*, char*); // rbx
	__int64 v28; // rax
	void(__fastcall * v29)(_QWORD*, __int64, __int64*, char*, char*); // rbx
	__int64 v30; // rax
	void(__fastcall * v31)(_QWORD*, __int64, __int64*, char*, char*); // rbx
	__int64 v32; // rax
	void(__fastcall * v33)(_QWORD*, __int64, __int64*, __int64*, __int64*); // rbx
	__int64 v34; // rcx
	void(__fastcall * v35)(_QWORD*, __int64, __int64*, char*, char*, __int64); // rbx
	__int64 v36; // rax
	void(__fastcall * v37)(_QWORD*, __int64, __int64*, char*, char*); // rbx
	__int64 v38; // rax
	void(__fastcall * v39)(_QWORD*, __int64, __int64*, char*, char*); // rbx
	__int64 v40; // rax
	void(__fastcall * v41)(_QWORD*, __int64, __int64*, char*, char*); // rbx
	__int64 v42; // rax
	void(__fastcall * v43)(_QWORD*, __int64, __int64*, char*, char*); // rbx
	__int64 v44; // rax
	int v45; // er15
	_QWORD* v46; // r14
	__int64 v47; // r12
	void(__fastcall * v48)(_QWORD*, __int64, __int64*, char*, char*); // rbx
	__int64 v49; // rax
	void(__fastcall * v50)(_QWORD*, __int64, __int64*, char*, char*); // rbx
	__int64 v51; // rdx
	void(__fastcall * v52)(_QWORD*, __int64, __int64*, char*, char*); // rbx
	__int64 v53; // rdx
	void(__fastcall * v54)(_QWORD*, __int64, __int64*, char*, char*); // rbx
	__int64 v55; // rdx
	void(__fastcall * v56)(_QWORD*, __int64, __int64*, char*, char*); // rbx
	__int64 v57; // rax
	void(__fastcall * v58)(_QWORD*, __int64, __int64*, __int64*, __int64*); // rbx
	void(__fastcall * v59)(_QWORD*, __int64, __int64*, __int64*, __int64*); // rbx
	__int64 v61; // [rsp+28h] [rbp-D8h] BYREF
	__int64 v62; // [rsp+30h] [rbp-D0h] BYREF
	__int64 v63; // [rsp+38h] [rbp-C8h] BYREF
	__int64 v64; // [rsp+40h] [rbp-C0h] BYREF
	__int64 v65; // [rsp+48h] [rbp-B8h] BYREF
	__int64 v66; // [rsp+50h] [rbp-B0h] BYREF
	__int64 v67; // [rsp+58h] [rbp-A8h] BYREF
	__int64 v68; // [rsp+60h] [rbp-A0h] BYREF
	__int64 v69; // [rsp+68h] [rbp-98h] BYREF
	__int64 v70; // [rsp+70h] [rbp-90h] BYREF
	char v71[8]; // [rsp+78h] [rbp-88h] BYREF
	__int64 v72; // [rsp+80h] [rbp-80h] BYREF
	char v73[8]; // [rsp+88h] [rbp-78h] BYREF
	__int64 v74; // [rsp+90h] [rbp-70h] BYREF
	char v75[8]; // [rsp+98h] [rbp-68h] BYREF
	__int64 v76; // [rsp+A0h] [rbp-60h] BYREF
	char v77[8]; // [rsp+A8h] [rbp-58h] BYREF
	__int64 v78; // [rsp+B0h] [rbp-50h] BYREF
	char v79[8]; // [rsp+B8h] [rbp-48h] BYREF
	__int64 v80; // [rsp+C0h] [rbp-40h] BYREF
	char v81[8]; // [rsp+C8h] [rbp-38h] BYREF
	__int64 v82; // [rsp+D0h] [rbp-30h] BYREF
	char v83[8]; // [rsp+D8h] [rbp-28h] BYREF
	__int64 v84; // [rsp+E0h] [rbp-20h] BYREF
	char v85[8]; // [rsp+E8h] [rbp-18h] BYREF
	__int64 v86; // [rsp+F0h] [rbp-10h] BYREF
	char v87[8]; // [rsp+F8h] [rbp-8h] BYREF
	__int64 v88; // [rsp+100h] [rbp+0h] BYREF
	char v89[8]; // [rsp+108h] [rbp+8h] BYREF
	__int64 v90; // [rsp+110h] [rbp+10h] BYREF
	char v91[8]; // [rsp+118h] [rbp+18h] BYREF
	char v92[8]; // [rsp+120h] [rbp+20h] BYREF
	char v93[8]; // [rsp+128h] [rbp+28h] BYREF
	char v94[8]; // [rsp+130h] [rbp+30h] BYREF
	__int64 v95; // [rsp+138h] [rbp+38h] BYREF
	char v96[8]; // [rsp+140h] [rbp+40h] BYREF
	__int64 v97; // [rsp+148h] [rbp+48h] BYREF
	char v98[8]; // [rsp+150h] [rbp+50h] BYREF
	__int64 v99; // [rsp+158h] [rbp+58h] BYREF
	char v100[8]; // [rsp+160h] [rbp+60h] BYREF
	__int64 v101; // [rsp+168h] [rbp+68h] BYREF
	char v102[8]; // [rsp+170h] [rbp+70h] BYREF
	__int64 v103; // [rsp+178h] [rbp+78h] BYREF
	char v104[8]; // [rsp+180h] [rbp+80h] BYREF
	__int64 v105; // [rsp+188h] [rbp+88h] BYREF
	char v106[8]; // [rsp+190h] [rbp+90h] BYREF
	__int64 v107; // [rsp+198h] [rbp+98h] BYREF
	char v108[8]; // [rsp+1A0h] [rbp+A0h] BYREF
	__int64 v109; // [rsp+1A8h] [rbp+A8h] BYREF
	char v110[8]; // [rsp+1B0h] [rbp+B0h] BYREF
	__int64 v111; // [rsp+1B8h] [rbp+B8h] BYREF
	__int64 v112; // [rsp+1C0h] [rbp+C0h] BYREF
	char v113[8]; // [rsp+1C8h] [rbp+C8h] BYREF
	__int64 v114; // [rsp+1D0h] [rbp+D0h] BYREF
	__int64 v115; // [rsp+1D8h] [rbp+D8h] BYREF
	_QWORD v116[4]; // [rsp+1E0h] [rbp+E0h] BYREF
	char v117; // [rsp+207h] [rbp+107h] BYREF
	char v118[31]; // [rsp+208h] [rbp+108h] BYREF
	char v119; // [rsp+227h] [rbp+127h] BYREF
	char v120[31]; // [rsp+228h] [rbp+128h] BYREF
	char v121; // [rsp+247h] [rbp+147h] BYREF
	char v122[31]; // [rsp+248h] [rbp+148h] BYREF
	char v123; // [rsp+267h] [rbp+167h] BYREF
	char v124[31]; // [rsp+268h] [rbp+168h] BYREF
	char v125; // [rsp+287h] [rbp+187h] BYREF
	char v126[31]; // [rsp+288h] [rbp+188h] BYREF
	char v127; // [rsp+2A7h] [rbp+1A7h] BYREF
	char v128[31]; // [rsp+2A8h] [rbp+1A8h] BYREF
	char v129; // [rsp+2C7h] [rbp+1C7h] BYREF
	char v130[31]; // [rsp+2C8h] [rbp+1C8h] BYREF
	char v131; // [rsp+2E7h] [rbp+1E7h] BYREF
	char v132[31]; // [rsp+2E8h] [rbp+1E8h] BYREF
	char v133; // [rsp+307h] [rbp+207h] BYREF
	char v134[31]; // [rsp+308h] [rbp+208h] BYREF
	char v135; // [rsp+327h] [rbp+227h] BYREF
	char v136[31]; // [rsp+328h] [rbp+228h] BYREF
	char v137; // [rsp+347h] [rbp+247h] BYREF
	char v138[31]; // [rsp+348h] [rbp+248h] BYREF
	char v139; // [rsp+367h] [rbp+267h] BYREF
	char v140[31]; // [rsp+368h] [rbp+268h] BYREF
	char v141; // [rsp+387h] [rbp+287h] BYREF
	__int64 v142; // [rsp+388h] [rbp+288h] BYREF

	v4 = *(void(__fastcall * *)(_QWORD*, __int64, __int64*, __int64*, __int64*))(*a1 + 16i64);
	v5 = a1[3];
	v97 = v5;
	if ((*(_DWORD*)(v5 - 16) & 0x30000000) == 0)
		_InterlockedIncrement((volatile signed __int32*)(v5 - 16));
	sub_140048D00(&v99, "Class:");
	v4(a1, a2, &v99, &v97, &v97);
	v6 = *(void(__fastcall * *)(_QWORD*, __int64, __int64*, __int64*, __int64*))(*a1 + 16i64);
	sub_140048D00(&v101, &unk_14046DFD2);
	sub_140048D00(&v111, "----------------------------------------------");
	v6(a1, a2, &v111, &v101, &v101);
	v7 = *(void(__fastcall * *)(_QWORD*, __int64, _QWORD*, char*, char*))(*a1 + 16i64);
	v8 = sub_1402FCD90(v120, a1[10]);
	sub_140040360(v113, v8, &v119 - v8);
	sub_140048D00(v116, "Serial:");
	v7(a1, a2, v116, v113, v113);
	if ((__int64)a1[10] > 0)
	{
		v9 = *(void(__fastcall * *)(_QWORD*, __int64, __int64*, char*, char*))(*a1 + 16i64);
		v10 = sub_1402FCCA0(v122);
		sub_140040360(v71, v10, &v121 - v10);
		sub_140048D00(&v72, "Group_ON:");
		v9(a1, a2, &v72, v71, v71);
		v11 = *(void(__fastcall * *)(_QWORD*, __int64, __int64*, char*, char*))(*a1 + 16i64);
		String::String_3((__int64)v73, v12, 0, 0);
		sub_140048D00(&v74, "Level_Sensitivity:");
		v11(a1, a2, &v74, v73, v73);
		v13 = *(void(__fastcall * *)(_QWORD*, __int64, __int64*, char*, char*))(*a1 + 16i64);
		String::String_3((__int64)v75, v14, 0, 0);
		sub_140048D00(&v76, "Calibration_Level:");
		v13(a1, a2, &v76, v75, v75);
		v15 = *(void(__fastcall * *)(_QWORD*, __int64, __int64*, char*, char*))(*a1 + 16i64);
		v16 = sub_1402FCCA0(v124);
		sub_140040360(v77, v16, &v123 - v16);
		sub_140048D00(&v78, "Optional_Gain:");
		v15(a1, a2, &v78, v77, v77);
		v17 = *(void(__fastcall * *)(_QWORD*, __int64, __int64*, char*, char*))(*a1 + 16i64);
		String::String_3((__int64)v79, v18, 0, 0);
		sub_140048D00(&v80, "Time-of-flight_Compensation:");
		v17(a1, a2, &v80, v79, v79);
		v19 = *(void(__fastcall * *)(_QWORD*, __int64, __int64*, char*, char*))(*a1 + 16i64);
		String::String_3((__int64)v81, v20, 0, 0);
		sub_140048D00(&v82, "Video_Delay:");
		v19(a1, a2, &v82, v81, v81);
		v21 = *(void(__fastcall * *)(_QWORD*, __int64, __int64*, char*, char*))(*a1 + 16i64);
		String::String_3((__int64)v83, v22, 0, 0);
		sub_140048D00(&v84, "Group_Sensitivity:");
		v21(a1, a2, &v84, v83, v83);
		v23 = *(void(__fastcall * *)(_QWORD*, __int64, __int64*, char*, char*))(*a1 + 16i64);
		v24 = sub_1402FCCA0(v126);
		sub_140040360(v85, v24, &v125 - v24);
		sub_140048D00(&v86, "SubwooferGroupID:");
		v23(a1, a2, &v86, v85, v85);
		v25 = *(void(__fastcall * *)(_QWORD*, __int64, __int64*, char*, char*))(*a1 + 16i64);
		v26 = sub_1402FCCA0(&v142);
		sub_140040360(v87, v26, &v141 - v26);
		sub_140048D00(&v88, "CalibrationStatusFlag:");
		v25(a1, a2, &v88, v87, v87);
		v27 = *(void(__fastcall * *)(_QWORD*, __int64, __int64*, char*, char*))(*a1 + 16i64);
		v28 = sub_1402FCCA0(v128);
		sub_140040360(v89, v28, &v127 - v28);
		sub_140048D00(&v90, "Input:");
		v27(a1, a2, &v90, v89, v89);
		v29 = *(void(__fastcall * *)(_QWORD*, __int64, __int64*, char*, char*))(*a1 + 16i64);
		v30 = sub_1402FCCA0(v130);
		sub_140040360(v91, v30, &v129 - v30);
		sub_140048D00(&v95, "CrossoverFrequency(Hz):");
		v29(a1, a2, &v95, v91, v91);
		v31 = *(void(__fastcall * *)(_QWORD*, __int64, __int64*, char*, char*))(*a1 + 16i64);
		v32 = sub_1402FCCA0(v132);
		sub_140040360(v92, v32, &v131 - v32);
		sub_140048D00(&v66, "Phase(degrees):");
		v31(a1, a2, &v66, v92, v92);
		v33 = *(void(__fastcall * *)(_QWORD*, __int64, __int64*, __int64*, __int64*))(*a1 + 16i64);
		v34 = a1[35];
		v61 = v34;
		if ((*(_DWORD*)(v34 - 16) & 0x30000000) == 0)
			_InterlockedIncrement((volatile signed __int32*)(v34 - 16));
		sub_140048D00(&v63, "PhaseCalibratedWith:");
		v33(a1, a2, &v63, &v61, &v61);
		v35 = *(void(__fastcall * *)(_QWORD*, __int64, __int64*, char*, char*, __int64))(*a1 + 16i64);
		v36 = sub_1402FCCA0(v134);
		sub_140040360(v93, v36, &v133 - v36);
		sub_140048D00(&v65, "LFE_+10:");
		v35(a1, a2, &v65, v93, v93, v61);
		v37 = *(void(__fastcall * *)(_QWORD*, __int64, __int64*, char*, char*))(*a1 + 16i64);
		v38 = sub_1402FCCA0(v136);
		sub_140040360(v94, v38, &v135 - v38);
		sub_140048D00(&v64, "LFE_Channel:");
		v37(a1, a2, &v64, v94, v94);
		v39 = *(void(__fastcall * *)(_QWORD*, __int64, __int64*, char*, char*))(*a1 + 16i64);
		v40 = sub_1402FCCA0(v138);
		sub_140040360(v96, v40, &v137 - v40);
		sub_140048D00(&v67, "LFE_CrossoverFrequency(Hz):");
		v39(a1, a2, &v67, v96, v96);
		v41 = *(void(__fastcall * *)(_QWORD*, __int64, __int64*, char*, char*))(*a1 + 16i64);
		v42 = sub_1402FCCA0(v140);
		sub_140040360(v98, v42, &v139 - v42);
		sub_140048D00(&v68, "Input1_AES_EBUChannel:");
		v41(a1, a2, &v68, v98, v98);
		v43 = *(void(__fastcall * *)(_QWORD*, __int64, __int64*, char*, char*))(*a1 + 16i64);
		v44 = sub_1402FCCA0(v118);
		sub_140040360(v100, v44, &v117 - v44);
		sub_140048D00(&v62, "MultiChannel_AES_EBU:");
		v43(a1, a2, &v62, v100, v100);
		v45 = 1;
		v46 = a1 + 51;
		v47 = 20i64;
		do
		{
			v48 = *(void(__fastcall * *)(_QWORD*, __int64, __int64*, char*, char*))(*a1 + 16i64);
			v49 = sub_1402FCCA0(v118);
			sub_140040360(v102, v49, &v117 - v49);
			sub_140048D00(&v103, "Notch:");
			v48(a1, a2, &v103, v102, v102);
			v50 = *(void(__fastcall * *)(_QWORD*, __int64, __int64*, char*, char*))(*a1 + 16i64);
			String::String_3((__int64)v104, v51, 0, 0);
			sub_140048D00(&v105, "Frequency:");
			v50(a1, a2, &v105, v104, v104);
			v52 = *(void(__fastcall * *)(_QWORD*, __int64, __int64*, char*, char*))(*a1 + 16i64);
			String::String_3((__int64)v106, v53, 0, 0);
			sub_140048D00(&v107, "Gain:");
			v52(a1, a2, &v107, v106, v106);
			v54 = *(void(__fastcall * *)(_QWORD*, __int64, __int64*, char*, char*))(*a1 + 16i64);
			String::String_3((__int64)v108, v55, 0, 0);
			sub_140048D00(&v109, "Q_Value:");
			v54(a1, a2, &v109, v108, v108);
			v56 = *(void(__fastcall * *)(_QWORD*, __int64, __int64*, char*, char*))(*a1 + 16i64);
			v57 = sub_1402FCCA0(v118);
			sub_140040360(v110, v57, &v117 - v57);
			sub_140048D00(&v69, "SR:");
			v56(a1, a2, &v69, v110, v110);
			++v45;
			v46 = (_QWORD*)((char*)v46 + 4);
			--v47;
		} while (v47);
	}
	v58 = *(void(__fastcall * *)(_QWORD*, __int64, __int64*, __int64*, __int64*))(*a1 + 16i64);
	sub_140048D00(&v112, byte_14046DFCB);
	sub_140048D00(&v70, "Data_End:");
	v58(a1, a2, &v70, &v112, &v112);
	v59 = *(void(__fastcall * *)(_QWORD*, __int64, __int64*, __int64*, __int64*))(*a1 + 16i64);
	sub_140048D00(&v114, byte_14046DFBF);
	sub_140048D00(&v115, " ");
	v59(a1, a2, &v115, &v114, &v114);*/
	
}
bool SubwooferGen2::sub_1402383D0(_DWORD* a1, __int64 a2)
{
	return true;
	/* bool v4; // r15
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
		v5 = (*(__int64(__fastcall * *)(__int64))(*(_QWORD*)a2 + 8i64))(a2);
		if (v5 >= 0)
			v5 -= (*(__int64(__fastcall * *)(__int64))(*(_QWORD*)a2 + 168i64))(a2);
		if (v5 <= 0 || v4)
			break;
		(*(void(__fastcall * *)(_DWORD*, __int64, _BYTE * *, char**, char*, char*, char*, char*))(*(_QWORD*)a1 + 32i64))(
			a1,
			a2,
			&v36,
			&String,
			v28,
			v29,
			v30,
			v31);
		v6 = v36;
		if ((unsigned int)String::isNotEmpty(v36, "Serial"))
		{
			if ((unsigned int)String::isNotEmpty(v6, "Level_Sensitivity"))
			{
				if ((unsigned int)String::isNotEmpty(v6, "Calibration_Level"))
				{
					if ((unsigned int)String::isNotEmpty(v6, "Optional_Gain"))
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
												if (!(unsigned int)String::isNotEmpty(v6, "CrossoverFrequency(Hz)"))
													goto LABEL_48;
												if ((unsigned int)String::isNotEmpty(v6, "Phase(degrees)"))
												{
													if ((unsigned int)String::isNotEmpty(v6, "PhaseCalibratedWith"))
													{
														if ((unsigned int)String::isNotEmpty(v6, "Input1_AES_EBUChannel"))
														{
															if ((unsigned int)String::isNotEmpty(v6, "MultiChannel_AES_EBU"))
															{
																if ((unsigned int)String::isNotEmpty(v6, "Group_ON"))
																{
																	if (!(unsigned int)String::isNotEmpty(v6, "Crossover_Frequency"))
																	{
																	LABEL_48:
																		a1[72] = atoi(String);
																		goto LABEL_71;
																	}
																	if ((unsigned int)String::isNotEmpty(v6, "LFE_+10"))
																	{
																		if ((unsigned int)String::isNotEmpty(v6, "LFE_Channel"))
																		{
																			if ((unsigned int)String::isNotEmpty(v6, "LFE_CrossoverFrequency(Hz)"))
																			{
																				if ((unsigned int)String::isNotEmpty(v6, "Notch"))
																				{
																					v4 = (unsigned int)String::isNotEmpty(v6, "Data_End") == 0;
																				}
																				else
																				{
																					v14 = atoi(String);
																					(*(void(__fastcall * *)(_DWORD*, __int64, _BYTE * *, char**))(*(_QWORD*)a1 + 32i64))(
																						a1,
																						a2,
																						&v36,
																						&String);
																					if (v14 <= 20)
																					{
																						v15 = String;
																						v29 = String;
																						if ((*((_DWORD*)String - 4) & 0x30000000) == 0)
																							_InterlockedIncrement((volatile signed __int32*)String - 4);
																						v16 = sub_14020F700(v15, &v29);
																						*(float*)& a1[v14 + 81] = v16;
																					}
																					(*(void(__fastcall * *)(_DWORD*, __int64, _BYTE * *, char**))(*(_QWORD*)a1 + 32i64))(
																						a1,
																						a2,
																						&v36,
																						&String);
																					if (v14 <= 20)
																					{
																						v30 = String;
																						v17 = *((unsigned int*)String - 4);
																						if ((v17 & 0x30000000) == 0)
																							_InterlockedIncrement((volatile signed __int32*)String - 4);
																						v18 = sub_14020F700(v17, &v30);
																						*(float*)& a1[v14 + 101] = v18;
																					}
																					(*(void(__fastcall * *)(_DWORD*, __int64, _BYTE * *, char**))(*(_QWORD*)a1 + 32i64))(
																						a1,
																						a2,
																						&v36,
																						&String);
																					if (v14 <= 20)
																					{
																						v31 = String;
																						v19 = *((unsigned int*)String - 4);
																						if ((v19 & 0x30000000) == 0)
																							_InterlockedIncrement((volatile signed __int32*)String - 4);
																						v20 = sub_14020F700(v19, &v31);
																						*(float*)& a1[v14 + 121] = v20;
																					}
																					(*(void(__fastcall * *)(_DWORD*, __int64, _BYTE * *, char**))(*(_QWORD*)a1 + 32i64))(
																						a1,
																						a2,
																						&v36,
																						&String);
																					if (v14 <= 20)
																						a1[v14 + 141] = atoi(String);
																				}
																			}
																			else
																			{
																				a1[79] = atoi(String);
																			}
																		}
																		else
																		{
																			a1[77] = atoi(String);
																		}
																	}
																	else
																	{
																		a1[75] = atoi(String);
																	}
																}
																else
																{
																	*((_BYTE*)a1 + 96) = (unsigned int)String::isNotEmpty(String, "0") != 0;
																}
															}
															else
															{
																a1[81] = atoi(String);
															}
														}
														else
														{
															a1[40] = atoi(String);
														}
													}
													else
													{
														v11 = String;
														if ((*((_DWORD*)String - 4) & 0x30000000) == 0)
															_InterlockedIncrement((volatile signed __int32*)String - 4);
														v12 = *((_QWORD*)a1 + 35);
														*((_QWORD*)a1 + 35) = v11;
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
													a1[74] = atoi(String);
												}
											}
											else
											{
												a1[48] = atoi(String);
											}
										}
										else
										{
											a1[27] = atoi(String);
										}
									}
									else
									{
										a1[26] = atoi(String);
									}
								}
								else
								{
									v34 = String;
									v10 = sub_140048640(&v34);
									*((float*)a1 + 4) = v10;
								}
							}
							else
							{
								*((double*)a1 + 17) = (double)atoi(String);
							}
						}
						else
						{
							v28 = String;
							v9 = *((unsigned int*)String - 4);
							if ((v9 & 0x30000000) == 0)
								_InterlockedIncrement((volatile signed __int32*)String - 4);
							*((double*)a1 + 16) = sub_14020F700(v9, &v28);
						}
					}
					else
					{
						a1[64] = atoi(String);
					}
				}
				else
				{
					v38 = String;
					v8 = *((unsigned int*)String - 4);
					if ((v8 & 0x30000000) == 0)
						_InterlockedIncrement((volatile signed __int32*)String - 4);
					*((double*)a1 + 15) = sub_14020F700(v8, &v38);
				}
			}
			else
			{
				v37 = String;
				v7 = *((unsigned int*)String - 4);
				if ((v7 & 0x30000000) == 0)
					_InterlockedIncrement((volatile signed __int32*)String - 4);
				*((double*)a1 + 14) = sub_14020F700(v7, &v37);
			}
		}
		else
		{
			*((_QWORD*)a1 + 10) = atoi(String);
		}
	LABEL_71:
		sub_140048D00(&v32, &unk_14046DFD3);
		v21 = String;
		String = v32;
		v32 = v21;
		v22 = v21 - 16;
		if ((*((_DWORD*)v21 - 4) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v22) == -1)
			j_j_free(v22);
		sub_140048D00(&v33, &unk_14046DFDB);
		v23 = v36;
		v36 = v33;
		v33 = v23;
		v24 = v23 - 16;
		if ((*((_DWORD*)v23 - 4) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v24) == -1)
			j_j_free(v24);
	}
	a1[65] = a1[72];
	a1[66] = a1[74];
	v25 = String - 16;
	if ((*((_DWORD*)String - 4) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v25) == -1)
		j_j_free(v25);
	v26 = v36 - 16;
	if ((*((_DWORD*)v36 - 4) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v26) == -1)
		j_j_free(v26);
	return v4;*/
}
__int64 SubwooferGen2::sub_1402368F0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, char a5, char a6)
{
	return 1;
	/*__int64 result; // rax
	int v8; // er9
	char v9; // r10
	_QWORD* v10; // rdi
	int v11; // ebx
	_DWORD* v12; // rax
	_DWORD* v13; // rax
	__int64 v14; // rdx
	__int64 v15; // rdx
	_QWORD* v16; // rdi
	int v17; // ebx
	_DWORD* v18; // rax
	__int64 v19; // rdx
	_DWORD* v20; // rax
	__int64 v21; // rdx
	__int64 v22; // rdx
	_QWORD* v23; // rdi
	int v24; // ebx
	_DWORD* v25; // rax
	_DWORD* v26; // rax
	__int64 v27; // rdx
	__int64 v28; // rdx
	int v29; // ebx
	__int64 v30; // rax
	__int64 v31; // rdx
	_DWORD* v32; // rax
	__int64 v33; // rdx
	_QWORD* v34; // rbx
	_QWORD* v35; // rcx
	char v36; // di
	__int64 v37; // rax
	_DWORD* v38; // rax
	__int64 v39; // rdx
	__int64 v40; // rdx
	__int64 v41; // rdx
	_QWORD* v42; // rsi
	int v43; // ebx
	unsigned __int8 v44; // di
	_DWORD* v45; // rax
	__int64 v46; // rdx
	_DWORD* v47; // rax
	__int64 v48; // rdx
	__int64 v49; // rdx
	__int64 v50; // rcx
	_DWORD* v51; // rax
	_DWORD* v52; // rax
	__int64 v53; // rdx
	__int64 v54; // rdx
	__int64 v55; // rdx
	int v56; // ebx
	__int64 v57; // rax
	__int64 v58; // rdx
	_DWORD* v59; // rax
	__int64 v60; // rdx
	__int64 v61; // rax
	_DWORD* v62; // rax
	__int64 v63; // rdx
	__int64 v64; // rdx
	int v65; // eax
	int v66; // edi
	__int64 v67; // rax
	_DWORD* v68; // rax
	__int64 v69; // rdx
	__int64 v70; // rdx
	__int64 v71; // rax
	_DWORD* v72; // rax
	__int64 v73; // rdx
	__int64 v74; // rdx
	__int64 v75; // rax
	_DWORD* v76; // rax
	__int64 v77; // rdx
	__int64 v78; // rdx
	__int64 v79; // rdx
	int v80; // ebx
	__int64 v81; // rax
	__int64 v82; // rdx
	_DWORD* v83; // rax
	_QWORD* v84; // rdi
	int v85; // ebx
	_DWORD* v86; // rax
	_DWORD* v87; // rax
	__int64 v88; // rdx
	__int64 v89; // rdx
	__int64 v90; // rdx
	int v91; // ebx
	__int64 v92; // rax
	__int64 v93; // rdx
	_DWORD* v94; // rax
	__int64 v95; // rdx
	_QWORD* v96; // rdi
	int v97; // ebx
	_DWORD* v98; // rax
	_DWORD* v99; // rax
	__int64 v100; // rdx
	__int64 v101; // rdx
	int v102; // ebx
	__int64 v103; // rax
	__int64 v104; // rdx
	_DWORD* v105; // rax
	__int64 v106; // rdx
	__int64 v107; // rdx
	_QWORD* v108; // rbx
	_QWORD* v109; // rcx
	char v110; // di
	_DWORD* v111; // rax
	_DWORD* v112; // rax
	__int64 v113; // rdx
	__int64 v114; // rdx
	int v115; // ebx
	__int64 v116; // rax
	__int64 v117; // rdx
	_DWORD* v118; // rax
	__int64 v119; // rdx
	__int64 v120; // rax
	_DWORD* v121; // rax
	__int64 v122; // rdx
	__int64 v123; // rdx
	int v124; // ebx
	__int64 v125; // rax
	__int64 v126; // rdx
	_DWORD* v127; // rax
	__int64 v128; // rax
	_DWORD* v129; // rax
	__int64 v130; // rdx
	int v131; // eax
	int v132; // edi
	__int64 v133; // rax
	_DWORD* v134; // rax
	__int64 v135; // rdx
	__int64 v136; // rax
	_DWORD* v137; // rax
	__int64 v138; // rdx
	__int64 v139; // rax
	_DWORD* v140; // rax
	__int64 v141; // rdx
	_QWORD* v142; // rbx
	char v143; // di
	_QWORD* v144; // rcx
	_DWORD* v145; // rax
	_DWORD* v146; // rax
	__int64 v147; // rdx
	__int64 v148; // rdx
	__int64 v149; // rdx
	int v150; // ebx
	__int64 v151; // rax
	__int64 v152; // rdx
	_DWORD* v153; // rax
	__int64 v154; // rax
	_DWORD* v155; // rax
	__int64 v156; // rdx
	__int64 v157; // rdx
	__int64 v158; // rdx
	__int64 v159; // rax
	_DWORD* v160; // rax
	__int64 v161; // rdx
	__int64 v162; // rdx
	int v163; // eax
	int v164; // edi
	__int64 v165; // rax
	_DWORD* v166; // rax
	__int64 v167; // rdx
	__int64 v168; // rdx
	__int64 v169; // rax
	_DWORD* v170; // rax
	__int64 v171; // rdx
	__int64 v172; // rdx
	__int64 v173; // rax
	_DWORD* v174; // rax
	__int64 v175; // rdx
	__int64 v176; // rdx
	int v177; // ebx
	__int64 v178; // rax
	__int64 v179; // rdx
	_DWORD* v180; // rax

	if (!a6)
		* (_DWORD*)(a1 + 192) = a2;
	result = sub_140210740(a1, a2, a3, (unsigned int)a2);
	if ((_BYTE)result && a5)
	{
		if (v9)
		{
			switch (v8)
			{
			case 0:
				v10 = *(_QWORD * *)(a1 + 56);
				v11 = *(_DWORD*)(a1 + 72);
				sub_140007A80(v10);
				v12 = (_DWORD*)* v10;
				++v12[5];
				**(_BYTE * *)v12 = v11;
				v13 = (_DWORD*)* v10;
				++v13[5];
				*(_BYTE*)(*(_QWORD*)v13 + 1i64) = 64;
				sub_140007AF0(*v10, 0i64);
				LOBYTE(v14) = 3;
				sub_140007AF0(*v10, v14);
				sub_140007AF0(*v10, 0i64);
				sub_140007AF0(*v10, v15);
				*(_DWORD*)(*v10 + 12i64) = 9;
				sub_140212F70(*(_QWORD*)(a1 + 64), *(_QWORD*)(a1 + 56));
				v16 = *(_QWORD * *)(a1 + 56);
				v17 = *(_DWORD*)(a1 + 72);
				sub_140007A80(v16);
				v18 = (_DWORD*)* v16;
				LOBYTE(v19) = 1;
				++v18[5];
				**(_BYTE * *)v18 = v17;
				v20 = (_DWORD*)* v16;
				++v20[5];
				*(_BYTE*)(*(_QWORD*)v20 + 1i64) = 64;
				sub_140007AF0(*v16, v19);
				LOBYTE(v21) = 3;
			LABEL_8:
				sub_140007AF0(*v16, v21);
				sub_140007AF0(*v16, 0i64);
			LABEL_64:
				sub_140007AF0(*v16, v22);
				v50 = *v16;
				goto LABEL_65;
			case 4:
				v23 = *(_QWORD * *)(a1 + 56);
				v24 = *(_DWORD*)(a1 + 72);
				sub_140007A80(v23);
				v25 = (_DWORD*)* v23;
				++v25[5];
				**(_BYTE * *)v25 = v24;
				v26 = (_DWORD*)* v23;
				++v26[5];
				*(_BYTE*)(*(_QWORD*)v26 + 1i64) = 64;
				sub_140007AF0(*v23, 0i64);
				LOBYTE(v27) = 3;
				sub_140007AF0(*v23, v27);
				LOBYTE(v28) = 2;
				sub_140007AF0(*v23, v28);
				sub_140007AF0(*v23, 0i64);
				*(_DWORD*)(*v23 + 12i64) = 9;
				sub_140212F70(*(_QWORD*)(a1 + 64), *(_QWORD*)(a1 + 56));
				v16 = *(_QWORD * *)(a1 + 56);
				v29 = *(_DWORD*)(a1 + 72);
				sub_140007A80(v16);
				v30 = *v16;
				LOBYTE(v31) = 1;
				++* (_DWORD*)(v30 + 20);
				**(_BYTE * *)v30 = v29;
				v32 = (_DWORD*)* v16;
				++v32[5];
				*(_BYTE*)(*(_QWORD*)v32 + 1i64) = 64;
				sub_140007AF0(*v16, v31);
				LOBYTE(v33) = 3;
			LABEL_62:
				sub_140007AF0(*v16, v33);
				LOBYTE(v107) = 1;
				goto LABEL_63;
			case 1:
				v34 = *(_QWORD * *)(a1 + 56);
				v35 = v34;
				v36 = *(_BYTE*)(a1 + 72);
				if (*(_DWORD*)(a1 + 308) == 1)
					goto LABEL_13;
				sub_140007A80(v34);
				v51 = (_DWORD*)* v34;
				++v51[5];
				**(_BYTE * *)v51 = v36;
				v52 = (_DWORD*)* v34;
				++v52[5];
				*(_BYTE*)(*(_QWORD*)v52 + 1i64) = 64;
				sub_140007AF0(*v34, 0i64);
				LOBYTE(v53) = 3;
				sub_140007AF0(*v34, v53);
				LOBYTE(v54) = 2;
				sub_140007AF0(*v34, v54);
				LOBYTE(v55) = 1;
				break;
			case 2:
				v34 = *(_QWORD * *)(a1 + 56);
				v35 = v34;
				v36 = *(_BYTE*)(a1 + 72);
				if (*(_DWORD*)(a1 + 308) == 2)
				{
				LABEL_13:
					sub_140007A80(v35);
					v37 = *v34;
					++* (_DWORD*)(v37 + 20);
					**(_BYTE * *)v37 = v36;
					v38 = (_DWORD*)* v34;
					++v38[5];
					*(_BYTE*)(*(_QWORD*)v38 + 1i64) = 64;
					sub_140007AF0(*v34, 0i64);
					LOBYTE(v39) = 3;
					sub_140007AF0(*v34, v39);
					LOBYTE(v40) = 2;
					sub_140007AF0(*v34, v40);
					v41 = 0i64;
				LABEL_14:
					sub_140007AF0(*v34, v41);
					*(_DWORD*)(*v34 + 12i64) = 9;
					sub_140212F70(*(_QWORD*)(a1 + 64), *(_QWORD*)(a1 + 56));
					v42 = *(_QWORD * *)(a1 + 56);
					v43 = *(_DWORD*)(a1 + 72);
					v44 = *(_BYTE*)(a1 + 308);
					sub_140007A80(v42);
					v45 = (_DWORD*)* v42;
					LOBYTE(v46) = 1;
					++v45[5];
					**(_BYTE * *)v45 = v43;
					v47 = (_DWORD*)* v42;
					++v47[5];
					*(_BYTE*)(*(_QWORD*)v47 + 1i64) = 64;
					sub_140007AF0(*v42, v46);
					LOBYTE(v48) = 3;
				LABEL_15:
					sub_140007AF0(*v42, v48);
					LOBYTE(v49) = 1;
				LABEL_16:
					sub_140007AF0(*v42, v49);
					sub_140007AF0(*v42, v44);
					v50 = *v42;
				LABEL_65:
					*(_DWORD*)(v50 + 12) = 9;
					return sub_140212F70(*(_QWORD*)(a1 + 64), *(_QWORD*)(a1 + 56));
				}
				sub_140007A80(v34);
				v61 = *v34;
				++* (_DWORD*)(v61 + 20);
				**(_BYTE * *)v61 = v36;
				v62 = (_DWORD*)* v34;
				++v62[5];
				*(_BYTE*)(*(_QWORD*)v62 + 1i64) = 64;
				sub_140007AF0(*v34, 0i64);
				LOBYTE(v63) = 3;
				sub_140007AF0(*v34, v63);
				LOBYTE(v64) = 2;
				sub_140007AF0(*v34, v64);
				break;
			case 3:
				v65 = *(_DWORD*)(a1 + 308);
				v34 = *(_QWORD * *)(a1 + 56);
				v66 = *(_DWORD*)(a1 + 72);
				if (v65 == 1)
				{
					sub_140007A80(v34);
					v67 = *v34;
					++* (_DWORD*)(v67 + 20);
					**(_BYTE * *)v67 = v66;
					v68 = (_DWORD*)* v34;
					++v68[5];
					*(_BYTE*)(*(_QWORD*)v68 + 1i64) = 64;
					sub_140007AF0(*v34, 0i64);
					LOBYTE(v69) = 3;
					sub_140007AF0(*v34, v69);
					LOBYTE(v70) = 2;
					sub_140007AF0(*v34, v70);
				}
				else
				{
					if (v65 != 2)
					{
						sub_140007A80(v34);
						v75 = *v34;
						++* (_DWORD*)(v75 + 20);
						**(_BYTE * *)v75 = v66;
						v76 = (_DWORD*)* v34;
						++v76[5];
						*(_BYTE*)(*(_QWORD*)v76 + 1i64) = 64;
						sub_140007AF0(*v34, 0i64);
						LOBYTE(v77) = 3;
						sub_140007AF0(*v34, v77);
						LOBYTE(v78) = 2;
						sub_140007AF0(*v34, v78);
						LOBYTE(v79) = 3;
						sub_140007AF0(*v34, v79);
						*(_DWORD*)(*v34 + 12i64) = 9;
						sub_140212F70(*(_QWORD*)(a1 + 64), *(_QWORD*)(a1 + 56));
						v16 = *(_QWORD * *)(a1 + 56);
						v80 = *(_DWORD*)(a1 + 72);
						sub_140007A80(v16);
						v81 = *v16;
						LOBYTE(v82) = 1;
						++* (_DWORD*)(v81 + 20);
						**(_BYTE * *)v81 = v80;
						v83 = (_DWORD*)* v16;
						++v83[5];
						*(_BYTE*)(*(_QWORD*)v83 + 1i64) = 64;
						sub_140007AF0(*v16, v82);
						LOBYTE(v33) = 3;
						goto LABEL_62;
					}
					sub_140007A80(v34);
					v71 = *v34;
					++* (_DWORD*)(v71 + 20);
					**(_BYTE * *)v71 = v66;
					v72 = (_DWORD*)* v34;
					++v72[5];
					*(_BYTE*)(*(_QWORD*)v72 + 1i64) = 64;
					sub_140007AF0(*v34, 0i64);
					LOBYTE(v73) = 3;
					sub_140007AF0(*v34, v73);
					LOBYTE(v74) = 2;
					sub_140007AF0(*v34, v74);
					LOBYTE(v41) = 1;
				}
				goto LABEL_14;
			default:
				return result;
			}
			sub_140007AF0(*v34, v55);
			*(_DWORD*)(*v34 + 12i64) = 9;
			sub_140212F70(*(_QWORD*)(a1 + 64), *(_QWORD*)(a1 + 56));
			v16 = *(_QWORD * *)(a1 + 56);
			v56 = *(_DWORD*)(a1 + 72);
			sub_140007A80(v16);
			v57 = *v16;
			LOBYTE(v58) = 1;
			++* (_DWORD*)(v57 + 20);
			**(_BYTE * *)v57 = v56;
			v59 = (_DWORD*)* v16;
			++v59[5];
			*(_BYTE*)(*(_QWORD*)v59 + 1i64) = 64;
			sub_140007AF0(*v16, v58);
			LOBYTE(v60) = 3;
			sub_140007AF0(*v16, v60);
			sub_140007AF0(*v16, 0i64);
			goto LABEL_64;
		}
		switch (v8)
		{
		case 0:
			v84 = *(_QWORD * *)(a1 + 56);
			v85 = *(_DWORD*)(a1 + 72);
			sub_140007A80(v84);
			v86 = (_DWORD*)* v84;
			++v86[5];
			**(_BYTE * *)v86 = v85;
			v87 = (_DWORD*)* v84;
			++v87[5];
			*(_BYTE*)(*(_QWORD*)v87 + 1i64) = 64;
			sub_140007AF0(*v84, 0i64);
			sub_140007AF0(*v84, v88);
			sub_140007AF0(*v84, v89);
			sub_140007AF0(*v84, v90);
			*(_DWORD*)(*v84 + 12i64) = 9;
			sub_140212F70(*(_QWORD*)(a1 + 64), *(_QWORD*)(a1 + 56));
			v16 = *(_QWORD * *)(a1 + 56);
			v91 = *(_DWORD*)(a1 + 72);
			sub_140007A80(v16);
			v92 = *v16;
			LOBYTE(v93) = 1;
			++* (_DWORD*)(v92 + 20);
			**(_BYTE * *)v92 = v91;
			v94 = (_DWORD*)* v16;
			++v94[5];
			*(_BYTE*)(*(_QWORD*)v94 + 1i64) = 64;
			sub_140007AF0(*v16, v93);
			sub_140007AF0(*v16, 0i64);
			sub_140007AF0(*v16, v95);
			goto LABEL_64;
		case 4:
			v96 = *(_QWORD * *)(a1 + 56);
			v97 = *(_DWORD*)(a1 + 72);
			sub_140007A80(v96);
			v98 = (_DWORD*)* v96;
			++v98[5];
			**(_BYTE * *)v98 = v97;
			v99 = (_DWORD*)* v96;
			++v99[5];
			*(_BYTE*)(*(_QWORD*)v99 + 1i64) = 64;
			sub_140007AF0(*v96, 0i64);
			LOBYTE(v100) = 1;
			sub_140007AF0(*v96, v100);
			LOBYTE(v101) = 2;
			sub_140007AF0(*v96, v101);
			sub_140007AF0(*v96, 0i64);
			*(_DWORD*)(*v96 + 12i64) = 9;
			sub_140212F70(*(_QWORD*)(a1 + 64), *(_QWORD*)(a1 + 56));
			v16 = *(_QWORD * *)(a1 + 56);
			v102 = *(_DWORD*)(a1 + 72);
			sub_140007A80(v16);
			v103 = *v16;
			LOBYTE(v104) = 1;
			++* (_DWORD*)(v103 + 20);
			**(_BYTE * *)v103 = v102;
			v105 = (_DWORD*)* v16;
			++v105[5];
			*(_BYTE*)(*(_QWORD*)v105 + 1i64) = 64;
			sub_140007AF0(*v16, v104);
			sub_140007AF0(*v16, v106);
		LABEL_63:
			sub_140007AF0(*v16, v107);
			v22 = 0i64;
			goto LABEL_64;
		case 1:
			v108 = *(_QWORD * *)(a1 + 56);
			v109 = v108;
			v110 = *(_BYTE*)(a1 + 72);
			if (*(_DWORD*)(a1 + 308) == 1)
			{
			LABEL_34:
				sub_140007A80(v109);
				v111 = (_DWORD*)* v108;
				++v111[5];
				**(_BYTE * *)v111 = v110;
				v112 = (_DWORD*)* v108;
				++v112[5];
				*(_BYTE*)(*(_QWORD*)v112 + 1i64) = 64;
				sub_140007AF0(*v108, 0i64);
				LOBYTE(v113) = 2;
				sub_140007AF0(*v108, v113);
				sub_140007AF0(*v108, 0i64);
			LABEL_35:
				sub_140007AF0(*v108, v114);
				*(_DWORD*)(*v108 + 12i64) = 9;
				sub_140212F70(*(_QWORD*)(a1 + 64), *(_QWORD*)(a1 + 56));
				v42 = *(_QWORD * *)(a1 + 56);
				v115 = *(_DWORD*)(a1 + 72);
				v44 = *(_BYTE*)(a1 + 308);
				sub_140007A80(v42);
				v116 = *v42;
				LOBYTE(v117) = 1;
				++* (_DWORD*)(v116 + 20);
				**(_BYTE * *)v116 = v115;
				v118 = (_DWORD*)* v42;
				++v118[5];
				*(_BYTE*)(*(_QWORD*)v118 + 1i64) = 64;
				sub_140007AF0(*v42, v117);
				LOBYTE(v119) = 2;
				sub_140007AF0(*v42, v119);
				v49 = 0i64;
				goto LABEL_16;
			}
			sub_140007A80(v108);
			v120 = *v108;
			++* (_DWORD*)(v120 + 20);
			**(_BYTE * *)v120 = v110;
			v121 = (_DWORD*)* v108;
			++v121[5];
			*(_BYTE*)(*(_QWORD*)v121 + 1i64) = 64;
			sub_140007AF0(*v108, 0i64);
			LOBYTE(v122) = 2;
			sub_140007AF0(*v108, v122);
			sub_140007AF0(*v108, 0i64);
			LOBYTE(v123) = 1;
		LABEL_37:
			sub_140007AF0(*v108, v123);
			*(_DWORD*)(*v108 + 12i64) = 9;
			sub_140212F70(*(_QWORD*)(a1 + 64), *(_QWORD*)(a1 + 56));
			v16 = *(_QWORD * *)(a1 + 56);
			v124 = *(_DWORD*)(a1 + 72);
			sub_140007A80(v16);
			v125 = *v16;
			LOBYTE(v126) = 1;
			++* (_DWORD*)(v125 + 20);
			**(_BYTE * *)v125 = v124;
			v127 = (_DWORD*)* v16;
			++v127[5];
			*(_BYTE*)(*(_QWORD*)v127 + 1i64) = 64;
			sub_140007AF0(*v16, v126);
			LOBYTE(v21) = 2;
			goto LABEL_8;
		case 2:
			v108 = *(_QWORD * *)(a1 + 56);
			v109 = v108;
			v110 = *(_BYTE*)(a1 + 72);
			if (*(_DWORD*)(a1 + 308) == 2)
				goto LABEL_34;
			sub_140007A80(v108);
			v128 = *v108;
			++* (_DWORD*)(v128 + 20);
			**(_BYTE * *)v128 = v110;
			v129 = (_DWORD*)* v108;
			++v129[5];
			*(_BYTE*)(*(_QWORD*)v129 + 1i64) = 64;
			sub_140007AF0(*v108, 0i64);
			LOBYTE(v130) = 2;
			sub_140007AF0(*v108, v130);
			sub_140007AF0(*v108, 0i64);
			LOBYTE(v123) = 2;
			goto LABEL_37;
		case 3:
			v131 = *(_DWORD*)(a1 + 308);
			v108 = *(_QWORD * *)(a1 + 56);
			v132 = *(_DWORD*)(a1 + 72);
			if (v131 == 1)
			{
				sub_140007A80(v108);
				v133 = *v108;
				++* (_DWORD*)(v133 + 20);
				**(_BYTE * *)v133 = v132;
				v134 = (_DWORD*)* v108;
				++v134[5];
				*(_BYTE*)(*(_QWORD*)v134 + 1i64) = 64;
				sub_140007AF0(*v108, 0i64);
				LOBYTE(v135) = 2;
				sub_140007AF0(*v108, v135);
				sub_140007AF0(*v108, 0i64);
				LOBYTE(v114) = 2;
				goto LABEL_35;
			}
			if (v131 == 2)
			{
				sub_140007A80(v108);
				v136 = *v108;
				++* (_DWORD*)(v136 + 20);
				**(_BYTE * *)v136 = v132;
				v137 = (_DWORD*)* v108;
				++v137[5];
				*(_BYTE*)(*(_QWORD*)v137 + 1i64) = 64;
				sub_140007AF0(*v108, 0i64);
				LOBYTE(v138) = 2;
				sub_140007AF0(*v108, v138);
				sub_140007AF0(*v108, 0i64);
				LOBYTE(v114) = 1;
				goto LABEL_35;
			}
			sub_140007A80(v108);
			v139 = *v108;
			++* (_DWORD*)(v139 + 20);
			**(_BYTE * *)v139 = v132;
			v140 = (_DWORD*)* v108;
			++v140[5];
			*(_BYTE*)(*(_QWORD*)v140 + 1i64) = 64;
			sub_140007AF0(*v108, 0i64);
			LOBYTE(v141) = 2;
			sub_140007AF0(*v108, v141);
			sub_140007AF0(*v108, 0i64);
			LOBYTE(v123) = 3;
			goto LABEL_37;
		case 5:
			v142 = *(_QWORD * *)(a1 + 56);
			v143 = *(_BYTE*)(a1 + 72);
			v144 = v142;
			if (*(_DWORD*)(a1 + 308) == 1)
			{
			LABEL_49:
				sub_140007A80(v144);
				v145 = (_DWORD*)* v142;
				++v145[5];
				**(_BYTE * *)v145 = v143;
				v146 = (_DWORD*)* v142;
				++v146[5];
				*(_BYTE*)(*(_QWORD*)v146 + 1i64) = 64;
				sub_140007AF0(*v142, 0i64);
				LOBYTE(v147) = 4;
				sub_140007AF0(*v142, v147);
				LOBYTE(v148) = 2;
				sub_140007AF0(*v142, v148);
				v149 = 0i64;
			LABEL_50:
				sub_140007AF0(*v142, v149);
				*(_DWORD*)(*v142 + 12i64) = 9;
				sub_140212F70(*(_QWORD*)(a1 + 64), *(_QWORD*)(a1 + 56));
				v42 = *(_QWORD * *)(a1 + 56);
				v150 = *(_DWORD*)(a1 + 72);
				v44 = *(_BYTE*)(a1 + 308);
				sub_140007A80(v42);
				v151 = *v42;
				LOBYTE(v152) = 1;
				++* (_DWORD*)(v151 + 20);
				**(_BYTE * *)v151 = v150;
				v153 = (_DWORD*)* v42;
				++v153[5];
				*(_BYTE*)(*(_QWORD*)v153 + 1i64) = 64;
				sub_140007AF0(*v42, v152);
				LOBYTE(v48) = 4;
				goto LABEL_15;
			}
			sub_140007A80(v142);
			v154 = *v142;
			++* (_DWORD*)(v154 + 20);
			**(_BYTE * *)v154 = v143;
			v155 = (_DWORD*)* v142;
			++v155[5];
			*(_BYTE*)(*(_QWORD*)v155 + 1i64) = 64;
			sub_140007AF0(*v142, 0i64);
			LOBYTE(v156) = 4;
			sub_140007AF0(*v142, v156);
			LOBYTE(v157) = 2;
			sub_140007AF0(*v142, v157);
			LOBYTE(v158) = 1;
			break;
		case 6:
			v142 = *(_QWORD * *)(a1 + 56);
			v143 = *(_BYTE*)(a1 + 72);
			v144 = v142;
			if (*(_DWORD*)(a1 + 308) == 2)
				goto LABEL_49;
			sub_140007A80(v142);
			v159 = *v142;
			++* (_DWORD*)(v159 + 20);
			**(_BYTE * *)v159 = v143;
			v160 = (_DWORD*)* v142;
			++v160[5];
			*(_BYTE*)(*(_QWORD*)v160 + 1i64) = 64;
			sub_140007AF0(*v142, 0i64);
			LOBYTE(v161) = 4;
			sub_140007AF0(*v142, v161);
			LOBYTE(v162) = 2;
			sub_140007AF0(*v142, v162);
			break;
		case 7:
			v163 = *(_DWORD*)(a1 + 308);
			v142 = *(_QWORD * *)(a1 + 56);
			v164 = *(_DWORD*)(a1 + 72);
			if (v163 == 1)
			{
				sub_140007A80(v142);
				v165 = *v142;
				++* (_DWORD*)(v165 + 20);
				**(_BYTE * *)v165 = v164;
				v166 = (_DWORD*)* v142;
				++v166[5];
				*(_BYTE*)(*(_QWORD*)v166 + 1i64) = 64;
				sub_140007AF0(*v142, 0i64);
				LOBYTE(v167) = 4;
				sub_140007AF0(*v142, v167);
				LOBYTE(v168) = 2;
				sub_140007AF0(*v142, v168);
				goto LABEL_50;
			}
			if (v163 == 2)
			{
				sub_140007A80(v142);
				v169 = *v142;
				++* (_DWORD*)(v169 + 20);
				**(_BYTE * *)v169 = v164;
				v170 = (_DWORD*)* v142;
				++v170[5];
				*(_BYTE*)(*(_QWORD*)v170 + 1i64) = 64;
				sub_140007AF0(*v142, 0i64);
				LOBYTE(v171) = 4;
				sub_140007AF0(*v142, v171);
				LOBYTE(v172) = 2;
				sub_140007AF0(*v142, v172);
				LOBYTE(v149) = 1;
				goto LABEL_50;
			}
			sub_140007A80(v142);
			v173 = *v142;
			++* (_DWORD*)(v173 + 20);
			**(_BYTE * *)v173 = v164;
			v174 = (_DWORD*)* v142;
			++v174[5];
			*(_BYTE*)(*(_QWORD*)v174 + 1i64) = 64;
			sub_140007AF0(*v142, 0i64);
			LOBYTE(v175) = 4;
			sub_140007AF0(*v142, v175);
			LOBYTE(v176) = 2;
			sub_140007AF0(*v142, v176);
			LOBYTE(v158) = 3;
			break;
		default:
			return result;
		}
		sub_140007AF0(*v142, v158);
		*(_DWORD*)(*v142 + 12i64) = 9;
		sub_140212F70(*(_QWORD*)(a1 + 64), *(_QWORD*)(a1 + 56));
		v16 = *(_QWORD * *)(a1 + 56);
		v177 = *(_DWORD*)(a1 + 72);
		sub_140007A80(v16);
		v178 = *v16;
		LOBYTE(v179) = 1;
		++* (_DWORD*)(v178 + 20);
		**(_BYTE * *)v178 = v177;
		v180 = (_DWORD*)* v16;
		++v180[5];
		*(_BYTE*)(*(_QWORD*)v180 + 1i64) = 64;
		sub_140007AF0(*v16, v179);
		LOBYTE(v33) = 4;
		goto LABEL_62;
	}
	return result;*/
}
__int64 SubwooferGen2::sub_1402368E0(__int64 a1)
{
	return *(unsigned int*)(a1 + 192);
}
char SubwooferGen2::sub_140235AA0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, char a5)
{
	/*__int64 v6; // rdx
	__int64 v7; // rcx
	char v8; // r9
	__int64 v9; // rdx
	__int64 v10; // r8
	__int64 v11; // r9
	__int64 v12; // rcx
	_QWORD* v13; // rdi
	int v14; // ebx
	_DWORD* v15; // rax
	__int64 v16; // rdx
	_DWORD* v17; // rax
	__int64 v18; // rdx
	__int64 v19; // rdx
	__int64 v20; // rdx
	__int64 v21; // rdx
	__int64 v22; // rdx
	__int64 v23; // rdx
	__int64 v24; // rdx
	__int64 v25; // rdx
	__int64 v26; // rdx

	if (!(unsigned __int8)sub_140210740(a1, a2, a3, a4))
		return 0;
	if (v8)
	{
		LOBYTE(v6) = 1;
		(*(void(__fastcall * *)(__int64, __int64))(*(_QWORD*)a1 + 136i64))(a1, v6);
	}
	if (a5)
	{
		sub_14021A200(v7, *(_QWORD*)(a1 + 56), *(unsigned int*)(a1 + 72), 120i64);
		sub_140212F70(*(_QWORD*)(a1 + 64), *(_QWORD*)(a1 + 56));
	}
	sub_1402127F0(*(_QWORD*)(a1 + 64));
	if ((unsigned __int8)sub_140210740(a1, v9, v10, v11))
	{
		sub_14021A290(v12, *(_QWORD*)(a1 + 56), *(unsigned int*)(a1 + 72), 120i64);
		sub_140212F70(*(_QWORD*)(a1 + 64), *(_QWORD*)(a1 + 56));
		v13 = *(_QWORD * *)(a1 + 56);
		v14 = *(_DWORD*)(a1 + 72);
		sub_140007A80(v13);
		v15 = (_DWORD*)* v13;
		LOBYTE(v16) = 5;
		++v15[5];
		**(_BYTE * *)v15 = v14;
		v17 = (_DWORD*)* v13;
		++v17[5];
		*(_BYTE*)(*(_QWORD*)v17 + 1i64) = 5;
		sub_140007AF0(*v13, v16);
		LOBYTE(v18) = 0x80;
		sub_140007AF0(*v13, v18);
		sub_140007AF0(*v13, 0i64);
		sub_140007AF0(*v13, v19);
		sub_140007AF0(*v13, v20);
		sub_140007AF0(*v13, v21);
		LOBYTE(v22) = 22;
		sub_140007AF0(*v13, v22);
		sub_140007AF0(*v13, 0i64);
		LOBYTE(v23) = 1;
		sub_140007AF0(*v13, v23);
		LOBYTE(v24) = -112;
		sub_140007AF0(*v13, v24);
		sub_140007AF0(*v13, 0i64);
		LOBYTE(v25) = 2;
		sub_140007AF0(*v13, v25);
		LOBYTE(v26) = -38;
		sub_140007AF0(*v13, v26);
		*(_DWORD*)(*v13 + 12i64) = 18;
		sub_140212F70(*(_QWORD*)(a1 + 64), *(_QWORD*)(a1 + 56));
		*(_DWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 56) + 8i64) + 20i64) = 1;
		++* (_DWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 56) + 8i64) + 20i64);
	}*/
	return 1;
}
__int64 SubwooferGen2::sub_1402368C0(__int64 a1, int a2)
{
	__int64 result; // rax

	if (a2 == 1)
		result = *(unsigned int*)(a1 + 160);
	else
		result = 0i64;
	return result;
}
__int64 SubwooferGen2::sub_1402368A0(__int64 a1, int a2)
{
	__int64 result; // rax

	result = 0i64;
	*(_DWORD*)(a1 + 160) = a2;
	*(_QWORD*)(a1 + 164) = 0i64;
	*(_DWORD*)(a1 + 172) = 0;
	return result;
}
__int64 SubwooferGen2::sub_1402380B0(__int64 a1)
{
	__int64 result; // rax

	*(_QWORD*)(a1 + 152) = *(_QWORD*)(a1 + 128);
	*(_QWORD*)(a1 + 144) = *(_QWORD*)(a1 + 112);
	*(_DWORD*)(a1 + 652) = *(_DWORD*)(a1 + 256);
	*(_DWORD*)(a1 + 648) = *(_DWORD*)(a1 + 288);
	*(_DWORD*)(a1 + 656) = *(_DWORD*)(a1 + 296);
	*(_DWORD*)(a1 + 660) = *(_DWORD*)(a1 + 328);
	*(_DWORD*)(a1 + 740) = *(_DWORD*)(a1 + 408);
	*(_DWORD*)(a1 + 820) = *(_DWORD*)(a1 + 488);
	*(_DWORD*)(a1 + 664) = *(_DWORD*)(a1 + 332);
	*(_DWORD*)(a1 + 744) = *(_DWORD*)(a1 + 412);
	*(_DWORD*)(a1 + 824) = *(_DWORD*)(a1 + 492);
	*(_DWORD*)(a1 + 668) = *(_DWORD*)(a1 + 336);
	*(_DWORD*)(a1 + 748) = *(_DWORD*)(a1 + 416);
	*(_DWORD*)(a1 + 828) = *(_DWORD*)(a1 + 496);
	*(_DWORD*)(a1 + 672) = *(_DWORD*)(a1 + 340);
	*(_DWORD*)(a1 + 752) = *(_DWORD*)(a1 + 420);
	*(_DWORD*)(a1 + 832) = *(_DWORD*)(a1 + 500);
	*(_DWORD*)(a1 + 676) = *(_DWORD*)(a1 + 344);
	*(_DWORD*)(a1 + 756) = *(_DWORD*)(a1 + 424);
	*(_DWORD*)(a1 + 836) = *(_DWORD*)(a1 + 504);
	*(_DWORD*)(a1 + 680) = *(_DWORD*)(a1 + 348);
	*(_DWORD*)(a1 + 760) = *(_DWORD*)(a1 + 428);
	*(_DWORD*)(a1 + 840) = *(_DWORD*)(a1 + 508);
	*(_DWORD*)(a1 + 684) = *(_DWORD*)(a1 + 352);
	*(_DWORD*)(a1 + 764) = *(_DWORD*)(a1 + 432);
	*(_DWORD*)(a1 + 844) = *(_DWORD*)(a1 + 512);
	*(_DWORD*)(a1 + 688) = *(_DWORD*)(a1 + 356);
	*(_DWORD*)(a1 + 768) = *(_DWORD*)(a1 + 436);
	*(_DWORD*)(a1 + 848) = *(_DWORD*)(a1 + 516);
	*(_DWORD*)(a1 + 692) = *(_DWORD*)(a1 + 360);
	*(_DWORD*)(a1 + 772) = *(_DWORD*)(a1 + 440);
	*(_DWORD*)(a1 + 852) = *(_DWORD*)(a1 + 520);
	*(_DWORD*)(a1 + 696) = *(_DWORD*)(a1 + 364);
	*(_DWORD*)(a1 + 776) = *(_DWORD*)(a1 + 444);
	*(_DWORD*)(a1 + 856) = *(_DWORD*)(a1 + 524);
	*(_DWORD*)(a1 + 700) = *(_DWORD*)(a1 + 368);
	*(_DWORD*)(a1 + 780) = *(_DWORD*)(a1 + 448);
	*(_DWORD*)(a1 + 860) = *(_DWORD*)(a1 + 528);
	*(_DWORD*)(a1 + 704) = *(_DWORD*)(a1 + 372);
	*(_DWORD*)(a1 + 784) = *(_DWORD*)(a1 + 452);
	*(_DWORD*)(a1 + 864) = *(_DWORD*)(a1 + 532);
	*(_DWORD*)(a1 + 708) = *(_DWORD*)(a1 + 376);
	*(_DWORD*)(a1 + 788) = *(_DWORD*)(a1 + 456);
	*(_DWORD*)(a1 + 868) = *(_DWORD*)(a1 + 536);
	*(_DWORD*)(a1 + 712) = *(_DWORD*)(a1 + 380);
	*(_DWORD*)(a1 + 792) = *(_DWORD*)(a1 + 460);
	*(_DWORD*)(a1 + 872) = *(_DWORD*)(a1 + 540);
	*(_DWORD*)(a1 + 716) = *(_DWORD*)(a1 + 384);
	*(_DWORD*)(a1 + 796) = *(_DWORD*)(a1 + 464);
	*(_DWORD*)(a1 + 876) = *(_DWORD*)(a1 + 544);
	*(_DWORD*)(a1 + 720) = *(_DWORD*)(a1 + 388);
	*(_DWORD*)(a1 + 800) = *(_DWORD*)(a1 + 468);
	*(_DWORD*)(a1 + 880) = *(_DWORD*)(a1 + 548);
	*(_DWORD*)(a1 + 724) = *(_DWORD*)(a1 + 392);
	*(_DWORD*)(a1 + 804) = *(_DWORD*)(a1 + 472);
	*(_DWORD*)(a1 + 884) = *(_DWORD*)(a1 + 552);
	*(_DWORD*)(a1 + 728) = *(_DWORD*)(a1 + 396);
	*(_DWORD*)(a1 + 808) = *(_DWORD*)(a1 + 476);
	*(_DWORD*)(a1 + 888) = *(_DWORD*)(a1 + 556);
	*(_DWORD*)(a1 + 732) = *(_DWORD*)(a1 + 400);
	*(_DWORD*)(a1 + 812) = *(_DWORD*)(a1 + 480);
	*(_DWORD*)(a1 + 892) = *(_DWORD*)(a1 + 560);
	*(_DWORD*)(a1 + 736) = *(_DWORD*)(a1 + 404);
	*(_DWORD*)(a1 + 816) = *(_DWORD*)(a1 + 484);
	result = *(unsigned int*)(a1 + 564);
	*(_DWORD*)(a1 + 896) = result;
	return result;
}
__int64 SubwooferGen2::sub_140237DA0(__int64 a1)
{
	__int64 result; // rax

	*(_QWORD*)(a1 + 128) = *(_QWORD*)(a1 + 152);
	*(_QWORD*)(a1 + 112) = *(_QWORD*)(a1 + 144);
	*(_DWORD*)(a1 + 256) = *(_DWORD*)(a1 + 652);
	*(_DWORD*)(a1 + 288) = *(_DWORD*)(a1 + 648);
	*(_DWORD*)(a1 + 328) = *(_DWORD*)(a1 + 660);
	*(_DWORD*)(a1 + 408) = *(_DWORD*)(a1 + 740);
	*(_DWORD*)(a1 + 488) = *(_DWORD*)(a1 + 820);
	*(_DWORD*)(a1 + 332) = *(_DWORD*)(a1 + 664);
	*(_DWORD*)(a1 + 412) = *(_DWORD*)(a1 + 744);
	*(_DWORD*)(a1 + 492) = *(_DWORD*)(a1 + 824);
	*(_DWORD*)(a1 + 336) = *(_DWORD*)(a1 + 668);
	*(_DWORD*)(a1 + 416) = *(_DWORD*)(a1 + 748);
	*(_DWORD*)(a1 + 496) = *(_DWORD*)(a1 + 828);
	*(_DWORD*)(a1 + 340) = *(_DWORD*)(a1 + 672);
	*(_DWORD*)(a1 + 420) = *(_DWORD*)(a1 + 752);
	*(_DWORD*)(a1 + 500) = *(_DWORD*)(a1 + 832);
	*(_DWORD*)(a1 + 344) = *(_DWORD*)(a1 + 676);
	*(_DWORD*)(a1 + 424) = *(_DWORD*)(a1 + 756);
	*(_DWORD*)(a1 + 504) = *(_DWORD*)(a1 + 836);
	*(_DWORD*)(a1 + 348) = *(_DWORD*)(a1 + 680);
	*(_DWORD*)(a1 + 428) = *(_DWORD*)(a1 + 760);
	*(_DWORD*)(a1 + 508) = *(_DWORD*)(a1 + 840);
	*(_DWORD*)(a1 + 352) = *(_DWORD*)(a1 + 684);
	*(_DWORD*)(a1 + 432) = *(_DWORD*)(a1 + 764);
	*(_DWORD*)(a1 + 512) = *(_DWORD*)(a1 + 844);
	*(_DWORD*)(a1 + 356) = *(_DWORD*)(a1 + 688);
	*(_DWORD*)(a1 + 436) = *(_DWORD*)(a1 + 768);
	*(_DWORD*)(a1 + 516) = *(_DWORD*)(a1 + 848);
	*(_DWORD*)(a1 + 360) = *(_DWORD*)(a1 + 692);
	*(_DWORD*)(a1 + 440) = *(_DWORD*)(a1 + 772);
	*(_DWORD*)(a1 + 520) = *(_DWORD*)(a1 + 852);
	*(_DWORD*)(a1 + 364) = *(_DWORD*)(a1 + 696);
	*(_DWORD*)(a1 + 444) = *(_DWORD*)(a1 + 776);
	*(_DWORD*)(a1 + 524) = *(_DWORD*)(a1 + 856);
	*(_DWORD*)(a1 + 368) = *(_DWORD*)(a1 + 700);
	*(_DWORD*)(a1 + 448) = *(_DWORD*)(a1 + 780);
	*(_DWORD*)(a1 + 528) = *(_DWORD*)(a1 + 860);
	*(_DWORD*)(a1 + 372) = *(_DWORD*)(a1 + 704);
	*(_DWORD*)(a1 + 452) = *(_DWORD*)(a1 + 784);
	*(_DWORD*)(a1 + 532) = *(_DWORD*)(a1 + 864);
	*(_DWORD*)(a1 + 376) = *(_DWORD*)(a1 + 708);
	*(_DWORD*)(a1 + 456) = *(_DWORD*)(a1 + 788);
	*(_DWORD*)(a1 + 536) = *(_DWORD*)(a1 + 868);
	*(_DWORD*)(a1 + 380) = *(_DWORD*)(a1 + 712);
	*(_DWORD*)(a1 + 460) = *(_DWORD*)(a1 + 792);
	*(_DWORD*)(a1 + 540) = *(_DWORD*)(a1 + 872);
	*(_DWORD*)(a1 + 384) = *(_DWORD*)(a1 + 716);
	*(_DWORD*)(a1 + 464) = *(_DWORD*)(a1 + 796);
	*(_DWORD*)(a1 + 544) = *(_DWORD*)(a1 + 876);
	*(_DWORD*)(a1 + 388) = *(_DWORD*)(a1 + 720);
	*(_DWORD*)(a1 + 468) = *(_DWORD*)(a1 + 800);
	*(_DWORD*)(a1 + 548) = *(_DWORD*)(a1 + 880);
	*(_DWORD*)(a1 + 392) = *(_DWORD*)(a1 + 724);
	*(_DWORD*)(a1 + 472) = *(_DWORD*)(a1 + 804);
	*(_DWORD*)(a1 + 552) = *(_DWORD*)(a1 + 884);
	*(_DWORD*)(a1 + 396) = *(_DWORD*)(a1 + 728);
	*(_DWORD*)(a1 + 476) = *(_DWORD*)(a1 + 808);
	*(_DWORD*)(a1 + 556) = *(_DWORD*)(a1 + 888);
	*(_DWORD*)(a1 + 400) = *(_DWORD*)(a1 + 732);
	*(_DWORD*)(a1 + 480) = *(_DWORD*)(a1 + 812);
	*(_DWORD*)(a1 + 560) = *(_DWORD*)(a1 + 892);
	*(_DWORD*)(a1 + 404) = *(_DWORD*)(a1 + 736);
	*(_DWORD*)(a1 + 484) = *(_DWORD*)(a1 + 816);
	result = *(unsigned int*)(a1 + 896);
	*(_DWORD*)(a1 + 564) = result;
	return result;
}
double SubwooferGen2::sub_140237B80(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
	return 1.0;
	/*__int64 v5; // rdx
	_QWORD* v6; // rdi
	int v7; // ebx
	_DWORD* v8; // rax
	__int64 v9; // rdx
	_DWORD* v10; // rax
	__int64 v11; // rdx
	__int64 v12; // rdx
	int v13; // edi
	__int64 v14; // rbx
	_QWORD* v15; // rdi
	int v16; // ebx
	_DWORD* v17; // rax
	_DWORD* v18; // rax
	__int64 v19; // rdx
	int v21; // [rsp+28h] [rbp-20h]
	int v22; // [rsp+30h] [rbp-18h]

	*(_BYTE*)(a1 + 32) = 0;
	if ((unsigned __int8)sub_140210740(a1, a2, a3, a4))
	{
		v6 = *(_QWORD * *)(a1 + 56);
		v7 = *(_DWORD*)(a1 + 72);
		sub_140007A80(v6);
		v8 = (_DWORD*)* v6;
		LOBYTE(v9) = 1;
		++v8[5];
		**(_BYTE * *)v8 = v7;
		v10 = (_DWORD*)* v6;
		++v10[5];
		*(_BYTE*)(*(_QWORD*)v10 + 1i64) = 23;
		sub_140007AF0(*v6, v9);
		*(_DWORD*)(*v6 + 12i64) = 6;
		sub_140212F70(*(_QWORD*)(a1 + 64), *(_QWORD*)(a1 + 56));
	}
	(*(void(__fastcall * *)(__int64, __int64, _QWORD))(*(_QWORD*)a1 + 184i64))(a1, v5, 0i64);
	Sleep(0x28u);
	(*(void(__fastcall * *)(__int64, __int64, _QWORD))(*(_QWORD*)a1 + 152i64))(a1, v11, 0i64);
	(*(void(__fastcall * *)(__int64, __int64, _QWORD))(*(_QWORD*)a1 + 528i64))(a1, v12, 0i64);
	(*(void(__fastcall * *)(__int64, _QWORD, _QWORD, _QWORD, _DWORD, char, _BYTE))(*(_QWORD*)a1 + 96i64))(
		a1,
		*(unsigned int*)(a1 + 160),
		*(unsigned int*)(a1 + 164),
		*(unsigned int*)(a1 + 168),
		*(_DWORD*)(a1 + 172),
		1,
		0);
	(*(void(__fastcall * *)(__int64, _QWORD, _QWORD))(*(_QWORD*)a1 + 576i64))(a1, *(unsigned int*)(a1 + 324), 0i64);
	(*(void(__fastcall * *)(__int64, _QWORD, _QWORD))(*(_QWORD*)a1 + 328i64))(a1, *(unsigned int*)(a1 + 288), 0i64);
	sub_140235DD0(a1, *(unsigned int*)(a1 + 292), 0i64);
	(*(void(__fastcall * *)(__int64, _QWORD, _QWORD))(*(_QWORD*)a1 + 368i64))(a1, *(unsigned int*)(a1 + 296), 0i64);
	LOBYTE(v22) = 0;
	(*(void(__fastcall * *)(__int64, _QWORD, _QWORD, _QWORD, _DWORD, _DWORD, int))(*(_QWORD*)a1 + 400i64))(
		a1,
		*(unsigned int*)(a1 + 308),
		*(unsigned int*)(a1 + 316),
		*(unsigned int*)(a1 + 300),
		*(_DWORD*)(a1 + 304),
		*(_DWORD*)(a1 + 312),
		v22);
	v13 = 0;
	v14 = a1 + 408;
	do
	{
		LOBYTE(v21) = 0;
		(*(void(__fastcall * *)(__int64, _QWORD, __int64, __int64, __int64, int))(*(_QWORD*)a1 + 256i64))(
			a1,
			(unsigned int)v13++,
			v14 - 80,
			v14,
			v14 + 80,
			v21);
		v14 += 4i64;
	} while (v13 < 20);
	v15 = *(_QWORD * *)(a1 + 56);
	v16 = *(_DWORD*)(a1 + 72);
	sub_140007A80(v15);
	v17 = (_DWORD*)* v15;
	++v17[5];
	**(_BYTE * *)v17 = v16;
	v18 = (_DWORD*)* v15;
	++v18[5];
	*(_BYTE*)(*(_QWORD*)v18 + 1i64) = 61;
	sub_140007AF0(*v15, 0i64);
	sub_140007AF0(*v15, v19);
	*(_DWORD*)(*v15 + 12i64) = 7;
	return sub_140212F70(*(_QWORD*)(a1 + 64), *(_QWORD*)(a1 + 56));*/
}
__int64 SubwooferGen2::sub_140237AD0(_BYTE* a1, __int64 a2, __int64 a3)
{
	return 1;
	/*__int64 v3; // rax
	char v4; // bl
	__int64 v6; // rdx
	__int64 v7; // r8
	__int64 v8; // r8
	__int64 v9; // rdx
	int v10; // ebx
	_BYTE* v11; // rdi
	__int64 result; // rax
	int v13; // [rsp+28h] [rbp-10h]
	int v14; // [rsp+48h] [rbp+10h] BYREF

	v3 = *(_QWORD*)a1;
	LOBYTE(a3) = 1;
	a1[32] = a2;
	v4 = a2;
	v14 = 0;
	(*(void(__fastcall * *)(_BYTE*, __int64, __int64))(v3 + 184))(a1, a2, a3);
	if (v4)
	{
		LOBYTE(v7) = 1;
		(*(void(__fastcall * *)(_BYTE*, __int64, __int64))(*(_QWORD*)a1 + 152i64))(a1, v6, v7);
		LOBYTE(v8) = 1;
		(*(void(__fastcall * *)(_BYTE*, __int64, __int64))(*(_QWORD*)a1 + 528i64))(a1, v9, v8);
	}
	v10 = 0;
	v11 = a1 + 328;
	do
	{
		LOBYTE(v13) = 1;
		result = (*(__int64(__fastcall * *)(_BYTE*, _QWORD, _BYTE*, int*, _BYTE*, int))(*(_QWORD*)a1 + 256i64))(
			a1,
			(unsigned int)v10++,
			v11,
			&v14,
			v11 + 160,
			v13);
		v11 += 4;
	} while (v10 < 20);
	return result;*/
}
bool SubwooferGen2::sub_1402377D0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, char a5, char a6, char a7, char a8, char a9, char a10, int a11, int a12)
{
	return 1;
	/*unsigned __int8 v12; // bp
	char v13; // r13
	char v14; // r14
	char v15; // bl
	__int64 v17; // rdx
	__int64 v18; // rcx
	__int64 v19; // r8
	int v20; // er12
	_QWORD* v21; // r15
	unsigned __int8 v22; // r13
	int v23; // er14
	int v24; // esi
	__int64 v25; // r9
	__int64 v26; // r8
	char v27; // dl
	unsigned __int8 v29; // cl
	unsigned __int8 v30; // dl
	unsigned __int8 v31; // cl
	unsigned __int8 v32; // bl
	_DWORD* v33; // rax
	_DWORD* v34; // rax
	__int64 v35; // rdx
	__int64 v36; // rdx
	__int64 v37; // rdx
	__int64 v38; // rdx
	__int64 v39; // rdx

	v12 = a11;
	v13 = a4;
	v14 = a3;
	v15 = a2;
	if (!(unsigned __int8)sub_140210740(a1, a2, a3, a4))
		return 0;
	if (v15)
	{
		LOBYTE(v19) = 1;
		(*(void(__fastcall * *)(__int64, __int64, __int64))(*(_QWORD*)a1 + 528i64))(a1, v17, v19);
	}
	if (a6)
	{
		sub_14021A290(v18, *(_QWORD*)(a1 + 56), *(unsigned int*)(a1 + 72), 120i64);
		sub_140212F70(*(_QWORD*)(a1 + 64), *(_QWORD*)(a1 + 56));
	}
	else if (!v15)
	{
		sub_14021A290(v18, *(_QWORD*)(a1 + 56), *(unsigned int*)(a1 + 72), *(unsigned int*)(a1 + 260));
		sub_140212F70(*(_QWORD*)(a1 + 64), *(_QWORD*)(a1 + 56));
		v20 = *(_DWORD*)(a1 + 72);
		v21 = *(_QWORD * *)(a1 + 56);
		goto LABEL_13;
	}
	v20 = *(_DWORD*)(a1 + 72);
	v21 = *(_QWORD * *)(a1 + 56);
	if (!v15)
	{
	LABEL_13:
		sub_14021C2C0(v18, (_DWORD)v21, v20, 0, v14, v13, a5, a6, a7, a8, a9, a10, 0, 0, a11, a12);
		goto LABEL_14;
	}
	if (!v14)
	{
		v22 = 8;
		goto LABEL_17;
	}
	v22 = 4;
	if (a11 > 0)
	{
	LABEL_18:
		LOBYTE(v23) = 0;
		LOBYTE(v24) = 0;
		goto LABEL_19;
	}
	if (!a11)
	{
	LABEL_17:
		v12 = 22;
		goto LABEL_18;
	}
	v23 = a11 >> 8;
	v24 = a11 >> 16;
LABEL_19:
	v29 = (4 * a10 + 0x80) | 8;
	if (!a9)
		v29 = 4 * a10 + 0x80;
	v30 = v29;
	v31 = v29 | 0x10;
	if (!a8)
		v31 = v30;
	v32 = v31 | 0x1C;
	if (!a7)
		v32 = v31;
	sub_140007A80(*(_QWORD*)(a1 + 56));
	v33 = (_DWORD*)* v21;
	++v33[5];
	**(_BYTE * *)v33 = v20;
	v34 = (_DWORD*)* v21;
	++v34[5];
	*(_BYTE*)(*(_QWORD*)v34 + 1i64) = 5;
	sub_140007AF0(*v21, v22);
	sub_140007AF0(*v21, v32);
	sub_140007AF0(*v21, 0i64);
	sub_140007AF0(*v21, v35);
	sub_140007AF0(*v21, (unsigned __int8)v24);
	sub_140007AF0(*v21, (unsigned __int8)v23);
	sub_140007AF0(*v21, v12);
	sub_140007AF0(*v21, 0i64);
	sub_140007AF0(*v21, v36);
	LOBYTE(v37) = 85;
	sub_140007AF0(*v21, v37);
	sub_140007AF0(*v21, 0i64);
	LOBYTE(v38) = 2;
	sub_140007AF0(*v21, v38);
	LOBYTE(v39) = -38;
	sub_140007AF0(*v21, v39);
	*(_DWORD*)(*v21 + 12i64) = 18;
LABEL_14:
	sub_140212F70(*(_QWORD*)(a1 + 64), *(_QWORD*)(a1 + 56));
	*(_DWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 56) + 8i64) + 20i64) = 1;
	v25 = *(_QWORD*)(*(_QWORD*)(a1 + 56) + 8i64);
	v26 = *(int*)(v25 + 20);
	v27 = *(_BYTE*)(v26 + *(_QWORD*)v25);
	*(_DWORD*)(v25 + 20) = v26 + 1;
	return v27 == 9;*/
}
void SubwooferGen2::sub_1402374F0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
	/*__int64 v4; // xmm1_8
	__int64 v6; // rcx
	__int64 v7; // rax

	if (!(_BYTE)a3)
		* (_QWORD*)(a1 + 112) = v4;
	if ((unsigned __int8)sub_140210740(a1, a2, a3, a4))
	{
		sub_140007A80(*(_QWORD*)(a1 + 56));
		v6 = *(unsigned __int8*)(a1 + 72);
		v7 = **(_QWORD * *)(a1 + 56);
		++* (_DWORD*)(v7 + 20);
		**(_BYTE * *)v7 = v6;
		sub_14021B2A0(v6, *(_QWORD*)(a1 + 56), *(unsigned int*)(a1 + 72));
		sub_140212F70(*(_QWORD*)(a1 + 64), *(_QWORD*)(a1 + 56));
	}*/
}
double SubwooferGen2::sub_1402374E0(__int64 a1)
{
	return *(double*)(a1 + 112);
}
void SubwooferGen2::sub_1402374D0(__int64 a1, double a2)
{
	*(double*)(a1 + 120) = a2;
}
double SubwooferGen2::sub_1402374B0(__int64 a1)
{
	double result; // xmm0_8

	result = *(double*)(a1 + 120);
	if (result == -999.0)
		result = 0.0;
	return result;
}
char SubwooferGen2::sub_140237590(__int64 a1, __int64 a2, __int64 a3)
{
	return 1;
	/*double v3; // xmm1_8
	__int64 v5; // rdx
	unsigned __int8 v6; // r9
	__int64 v7; // rcx
	__int64 v8; // rcx
	__int64 v9; // rax
	__int64 v10; // r9
	__int64 v11; // r8
	char v12; // dl
	char result; // al

	if (!(_BYTE)a3)
	{
		if (v3 <= 200.0)
		{
			if (v3 >= 0.0)
				* (double*)(a1 + 128) = v3;
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
		goto LABEL_13;
	if (*(int*)(a1 + 264) >= 0)
		v5 = 0i64;
	else
		LOBYTE(v5) = 1;
	(*(void(__fastcall * *)(__int64, __int64, _QWORD))(*(_QWORD*)a1 + 544i64))(a1, v5, v6);
	sub_14020F7C0(v7, *(unsigned int*)(a1 + 264), *(unsigned int*)(a1 + 260));
	sub_140007A80(*(_QWORD*)(a1 + 56));
	v8 = *(unsigned __int8*)(a1 + 72);
	v9 = **(_QWORD * *)(a1 + 56);
	++* (_DWORD*)(v9 + 20);
	**(_BYTE * *)v9 = v8;
	sub_14021B060(v8, *(_QWORD*)(a1 + 56), *(unsigned int*)(a1 + 72));
	sub_140212F70(*(_QWORD*)(a1 + 64), *(_QWORD*)(a1 + 56));
	*(_DWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 56) + 8i64) + 20i64) = 1;
	v10 = *(_QWORD*)(*(_QWORD*)(a1 + 56) + 8i64);
	v11 = *(int*)(v10 + 20);
	v12 = *(_BYTE*)(v11 + *(_QWORD*)v10);
	*(_DWORD*)(v10 + 20) = v11 + 1;
	if (v12 == 9)
		result = 1;
	else
		LABEL_13:
	result = 0;
	return result;*/
}
double SubwooferGen2::sub_140237580(__int64 a1)
{
	return *(double*)(a1 + 128);
}
char SubwooferGen2::sub_140236130(__int64 a1, _DWORD* a2, double* a3, __int64 a4)
{
	return 1;
	/*__int64 v7; // rdx
	char v8; // r8
	__int64 v9; // rax
	_DWORD* v10; // rax
	__int64 v11; // r9
	__int64 v12; // r8
	char v13; // dl
	__int64 v14; // r9
	__int64 v15; // r8
	int v16; // edx
	__int64 v17; // r9
	__int64 v18; // r8
	int v19; // edx
	__int64 v20; // r9
	__int64 v21; // r8
	int v22; // edx
	__int64 v23; // r9
	__int64 v24; // r8
	int v25; // edx
	__int64 v26; // r9
	__int64 v27; // r8
	int v28; // edx
	__int64 v29; // r9
	__int64 v30; // r8
	int v31; // edx
	__int64 v32; // r9
	__int64 v33; // r8
	int v34; // edx
	__int64 v35; // r9
	__int64 v36; // r8
	int v37; // edx
	__int64 v38; // r9
	__int64 v39; // r8
	int v40; // edx
	char result; // al

	if (!(unsigned __int8)sub_140210740(a1, a2, a3, a4))
		return 0;
	sub_140007A80(*(_QWORD*)(a1 + 56));
	LOBYTE(v7) = -124;
	v8 = *(_BYTE*)(a1 + 72);
	v9 = **(_QWORD * *)(a1 + 56);
	++* (_DWORD*)(v9 + 20);
	**(_BYTE * *)v9 = v8;
	v10 = **(_DWORD * **)(a1 + 56);
	++v10[5];
	*(_BYTE*)(*(_QWORD*)v10 + 1i64) = 85;
	sub_140007AF0(**(_QWORD * *)(a1 + 56), v7);
	*(_DWORD*)(**(_QWORD * *)(a1 + 56) + 12i64) = 6;
	sub_140212F70(*(_QWORD*)(a1 + 64), *(_QWORD*)(a1 + 56));
	*(_DWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 56) + 8i64) + 20i64) = 1;
	v11 = *(_QWORD*)(*(_QWORD*)(a1 + 56) + 8i64);
	v12 = *(int*)(v11 + 20);
	v13 = *(_BYTE*)(v12 + *(_QWORD*)v11);
	*(_DWORD*)(v11 + 20) = v12 + 1;
	if (v13 != 9)
		return 0;
	v14 = *(_QWORD*)(*(_QWORD*)(a1 + 56) + 8i64);
	v15 = *(int*)(v14 + 20);
	v16 = *(unsigned __int8*)(v15 + *(_QWORD*)v14);
	*(_DWORD*)(v14 + 20) = v15 + 1;
	*a2 = v16;
	v17 = *(_QWORD*)(*(_QWORD*)(a1 + 56) + 8i64);
	v18 = *(int*)(v17 + 20);
	v19 = *(unsigned __int8*)(v18 + *(_QWORD*)v17);
	*(_DWORD*)(v17 + 20) = v18 + 1;
	a2[1] = v19;
	v20 = *(_QWORD*)(*(_QWORD*)(a1 + 56) + 8i64);
	v21 = *(int*)(v20 + 20);
	v22 = *(unsigned __int8*)(v21 + *(_QWORD*)v20);
	*(_DWORD*)(v20 + 20) = v21 + 1;
	a2[2] = v22;
	v23 = *(_QWORD*)(*(_QWORD*)(a1 + 56) + 8i64);
	v24 = *(int*)(v23 + 20);
	v25 = *(unsigned __int8*)(v24 + *(_QWORD*)v23);
	*(_DWORD*)(v23 + 20) = v24 + 1;
	a2[3] = v25;
	v26 = *(_QWORD*)(*(_QWORD*)(a1 + 56) + 8i64);
	v27 = *(int*)(v26 + 20);
	v28 = *(unsigned __int8*)(v27 + *(_QWORD*)v26);
	*(_DWORD*)(v26 + 20) = v27 + 1;
	a2[4] = v28;
	v29 = *(_QWORD*)(*(_QWORD*)(a1 + 56) + 8i64);
	v30 = *(int*)(v29 + 20);
	v31 = *(unsigned __int8*)(v30 + *(_QWORD*)v29);
	*(_DWORD*)(v29 + 20) = v30 + 1;
	a2[5] = v31;
	v32 = *(_QWORD*)(*(_QWORD*)(a1 + 56) + 8i64);
	v33 = *(int*)(v32 + 20);
	v34 = *(unsigned __int8*)(v33 + *(_QWORD*)v32);
	*(_DWORD*)(v32 + 20) = v33 + 1;
	a2[6] = v34;
	v35 = *(_QWORD*)(*(_QWORD*)(a1 + 56) + 8i64);
	v36 = *(int*)(v35 + 20);
	v37 = *(unsigned __int8*)(v36 + *(_QWORD*)v35);
	*(_DWORD*)(v35 + 20) = v36 + 1;
	a2[7] = v37;
	++* (_DWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 56) + 8i64) + 20i64);
	++* (_DWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 56) + 8i64) + 20i64);
	++* (_DWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 56) + 8i64) + 20i64);
	v38 = *(_QWORD*)(*(_QWORD*)(a1 + 56) + 8i64);
	v39 = *(int*)(v38 + 20);
	v40 = *(unsigned __int8*)(v39 + *(_QWORD*)v38);
	*(_DWORD*)(v38 + 20) = v39 + 1;
	result = 1;
	*a3 = fmin(0.0, (double)v40 * -1.0 / 10.0);
	return result;*/
}
bool SubwooferGen2::sub_1402360B0(__int64 a1, __int64 a2, __int64 a3)
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
		if ((*(unsigned __int8(__fastcall * *)(__int64*, char*, __int64*))(v4 + 200))(v3, v7, &v6))
		{
			if ((v7[12] & 4) != 0 || v7[0] < 0)
				result = 1;
		}
	}
	return result;*/
}
__int64 SubwooferGen2::sub_1402366A0(__int64 a1, __int64 a2, _DWORD* a3, _DWORD* a4, _DWORD* a5)
{
	return 1;
	/*__int64 v7; // rdi
	__int64 v9; // rdx
	char v10; // cl
	__int64 v11; // rax
	_DWORD* v12; // rax
	__int64 v13; // r9
	__int64 v14; // r8
	char v15; // dl
	__int64 result; // rax

	v7 = (int)a2;
	if ((unsigned __int8)sub_140210740(a1, a2, a3, a4))
	{
		if (!*(_DWORD*)(a1 + 4 * v7 + 568))
		{
			*(_DWORD*)(a1 + 4 * v7 + 568) = 12000;
			sub_140007A80(*(_QWORD*)(a1 + 56));
			LOBYTE(v9) = -114;
			v10 = *(_BYTE*)(a1 + 72);
			v11 = **(_QWORD * *)(a1 + 56);
			++* (_DWORD*)(v11 + 20);
			**(_BYTE * *)v11 = v10;
			v12 = **(_DWORD * **)(a1 + 56);
			++v12[5];
			*(_BYTE*)(*(_QWORD*)v12 + 1i64) = 16;
			sub_140007AF0(**(_QWORD * *)(a1 + 56), v9);
			sub_140007AF0(**(_QWORD * *)(a1 + 56), (unsigned __int8)v7);
			*(_DWORD*)(**(_QWORD * *)(a1 + 56) + 12i64) = 7;
			sub_140212F70(*(_QWORD*)(a1 + 64), *(_QWORD*)(a1 + 56));
			*(_DWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 56) + 8i64) + 20i64) = 1;
			v13 = *(_QWORD*)(*(_QWORD*)(a1 + 56) + 8i64);
			v14 = *(int*)(v13 + 20);
			v15 = *(_BYTE*)(v14 + *(_QWORD*)v13);
			*(_DWORD*)(v13 + 20) = v14 + 1;
			if (v15 == 9)
			{
				*(_DWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 56) + 8i64) + 20i64) = 2;
				++* (_DWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 56) + 8i64) + 20i64);
				++* (_DWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 56) + 8i64) + 20i64);
				++* (_DWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 56) + 8i64) + 20i64);
				++* (_DWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 56) + 8i64) + 20i64);
				++* (_DWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 56) + 8i64) + 20i64);
				++* (_DWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 56) + 8i64) + 20i64);
				++* (_DWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 56) + 8i64) + 20i64);
				++* (_DWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 56) + 8i64) + 20i64);
				++* (_DWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 56) + 8i64) + 20i64);
				++* (_DWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 56) + 8i64) + 20i64);
				++* (_DWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 56) + 8i64) + 20i64);
				++* (_DWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 56) + 8i64) + 20i64);
				++* (_DWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 56) + 8i64) + 20i64);
				++* (_DWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 56) + 8i64) + 20i64);
				++* (_DWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 56) + 8i64) + 20i64);
				++* (_DWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 56) + 8i64) + 20i64);
				++* (_DWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 56) + 8i64) + 20i64);
				++* (_DWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 56) + 8i64) + 20i64);
				++* (_DWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 56) + 8i64) + 20i64);
				++* (_DWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 56) + 8i64) + 20i64);
			}
		}
	}
	*a3 = *(_DWORD*)(a1 + 4 * v7 + 328);
	*a4 = *(_DWORD*)(a1 + 4 * v7 + 408);
	result = *(unsigned int*)(a1 + 4 * v7 + 488);
	*a5 = result;
	return result;*/
}
double SubwooferGen2::sub_140236370(__int64 a1, __int64 a2, _DWORD* a3, _DWORD* a4, float* a5, char a6)
{
	return 1.0;
	/*double result; // xmm0_8
	unsigned __int8 v8; // di
	float* v10; // r9
	float v11; // xmm10_4
	double v12; // xmm0_8
	double v13; // xmm7_8
	float v14; // xmm6_4
	double v15; // xmm11_8
	double v16; // xmm9_8
	double v17; // xmm6_8
	double v18; // xmm9_8
	double v19; // xmm6_8
	float v20; // xmm7_4
	float v21; // xmm2_4
	float v22; // xmm3_4
	float v23; // xmm1_4
	__int64 v24; // rcx
	__int64 v25; // rdx
	char v26; // cl
	__int64 v27; // rax
	_DWORD* v28; // rax
	__int64 i; // r9
	__int64 v30; // r9
	float v31; // [rsp+20h] [rbp-C8h]
	__int64 v32; // [rsp+24h] [rbp-C4h]
	__int64 v33; // [rsp+34h] [rbp-B4h]
	unsigned __int8 v34; // [rsp+40h] [rbp-A8h]
	float v35; // [rsp+41h] [rbp-A7h]
	__int64 v36; // [rsp+45h] [rbp-A3h]
	__int64 v37; // [rsp+4Dh] [rbp-9Bh]

	*(_QWORD*)& result = (unsigned int)* a4;
	v8 = a2;
	if (*(float*)& result > 3.0)
		* a4 = 1077936128;
	if (!a6)
	{
		*(_DWORD*)(a1 + 4i64 * (int)a2 + 328) = *a3;
		*(_DWORD*)(a1 + 4i64 * (int)a2 + 408) = *a4;
		*(_QWORD*)& result = *(unsigned int*)a5;
		if (*(float*)& result <= 0.0)
			* (_DWORD*)(a1 + 4i64 * (int)a2 + 488) = 1065353216;
		else
			*(_DWORD*)(a1 + 4i64 * (int)a2 + 488) = LODWORD(result);
	}
	*(_DWORD*)(a1 + 4i64 * (int)a2 + 568) = 12000;
	if ((unsigned __int8)sub_140210740(a1, a2, a3, a4))
	{
		v11 = *v10;
		v12 = pow(10.0, (float)(*v10 / 20.0));
		if (v12 < 0.0)
			v13 = sqrt(v12);
		else
			v13 = sqrt(v12);
		v14 = *a5;
		v15 = (float)((float)(*(float*)a3 * 6.2831855) / 12000.0);
		v16 = sin(v15) / (float)(v14 + v14);
		if (v11 == 0.0)
		{
			v31 = 1.0;
			v32 = 0i64;
			v33 = 0i64;
		}
		else
		{
			v17 = v16;
			v18 = v16 / v13;
			v19 = v17 * v13;
			v20 = v18 + 1.0;
			v21 = v19 + 1.0;
			v31 = v21 / v20;
			v22 = cos(v15) * -2.0;
			v23 = 1.0 - v19;
			*(float*)& v32 = v22 / v20;
			*((float*)& v33 + 1) = (float)((float)(1.0 - v18) / v20) * -1.0;
			*((float*)& v32 + 1) = v23 / v20;
			*(float*)& v33 = (float)(v22 / v20) * -1.0;
		}
		v24 = *(_QWORD*)(a1 + 56);
		v35 = v31;
		v36 = v32;
		v37 = v33;
		v34 = v8;
		sub_140007A80(v24);
		LOBYTE(v25) = 14;
		v26 = *(_BYTE*)(a1 + 72);
		v27 = **(_QWORD * *)(a1 + 56);
		++* (_DWORD*)(v27 + 20);
		**(_BYTE * *)v27 = v26;
		v28 = **(_DWORD * **)(a1 + 56);
		++v28[5];
		*(_BYTE*)(*(_QWORD*)v28 + 1i64) = 16;
		sub_140007AF0(**(_QWORD * *)(a1 + 56), v25);
		sub_140007AF0(**(_QWORD * *)(a1 + 56), v8);
		for (i = 1i64; i < 21; i = v30 + 1)
			sub_140007AF0(**(_QWORD * *)(a1 + 56), *(&v34 + i));
		*(_DWORD*)(**(_QWORD * *)(a1 + 56) + 12i64) = 28;
		result = sub_140212F70(*(_QWORD*)(a1 + 64), *(_QWORD*)(a1 + 56));
	}
	return result;*/
}
__int64 SubwooferGen2::sub_140235A60(__int64 a1)
{
	return 1;
	/*double v1; // xmm0_8
	double v2; // xmm4_8

	v1 = sub_14020F7C0(a1, *(unsigned int*)(a1 + 264), *(unsigned int*)(a1 + 260));
	return (unsigned int)(int)(v2 - v1);*/
}
__int64 SubwooferGen2::sub_140235A30(double* a1, int a2, char a3)
{
	if (!a3)
		a1[17] = (double)a2;
	return (*(__int64 (**)(void))(*(_QWORD*)a1 + 184i64))();
}
__int64 SubwooferGen2::sub_140235A20(__int64 a1)
{
	return (unsigned int)(int) * (double*)(a1 + 136);
}
__int64 SubwooferGen2::sub_140236010(__int64 a1, _DWORD* a2)
{
	__int64 result; // rax

	result = *(unsigned int*)(a1 + 288);
	*a2 = result;
	return result;
}
bool SubwooferGen2::sub_140235E70(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
	return true;
	/*unsigned __int8 v4; // r14
	unsigned int v5; // ebp
	int v7; // ebx
	_QWORD* v8; // rdi
	_DWORD* v9; // rax
	_DWORD* v10; // rax
	__int64 v11; // rdx
	__int64 v12; // rdx
	__int64 v13; // rdx
	__int64 v14; // rcx
	__int64 v15; // r8
	__int64 v16; // rdx
	unsigned int v17; // ebx
	__int64 v18; // r9
	__int64 v19; // r8
	__int64 v20; // rdx
	char v21; // bl

	v4 = a3;
	v5 = a2;
	if (!(_BYTE)a3)
		* (_DWORD*)(a1 + 288) = a2;
	*(_DWORD*)(a1 + 260) = a2;
	if (!(unsigned __int8)sub_140210740(a1, a2, a3, a4))
		return 0;
	if (v5 == 1)
	{
		v7 = *(_DWORD*)(a1 + 72);
		v8 = *(_QWORD * *)(a1 + 56);
		sub_140007A80(v8);
		v9 = (_DWORD*)* v8;
		++v9[5];
		**(_BYTE * *)v9 = v7;
		v10 = (_DWORD*)* v8;
		++v10[5];
		*(_BYTE*)(*(_QWORD*)v10 + 1i64) = 64;
		sub_140007AF0(*v8, 0i64);
		sub_140007AF0(*v8, v11);
		sub_140007AF0(*v8, v12);
		sub_140007AF0(*v8, v13);
		*(_DWORD*)(*v8 + 12i64) = 9;
		sub_140212F70(*(_QWORD*)(a1 + 64), *(_QWORD*)(a1 + 56));
	}
	(*(void(__fastcall * *)(__int64, _QWORD, _QWORD, _QWORD, char, char))(*(_QWORD*)a1 + 56i64))(
		a1,
		*(unsigned int*)(a1 + 192),
		0i64,
		0i64,
		1,
		1);
	v15 = *(unsigned int*)(a1 + 72);
	v16 = *(_QWORD*)(a1 + 56);
	if (v5)
	{
		v18 = 120i64;
		if (v5 != 1)
			v18 = v5;
		sub_14021A290(v14, v16, v15, v18);
		v17 = 0;
	}
	else
	{
		*(_DWORD*)(a1 + 260) = 85;
		sub_14021A290(v14, v16, v15, 85i64);
		v17 = 1;
	}
	sub_140212F70(*(_QWORD*)(a1 + 64), *(_QWORD*)(a1 + 56));
	sub_140235DD0(a1, v17, v4);
	*(_DWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 56) + 8i64) + 20i64) = 1;
	v19 = *(_QWORD*)(*(_QWORD*)(a1 + 56) + 8i64);
	v20 = *(int*)(v19 + 20);
	v21 = *(_BYTE*)(v20 + *(_QWORD*)v19);
	*(_DWORD*)(v19 + 20) = v20 + 1;
	(*(void(__fastcall * *)(__int64, __int64, _QWORD))(*(_QWORD*)a1 + 184i64))(a1, v20, v4);
	return v21 == 9;*/
}
__int64 SubwooferGen2::sub_140235DC0(__int64 a1, _DWORD* a2)
{
	__int64 result; // rax

	result = *(unsigned int*)(a1 + 296);
	*a2 = result;
	return result;
}
__int64 SubwooferGen2::sub_140235D70(__int64 a1, __int64 a2, __int64 a3)
{
	return 1;
	/*__int64 result; // rax
	__int64 v4; // rdx
	__int64 v5; // r9
	unsigned __int8 v6; // r10

	if (!(_BYTE)a3)
		* (_DWORD*)(a1 + 296) = a2;
	*(_DWORD*)(a1 + 264) = a2;
	result = sub_140210740(a1, a2, a3, a1);
	if ((_BYTE)result)
		result = (*(__int64(__fastcall * *)(__int64, __int64, _QWORD))(*(_QWORD*)v5 + 184i64))(v5, v4, v6);
	return result;*/
}
_QWORD* SubwooferGen2::sub_140235CC0(__int64 a1, _QWORD* a2)
{
	__int64 v2; // r8
	_QWORD* result; // rax

	/*v2 = *(_QWORD*)(a1 + 280);
	*a2 = v2;
	result = a2;
	if ((*(_DWORD*)(v2 - 16) & 0x30000000) == 0)
		_InterlockedIncrement((volatile signed __int32*)(v2 - 16));
	return result;*/
	return a2;
}
void SubwooferGen2::sub_140235C40(__int64 a1, __int64* a2)
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
__int64 SubwooferGen2::sub_1402359F0(unsigned int* a1, _DWORD* a2, _DWORD* a3, _DWORD* a4)
{
	__int64 result; // rax

	*a2 = a1[77];
	*a3 = a1[79];
	result = a1[75];
	*a4 = result;
	return result;
}
void SubwooferGen2::sub_1402358F0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
	/*__int64 v5; // rdx
	_QWORD* v6; // rdi
	char v7; // si
	_DWORD* v8; // rax
	_DWORD* v9; // rax
	__int64 v10; // rdx
	__int64 v11; // rax
	_DWORD* v12; // rax

	*(_DWORD*)(a1 + 308) = a2;
	*(_DWORD*)(a1 + 316) = a3;
	*(_DWORD*)(a1 + 300) = a4;
	if ((unsigned __int8)sub_140210740(a1, a2, a3, a4))
	{
		v5 = *(unsigned int*)(a1 + 192);
		if ((unsigned int)(v5 - 1) <= 2)
			(*(void(__fastcall * *)(__int64, __int64, _QWORD, _QWORD, char, char))(*(_QWORD*)a1 + 56i64))(
				a1,
				v5,
				0i64,
				0i64,
				1,
				1);
		v6 = *(_QWORD * *)(a1 + 56);
		v7 = *(_BYTE*)(a1 + 72);
		if (*(_DWORD*)(a1 + 300))
		{
			sub_140007A80(v6);
			v8 = (_DWORD*)* v6;
			++v8[5];
			**(_BYTE * *)v8 = v7;
			v9 = (_DWORD*)* v6;
			++v9[5];
			*(_BYTE*)(*(_QWORD*)v9 + 1i64) = 62;
			sub_140007AF0(*v6, 0i64);
			LOBYTE(v10) = 10;
		}
		else
		{
			sub_140007A80(v6);
			v11 = *v6;
			++* (_DWORD*)(v11 + 20);
			**(_BYTE * *)v11 = v7;
			v12 = (_DWORD*)* v6;
			++v12[5];
			*(_BYTE*)(*(_QWORD*)v12 + 1i64) = 62;
			sub_140007AF0(*v6, 0i64);
		}
		sub_140007AF0(*v6, v10);
		*(_DWORD*)(*v6 + 12i64) = 7;
		sub_140212F70(*(_QWORD*)(a1 + 64), *(_QWORD*)(a1 + 56));
	}*/
}
__int64 SubwooferGen2::sub_140234B60(__int64 a1, __int64 a2)
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
	float v12; // xmm1_4
	__int64 v13; // rcx
	float v14; // xmm1_4
	__int64 v15; // rcx
	float v16; // xmm1_4
	__int64 v17; // rcx
	float v18; // xmm1_4
	__int64 v19; // rcx
	float v20; // xmm1_4
	__int64 v21; // rcx
	float v22; // xmm1_4
	__int64 v23; // rcx
	float v24; // xmm1_4
	__int64 v25; // rcx
	float v26; // xmm1_4
	__int64 v27; // rcx
	float v28; // xmm1_4
	__int64 v29; // rcx
	float v30; // xmm1_4
	__int64 v31; // rcx
	float v32; // xmm1_4
	__int64 v33; // rcx
	float v34; // xmm1_4
	__int64 v35; // rcx
	float v36; // xmm1_4
	__int64 v37; // rcx
	float v38; // xmm1_4
	__int64 v39; // rcx
	float v40; // xmm1_4
	__int64 v41; // rcx
	float v42; // xmm1_4
	__int64 v43; // rcx
	float v44; // xmm1_4
	__int64 v45; // rcx
	float v46; // xmm1_4
	__int64 v47; // rcx
	float v48; // xmm1_4
	__int64 v49; // rcx
	float v50; // xmm1_4
	__int64 v51; // rcx
	float v52; // xmm1_4
	__int64 v53; // rcx
	float v54; // xmm1_4
	__int64 v55; // rcx
	float v56; // xmm1_4
	__int64 v57; // rcx
	float v58; // xmm1_4
	__int64 v59; // rcx
	float v60; // xmm1_4
	__int64 v61; // rcx
	float v62; // xmm1_4
	__int64 v63; // rcx
	float v64; // xmm1_4
	__int64 v65; // rcx
	float v66; // xmm1_4
	__int64 v67; // rcx
	float v68; // xmm1_4
	__int64 v69; // rcx
	float v70; // xmm1_4
	__int64 v71; // rcx
	float v72; // xmm1_4
	__int64 v73; // rcx
	float v74; // xmm1_4
	__int64 v75; // rcx
	float v76; // xmm1_4
	__int64 v77; // rcx
	float v78; // xmm1_4
	__int64 v79; // rcx
	float v80; // xmm1_4
	__int64 v81; // rcx
	float v82; // xmm1_4
	_DWORD* v83; // rax
	_DWORD* v84; // rcx
	_BYTE* v85; // rax
	_BYTE* v86; // rcx
	_DWORD* v87; // rcx
	_DWORD* v88; // rcx
	_BYTE* v89; // rcx
	_BYTE* v90; // rcx
	_DWORD* v92; // [rsp+20h] [rbp-E0h] BYREF
	_BYTE* v93; // [rsp+28h] [rbp-D8h] BYREF
	_DWORD* v94; // [rsp+30h] [rbp-D0h] BYREF
	_DWORD* v95; // [rsp+38h] [rbp-C8h] BYREF
	_DWORD* v96; // [rsp+40h] [rbp-C0h] BYREF
	_DWORD* v97; // [rsp+48h] [rbp-B8h] BYREF
	_DWORD* v98; // [rsp+50h] [rbp-B0h] BYREF
	_DWORD* v99; // [rsp+58h] [rbp-A8h] BYREF
	_DWORD* v100; // [rsp+60h] [rbp-A0h] BYREF
	_DWORD* v101; // [rsp+68h] [rbp-98h] BYREF
	_DWORD* v102; // [rsp+70h] [rbp-90h] BYREF
	_DWORD* v103; // [rsp+78h] [rbp-88h] BYREF
	_DWORD* v104; // [rsp+80h] [rbp-80h] BYREF
	_DWORD* v105; // [rsp+88h] [rbp-78h] BYREF
	_DWORD* v106; // [rsp+90h] [rbp-70h] BYREF
	_DWORD* v107; // [rsp+98h] [rbp-68h] BYREF
	_DWORD* v108; // [rsp+A0h] [rbp-60h] BYREF
	_DWORD* v109; // [rsp+A8h] [rbp-58h] BYREF
	_DWORD* v110; // [rsp+B0h] [rbp-50h] BYREF
	_DWORD* v111; // [rsp+B8h] [rbp-48h] BYREF
	_DWORD* v112; // [rsp+C0h] [rbp-40h] BYREF
	_DWORD* v113; // [rsp+C8h] [rbp-38h] BYREF
	_DWORD* v114; // [rsp+D0h] [rbp-30h] BYREF
	_DWORD* v115; // [rsp+D8h] [rbp-28h] BYREF
	_DWORD* v116; // [rsp+E0h] [rbp-20h] BYREF
	_DWORD* v117; // [rsp+E8h] [rbp-18h] BYREF
	_DWORD* v118; // [rsp+F0h] [rbp-10h] BYREF
	_DWORD* v119; // [rsp+F8h] [rbp-8h] BYREF
	_DWORD* v120; // [rsp+100h] [rbp+0h] BYREF
	_DWORD* v121; // [rsp+108h] [rbp+8h] BYREF
	_DWORD* v122; // [rsp+110h] [rbp+10h] BYREF
	_DWORD* v123; // [rsp+118h] [rbp+18h] BYREF
	_DWORD* v124; // [rsp+120h] [rbp+20h] BYREF
	_DWORD* v125; // [rsp+128h] [rbp+28h] BYREF
	_DWORD* v126; // [rsp+130h] [rbp+30h] BYREF
	_DWORD* v127; // [rsp+138h] [rbp+38h] BYREF
	_DWORD* v128; // [rsp+140h] [rbp+40h] BYREF
	_DWORD* v129; // [rsp+148h] [rbp+48h] BYREF
	_DWORD* v130; // [rsp+150h] [rbp+50h] BYREF
	_DWORD* v131; // [rsp+158h] [rbp+58h] BYREF
	_DWORD* v132; // [rsp+160h] [rbp+60h] BYREF
	_DWORD* v133; // [rsp+168h] [rbp+68h] BYREF
	_BYTE* v134; // [rsp+170h] [rbp+70h] BYREF
	void* Block; // [rsp+178h] [rbp+78h]
	__int64 v136; // [rsp+188h] [rbp+88h]
	unsigned __int64 v137; // [rsp+190h] [rbp+90h]

	v137 = 15i64;
	v136 = 7i64;
	Block = (void*)0x5F6863746F4E5Bi64;
	v93 = dword_140DDCDD0;
	v92 = dword_140DDCDD0;
	v94 = dword_140DDCDD0;
	while (1)
	{
		v5 = (*(__int64(__fastcall * *)(__int64))(*(_QWORD*)a2 + 8i64))(a2);
		if (v5 >= 0)
			v5 -= (*(__int64(__fastcall * *)(__int64))(*(_QWORD*)a2 + 168i64))(a2);
		if (v5 <= 0)
			break;
		sub_14020FC70(v4, a2, &v93, &v92);
		v6 = v93;
		if ((unsigned int)String::isNotEmpty(v93, "[Model]"))
		{
			if ((unsigned int)String::isNotEmpty(v6, "[Time_of_Flight_s]"))
			{
				if ((unsigned int)String::isNotEmpty(v6, "[Level_dB]"))
				{
					if ((unsigned int)String::isNotEmpty(v6, "[Shelf_Offset_dB]"))
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
																	if ((unsigned int)String::isNotEmpty(v6, "[Notch_4_Q]"))
																	{
																		if ((unsigned int)String::isNotEmpty(v6, "[Notch_5_Frequency_Hz]"))
																		{
																			if ((unsigned int)String::isNotEmpty(v6, "[Notch_5_Gain_dB]"))
																			{
																				if ((unsigned int)String::isNotEmpty(v6, "[Notch_5_Q]"))
																				{
																					if ((unsigned int)String::isNotEmpty(v6, "[Notch_6_Frequency_Hz]"))
																					{
																						if ((unsigned int)String::isNotEmpty(v6, "[Notch_6_Gain_dB]"))
																						{
																							if ((unsigned int)String::isNotEmpty(v6, "[Notch_6_Q]"))
																							{
																								if ((unsigned int)String::isNotEmpty(v6, "[Notch_7_Frequency_Hz]"))
																								{
																									if ((unsigned int)String::isNotEmpty(v6, "[Notch_7_Gain_dB]"))
																									{
																										if ((unsigned int)String::isNotEmpty(v6, "[Notch_7_Q]"))
																										{
																											if ((unsigned int)String::isNotEmpty(
																												v6,
																												"[Notch_8_Frequency_Hz]"))
																											{
																												if ((unsigned int)String::isNotEmpty(v6, "[Notch_8_Gain_dB]"))
																												{
																													if ((unsigned int)String::isNotEmpty(v6, "[Notch_8_Q]"))
																													{
																														if ((unsigned int)String::isNotEmpty(
																															v6,
																															"[Notch_9_Frequency_Hz]"))
																														{
																															if ((unsigned int)String::isNotEmpty(
																																v6,
																																"[Notch_9_Gain_dB]"))
																															{
																																if ((unsigned int)String::isNotEmpty(v6, "[Notch_9_Q]"))
																																{
																																	if ((unsigned int)String::isNotEmpty(
																																		v6,
																																		"[Notch_10_Frequency_Hz]"))
																																	{
																																		if ((unsigned int)String::isNotEmpty(
																																			v6,
																																			"[Notch_10_Gain_dB]"))
																																		{
																																			if ((unsigned int)String::isNotEmpty(
																																				v6,
																																				"[Notch_10_Q]"))
																																			{
																																				if ((unsigned int)String::isNotEmpty(
																																					v6,
																																					"[Notch_11_Frequency_Hz]"))
																																				{
																																					if ((unsigned int)String::isNotEmpty(
																																						v6,
																																						"[Notch_11_Gain_dB]"))
																																					{
																																						if ((unsigned int)String::isNotEmpty(
																																							v6,
																																							"[Notch_11_Q]"))
																																						{
																																							if ((unsigned int)String::isNotEmpty(
																																								v6,
																																								"[Notch_12_Frequency_Hz]"))
																																							{
																																								if ((unsigned int)String::isNotEmpty(
																																									v6,
																																									"[Notch_12_Gain_dB]"))
																																								{
																																									if (!(unsigned int)String::isNotEmpty(v6, "[Notch_12_Q]"))
																																									{
																																										v132 = v92;
																																										v81 = (unsigned int) * (v92 - 4);
																																										if ((v81 & 0x30000000) == 0)
																																											_InterlockedIncrement(v92 - 4);
																																										v82 = sub_14020F700(v81, &v132);
																																										*(float*)(a1 + 532) = v82;
																																									}
																																								}
																																								else
																																								{
																																									v131 = v92;
																																									v79 = (unsigned int) * (v92 - 4);
																																									if ((v79 & 0x30000000) == 0)
																																										_InterlockedIncrement(v92 - 4);
																																									v80 = sub_14020F700(v79, &v131);
																																									*(float*)(a1 + 452) = v80;
																																								}
																																							}
																																							else
																																							{
																																								v130 = v92;
																																								v77 = (unsigned int) * (v92 - 4);
																																								if ((v77 & 0x30000000) == 0)
																																									_InterlockedIncrement(v92 - 4);
																																								v78 = sub_14020F700(v77, &v130);
																																								*(float*)(a1 + 372) = v78;
																																							}
																																						}
																																						else
																																						{
																																							v129 = v92;
																																							v75 = (unsigned int) * (v92 - 4);
																																							if ((v75 & 0x30000000) == 0)
																																								_InterlockedIncrement(v92 - 4);
																																							v76 = sub_14020F700(v75, &v129);
																																							*(float*)(a1 + 528) = v76;
																																						}
																																					}
																																					else
																																					{
																																						v128 = v92;
																																						v73 = (unsigned int) * (v92 - 4);
																																						if ((v73 & 0x30000000) == 0)
																																							_InterlockedIncrement(v92 - 4);
																																						v74 = sub_14020F700(v73, &v128);
																																						*(float*)(a1 + 448) = v74;
																																					}
																																				}
																																				else
																																				{
																																					v127 = v92;
																																					v71 = (unsigned int) * (v92 - 4);
																																					if ((v71 & 0x30000000) == 0)
																																						_InterlockedIncrement(v92 - 4);
																																					v72 = sub_14020F700(v71, &v127);
																																					*(float*)(a1 + 368) = v72;
																																				}
																																			}
																																			else
																																			{
																																				v126 = v92;
																																				v69 = (unsigned int) * (v92 - 4);
																																				if ((v69 & 0x30000000) == 0)
																																					_InterlockedIncrement(v92 - 4);
																																				v70 = sub_14020F700(v69, &v126);
																																				*(float*)(a1 + 524) = v70;
																																			}
																																		}
																																		else
																																		{
																																			v125 = v92;
																																			v67 = (unsigned int) * (v92 - 4);
																																			if ((v67 & 0x30000000) == 0)
																																				_InterlockedIncrement(v92 - 4);
																																			v68 = sub_14020F700(v67, &v125);
																																			*(float*)(a1 + 444) = v68;
																																		}
																																	}
																																	else
																																	{
																																		v124 = v92;
																																		v65 = (unsigned int) * (v92 - 4);
																																		if ((v65 & 0x30000000) == 0)
																																			_InterlockedIncrement(v92 - 4);
																																		v66 = sub_14020F700(v65, &v124);
																																		*(float*)(a1 + 364) = v66;
																																	}
																																}
																																else
																																{
																																	v123 = v92;
																																	v63 = (unsigned int) * (v92 - 4);
																																	if ((v63 & 0x30000000) == 0)
																																		_InterlockedIncrement(v92 - 4);
																																	v64 = sub_14020F700(v63, &v123);
																																	*(float*)(a1 + 520) = v64;
																																}
																															}
																															else
																															{
																																v122 = v92;
																																v61 = (unsigned int) * (v92 - 4);
																																if ((v61 & 0x30000000) == 0)
																																	_InterlockedIncrement(v92 - 4);
																																v62 = sub_14020F700(v61, &v122);
																																*(float*)(a1 + 440) = v62;
																															}
																														}
																														else
																														{
																															v121 = v92;
																															v59 = (unsigned int) * (v92 - 4);
																															if ((v59 & 0x30000000) == 0)
																																_InterlockedIncrement(v92 - 4);
																															v60 = sub_14020F700(v59, &v121);
																															*(float*)(a1 + 360) = v60;
																														}
																													}
																													else
																													{
																														v120 = v92;
																														v57 = (unsigned int) * (v92 - 4);
																														if ((v57 & 0x30000000) == 0)
																															_InterlockedIncrement(v92 - 4);
																														v58 = sub_14020F700(v57, &v120);
																														*(float*)(a1 + 516) = v58;
																													}
																												}
																												else
																												{
																													v119 = v92;
																													v55 = (unsigned int) * (v92 - 4);
																													if ((v55 & 0x30000000) == 0)
																														_InterlockedIncrement(v92 - 4);
																													v56 = sub_14020F700(v55, &v119);
																													*(float*)(a1 + 436) = v56;
																												}
																											}
																											else
																											{
																												v118 = v92;
																												v53 = (unsigned int) * (v92 - 4);
																												if ((v53 & 0x30000000) == 0)
																													_InterlockedIncrement(v92 - 4);
																												v54 = sub_14020F700(v53, &v118);
																												*(float*)(a1 + 356) = v54;
																											}
																										}
																										else
																										{
																											v117 = v92;
																											v51 = (unsigned int) * (v92 - 4);
																											if ((v51 & 0x30000000) == 0)
																												_InterlockedIncrement(v92 - 4);
																											v52 = sub_14020F700(v51, &v117);
																											*(float*)(a1 + 512) = v52;
																										}
																									}
																									else
																									{
																										v116 = v92;
																										v49 = (unsigned int) * (v92 - 4);
																										if ((v49 & 0x30000000) == 0)
																											_InterlockedIncrement(v92 - 4);
																										v50 = sub_14020F700(v49, &v116);
																										*(float*)(a1 + 432) = v50;
																									}
																								}
																								else
																								{
																									v115 = v92;
																									v47 = (unsigned int) * (v92 - 4);
																									if ((v47 & 0x30000000) == 0)
																										_InterlockedIncrement(v92 - 4);
																									v48 = sub_14020F700(v47, &v115);
																									*(float*)(a1 + 352) = v48;
																								}
																							}
																							else
																							{
																								v114 = v92;
																								v45 = (unsigned int) * (v92 - 4);
																								if ((v45 & 0x30000000) == 0)
																									_InterlockedIncrement(v92 - 4);
																								v46 = sub_14020F700(v45, &v114);
																								*(float*)(a1 + 508) = v46;
																							}
																						}
																						else
																						{
																							v113 = v92;
																							v43 = (unsigned int) * (v92 - 4);
																							if ((v43 & 0x30000000) == 0)
																								_InterlockedIncrement(v92 - 4);
																							v44 = sub_14020F700(v43, &v113);
																							*(float*)(a1 + 428) = v44;
																						}
																					}
																					else
																					{
																						v112 = v92;
																						v41 = (unsigned int) * (v92 - 4);
																						if ((v41 & 0x30000000) == 0)
																							_InterlockedIncrement(v92 - 4);
																						v42 = sub_14020F700(v41, &v112);
																						*(float*)(a1 + 348) = v42;
																					}
																				}
																				else
																				{
																					v111 = v92;
																					v39 = (unsigned int) * (v92 - 4);
																					if ((v39 & 0x30000000) == 0)
																						_InterlockedIncrement(v92 - 4);
																					v40 = sub_14020F700(v39, &v111);
																					*(float*)(a1 + 504) = v40;
																				}
																			}
																			else
																			{
																				v110 = v92;
																				v37 = (unsigned int) * (v92 - 4);
																				if ((v37 & 0x30000000) == 0)
																					_InterlockedIncrement(v92 - 4);
																				v38 = sub_14020F700(v37, &v110);
																				*(float*)(a1 + 424) = v38;
																			}
																		}
																		else
																		{
																			v109 = v92;
																			v35 = (unsigned int) * (v92 - 4);
																			if ((v35 & 0x30000000) == 0)
																				_InterlockedIncrement(v92 - 4);
																			v36 = sub_14020F700(v35, &v109);
																			*(float*)(a1 + 344) = v36;
																		}
																	}
																	else
																	{
																		v108 = v92;
																		v33 = (unsigned int) * (v92 - 4);
																		if ((v33 & 0x30000000) == 0)
																			_InterlockedIncrement(v92 - 4);
																		v34 = sub_14020F700(v33, &v108);
																		*(float*)(a1 + 500) = v34;
																	}
																}
																else
																{
																	v107 = v92;
																	v31 = (unsigned int) * (v92 - 4);
																	if ((v31 & 0x30000000) == 0)
																		_InterlockedIncrement(v92 - 4);
																	v32 = sub_14020F700(v31, &v107);
																	*(float*)(a1 + 420) = v32;
																}
															}
															else
															{
																v106 = v92;
																v29 = (unsigned int) * (v92 - 4);
																if ((v29 & 0x30000000) == 0)
																	_InterlockedIncrement(v92 - 4);
																v30 = sub_14020F700(v29, &v106);
																*(float*)(a1 + 340) = v30;
															}
														}
														else
														{
															v105 = v92;
															v27 = (unsigned int) * (v92 - 4);
															if ((v27 & 0x30000000) == 0)
																_InterlockedIncrement(v92 - 4);
															v28 = sub_14020F700(v27, &v105);
															*(float*)(a1 + 496) = v28;
														}
													}
													else
													{
														v104 = v92;
														v25 = (unsigned int) * (v92 - 4);
														if ((v25 & 0x30000000) == 0)
															_InterlockedIncrement(v92 - 4);
														v26 = sub_14020F700(v25, &v104);
														*(float*)(a1 + 416) = v26;
													}
												}
												else
												{
													v103 = v92;
													v23 = (unsigned int) * (v92 - 4);
													if ((v23 & 0x30000000) == 0)
														_InterlockedIncrement(v92 - 4);
													v24 = sub_14020F700(v23, &v103);
													*(float*)(a1 + 336) = v24;
												}
											}
											else
											{
												v102 = v92;
												v21 = (unsigned int) * (v92 - 4);
												if ((v21 & 0x30000000) == 0)
													_InterlockedIncrement(v92 - 4);
												v22 = sub_14020F700(v21, &v102);
												*(float*)(a1 + 492) = v22;
											}
										}
										else
										{
											v101 = v92;
											v19 = (unsigned int) * (v92 - 4);
											if ((v19 & 0x30000000) == 0)
												_InterlockedIncrement(v92 - 4);
											v20 = sub_14020F700(v19, &v101);
											*(float*)(a1 + 412) = v20;
										}
									}
									else
									{
										v100 = v92;
										v17 = (unsigned int) * (v92 - 4);
										if ((v17 & 0x30000000) == 0)
											_InterlockedIncrement(v92 - 4);
										v18 = sub_14020F700(v17, &v100);
										*(float*)(a1 + 332) = v18;
									}
								}
								else
								{
									v99 = v92;
									v15 = (unsigned int) * (v92 - 4);
									if ((v15 & 0x30000000) == 0)
										_InterlockedIncrement(v92 - 4);
									v16 = sub_14020F700(v15, &v99);
									*(float*)(a1 + 488) = v16;
								}
							}
							else
							{
								v98 = v92;
								v13 = (unsigned int) * (v92 - 4);
								if ((v13 & 0x30000000) == 0)
									_InterlockedIncrement(v92 - 4);
								v14 = sub_14020F700(v13, &v98);
								*(float*)(a1 + 408) = v14;
							}
						}
						else
						{
							v97 = v92;
							v11 = (unsigned int) * (v92 - 4);
							if ((v11 & 0x30000000) == 0)
								_InterlockedIncrement(v92 - 4);
							v12 = sub_14020F700(v11, &v97);
							*(float*)(a1 + 328) = v12;
						}
					}
					else
					{
						v96 = v92;
						v9 = (unsigned int) * (v92 - 4);
						if ((v9 & 0x30000000) == 0)
							_InterlockedIncrement(v92 - 4);
						v10 = sub_14020F700(v9, &v96);
						*(double*)(a1 + 112) = *(double*)(a1 + 112) - v10;
					}
				}
				else
				{
					v95 = v92;
					v8 = (unsigned int) * (v92 - 4);
					if ((v8 & 0x30000000) == 0)
						_InterlockedIncrement(v92 - 4);
					*(double*)(a1 + 112) = sub_14020F700(v8, &v95);
				}
			}
			else
			{
				*(_QWORD*)(a1 + 128) = 0i64;
			}
		}
		else
		{
			if ((*(v92 - 4) & 0x30000000) == 0)
				_InterlockedIncrement(v92 - 4);
			v7 = (_DWORD*)(_InterlockedExchange64((volatile __int64*)& v94, (__int64)v92) - 16);
			if ((*v7 & 0x30000000) == 0 && _InterlockedDecrement(v7) == -1)
				j_j_free(v7);
		}
		sub_140048D00(&v133, &unk_14046DFEB);
		v83 = v92;
		v92 = v133;
		v133 = v83;
		v84 = v83 - 4;
		if ((*(v83 - 4) & 0x30000000) == 0 && _InterlockedDecrement(v84) == -1)
			j_j_free(v84);
		sub_140048D00(&v134, &unk_14046DFEE);
		v85 = v93;
		v93 = v134;
		v134 = v85;
		v86 = v85 - 16;
		if ((*((_DWORD*)v85 - 4) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v86) == -1)
			j_j_free(v86);
	}
	*(_QWORD*)(a1 + 456) = 0i64;
	*(_QWORD*)(a1 + 464) = 0i64;
	*(_QWORD*)(a1 + 472) = 0i64;
	*(_QWORD*)(a1 + 480) = 0i64;
	*(_DWORD*)(a1 + 108) = 1;
	v87 = v94 - 4;
	if ((*(v94 - 4) & 0x30000000) == 0 && _InterlockedDecrement(v87) == -1)
		j_j_free(v87);
	v88 = v92 - 4;
	if ((*(v92 - 4) & 0x30000000) == 0 && _InterlockedDecrement(v88) == -1)
		j_j_free(v88);
	v89 = v93 - 16;
	if ((*((_DWORD*)v93 - 4) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v89) == -1)
		j_j_free(v89);
	if (v137 >= 0x10)
	{
		v90 = Block;
		if (v137 + 1 >= 0x1000)
		{
			v90 = (_BYTE*) * ((_QWORD*)Block - 1);
			if ((unsigned __int64)((_BYTE*)Block - v90 - 8) > 0x1F)
				invalid_parameter_noinfo_noreturn();
		}
		j_j_free(v90);
	}*/
	return 0i64;
}
__int64 SubwooferGen2::sub_140234B50()
{
	return 0i64;
}
__int64 SubwooferGen2::sub_140234240(__int64 a1, _QWORD* a2)
{
	return 1;
	/*__int64 v4; // rbx
	__int64 v5; // rax
	__int64 v6; // r12
	__int64 v7; // rax
	__int64(__fastcall * ***v8)(); // rax
	__int64(__fastcall * ***v9)(); // rbx
	void* v10; // rcx
	__int64 v11; // rcx
	__int64 v12; // rbx
	__int64 v13; // rax
	__int64 v14; // rax
	__int64(__fastcall * ***v15)(); // rax
	__int64(__fastcall * ***v16)(); // rbx
	void* v17; // rcx
	__int64 v18; // rcx
	__int64 v19; // rbx
	__int64 v20; // rax
	__int64 v21; // rax
	__int64(__fastcall * ***v22)(); // rax
	__int64* v23; // rbx
	void* v24; // rcx
	__int64 v25; // rbx
	__int64 v26; // rax
	__int64 v27; // rax
	__int64(__fastcall * ***v28)(); // rax
	__int64* v29; // rbx
	void* v30; // rcx
	int v31; // er14
	__int64 v32; // r15
	float* i; // rsi
	__int64 v34; // rax
	__int64* v35; // rax
	__int64 v36; // rdx
	__int64 v37; // rbx
	__int64 v38; // rax
	__int64 v39; // rax
	__int64(__fastcall * ***v40)(); // rbx
	void* v41; // rcx
	_BYTE* v42; // rbx
	int v43; // edi
	_BYTE* v44; // rcx
	__int64 v45; // rbx
	__int64 v46; // rax
	__int64 v47; // rax
	__int64(__fastcall * ***v48)(); // rax
	__int64(__fastcall * ***v49)(); // rbx
	void* v50; // rcx
	__int64 v51; // rcx
	float v52; // xmm1_4
	__int64 v53; // rbx
	__int64 v54; // rax
	__int64 v55; // rax
	__int64(__fastcall * ***v56)(); // rax
	__int64(__fastcall * ***v57)(); // rbx
	void* v58; // rcx
	__int64 v59; // rcx
	float v60; // xmm1_4
	__int64 v61; // rbx
	__int64 v62; // rax
	__int64 v63; // rax
	__int64(__fastcall * ***v64)(); // rax
	__int64(__fastcall * ***v65)(); // rbx
	void* v66; // rcx
	__int64 v67; // rcx
	float v68; // xmm1_4
	_QWORD* v69; // r13
	__int64 v70; // rbx
	const char* v72; // [rsp+30h] [rbp-D0h] BYREF
	__int64 v73; // [rsp+38h] [rbp-C8h] BYREF
	__int64 v74; // [rsp+40h] [rbp-C0h] BYREF
	__int64 v75; // [rsp+48h] [rbp-B8h] BYREF
	__int64 v76; // [rsp+50h] [rbp-B0h] BYREF
	__int64 v77; // [rsp+58h] [rbp-A8h] BYREF
	__int64 v78; // [rsp+60h] [rbp-A0h] BYREF
	__int64 v79; // [rsp+68h] [rbp-98h] BYREF
	__int64 v80; // [rsp+70h] [rbp-90h] BYREF
	const char* v81; // [rsp+78h] [rbp-88h] BYREF
	const char* v82; // [rsp+80h] [rbp-80h] BYREF
	const char* v83; // [rsp+88h] [rbp-78h] BYREF
	char v84[8]; // [rsp+90h] [rbp-70h] BYREF
	char v85[8]; // [rsp+98h] [rbp-68h] BYREF
	char v86[8]; // [rsp+A0h] [rbp-60h] BYREF
	__int64 v87; // [rsp+A8h] [rbp-58h]
	const char* v88; // [rsp+B0h] [rbp-50h] BYREF
	const char* v89; // [rsp+B8h] [rbp-48h] BYREF
	const char* v90; // [rsp+C0h] [rbp-40h] BYREF
	char v91[8]; // [rsp+C8h] [rbp-38h] BYREF
	char v92[8]; // [rsp+D0h] [rbp-30h] BYREF
	_BYTE* v93; // [rsp+D8h] [rbp-28h] BYREF
	const char* v94; // [rsp+E0h] [rbp-20h] BYREF
	_QWORD* v95; // [rsp+E8h] [rbp-18h]
	__int64 v96; // [rsp+F0h] [rbp-10h]
	__int64 v97; // [rsp+F8h] [rbp-8h]
	__int64 v98; // [rsp+100h] [rbp+0h]
	__int64 v99; // [rsp+108h] [rbp+8h]
	__int64 v100; // [rsp+110h] [rbp+10h]
	__int64 v101; // [rsp+118h] [rbp+18h]
	__int64 v102; // [rsp+120h] [rbp+20h]
	__int64 v103; // [rsp+128h] [rbp+28h]
	_QWORD* v104; // [rsp+130h] [rbp+30h]
	__int64 v105; // [rsp+138h] [rbp+38h]
	char v106[8]; // [rsp+140h] [rbp+40h] BYREF
	__int64 v107; // [rsp+148h] [rbp+48h]
	char v108[8]; // [rsp+150h] [rbp+50h] BYREF
	__int64 v109; // [rsp+158h] [rbp+58h]
	char v110[8]; // [rsp+160h] [rbp+60h] BYREF

	v95 = a2;
	v87 = a1;
	v104 = a2;
	v4 = sub_1402F7E90();
	v96 = v4 + 16;
	EnterCriticalSection((LPCRITICAL_SECTION)(v4 + 16));
	sub_1402F8020(v4);
	v94 = "delayrel";
	sub_1402DDCD0(&v73, v4, &v94);
	LeaveCriticalSection((LPCRITICAL_SECTION)(v4 + 16));
	v5 = (*(__int64(__fastcall * *)(_QWORD, _QWORD*))(*(_QWORD*)* a2 + 48i64))(*a2, a2 + 1);
	v6 = 0i64;
	v7 = _RTDynamicCast(
		v5,
		0i64,
		&juce::ReferenceCountedObject `RTTI Type Descriptor',
		& juce::DynamicObject `RTTI Type Descriptor',
		0);
	if (v7)
		v8 = (__int64(__fastcall * ***)())(*(__int64(__fastcall * *)(__int64, __int64*))(*(_QWORD*)v7 + 16i64))(v7, &v73);
	else
		v8 = sub_14030AB50();
	v9 = v8;
	v10 = (void*)(v73 - 16);
	if ((*(_DWORD*)(v73 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v10) == -1)
		j_j_free(v10);
	((void(__fastcall*)(__int64(__fastcall * **)(), char*, __int64(__fastcall * ***)()))(**v9)[4])(*v9, v91, v9 + 1);
	*(double*)(a1 + 128) = sub_14020F700(v11, v91) * 1000.0;
	v12 = sub_1402F7E90();
	v97 = v12 + 16;
	EnterCriticalSection((LPCRITICAL_SECTION)(v12 + 16));
	sub_1402F8020(v12);
	v82 = "levelcorrdb";
	sub_1402DDCD0(&v74, v12, &v82);
	LeaveCriticalSection((LPCRITICAL_SECTION)(v12 + 16));
	v13 = (*(__int64(__fastcall * *)(_QWORD, _QWORD*))(*(_QWORD*)* a2 + 48i64))(*a2, a2 + 1);
	v14 = _RTDynamicCast(
		v13,
		0i64,
		&juce::ReferenceCountedObject `RTTI Type Descriptor',
		& juce::DynamicObject `RTTI Type Descriptor',
		0);
	if (v14)
		v15 = (__int64(__fastcall * ***)())(*(__int64(__fastcall * *)(__int64, __int64*))(*(_QWORD*)v14 + 16i64))(
			v14,
			&v74);
	else
		v15 = sub_14030AB50();
	v16 = v15;
	v17 = (void*)(v74 - 16);
	if ((*(_DWORD*)(v74 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v17) == -1)
		j_j_free(v17);
	((void(__fastcall*)(__int64(__fastcall * **)(), char*, __int64(__fastcall * ***)()))(**v16)[4])(*v16, v92, v16 + 1);
	*(double*)(a1 + 112) = sub_14020F700(v18, v92) * -1.0 - 3.0;
	v19 = sub_1402F7E90();
	v98 = v19 + 16;
	EnterCriticalSection((LPCRITICAL_SECTION)(v19 + 16));
	sub_1402F8020(v19);
	v88 = "filter";
	sub_1402DDCD0(&v75, v19, &v88);
	LeaveCriticalSection((LPCRITICAL_SECTION)(v19 + 16));
	v20 = (*(__int64(__fastcall * *)(_QWORD, _QWORD*))(*(_QWORD*)* a2 + 48i64))(*a2, a2 + 1);
	v21 = _RTDynamicCast(
		v20,
		0i64,
		&juce::ReferenceCountedObject `RTTI Type Descriptor',
		& juce::DynamicObject `RTTI Type Descriptor',
		0);
	if (v21)
		v22 = (__int64(__fastcall * ***)())(*(__int64(__fastcall * *)(__int64, __int64*))(*(_QWORD*)v21 + 16i64))(
			v21,
			&v75);
	else
		v22 = sub_14030AB50();
	v23 = (__int64*)v22;
	v24 = (void*)(v75 - 16);
	if ((*(_DWORD*)(v75 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v24) == -1)
		j_j_free(v24);
	v109 = *v23;
	(*(void(__fastcall * *)(__int64, char*, __int64*))(*(_QWORD*)v109 + 184i64))(v109, v110, v23 + 1);
	v25 = sub_1402F7E90();
	v99 = v25 + 16;
	EnterCriticalSection((LPCRITICAL_SECTION)(v25 + 16));
	sub_1402F8020(v25);
	v89 = "sos";
	sub_1402DDCD0(&v76, v25, &v89);
	LeaveCriticalSection((LPCRITICAL_SECTION)(v25 + 16));
	v26 = (*(__int64(__fastcall * *)(__int64, char*))(*(_QWORD*)v109 + 48i64))(v109, v110);
	v27 = _RTDynamicCast(
		v26,
		0i64,
		&juce::ReferenceCountedObject `RTTI Type Descriptor',
		& juce::DynamicObject `RTTI Type Descriptor',
		0);
	if (v27)
		v28 = (__int64(__fastcall * ***)())(*(__int64(__fastcall * *)(__int64, __int64*))(*(_QWORD*)v27 + 16i64))(
			v27,
			&v76);
	else
		v28 = sub_14030AB50();
	v29 = (__int64*)v28;
	v30 = (void*)(v76 - 16);
	if ((*(_DWORD*)(v76 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v30) == -1)
		j_j_free(v30);
	v107 = *v29;
	(*(void(__fastcall * *)(void*, char*, __int64*))(*(_QWORD*)v107 + 184i64))(v30, v108, v29 + 1);
	v31 = 0;
	v32 = 0i64;
	for (i = (float*)(a1 + 408); ; ++i)
	{
		v34 = (*(__int64(__fastcall * *)(__int64, char*))(*(_QWORD*)v107 + 56i64))(v107, v108);
		if (v34)
			LODWORD(v34) = *(_DWORD*)(v34 + 12);
		if (v31 >= (int)v34)
			break;
		v35 = (__int64*)(*(__int64(__fastcall * *)(__int64, char*))(*(_QWORD*)v107 + 56i64))(v107, v108);
		v36 = *v35;
		v105 = *(_QWORD*)(v6 + *v35);
		(*(void(__fastcall * *)(__int64, char*, __int64))(*(_QWORD*)v105 + 184i64))(v105, v106, v6 + v36 + 8);
		v37 = sub_1402F7E90();
		v100 = v37 + 16;
		EnterCriticalSection((LPCRITICAL_SECTION)(v37 + 16));
		sub_1402F8020(v37);
		v90 = "type";
		sub_1402DDCD0(&v77, v37, &v90);
		LeaveCriticalSection((LPCRITICAL_SECTION)(v37 + 16));
		v38 = (*(__int64(__fastcall * *)(__int64, char*))(*(_QWORD*)v105 + 48i64))(v105, v106);
		v39 = _RTDynamicCast(
			v38,
			0i64,
			&juce::ReferenceCountedObject `RTTI Type Descriptor',
			& juce::DynamicObject `RTTI Type Descriptor',
			0);
		if (v39)
		{
			v40 = (__int64(__fastcall * ***)())(*(__int64(__fastcall * *)(__int64, __int64*))(*(_QWORD*)v39 + 16i64))(
				v39,
				&v77);
		}
		else
		{
			if (dword_140EC06B4 > * (_DWORD*)(*(_QWORD*)NtCurrentTeb()->ThreadLocalStoragePointer + 4i64))
			{
				Init_thread_header(&dword_140EC06B4);
				if (dword_140EC06B4 == -1)
				{
					off_140EB1E18 = off_140EB1BC8;
					atexit(sub_14046AD80);
					Init_thread_footer(&dword_140EC06B4);
				}
			}
			v40 = &off_140EB1E18;
		}
		v41 = (void*)(v77 - 16);
		if ((*(_DWORD*)(v77 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v41) == -1)
			j_j_free(v41);
		((void(__fastcall*)(__int64(__fastcall * **)(), _BYTE * *, __int64(__fastcall * ***)()))(**v40)[4])(
			*v40,
			&v93,
			v40 + 1);
		v42 = v93;
		v43 = String::isNotEmpty(v93, "NOTCH");
		v44 = v42 - 16;
		if ((*((_DWORD*)v42 - 4) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v44) == -1)
			j_j_free(v44);
		if (!v43)
		{
			v45 = sub_1402F7E90();
			v101 = v45 + 16;
			EnterCriticalSection((LPCRITICAL_SECTION)(v45 + 16));
			sub_1402F8020(v45);
			v81 = "fc";
			sub_1402DDCD0(&v78, v45, &v81);
			LeaveCriticalSection((LPCRITICAL_SECTION)(v45 + 16));
			v46 = (*(__int64(__fastcall * *)(__int64, char*))(*(_QWORD*)v105 + 48i64))(v105, v106);
			v47 = _RTDynamicCast(
				v46,
				0i64,
				&juce::ReferenceCountedObject `RTTI Type Descriptor',
				& juce::DynamicObject `RTTI Type Descriptor',
				0);
			if (v47)
				v48 = (__int64(__fastcall * ***)())(*(__int64(__fastcall * *)(__int64, __int64*))(*(_QWORD*)v47 + 16i64))(
					v47,
					&v78);
			else
				v48 = sub_14030AB50();
			v49 = v48;
			v50 = (void*)(v78 - 16);
			if ((*(_DWORD*)(v78 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v50) == -1)
				j_j_free(v50);
			((void(__fastcall*)(__int64(__fastcall * **)(), char*, __int64(__fastcall * ***)()))(**v49)[4])(
				*v49,
				v84,
				v49 + 1);
			v52 = sub_14020F700(v51, v84);
			*(i - 20) = v52;
			v53 = sub_1402F7E90();
			v102 = v53 + 16;
			EnterCriticalSection((LPCRITICAL_SECTION)(v53 + 16));
			sub_1402F8020(v53);
			v83 = "g";
			sub_1402DDCD0(&v79, v53, &v83);
			LeaveCriticalSection((LPCRITICAL_SECTION)(v53 + 16));
			v54 = (*(__int64(__fastcall * *)(__int64, char*))(*(_QWORD*)v105 + 48i64))(v105, v106);
			v55 = _RTDynamicCast(
				v54,
				0i64,
				&juce::ReferenceCountedObject `RTTI Type Descriptor',
				& juce::DynamicObject `RTTI Type Descriptor',
				0);
			if (v55)
				v56 = (__int64(__fastcall * ***)())(*(__int64(__fastcall * *)(__int64, __int64*))(*(_QWORD*)v55 + 16i64))(
					v55,
					&v79);
			else
				v56 = sub_14030AB50();
			v57 = v56;
			v58 = (void*)(v79 - 16);
			if ((*(_DWORD*)(v79 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v58) == -1)
				j_j_free(v58);
			((void(__fastcall*)(__int64(__fastcall * **)(), char*, __int64(__fastcall * ***)()))(**v57)[4])(
				*v57,
				v85,
				v57 + 1);
			v60 = sub_14020F700(v59, v85);
			*i = v60;
			v61 = sub_1402F7E90();
			v103 = v61 + 16;
			EnterCriticalSection((LPCRITICAL_SECTION)(v61 + 16));
			sub_1402F8020(v61);
			v72 = "q";
			sub_1402DDCD0(&v80, v61, &v72);
			LeaveCriticalSection((LPCRITICAL_SECTION)(v61 + 16));
			v62 = (*(__int64(__fastcall * *)(__int64, char*))(*(_QWORD*)v105 + 48i64))(v105, v106);
			v63 = _RTDynamicCast(
				v62,
				0i64,
				&juce::ReferenceCountedObject `RTTI Type Descriptor',
				& juce::DynamicObject `RTTI Type Descriptor',
				0);
			if (v63)
				v64 = (__int64(__fastcall * ***)())(*(__int64(__fastcall * *)(__int64, __int64*))(*(_QWORD*)v63 + 16i64))(
					v63,
					&v80);
			else
				v64 = sub_14030AB50();
			v65 = v64;
			v66 = (void*)(v80 - 16);
			if ((*(_DWORD*)(v80 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v66) == -1)
				j_j_free(v66);
			((void(__fastcall*)(__int64(__fastcall * **)(), char*, __int64(__fastcall * ***)()))(**v65)[4])(
				*v65,
				v86,
				v65 + 1);
			v68 = sub_14020F700(v67, v86);
			i[20] = v68;
		}
		(*(void(__fastcall * *)(__int64, char*))(*(_QWORD*)v105 + 176i64))(v105, v106);
		++v31;
		++v32;
		v6 += 16i64;
	}
	v69 = v95;
	v70 = v87;
	if (v32 < 20)
		memset((void*)(v87 + 408 + 4 * v32), 0, 4 * (20 - v32));
	*(_DWORD*)(v70 + 108) = 3;
	(*(void(__fastcall * *)(__int64, char*))(*(_QWORD*)v107 + 176i64))(v107, v108);
	(*(void(__fastcall * *)(__int64, char*))(*(_QWORD*)v109 + 176i64))(v109, v110);
	(*(void(__fastcall * *)(_QWORD, _QWORD*))(*(_QWORD*)* v69 + 176i64))(*v69, v69 + 1);*/
	return 0i64;
}
__int64 SubwooferGen2::sub_140234220(__int64 a1, _QWORD* a2)
{
	__int64 result; // rax

	result = 0x3F8F266BA493C801i64;
	*a2 = 0x3F8F266BA493C89Fi64;
	return result;
}
char SubwooferGen2::sub_140234140(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
	return	1;
	/*__int64 v5; // rdx
	__int64 v6; // r8
	__int64 v7; // rdx
	char v8; // cl
	__int64 v9; // rax
	_DWORD* v10; // rax
	__int64 v11; // r9
	__int64 v12; // r8
	char v13; // dl
	char result; // al

	if (!(unsigned __int8)sub_140210740(a1, a2, a3, a4))
		goto LABEL_4;
	LOBYTE(v6) = 1;
	(*(void(__fastcall * *)(__int64, __int64, __int64))(*(_QWORD*)a1 + 152i64))(a1, v5, v6);
	sub_140007A80(*(_QWORD*)(a1 + 56));
	LOBYTE(v7) = 51;
	v8 = *(_BYTE*)(a1 + 72);
	v9 = **(_QWORD * *)(a1 + 56);
	++* (_DWORD*)(v9 + 20);
	**(_BYTE * *)v9 = v8;
	v10 = **(_DWORD * **)(a1 + 56);
	++v10[5];
	*(_BYTE*)(*(_QWORD*)v10 + 1i64) = 21;
	sub_140007AF0(**(_QWORD * *)(a1 + 56), v7);
	sub_140007AF0(**(_QWORD * *)(a1 + 56), 0i64);
	*(_DWORD*)(**(_QWORD * *)(a1 + 56) + 12i64) = 7;
	sub_140212F70(*(_QWORD*)(a1 + 64), *(_QWORD*)(a1 + 56));
	*(_DWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 56) + 8i64) + 20i64) = 1;
	v11 = *(_QWORD*)(*(_QWORD*)(a1 + 56) + 8i64);
	v12 = *(int*)(v11 + 20);
	v13 = *(_BYTE*)(v12 + *(_QWORD*)v11);
	*(_DWORD*)(v11 + 20) = v12 + 1;
	if (v13 == 9)
		result = 1;
	else
		LABEL_4:
	result = 0;
	return result;*/
}
char SubwooferGen2::sub_140234080(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
	return 1;
	/*__int64 v5; // rdx
	__int64 v6; // rax
	_DWORD* v7; // rax
	__int64 v8; // r9
	__int64 v9; // r8
	char v10; // dl
	char result; // al

	if (!(unsigned __int8)sub_140210740(a1, a2, a3, a4))
		goto LABEL_4;
	sub_140007A80(*(_QWORD*)(a1 + 56));
	v5 = *(unsigned __int8*)(a1 + 72);
	v6 = **(_QWORD * *)(a1 + 56);
	++* (_DWORD*)(v6 + 20);
	**(_BYTE * *)v6 = v5;
	LOBYTE(v5) = 51;
	v7 = **(_DWORD * **)(a1 + 56);
	++v7[5];
	*(_BYTE*)(*(_QWORD*)v7 + 1i64) = 21;
	sub_140007AF0(**(_QWORD * *)(a1 + 56), v5);
	sub_140007AF0(**(_QWORD * *)(a1 + 56), 0i64);
	*(_DWORD*)(**(_QWORD * *)(a1 + 56) + 12i64) = 7;
	sub_140212F70(*(_QWORD*)(a1 + 64), *(_QWORD*)(a1 + 56));
	*(_DWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 56) + 8i64) + 20i64) = 1;
	v8 = *(_QWORD*)(*(_QWORD*)(a1 + 56) + 8i64);
	v9 = *(int*)(v8 + 20);
	v10 = *(_BYTE*)(v9 + *(_QWORD*)v8);
	*(_DWORD*)(v8 + 20) = v9 + 1;
	if (v10 == 9)
		result = 1;
	else
		LABEL_4:
	result = 0;
	return result;*/
}
char SubwooferGen2::sub_140233FC0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
	return 1;
	/*__int64 v5; // rdx
	__int64 v6; // rax
	_DWORD* v7; // rax
	__int64 v8; // rdx
	__int64 v9; // r9
	__int64 v10; // r8
	char v11; // dl
	char result; // al

	if (!(unsigned __int8)sub_140210740(a1, a2, a3, a4))
		goto LABEL_4;
	sub_140007A80(*(_QWORD*)(a1 + 56));
	v5 = *(unsigned __int8*)(a1 + 72);
	v6 = **(_QWORD * *)(a1 + 56);
	++* (_DWORD*)(v6 + 20);
	**(_BYTE * *)v6 = v5;
	LOBYTE(v5) = 52;
	v7 = **(_DWORD * **)(a1 + 56);
	++v7[5];
	*(_BYTE*)(*(_QWORD*)v7 + 1i64) = 21;
	sub_140007AF0(**(_QWORD * *)(a1 + 56), v5);
	LOBYTE(v8) = -1;
	sub_140007AF0(**(_QWORD * *)(a1 + 56), v8);
	*(_DWORD*)(**(_QWORD * *)(a1 + 56) + 12i64) = 7;
	sub_140212F70(*(_QWORD*)(a1 + 64), *(_QWORD*)(a1 + 56));
	*(_DWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 56) + 8i64) + 20i64) = 1;
	v9 = *(_QWORD*)(*(_QWORD*)(a1 + 56) + 8i64);
	v10 = *(int*)(v9 + 20);
	v11 = *(_BYTE*)(v10 + *(_QWORD*)v9);
	*(_DWORD*)(v9 + 20) = v10 + 1;
	if (v11 == 9)
		result = 1;
	else
		LABEL_4:
	result = 0;
	return result;*/
}
char SubwooferGen2::sub_140233FB0()
{
	return 1;
}
char SubwooferGen2::sub_140233EB0(__int64 a1, __int64 a2, __int64 a3)
{
	return 1;
/*
	__int64 v4; // rcx
	int v5; // er9
	unsigned int v6; // er10
	unsigned int v7; // edi
	__int64 v8; // rcx
	__int64 v9; // r10
	__int64 v10; // r8
	char v11; // dl
	__int64 v12; // r9
	__int64 v13; // r8
	char v14; // dl
	char result; // al

	if (!(unsigned __int8)sub_140210740(a1, a2, a3, (unsigned int)a3))
		goto LABEL_9;
	if (v5)
	{
		v7 = -61;
		if (v5 == 1)
			v7 = -68;
	}
	else
	{
		v7 = -75;
	}
	sub_14021BF80(v4, *(_QWORD*)(a1 + 56), *(unsigned int*)(a1 + 72), v6);
	sub_140212F70(*(_QWORD*)(a1 + 64), *(_QWORD*)(a1 + 56));
	v8 = *(_QWORD*)(*(_QWORD*)(a1 + 56) + 8i64);
	*(_DWORD*)(v8 + 20) = 1;
	v9 = *(_QWORD*)(*(_QWORD*)(a1 + 56) + 8i64);
	v10 = *(int*)(v9 + 20);
	v11 = *(_BYTE*)(v10 + *(_QWORD*)v9);
	*(_DWORD*)(v9 + 20) = v10 + 1;
	if (v11 != 9)
		goto LABEL_9;
	sub_140219C80(v8, *(_QWORD*)(a1 + 56), *(unsigned int*)(a1 + 72), v7);
	sub_140212F70(*(_QWORD*)(a1 + 64), *(_QWORD*)(a1 + 56));
	*(_DWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 56) + 8i64) + 20i64) = 1;
	v12 = *(_QWORD*)(*(_QWORD*)(a1 + 56) + 8i64);
	v13 = *(int*)(v12 + 20);
	v14 = *(_BYTE*)(v13 + *(_QWORD*)v12);
	*(_DWORD*)(v12 + 20) = v13 + 1;
	if (v14 == 9)
		result = 1;
	else
		LABEL_9:
	result = 0;
	return result;*/
}
char SubwooferGen2::sub_140233EA0()
{
	return 0;
}
char SubwooferGen2::sub_140233DC0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
	return 1;
	/*unsigned __int8 v4; // di
	__int64 v6; // rdx
	char v7; // r8
	__int64 v8; // rax
	_DWORD* v9; // rax
	__int64 v10; // r9
	__int64 v11; // r8
	char v12; // dl
	char result; // al

	v4 = a2;
	if (!(unsigned __int8)sub_140210740(a1, a2, a3, a4))
		goto LABEL_4;
	sub_140007A80(*(_QWORD*)(a1 + 56));
	LOBYTE(v6) = 6;
	v7 = *(_BYTE*)(a1 + 72);
	v8 = **(_QWORD * *)(a1 + 56);
	++* (_DWORD*)(v8 + 20);
	**(_BYTE * *)v8 = v7;
	v9 = **(_DWORD * **)(a1 + 56);
	++v9[5];
	*(_BYTE*)(*(_QWORD*)v9 + 1i64) = 58;
	sub_140007AF0(**(_QWORD * *)(a1 + 56), v6);
	sub_140007AF0(**(_QWORD * *)(a1 + 56), v4);
	*(_DWORD*)(**(_QWORD * *)(a1 + 56) + 12i64) = 7;
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
char SubwooferGen2::sub_140233DB0()
{
	return 0;
}
char SubwooferGen2::sub_140233BB0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
	return 1;
	/*double v4; // xmm1_8
	__int64 v6; // rdx
	__int64 v7; // rax
	_DWORD* v8; // rax
	__int64 v9; // rdx
	float v10; // xmm0_4
	double v11; // xmm6_8
	double v12; // xmm0_8
	double v13; // xmm0_8
	double v14; // xmm0_8
	__int64 v15; // r9
	__int64 v16; // r8
	char v17; // dl
	__int64 v18; // rdx
	char v19; // cl
	__int64 v20; // rax
	_DWORD* v21; // rax
	__int64 v22; // r9
	__int64 v23; // r8
	char v24; // dl
	char result; // al

	if (!(unsigned __int8)sub_140210740(a1, a2, a3, a4))
		goto LABEL_5;
	sub_140007A80(*(_QWORD*)(a1 + 56));
	v6 = *(unsigned __int8*)(a1 + 72);
	v7 = **(_QWORD * *)(a1 + 56);
	++* (_DWORD*)(v7 + 20);
	**(_BYTE * *)v7 = v6;
	LOBYTE(v6) = 1;
	v8 = **(_DWORD * **)(a1 + 56);
	++v8[5];
	*(_BYTE*)(*(_QWORD*)v8 + 1i64) = 16;
	sub_140007AF0(**(_QWORD * *)(a1 + 56), v6);
	LOBYTE(v9) = 5;
	sub_140007AF0(**(_QWORD * *)(a1 + 56), v9);
	v10 = v4;
	v11 = (double)(int)(pow(10.0, fminf(0.0, v10) / 20.0) * 8388607.0);
	v12 = floor(v11 * 0.0000152587890625);
	sub_140007AF0(**(_QWORD * *)(a1 + 56), (unsigned int)(int)v12);
	v13 = floor(v11 * 0.00390625);
	sub_140007AF0(**(_QWORD * *)(a1 + 56), (unsigned int)(int)v13);
	v14 = floor(v11);
	sub_140007AF0(**(_QWORD * *)(a1 + 56), (unsigned int)(int)v14);
	*(_DWORD*)(**(_QWORD * *)(a1 + 56) + 12i64) = 10;
	sub_140212F70(*(_QWORD*)(a1 + 64), *(_QWORD*)(a1 + 56));
	*(_DWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 56) + 8i64) + 20i64) = 1;
	v15 = *(_QWORD*)(*(_QWORD*)(a1 + 56) + 8i64);
	v16 = *(int*)(v15 + 20);
	v17 = *(_BYTE*)(v16 + *(_QWORD*)v15);
	*(_DWORD*)(v15 + 20) = v16 + 1;
	if (v17 != 9)
		goto LABEL_5;
	sub_140007A80(*(_QWORD*)(a1 + 56));
	LOBYTE(v18) = 51;
	v19 = *(_BYTE*)(a1 + 72);
	v20 = **(_QWORD * *)(a1 + 56);
	++* (_DWORD*)(v20 + 20);
	**(_BYTE * *)v20 = v19;
	v21 = **(_DWORD * **)(a1 + 56);
	++v21[5];
	*(_BYTE*)(*(_QWORD*)v21 + 1i64) = 21;
	sub_140007AF0(**(_QWORD * *)(a1 + 56), v18);
	sub_140007AF0(**(_QWORD * *)(a1 + 56), 0i64);
	*(_DWORD*)(**(_QWORD * *)(a1 + 56) + 12i64) = 7;
	sub_140212F70(*(_QWORD*)(a1 + 64), *(_QWORD*)(a1 + 56));
	*(_DWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 56) + 8i64) + 20i64) = 1;
	v22 = *(_QWORD*)(*(_QWORD*)(a1 + 56) + 8i64);
	v23 = *(int*)(v22 + 20);
	v24 = *(_BYTE*)(v23 + *(_QWORD*)v22);
	*(_DWORD*)(v22 + 20) = v23 + 1;
	if (v24 == 9)
		result = 1;
	else
		LABEL_5:
	result = 0;
	return result;*/
}
char SubwooferGen2::sub_140233B10(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
	return 1;
	/*float v4; // xmm1_4
	__int64 v6; // rcx
	__int64 v7; // r9
	__int64 v8; // r8
	char v9; // dl
	char result; // al

	if (!(_BYTE)a3)
		* (_DWORD*)(a1 + 256) = (int)v4;
	if (!(unsigned __int8)sub_140210740(a1, a2, a3, a4))
		goto LABEL_6;
	sub_140007A80(*(_QWORD*)(a1 + 56));
	sub_14021B130(v6, *(_QWORD*)(a1 + 56), *(unsigned int*)(a1 + 72));
	sub_140212F70(*(_QWORD*)(a1 + 64), *(_QWORD*)(a1 + 56));
	*(_DWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 56) + 8i64) + 20i64) = 1;
	v7 = *(_QWORD*)(*(_QWORD*)(a1 + 56) + 8i64);
	v8 = *(int*)(v7 + 20);
	v9 = *(_BYTE*)(v8 + *(_QWORD*)v7);
	*(_DWORD*)(v7 + 20) = v8 + 1;
	if (v9 == 9)
		result = 1;
	else
		LABEL_6:
	result = 0;
	return result;*/
}
char SubwooferGen2::sub_140233AF0(__int64 a1, float* a2)
{
	char result; // al

	result = 0;
	*a2 = (float) * (int*)(a1 + 256);
	return result;
}
char SubwooferGen2::sub_140235D10(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
	return 1;
	/*char v4; // bl
	__int64 v5; // r11
	char v7; // [rsp+28h] [rbp-10h]

	v4 = a3;
	*(_BYTE*)(a1 + 320) = a2;
	if ((unsigned __int8)sub_140210740(a1, a2, a3, a4))
	{
		v7 = v4;
		(*(void(__fastcall * *)(__int64, _QWORD, __int64, __int64, __int64, char))(*(_QWORD*)v5 + 256i64))(
			v5,
			0i64,
			v5 + 328,
			v5 + 408,
			v5 + 488,
			v7);
	}*/
	return 0;
}
char SubwooferGen2::sub_140235CF0(__int64 a1, _BYTE* a2)
{
	*a2 = *(_BYTE*)(a1 + 320);
	return 0;
}
char SubwooferGen2::sub_140233960(__int64* a1, __int64 a2, __int64 a3, __int64 a4)
{
	return 1;
	/*unsigned __int8 v4; // di
	int v5; // esi
	__int64 v7; // rax
	__int64 v8; // rdx
	char v9; // cl
	__int64 v10; // rax
	__int64 v11; // r9
	__int64 v12; // r8
	char v13; // dl
	char result; // al
	int v15; // [rsp+28h] [rbp-20h]
	int v16; // [rsp+30h] [rbp-18h]

	v4 = 0;
	v5 = a2;
	if (!(_BYTE)a3)
	{
		*((_DWORD*)a1 + 81) = a2;
		if ((_DWORD)a2)
		{
			v7 = *a1;
			*((_DWORD*)a1 + 77) = 2;
			(*(void(__fastcall * *)(__int64*, __int64, _QWORD, _QWORD, _BYTE, _BYTE))(v7 + 56))(a1, 3i64, 0i64, 0i64, 0, 0);
			LOBYTE(v15) = 0;
			(*(void(__fastcall * *)(__int64*, __int64, _QWORD, _QWORD, _DWORD, int, _BYTE))(*a1 + 96))(
				a1,
				3i64,
				0i64,
				0i64,
				0,
				v15,
				0);
		}
	}
	if (!(unsigned __int8)sub_140210740(a1, a2, a3, a4))
		goto LABEL_11;
	LOBYTE(v16) = 0;
	(*(void(__fastcall * *)(__int64*, _QWORD, _QWORD, _QWORD, _DWORD, _DWORD, int))(*a1 + 400))(
		a1,
		*((unsigned int*)a1 + 77),
		*((unsigned int*)a1 + 79),
		*((unsigned int*)a1 + 75),
		*((_DWORD*)a1 + 76),
		*((_DWORD*)a1 + 78),
		v16);
	sub_140007A80(a1[7]);
	LOBYTE(v8) = 66;
	v9 = *((_BYTE*)a1 + 72);
	v10 = *(_QWORD*)a1[7];
	++* (_DWORD*)(v10 + 20);
	**(_BYTE * *)v10 = v9;
	sub_140007AF0(*(_QWORD*)a1[7], v8);
	sub_140007AF0(*(_QWORD*)a1[7], 0i64);
	if (v5 == 1)
	{
		v4 = 18;
	}
	else if (v5 == 2)
	{
		v4 = 24;
	}
	sub_140007AF0(*(_QWORD*)a1[7], v4);
	*(_DWORD*)(*(_QWORD*)a1[7] + 12i64) = 7;
	sub_140212F70(a1[8], a1[7]);
	*(_DWORD*)(*(_QWORD*)(a1[7] + 8) + 20i64) = 1;
	v11 = *(_QWORD*)(a1[7] + 8);
	v12 = *(int*)(v11 + 20);
	v13 = *(_BYTE*)(v12 + *(_QWORD*)v11);
	*(_DWORD*)(v11 + 20) = v12 + 1;
	if (v13 == 9)
		result = 1;
	else
		LABEL_11:
	result = 0;
	return result;*/
}
char SubwooferGen2::sub_140233940(__int64 a1, _DWORD* a2)
{
	*a2 = *(_DWORD*)(a1 + 324);
	return 1;
}
char SubwooferGen2::sub_140233930()
{
	return 0;
}
_QWORD* SubwooferGen2::sub_140233770(__int64 a1, _QWORD* a2)
{
	return a2;
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
	v3 = a1 + 408;
	v4 = 20i64;
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
		v15 = *(float*)(v3 - 80);
		v16 = *(float*)v3;
		v17 = *(float*)(v3 + 80);
		v18 = (double) * (int*)(v3 + 160);
		sub_1402019D0((__int64)& v12);
		v7 = a2[1];
		if (v7 == a2[2])
		{
			sub_1400080A0(a2, a2[1], &v12);
		}
		else
		{
			sub_140001DA0(v7, (__int64)& v12);
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
	} while (v4);
	return a2;*/
}