#include "ThreewayGen1_1.h"
char ThreewayGen1_1::sub_140244A10(__int64 a1, __int64 a2)
{
	/*  void (__fastcall *v4)(__int64, __int64, __int64 *, __int64 *); // rbx
	  __int64 v5; // rcx
	  void (__fastcall *v6)(__int64, __int64, __int64 *, __int64 *, __int64 *, __int64 *, __int64); // rbx
	  void (__fastcall *v7)(__int64, __int64, __int64 *, volatile __int32 **, volatile __int32 **); // rbx
	  _BYTE *v8; // rax
	  void (__fastcall *v9)(__int64, __int64, __int64 *, volatile __int32 **, volatile __int32 **); // rbx
	  _BYTE *v10; // rax
	  void (__fastcall *v11)(__int64, __int64, __int64 *, char *, char *); // rbx
	  __int64 v12; // rdx
	  void (__fastcall *v13)(__int64, __int64, __int64 *, char *, char *); // rbx
	  __int64 v14; // rdx
	  void (__fastcall *v15)(__int64, __int64, __int64 *, volatile __int32 **, volatile __int32 **); // rbx
	  _BYTE *v16; // rax
	  void (__fastcall *v17)(__int64, __int64, __int64 *, char *, char *); // rbx
	  __int64 v18; // rdx
	  void (__fastcall *v19)(__int64, __int64, __int64 *, char *, char *); // rbx
	  __int64 v20; // rdx
	  void (__fastcall *v21)(__int64, __int64, __int64 *, char *, char *); // rbx
	  __int64 v22; // rdx
	  void (__fastcall *v23)(__int64, __int64, __int64 *, volatile __int32 **, volatile __int32 **); // rbx
	  _BYTE *v24; // rax
	  void (__fastcall *v25)(__int64, __int64, __int64 *, volatile __int32 **, volatile __int32 **); // rbx
	  _BYTE *v26; // rax
	  void (__fastcall *v27)(__int64, __int64, __int64 *, volatile __int32 **, volatile __int32 **); // rbx
	  _BYTE *v28; // rax
	  void (__fastcall *v29)(__int64, __int64, __int64 *, volatile __int32 **, volatile __int32 **); // rbx
	  _BYTE *v30; // rax
	  void (__fastcall *v31)(__int64, __int64, __int64 *, volatile __int32 **, volatile __int32 **); // rbx
	  _BYTE *v32; // rax
	  int v33; // er12
	  __int64 v34; // r14
	  __int64 v35; // r13
	  void (__fastcall *v36)(__int64, __int64, __int64 *, volatile __int32 **, volatile __int32 **); // rbx
	  _BYTE *v37; // rax
	  void (__fastcall *v38)(__int64, __int64, __int64 *, char *, char *); // rbx
	  __int64 v39; // rdx
	  void (__fastcall *v40)(__int64, __int64, __int64 *, char *, char *); // rbx
	  __int64 v41; // rdx
	  void (__fastcall *v42)(__int64, __int64, __int64 *, volatile __int32 **, volatile __int32 **); // rbx
	  _BYTE *v43; // rax
	  int v44; // er14
	  __int64 v45; // r13
	  __int64 v46; // r15
	  void (__fastcall *v47)(__int64, __int64, __int64 *, volatile __int32 **, volatile __int32 **); // rbx
	  unsigned int v48; // er8
	  char *v49; // r9
	  unsigned int v50; // er8
	  void (__fastcall *v51)(__int64, __int64, __int64 *, char *, char *); // rbx
	  __int64 v52; // rdx
	  void (__fastcall *v53)(__int64, __int64, __int64 *, char *, char *); // rbx
	  __int64 v54; // rdx
	  void (__fastcall *v55)(__int64, __int64, __int64 *, volatile __int32 **, volatile __int32 **); // rbx
	  int v56; // er8
	  char *v57; // r9
	  unsigned int v58; // er8
	  __int64 v59; // r14
	  __int64 v60; // r12
	  int v61; // er15
	  void (__fastcall *v62)(__int64, __int64, __int64 *, volatile __int32 **, volatile __int32 **); // rbx
	  unsigned int v63; // er8
	  char *v64; // r9
	  unsigned int v65; // er8
	  void (__fastcall *v66)(__int64, __int64, __int64 *, char *, char *); // rbx
	  __int64 v67; // rdx
	  void (__fastcall *v68)(__int64, __int64, __int64 *, char *, char *); // rbx
	  __int64 v69; // rdx
	  void (__fastcall *v70)(__int64, __int64, _QWORD *, char *, char *); // rbx
	  __int64 v71; // rdx
	  void (__fastcall *v72)(__int64, __int64, __int64 *, volatile __int32 **, volatile __int32 **); // rbx
	  int v73; // er8
	  char *v74; // r9
	  unsigned int v75; // er8
	  void (__fastcall *v76)(__int64, __int64, __int64 *, __int64 *, __int64 *); // rbx
	  void (__fastcall *v77)(__int64, __int64, __int64 *, __int64 *, __int64 *); // rbx
	  __int64 v79; // [rsp+30h] [rbp-D0h] BYREF
	  __int64 v80; // [rsp+38h] [rbp-C8h] BYREF
	  volatile __int32 *v81; // [rsp+40h] [rbp-C0h] BYREF
	  __int64 v82; // [rsp+48h] [rbp-B8h] BYREF
	  volatile __int32 *v83; // [rsp+50h] [rbp-B0h] BYREF
	  __int64 v84; // [rsp+58h] [rbp-A8h] BYREF
	  char v85[8]; // [rsp+60h] [rbp-A0h] BYREF
	  __int64 v86; // [rsp+68h] [rbp-98h] BYREF
	  char v87[8]; // [rsp+70h] [rbp-90h] BYREF
	  __int64 v88; // [rsp+78h] [rbp-88h] BYREF
	  volatile __int32 *v89; // [rsp+80h] [rbp-80h] BYREF
	  __int64 v90; // [rsp+88h] [rbp-78h] BYREF
	  char v91[8]; // [rsp+90h] [rbp-70h] BYREF
	  __int64 v92; // [rsp+98h] [rbp-68h] BYREF
	  char v93[8]; // [rsp+A0h] [rbp-60h] BYREF
	  __int64 v94; // [rsp+A8h] [rbp-58h] BYREF
	  char v95[8]; // [rsp+B0h] [rbp-50h] BYREF
	  __int64 v96; // [rsp+B8h] [rbp-48h] BYREF
	  volatile __int32 *v97; // [rsp+C0h] [rbp-40h] BYREF
	  __int64 v98; // [rsp+C8h] [rbp-38h] BYREF
	  volatile __int32 *v99; // [rsp+D0h] [rbp-30h] BYREF
	  __int64 v100; // [rsp+D8h] [rbp-28h] BYREF
	  volatile __int32 *v101; // [rsp+E0h] [rbp-20h] BYREF
	  __int64 v102; // [rsp+E8h] [rbp-18h] BYREF
	  volatile __int32 *v103; // [rsp+F0h] [rbp-10h] BYREF
	  __int64 v104; // [rsp+F8h] [rbp-8h] BYREF
	  volatile __int32 *v105; // [rsp+100h] [rbp+0h] BYREF
	  __int64 v106; // [rsp+108h] [rbp+8h] BYREF
	  volatile __int32 *v107; // [rsp+110h] [rbp+10h] BYREF
	  __int64 v108; // [rsp+118h] [rbp+18h] BYREF
	  char v109[8]; // [rsp+120h] [rbp+20h] BYREF
	  __int64 v110; // [rsp+128h] [rbp+28h] BYREF
	  char v111[8]; // [rsp+130h] [rbp+30h] BYREF
	  __int64 v112; // [rsp+138h] [rbp+38h] BYREF
	  volatile __int32 *v113; // [rsp+140h] [rbp+40h] BYREF
	  __int64 v114; // [rsp+148h] [rbp+48h] BYREF
	  volatile __int32 *v115; // [rsp+150h] [rbp+50h] BYREF
	  __int64 v116; // [rsp+158h] [rbp+58h] BYREF
	  char v117[8]; // [rsp+160h] [rbp+60h] BYREF
	  __int64 v118; // [rsp+168h] [rbp+68h] BYREF
	  char v119[8]; // [rsp+170h] [rbp+70h] BYREF
	  __int64 v120; // [rsp+178h] [rbp+78h] BYREF
	  volatile __int32 *v121; // [rsp+180h] [rbp+80h] BYREF
	  __int64 v122; // [rsp+188h] [rbp+88h] BYREF
	  volatile __int32 *v123; // [rsp+190h] [rbp+90h] BYREF
	  __int64 v124; // [rsp+198h] [rbp+98h] BYREF
	  char v125[8]; // [rsp+1A0h] [rbp+A0h] BYREF
	  __int64 v126; // [rsp+1A8h] [rbp+A8h] BYREF
	  char v127[8]; // [rsp+1B0h] [rbp+B0h] BYREF
	  __int64 v128; // [rsp+1B8h] [rbp+B8h] BYREF
	  char v129[8]; // [rsp+1C0h] [rbp+C0h] BYREF
	  __int64 v130; // [rsp+1C8h] [rbp+C8h] BYREF
	  volatile __int32 *v131; // [rsp+1D0h] [rbp+D0h] BYREF
	  __int64 v132; // [rsp+1D8h] [rbp+D8h] BYREF
	  __int64 v133; // [rsp+1E0h] [rbp+E0h] BYREF
	  __int64 v134; // [rsp+1E8h] [rbp+E8h] BYREF
	  __int64 v135; // [rsp+1F0h] [rbp+F0h] BYREF
	  __int64 v136; // [rsp+1F8h] [rbp+F8h] BYREF
	  __int64 v137; // [rsp+200h] [rbp+100h] BYREF
	  _QWORD v138[4]; // [rsp+208h] [rbp+108h] BYREF
	  char v139; // [rsp+22Fh] [rbp+12Fh] BYREF
	  char v140[31]; // [rsp+230h] [rbp+130h] BYREF
	  char v141; // [rsp+24Fh] [rbp+14Fh] BYREF
	  char v142[31]; // [rsp+250h] [rbp+150h] BYREF
	  char v143; // [rsp+26Fh] [rbp+16Fh] BYREF
	  char v144[31]; // [rsp+270h] [rbp+170h] BYREF
	  char v145; // [rsp+28Fh] [rbp+18Fh] BYREF
	  char v146[31]; // [rsp+290h] [rbp+190h] BYREF
	  char v147; // [rsp+2AFh] [rbp+1AFh] BYREF
	  char v148[31]; // [rsp+2B0h] [rbp+1B0h] BYREF
	  char v149; // [rsp+2CFh] [rbp+1CFh] BYREF
	  char v150[31]; // [rsp+2D0h] [rbp+1D0h] BYREF
	  char v151; // [rsp+2EFh] [rbp+1EFh] BYREF
	  char v152[31]; // [rsp+2F0h] [rbp+1F0h] BYREF
	  char v153; // [rsp+30Fh] [rbp+20Fh] BYREF
	  __int64 v154[8]; // [rsp+310h] [rbp+210h] BYREF

	  v4 = *(void (__fastcall **)(__int64, __int64, __int64 *, __int64 *))(*(_QWORD *)a1 + 16i64);
	  v5 = *(_QWORD *)(a1 + 24);
	  v79 = v5;
	  if ( (*(_DWORD *)(v5 - 16) & 0x30000000) == 0 )
		_InterlockedIncrement((volatile signed __int32 *)(v5 - 16));
	  sub_140048D00(&v130, "Class:");
	  v4(a1, a2, &v130, &v79);
	  v6 = *(void (__fastcall **)(__int64, __int64, __int64 *, __int64 *, __int64 *, __int64 *, __int64))(*(_QWORD *)a1 + 16i64);
	  sub_140048D00(&v137, &unk_14046E04E);
	  sub_140048D00(&v80, "----------------------------------------------");
	  v6(a1, a2, &v80, &v137, &v137, &v79, v79);
	  v7 = *(void (__fastcall **)(__int64, __int64, __int64 *, volatile __int32 **, volatile __int32 **))(*(_QWORD *)a1 + 16i64);
	  v8 = (_BYTE *)sub_1402FCD90((__int64)v140, *(_QWORD *)(a1 + 80));
	  sub_140040360(&v81, v8, &v139 - v8);
	  sub_140048D00(&v82, "Serial:");
	  v7(a1, a2, &v82, &v81, &v81);
	  v9 = *(void (__fastcall **)(__int64, __int64, __int64 *, volatile __int32 **, volatile __int32 **))(*(_QWORD *)a1 + 16i64);
	  v10 = (_BYTE *)sub_1402FCCA0((__int64)v144, *(unsigned __int8 *)(a1 + 96));
	  sub_140040360(&v83, v10, &v143 - v10);
	  sub_140048D00(&v84, "Group_ON:");
	  v9(a1, a2, &v84, &v83, &v83);
	  v11 = *(void (__fastcall **)(__int64, __int64, __int64 *, char *, char *))(*(_QWORD *)a1 + 16i64);
	  String::String_3((__int64)v85, v12, 0, 0);
	  sub_140048D00(&v86, "Level_Sensitivity:");
	  v11(a1, a2, &v86, v85, v85);
	  v13 = *(void (__fastcall **)(__int64, __int64, __int64 *, char *, char *))(*(_QWORD *)a1 + 16i64);
	  String::String_3((__int64)v87, v14, 0, 0);
	  sub_140048D00(&v88, "Calibration_Level:");
	  v13(a1, a2, &v88, v87, v87);
	  v15 = *(void (__fastcall **)(__int64, __int64, __int64 *, volatile __int32 **, volatile __int32 **))(*(_QWORD *)a1 + 16i64);
	  v16 = (_BYTE *)sub_1402FCCA0((__int64)v146, *(_DWORD *)(a1 + 260));
	  sub_140040360(&v89, v16, &v145 - v16);
	  sub_140048D00(&v90, "Optional_Gain:");
	  v15(a1, a2, &v90, &v89, &v89);
	  v17 = *(void (__fastcall **)(__int64, __int64, __int64 *, char *, char *))(*(_QWORD *)a1 + 16i64);
	  String::String_3((__int64)v91, v18, 0, 0);
	  sub_140048D00(&v92, "Time-of-flight_Compensation:");
	  v17(a1, a2, &v92, v91, v91);
	  v19 = *(void (__fastcall **)(__int64, __int64, __int64 *, char *, char *))(*(_QWORD *)a1 + 16i64);
	  String::String_3((__int64)v93, v20, 0, 0);
	  sub_140048D00(&v94, "Video_Delay:");
	  v19(a1, a2, &v94, v93, v93);
	  v21 = *(void (__fastcall **)(__int64, __int64, __int64 *, char *, char *))(*(_QWORD *)a1 + 16i64);
	  String::String_3((__int64)v95, v22, 0, 0);
	  sub_140048D00(&v96, "Group_Sensitivity:");
	  v21(a1, a2, &v96, v95, v95);
	  v23 = *(void (__fastcall **)(__int64, __int64, __int64 *, volatile __int32 **, volatile __int32 **))(*(_QWORD *)a1 + 16i64);
	  v24 = (_BYTE *)sub_1402FCCA0((__int64)v148, *(_DWORD *)(a1 + 100));
	  sub_140040360(&v97, v24, &v147 - v24);
	  sub_140048D00(&v98, "CalibrationGroupID:");
	  v23(a1, a2, &v98, &v97, &v97);
	  v25 = *(void (__fastcall **)(__int64, __int64, __int64 *, volatile __int32 **, volatile __int32 **))(*(_QWORD *)a1 + 16i64);
	  v26 = (_BYTE *)sub_1402FCCA0((__int64)v150, *(_DWORD *)(a1 + 108));
	  sub_140040360(&v99, v26, &v149 - v26);
	  sub_140048D00(&v100, "CalibrationStatusFlag:");
	  v25(a1, a2, &v100, &v99, &v99);
	  v27 = *(void (__fastcall **)(__int64, __int64, __int64 *, volatile __int32 **, volatile __int32 **))(*(_QWORD *)a1 + 16i64);
	  v28 = (_BYTE *)sub_1402FCCA0((__int64)v152, *(_DWORD *)(a1 + 192));
	  sub_140040360(&v101, v28, &v151 - v28);
	  sub_140048D00(&v102, "Input:");
	  v27(a1, a2, &v102, &v101, &v101);
	  v29 = *(void (__fastcall **)(__int64, __int64, __int64 *, volatile __int32 **, volatile __int32 **))(*(_QWORD *)a1 + 16i64);
	  v30 = (_BYTE *)sub_1402FCCA0((__int64)v154, *(_DWORD *)(a1 + 160));
	  sub_140040360(&v103, v30, &v153 - v30);
	  sub_140048D00(&v104, "Input1_AES_EBUChannel:");
	  v29(a1, a2, &v104, &v103, &v103);
	  v31 = *(void (__fastcall **)(__int64, __int64, __int64 *, volatile __int32 **, volatile __int32 **))(*(_QWORD *)a1 + 16i64);
	  v32 = (_BYTE *)sub_1402FCCA0((__int64)v142, *(_DWORD *)(a1 + 264));
	  sub_140040360(&v105, v32, &v141 - v32);
	  sub_140048D00(&v106, "CrossoverFrequency(Hz):");
	  v31(a1, a2, &v106, &v105, &v105);
	  LODWORD(v79) = 1;
	  v33 = 1;
	  v34 = a1 + 276;
	  v35 = 2i64;
	  do
	  {
		v36 = *(void (__fastcall **)(__int64, __int64, __int64 *, volatile __int32 **, volatile __int32 **))(*(_QWORD *)a1 + 16i64);
		v37 = (_BYTE *)sub_1402FCCA0((__int64)v142, v33);
		sub_140040360(&v107, v37, &v141 - v37);
		sub_140048D00(&v108, "LP_Shelve:");
		v36(a1, a2, &v108, &v107, &v107);
		v38 = *(void (__fastcall **)(__int64, __int64, __int64 *, char *, char *))(*(_QWORD *)a1 + 16i64);
		String::String_3((__int64)v109, v39, 0, 0);
		sub_140048D00(&v110, "Frequency:");
		v38(a1, a2, &v110, v109, v109);
		v40 = *(void (__fastcall **)(__int64, __int64, __int64 *, char *, char *))(*(_QWORD *)a1 + 16i64);
		String::String_3((__int64)v111, v41, 0, 0);
		sub_140048D00(&v112, "Gain:");
		v40(a1, a2, &v112, v111, v111);
		v42 = *(void (__fastcall **)(__int64, __int64, __int64 *, volatile __int32 **, volatile __int32 **))(*(_QWORD *)a1 + 16i64);
		v43 = (_BYTE *)sub_1402FCCA0((__int64)v142, *(_DWORD *)(v34 + 8));
		sub_140040360(&v113, v43, &v141 - v43);
		sub_140048D00(&v114, "SR:");
		v42(a1, a2, &v114, &v113, &v113);
		++v33;
		v34 += 4i64;
		--v35;
	  }
	  while ( v35 );
	  v44 = 1;
	  v45 = a1 + 300;
	  v46 = 2i64;
	  do
	  {
		v47 = *(void (__fastcall **)(__int64, __int64, __int64 *, volatile __int32 **, volatile __int32 **))(*(_QWORD *)a1 + 16i64);
		v48 = v44;
		v49 = &v139;
		v139 = 0;
		if ( v44 < 0 )
		{
		  v50 = -v44;
		  do
		  {
			*--v49 = v50 % 0xA + 48;
			v50 /= 0xAu;
		  }
		  while ( v50 );
		  *--v49 = 45;
		}
		else
		{
		  do
		  {
			*--v49 = v48 % 0xA + 48;
			v48 /= 0xAu;
		  }
		  while ( v48 );
		}
		sub_140040360(&v115, v49, &v139 - v49);
		sub_140048D00(&v116, "HP_Shelve:");
		v47(a1, a2, &v116, &v115, &v115);
		v51 = *(void (__fastcall **)(__int64, __int64, __int64 *, char *, char *))(*(_QWORD *)a1 + 16i64);
		String::String_3((__int64)v117, v52, 0, 0);
		sub_140048D00(&v118, "Frequency:");
		v51(a1, a2, &v118, v117, v117);
		v53 = *(void (__fastcall **)(__int64, __int64, __int64 *, char *, char *))(*(_QWORD *)a1 + 16i64);
		String::String_3((__int64)v119, v54, 0, 0);
		sub_140048D00(&v120, "Gain:");
		v53(a1, a2, &v120, v119, v119);
		v55 = *(void (__fastcall **)(__int64, __int64, __int64 *, volatile __int32 **, volatile __int32 **))(*(_QWORD *)a1 + 16i64);
		v56 = *(_DWORD *)(v45 + 8);
		v57 = &v139;
		v139 = 0;
		if ( v56 < 0 )
		{
		  v58 = -v56;
		  do
		  {
			*--v57 = v58 % 0xA + 48;
			v58 /= 0xAu;
		  }
		  while ( v58 );
		  *--v57 = 45;
		}
		else
		{
		  do
		  {
			*--v57 = v56 % 0xAu + 48;
			v56 /= 0xAu;
		  }
		  while ( v56 );
		}
		sub_140040360(&v121, v57, &v139 - v57);
		sub_140048D00(&v122, "SR:");
		v55(a1, a2, &v122, &v121, &v121);
		++v44;
		v45 += 4i64;
		--v46;
	  }
	  while ( v46 );
	  v59 = a1 + 340;
	  v60 = 6i64;
	  v61 = v79;
	  do
	  {
		v62 = *(void (__fastcall **)(__int64, __int64, __int64 *, volatile __int32 **, volatile __int32 **))(*(_QWORD *)a1 + 16i64);
		v63 = v61;
		v64 = &v139;
		v139 = 0;
		if ( v61 < 0 )
		{
		  v65 = -v61;
		  do
		  {
			*--v64 = v65 % 0xA + 48;
			v65 /= 0xAu;
		  }
		  while ( v65 );
		  *--v64 = 45;
		}
		else
		{
		  do
		  {
			*--v64 = v63 % 0xA + 48;
			v63 /= 0xAu;
		  }
		  while ( v63 );
		}
		sub_140040360(&v123, v64, &v139 - v64);
		sub_140048D00(&v124, "Notch:");
		v62(a1, a2, &v124, &v123, &v123);
		v66 = *(void (__fastcall **)(__int64, __int64, __int64 *, char *, char *))(*(_QWORD *)a1 + 16i64);
		String::String_3((__int64)v125, v67, 0, 0);
		sub_140048D00(&v126, "Frequency:");
		v66(a1, a2, &v126, v125, v125);
		v68 = *(void (__fastcall **)(__int64, __int64, __int64 *, char *, char *))(*(_QWORD *)a1 + 16i64);
		String::String_3((__int64)v127, v69, 0, 0);
		sub_140048D00(&v128, "Gain:");
		v68(a1, a2, &v128, v127, v127);
		v70 = *(void (__fastcall **)(__int64, __int64, _QWORD *, char *, char *))(*(_QWORD *)a1 + 16i64);
		String::String_3((__int64)v129, v71, 0, 0);
		sub_140048D00(v138, "Q_Value:");
		v70(a1, a2, v138, v129, v129);
		v72 = *(void (__fastcall **)(__int64, __int64, __int64 *, volatile __int32 **, volatile __int32 **))(*(_QWORD *)a1 + 16i64);
		v73 = *(_DWORD *)(v59 + 48);
		v74 = &v139;
		v139 = 0;
		if ( v73 < 0 )
		{
		  v75 = -v73;
		  do
		  {
			*--v74 = v75 % 0xA + 48;
			v75 /= 0xAu;
		  }
		  while ( v75 );
		  *--v74 = 45;
		}
		else
		{
		  do
		  {
			*--v74 = v73 % 0xAu + 48;
			v73 /= 0xAu;
		  }
		  while ( v73 );
		}
		sub_140040360(&v131, v74, &v139 - v74);
		sub_140048D00(&v132, "SR:");
		v72(a1, a2, &v132, &v131, &v131);
		++v61;
		v59 += 4i64;
		--v60;
	  }
	  while ( v60 );
	  v76 = *(void (__fastcall **)(__int64, __int64, __int64 *, __int64 *, __int64 *))(*(_QWORD *)a1 + 16i64);
	  sub_140048D00(&v133, &unk_14046E04F);
	  sub_140048D00(&v134, "Data_End:");
	  v76(a1, a2, &v134, &v133, &v133);
	  v77 = *(void (__fastcall **)(__int64, __int64, __int64 *, __int64 *, __int64 *))(*(_QWORD *)a1 + 16i64);
	  sub_140048D00(&v135, &unk_14046E076);
	  sub_140048D00(&v136, " ");
	  v77(a1, a2, &v136, &v135, &v135);*/
	return 1;
}
__int64 ThreewayGen1_1::sub_140244340(__int64 a1, __int64 a2)
{
	/*  bool v4; // r14
	  __int64 v5; // rbx
	  _BYTE *v6; // rbx
	  unsigned __int8 *v7; // rcx
	  unsigned __int8 *v8; // rcx
	  unsigned __int8 *v9; // rcx
	  float v10; // xmm1_4
	  int v11; // ebx
	  unsigned __int8 *v12; // rcx
	  __int64 v13; // rbx
	  float v14; // xmm1_4
	  unsigned __int8 *v15; // rcx
	  float v16; // xmm1_4
	  int v17; // ebx
	  unsigned __int8 *v18; // rcx
	  __int64 v19; // rbx
	  float v20; // xmm1_4
	  unsigned __int8 *v21; // rcx
	  float v22; // xmm1_4
	  int v23; // ebx
	  unsigned __int8 *v24; // rcx
	  __int64 v25; // rbx
	  float v26; // xmm1_4
	  unsigned __int8 *v27; // rcx
	  float v28; // xmm1_4
	  unsigned __int8 *v29; // rcx
	  float v30; // xmm1_4
	  char *v31; // rax
	  char *v32; // rcx
	  _BYTE *v33; // rax
	  _BYTE *v34; // rcx
	  char *v35; // rcx
	  _BYTE *v36; // rcx
	  char *v38; // [rsp+20h] [rbp-60h] BYREF
	  char *v39; // [rsp+28h] [rbp-58h] BYREF
	  char *v40; // [rsp+30h] [rbp-50h] BYREF
	  char *v41; // [rsp+38h] [rbp-48h] BYREF
	  char *v42; // [rsp+40h] [rbp-40h] BYREF
	  char *v43; // [rsp+48h] [rbp-38h] BYREF
	  char *v44; // [rsp+50h] [rbp-30h] BYREF
	  char *v45; // [rsp+58h] [rbp-28h] BYREF
	  char *v46; // [rsp+60h] [rbp-20h] BYREF
	  char *v47; // [rsp+68h] [rbp-18h] BYREF
	  _BYTE *v48; // [rsp+70h] [rbp-10h] BYREF
	  char *v49; // [rsp+78h] [rbp-8h] BYREF
	  char *String; // [rsp+C8h] [rbp+48h] BYREF
	  _BYTE *v51; // [rsp+D0h] [rbp+50h] BYREF
	  char *v52; // [rsp+D8h] [rbp+58h] BYREF

	  v4 = 0;
	  v51 = dword_140DDCDD0;
	  String = (char *)dword_140DDCDD0;
	  while ( 1 )
	  {
		v5 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 8i64))(a2);
		if ( v5 >= 0 )
		  v5 -= (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 168i64))(a2);
		if ( v5 <= 0 || v4 )
		  break;
		(*(void (__fastcall **)(__int64, __int64, _BYTE **, char **, char *, char *, char *, char *, char *, char *, char *, char *, char *))(*(_QWORD *)a1 + 32i64))(
		  a1,
		  a2,
		  &v51,
		  &String,
		  v38,
		  v39,
		  v40,
		  v41,
		  v42,
		  v43,
		  v44,
		  v45,
		  v46);
		v6 = v51;
		if ( (unsigned int)String::isNotEmpty(v51, "Serial") )
		{
		  if ( (unsigned int)String::isNotEmpty(v6, "Level_Sensitivity") )
		  {
			if ( (unsigned int)String::isNotEmpty(v6, "Calibration_Level") )
			{
			  if ( (unsigned int)String::isNotEmpty(v6, "Optional_Gain") )
			  {
				if ( (unsigned int)String::isNotEmpty(v6, "Time-of-flight_Compensation") )
				{
				  if ( (unsigned int)String::isNotEmpty(v6, "Video_Delay") )
				  {
					if ( (unsigned int)String::isNotEmpty(v6, "Group_Sensitivity") )
					{
					  if ( (unsigned int)String::isNotEmpty(v6, "CalibrationGroupID") )
					  {
						if ( (unsigned int)String::isNotEmpty(v6, "CalibrationStatusFlag") )
						{
						  if ( (unsigned int)String::isNotEmpty(v6, "Input") )
						  {
							if ( (unsigned int)String::isNotEmpty(v6, "Input1_AES_EBUChannel") )
							{
							  if ( (unsigned int)String::isNotEmpty(v6, "Group_ON") )
							  {
								if ( (unsigned int)String::isNotEmpty(v6, "CrossoverFrequency(Hz)") )
								{
								  if ( (unsigned int)String::isNotEmpty(v6, "LP_Shelve") )
								  {
									if ( (unsigned int)String::isNotEmpty(v6, "HP_Shelve") )
									{
									  if ( (unsigned int)String::isNotEmpty(v6, "Notch") )
									  {
										v4 = (unsigned int)String::isNotEmpty(v6, "Data_End") == 0;
									  }
									  else
									  {
										v23 = atoi(String);
										(*(void (__fastcall **)(__int64, __int64, _BYTE **, char **))(*(_QWORD *)a1 + 32i64))(
										  a1,
										  a2,
										  &v51,
										  &String);
										v24 = (unsigned __int8 *)String;
										v44 = String;
										if ( (*((_DWORD *)String - 4) & 0x30000000) == 0 )
										  _InterlockedIncrement((volatile signed __int32 *)String - 4);
										v25 = v23 - 1;
										v26 = sub_14020F700(v24, (unsigned __int8 *)&v44).m128d_f64[0];
										*(float *)(a1 + 4 * v25 + 316) = v26;
										(*(void (__fastcall **)(__int64, __int64, _BYTE **, char **))(*(_QWORD *)a1 + 32i64))(
										  a1,
										  a2,
										  &v51,
										  &String);
										v45 = String;
										v27 = (unsigned __int8 *)*((unsigned int *)String - 4);
										if ( ((unsigned int)v27 & 0x30000000) == 0 )
										  _InterlockedIncrement((volatile signed __int32 *)String - 4);
										v28 = sub_14020F700(v27, (unsigned __int8 *)&v45).m128d_f64[0];
										*(float *)(a1 + 4 * v25 + 340) = v28;
										(*(void (__fastcall **)(__int64, __int64, _BYTE **, char **))(*(_QWORD *)a1 + 32i64))(
										  a1,
										  a2,
										  &v51,
										  &String);
										v46 = String;
										v29 = (unsigned __int8 *)*((unsigned int *)String - 4);
										if ( ((unsigned int)v29 & 0x30000000) == 0 )
										  _InterlockedIncrement((volatile signed __int32 *)String - 4);
										v30 = sub_14020F700(v29, (unsigned __int8 *)&v46).m128d_f64[0];
										*(float *)(a1 + 4 * v25 + 364) = v30;
										(*(void (__fastcall **)(__int64, __int64, _BYTE **, char **))(*(_QWORD *)a1 + 32i64))(
										  a1,
										  a2,
										  &v51,
										  &String);
										*(_DWORD *)(a1 + 4 * v25 + 388) = atoi(String);
									  }
									}
									else
									{
									  v17 = atoi(String);
									  (*(void (__fastcall **)(__int64, __int64, _BYTE **, char **))(*(_QWORD *)a1 + 32i64))(
										a1,
										a2,
										&v51,
										&String);
									  v18 = (unsigned __int8 *)String;
									  v42 = String;
									  if ( (*((_DWORD *)String - 4) & 0x30000000) == 0 )
										_InterlockedIncrement((volatile signed __int32 *)String - 4);
									  v19 = v17 - 1;
									  v20 = sub_14020F700(v18, (unsigned __int8 *)&v42).m128d_f64[0];
									  *(float *)(a1 + 4 * v19 + 292) = v20;
									  (*(void (__fastcall **)(__int64, __int64, _BYTE **, char **))(*(_QWORD *)a1 + 32i64))(
										a1,
										a2,
										&v51,
										&String);
									  v43 = String;
									  v21 = (unsigned __int8 *)*((unsigned int *)String - 4);
									  if ( ((unsigned int)v21 & 0x30000000) == 0 )
										_InterlockedIncrement((volatile signed __int32 *)String - 4);
									  v22 = sub_14020F700(v21, (unsigned __int8 *)&v43).m128d_f64[0];
									  *(float *)(a1 + 4 * v19 + 300) = v22;
									  (*(void (__fastcall **)(__int64, __int64, _BYTE **, char **))(*(_QWORD *)a1 + 32i64))(
										a1,
										a2,
										&v51,
										&String);
									  *(_DWORD *)(a1 + 4 * v19 + 308) = atoi(String);
									}
								  }
								  else
								  {
									v11 = atoi(String);
									(*(void (__fastcall **)(__int64, __int64, _BYTE **, char **))(*(_QWORD *)a1 + 32i64))(
									  a1,
									  a2,
									  &v51,
									  &String);
									v12 = (unsigned __int8 *)String;
									v40 = String;
									if ( (*((_DWORD *)String - 4) & 0x30000000) == 0 )
									  _InterlockedIncrement((volatile signed __int32 *)String - 4);
									v13 = v11 - 1;
									v14 = sub_14020F700(v12, (unsigned __int8 *)&v40).m128d_f64[0];
									*(float *)(a1 + 4 * v13 + 268) = v14;
									(*(void (__fastcall **)(__int64, __int64, _BYTE **, char **))(*(_QWORD *)a1 + 32i64))(
									  a1,
									  a2,
									  &v51,
									  &String);
									v41 = String;
									v15 = (unsigned __int8 *)*((unsigned int *)String - 4);
									if ( ((unsigned int)v15 & 0x30000000) == 0 )
									  _InterlockedIncrement((volatile signed __int32 *)String - 4);
									v16 = sub_14020F700(v15, (unsigned __int8 *)&v41).m128d_f64[0];
									*(float *)(a1 + 4 * v13 + 276) = v16;
									(*(void (__fastcall **)(__int64, __int64, _BYTE **, char **))(*(_QWORD *)a1 + 32i64))(
									  a1,
									  a2,
									  &v51,
									  &String);
									*(_DWORD *)(a1 + 4 * v13 + 284) = atoi(String);
								  }
								}
								else
								{
								  *(_DWORD *)(a1 + 264) = atoi(String);
								}
							  }
							  else
							  {
								*(_BYTE *)(a1 + 96) = (unsigned int)String::isNotEmpty(String, "0") != 0;
							  }
							}
							else
							{
							  *(_DWORD *)(a1 + 160) = atoi(String);
							}
						  }
						  else
						  {
							*(_DWORD *)(a1 + 192) = atoi(String);
						  }
						}
						else
						{
						  *(_DWORD *)(a1 + 108) = atoi(String);
						}
					  }
					  else
					  {
						*(_DWORD *)(a1 + 100) = atoi(String);
					  }
					}
					else
					{
					  v49 = String;
					  v10 = sub_140048640((unsigned __int8 **)&v49);
					  *(float *)(a1 + 16) = v10;
					}
				  }
				  else
				  {
					*(double *)(a1 + 136) = (double)atoi(String);
				  }
				}
				else
				{
				  v39 = String;
				  v9 = (unsigned __int8 *)*((unsigned int *)String - 4);
				  if ( ((unsigned int)v9 & 0x30000000) == 0 )
					_InterlockedIncrement((volatile signed __int32 *)String - 4);
				  *(_QWORD *)(a1 + 128) = *(_OWORD *)&sub_14020F700(v9, (unsigned __int8 *)&v39);
				}
			  }
			  else
			  {
				*(_DWORD *)(a1 + 260) = atoi(String);
			  }
			}
			else
			{
			  v38 = String;
			  v8 = (unsigned __int8 *)*((unsigned int *)String - 4);
			  if ( ((unsigned int)v8 & 0x30000000) == 0 )
				_InterlockedIncrement((volatile signed __int32 *)String - 4);
			  *(_QWORD *)(a1 + 120) = *(_OWORD *)&sub_14020F700(v8, (unsigned __int8 *)&v38);
			}
		  }
		  else
		  {
			v52 = String;
			v7 = (unsigned __int8 *)*((unsigned int *)String - 4);
			if ( ((unsigned int)v7 & 0x30000000) == 0 )
			  _InterlockedIncrement((volatile signed __int32 *)String - 4);
			*(_QWORD *)(a1 + 112) = *(_OWORD *)&sub_14020F700(v7, (unsigned __int8 *)&v52);
		  }
		}
		else
		{
		  *(_QWORD *)(a1 + 80) = atoi(String);
		}
		sub_140048D00(&v47, &unk_14046E096);
		v31 = String;
		String = v47;
		v47 = v31;
		v32 = v31 - 16;
		if ( (*((_DWORD *)v31 - 4) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32 *)v32) == -1 )
		  j_j_free(v32);
		sub_140048D00(&v48, &unk_14046E077);
		v33 = v51;
		v51 = v48;
		v48 = v33;
		v34 = v33 - 16;
		if ( (*((_DWORD *)v33 - 4) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32 *)v34) == -1 )
		  j_j_free(v34);
	  }
	  v35 = String - 16;
	  if ( (*((_DWORD *)String - 4) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32 *)v35) == -1 )
		j_j_free(v35);
	  v36 = v51 - 16;
	  if ( (*((_DWORD *)v51 - 4) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32 *)v36) == -1 )
		j_j_free(v36);
	return v4; */
	return 1;
}
char ThreewayGen1_1::sub_1402436E0(__int64 a1, int a2, __int64 a3, __int64 a4, char a5, char a6)
{
	/*  char result; // al
	  char v9; // bp
	  char v10; // si
	  char v11; // cl
	  __int64 v12; // rax
	  _DWORD *v13; // rax
	  __int64 v14; // r9
	  __int64 v15; // r8
	  char v16; // dl
	  int v17; // [rsp+20h] [rbp-48h]
	  int v18; // [rsp+20h] [rbp-48h]
	  int v19; // [rsp+28h] [rbp-40h]
	  int v20; // [rsp+28h] [rbp-40h]
	  int v21; // [rsp+30h] [rbp-38h]
	  int v22; // [rsp+30h] [rbp-38h]
	  int v23; // [rsp+38h] [rbp-30h]
	  int v24; // [rsp+38h] [rbp-30h]
	  int v25; // [rsp+40h] [rbp-28h]
	  int v26; // [rsp+40h] [rbp-28h]
	  int v27; // [rsp+48h] [rbp-20h]
	  int v28; // [rsp+48h] [rbp-20h]

	  if ( !a6 )
		*(_DWORD *)(a1 + 192) = a2;
	  result = sub_140210740(a1);
	  if ( result && a5 )
	  {
		v9 = 1;
		v10 = 0;
		switch ( a2 )
		{
		  case 1:
			v10 = 1;
			break;
		  case 2:
			v10 = 2;
			break;
		  case 3:
			v10 = 3;
			break;
		  case 4:
			v9 = 4;
			v10 = 1;
			break;
		  case 0:
			(*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD, _BYTE, _BYTE, _BYTE, char, char, char, _DWORD, _DWORD))(*(_QWORD *)a1 + 144i64))(
			  a1,
			  0i64,
			  1i64,
			  0i64,
			  0,
			  0,
			  0,
			  1,
			  1,
			  1,
			  0,
			  0);
			break;
		}
		sub_140007A80(*(__int64 **)(a1 + 56));
		v11 = *(_BYTE *)(a1 + 72);
		v12 = **(_QWORD **)(a1 + 56);
		++*(_DWORD *)(v12 + 20);
		**(_BYTE **)v12 = v11;
		v13 = **(_DWORD ***)(a1 + 56);
		++v13[5];
		*(_BYTE *)(*(_QWORD *)v13 + 1i64) = 13;
		sub_140007AF0(**(__int64 ***)(a1 + 56), v9 & 3);
		sub_140007AF0(**(__int64 ***)(a1 + 56), v10);
		*(_DWORD *)(**(_QWORD **)(a1 + 56) + 12i64) = 7;
		sub_140212F70(*(_QWORD *)(a1 + 64), *(__int64 ***)(a1 + 56));
		*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 56) + 8i64) + 20i64) = 1;
		v14 = *(_QWORD *)(*(_QWORD *)(a1 + 56) + 8i64);
		v15 = *(int *)(v14 + 20);
		v16 = *(_BYTE *)(v15 + *(_QWORD *)v14);
		result = v15 + 1;
		*(_DWORD *)(v14 + 20) = v15 + 1;
		if ( v16 == 9 && !a2 )
		{
		  LOBYTE(v27) = 1;
		  LOBYTE(v25) = 1;
		  LOBYTE(v23) = 1;
		  LOBYTE(v21) = 1;
		  LOBYTE(v19) = 0;
		  LOBYTE(v17) = 0;
		  (*(void (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD, int, int, int, int, int, int, _DWORD, _DWORD))(*(_QWORD *)a1 + 144i64))(
			a1,
			0i64,
			0i64,
			0i64,
			v17,
			v19,
			v21,
			v23,
			v25,
			v27,
			0,
			0);
		  Sleep(0x3Cu);
		  LOBYTE(v28) = 0;
		  LOBYTE(v26) = 0;
		  LOBYTE(v24) = 0;
		  LOBYTE(v22) = 1;
		  LOBYTE(v20) = 0;
		  LOBYTE(v18) = 0;
		  result = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD, int, int, int, int, int, int, _DWORD, _DWORD))(*(_QWORD *)a1 + 144i64))(
					 a1,
					 0i64,
					 0i64,
					 0i64,
					 v18,
					 v20,
					 v22,
					 v24,
					 v26,
					 v28,
					 0,
					 0);
		}
	  }
	return result;*/
	return 1;
}
__int64 ThreewayGen1_1::sub_1402436D0(__int64 a1)
{
	return *(unsigned int*)(a1 + 192);
}
char ThreewayGen1_1::sub_1402424C0(__int64 a1, float a2, __int64 a3, __int64 a4, char a5)
{
	/*  __int64 v6; // rdx
	  __int64 v7; // rcx
	  char v8; // r9
	  char v9; // cl
	  __int64 v10; // rax
	  _DWORD *v11; // rax
	  char v12; // cl
	  __int64 v13; // rax
	  _DWORD *v14; // rax
	  __int64 v15; // r8
	  char v17; // [rsp+20h] [rbp-68h]
	  int v18; // [rsp+20h] [rbp-68h]
	  int v19; // [rsp+20h] [rbp-68h]
	  char v20; // [rsp+28h] [rbp-60h]
	  int v21; // [rsp+28h] [rbp-60h]
	  int v22; // [rsp+28h] [rbp-60h]
	  char v23; // [rsp+30h] [rbp-58h]
	  char v24; // [rsp+38h] [rbp-50h]
	  char v25; // [rsp+40h] [rbp-48h]
	  char v26; // [rsp+48h] [rbp-40h]
	  char v27[16]; // [rsp+60h] [rbp-28h] BYREF

	  if ( !sub_140210740(a1) )
		return 0;
	  if ( v8 )
	  {
		LOBYTE(v6) = 1;
		(*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 136i64))(a1, v6);
	  }
	  if ( a5 )
	  {
		sub_14021C660(v7, *(__int64 **)(a1 + 56), *(_DWORD *)(a1 + 72), 1);
		sub_140212F70(*(_QWORD *)(a1 + 64), *(__int64 ***)(a1 + 56));
	  }
	  (*(void (__fastcall **)(__int64, char *))(*(_QWORD *)a1 + 432i64))(a1, v27);
	  sub_140007A80(*(__int64 **)(a1 + 56));
	  v9 = *(_BYTE *)(a1 + 72);
	  v10 = **(_QWORD **)(a1 + 56);
	  ++*(_DWORD *)(v10 + 20);
	  **(_BYTE **)v10 = v9;
	  v11 = **(_DWORD ***)(a1 + 56);
	  ++v11[5];
	  *(_BYTE *)(*(_QWORD *)v11 + 1i64) = 43;
	  sub_140007AF0(**(__int64 ***)(a1 + 56), 12);
	  *(_DWORD *)(**(_QWORD **)(a1 + 56) + 12i64) = 6;
	  sub_140212F70(*(_QWORD *)(a1 + 64), *(__int64 ***)(a1 + 56));
	  sub_1402127F0(*(_QWORD *)(a1 + 64), -130.0);
	  v20 = 1;
	  v17 = 1;
	  (*(void (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD, char, char))(*(_QWORD *)a1 + 56i64))(
		a1,
		0i64,
		0i64,
		0i64,
		v17,
		v20);
	  LOBYTE(v21) = 1;
	  LOBYTE(v18) = 1;
	  (*(void (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD, int, int))(*(_QWORD *)a1 + 56i64))(
		a1,
		0i64,
		0i64,
		0i64,
		v18,
		v21);
	  Sleep(0xC8u);
	  sub_1402127F0(*(_QWORD *)(a1 + 64), a2);
	  v26 = 0;
	  v25 = 0;
	  v24 = 0;
	  v23 = 0;
	  LOBYTE(v22) = 1;
	  LOBYTE(v19) = 0;
	  (*(void (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD, int, int, char, char, char, char, _DWORD, _DWORD))(*(_QWORD *)a1 + 144i64))(
		a1,
		0i64,
		0i64,
		0i64,
		v19,
		v22,
		v23,
		v24,
		v25,
		v26,
		0,
		0);
	  sub_140007A80(*(__int64 **)(a1 + 56));
	  v12 = *(_BYTE *)(a1 + 72);
	  v13 = **(_QWORD **)(a1 + 56);
	  ++*(_DWORD *)(v13 + 20);
	  **(_BYTE **)v13 = v12;
	  v14 = **(_DWORD ***)(a1 + 56);
	  ++v14[5];
	  *(_BYTE *)(*(_QWORD *)v14 + 1i64) = 43;
	  sub_140007AF0(**(__int64 ***)(a1 + 56), 5);
	  *(_DWORD *)(**(_QWORD **)(a1 + 56) + 12i64) = 6;
	  sub_140212F70(*(_QWORD *)(a1 + 64), *(__int64 ***)(a1 + 56));
	  LOBYTE(v15) = 1;
	  (*(void (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)a1 + 328i64))(a1, *(unsigned int *)(a1 + 264), v15);*/
	return 1;
}
__int64 ThreewayGen1_1::sub_1402436C0(__int64 a1)
{
	return *(unsigned int*)(a1 + 160);
}
void ThreewayGen1_1::sub_1402436B0(__int64 a1, int a2)
{
	*(_DWORD*)(a1 + 160) = a2;
}
__int64 ThreewayGen1_1::sub_1402441D0(__int64 a1)
{
	/*  __int64 result; // rax

	  *(_QWORD *)(a1 + 152) = *(_QWORD *)(a1 + 128);
	  *(_QWORD *)(a1 + 144) = *(_QWORD *)(a1 + 112);
	  *(_DWORD *)(a1 + 412) = *(_DWORD *)(a1 + 264);
	  *(_DWORD *)(a1 + 416) = *(_DWORD *)(a1 + 260);
	  *(_DWORD *)(a1 + 420) = *(_DWORD *)(a1 + 268);
	  *(_DWORD *)(a1 + 428) = *(_DWORD *)(a1 + 276);
	  *(_DWORD *)(a1 + 424) = *(_DWORD *)(a1 + 272);
	  *(_DWORD *)(a1 + 432) = *(_DWORD *)(a1 + 280);
	  *(_DWORD *)(a1 + 444) = *(_DWORD *)(a1 + 292);
	  *(_DWORD *)(a1 + 452) = *(_DWORD *)(a1 + 300);
	  *(_DWORD *)(a1 + 448) = *(_DWORD *)(a1 + 296);
	  *(_DWORD *)(a1 + 456) = *(_DWORD *)(a1 + 304);
	  *(_DWORD *)(a1 + 468) = *(_DWORD *)(a1 + 316);
	  *(_DWORD *)(a1 + 492) = *(_DWORD *)(a1 + 340);
	  *(_DWORD *)(a1 + 516) = *(_DWORD *)(a1 + 364);
	  *(_DWORD *)(a1 + 472) = *(_DWORD *)(a1 + 320);
	  *(_DWORD *)(a1 + 496) = *(_DWORD *)(a1 + 344);
	  *(_DWORD *)(a1 + 520) = *(_DWORD *)(a1 + 368);
	  *(_DWORD *)(a1 + 476) = *(_DWORD *)(a1 + 324);
	  *(_DWORD *)(a1 + 500) = *(_DWORD *)(a1 + 348);
	  *(_DWORD *)(a1 + 524) = *(_DWORD *)(a1 + 372);
	  *(_DWORD *)(a1 + 480) = *(_DWORD *)(a1 + 328);
	  *(_DWORD *)(a1 + 504) = *(_DWORD *)(a1 + 352);
	  *(_DWORD *)(a1 + 528) = *(_DWORD *)(a1 + 376);
	  *(_DWORD *)(a1 + 484) = *(_DWORD *)(a1 + 332);
	  *(_DWORD *)(a1 + 508) = *(_DWORD *)(a1 + 356);
	  *(_DWORD *)(a1 + 532) = *(_DWORD *)(a1 + 380);
	  *(_DWORD *)(a1 + 488) = *(_DWORD *)(a1 + 336);
	  *(_DWORD *)(a1 + 512) = *(_DWORD *)(a1 + 360);
	  result = *(unsigned int *)(a1 + 384);
	  *(_DWORD *)(a1 + 536) = result;
	return result;*/
	return 1;
}
__int64 ThreewayGen1_1::sub_140244060(__int64 a1)
{
	/*  __int64 result; // rax

	  *(_QWORD *)(a1 + 128) = *(_QWORD *)(a1 + 152);
	  *(_QWORD *)(a1 + 112) = *(_QWORD *)(a1 + 144);
	  *(_DWORD *)(a1 + 264) = *(_DWORD *)(a1 + 412);
	  *(_DWORD *)(a1 + 260) = *(_DWORD *)(a1 + 416);
	  *(_DWORD *)(a1 + 268) = *(_DWORD *)(a1 + 420);
	  *(_DWORD *)(a1 + 276) = *(_DWORD *)(a1 + 428);
	  *(_DWORD *)(a1 + 272) = *(_DWORD *)(a1 + 424);
	  *(_DWORD *)(a1 + 280) = *(_DWORD *)(a1 + 432);
	  *(_DWORD *)(a1 + 292) = *(_DWORD *)(a1 + 444);
	  *(_DWORD *)(a1 + 300) = *(_DWORD *)(a1 + 452);
	  *(_DWORD *)(a1 + 296) = *(_DWORD *)(a1 + 448);
	  *(_DWORD *)(a1 + 304) = *(_DWORD *)(a1 + 456);
	  *(_DWORD *)(a1 + 316) = *(_DWORD *)(a1 + 468);
	  *(_DWORD *)(a1 + 340) = *(_DWORD *)(a1 + 492);
	  *(_DWORD *)(a1 + 364) = *(_DWORD *)(a1 + 516);
	  *(_DWORD *)(a1 + 320) = *(_DWORD *)(a1 + 472);
	  *(_DWORD *)(a1 + 344) = *(_DWORD *)(a1 + 496);
	  *(_DWORD *)(a1 + 368) = *(_DWORD *)(a1 + 520);
	  *(_DWORD *)(a1 + 324) = *(_DWORD *)(a1 + 476);
	  *(_DWORD *)(a1 + 348) = *(_DWORD *)(a1 + 500);
	  *(_DWORD *)(a1 + 372) = *(_DWORD *)(a1 + 524);
	  *(_DWORD *)(a1 + 328) = *(_DWORD *)(a1 + 480);
	  *(_DWORD *)(a1 + 352) = *(_DWORD *)(a1 + 504);
	  *(_DWORD *)(a1 + 376) = *(_DWORD *)(a1 + 528);
	  *(_DWORD *)(a1 + 332) = *(_DWORD *)(a1 + 484);
	  *(_DWORD *)(a1 + 356) = *(_DWORD *)(a1 + 508);
	  *(_DWORD *)(a1 + 380) = *(_DWORD *)(a1 + 532);
	  *(_DWORD *)(a1 + 336) = *(_DWORD *)(a1 + 488);
	  *(_DWORD *)(a1 + 360) = *(_DWORD *)(a1 + 512);
	  result = *(unsigned int *)(a1 + 536);
	  *(_DWORD *)(a1 + 384) = result;
	return result;*/
	return 1;
}
int ThreewayGen1_1::sub_140243EE0(__int64** a1)
{
	/*  __int64 v2; // rdx
	  __int64 v3; // rdx
	  __int64 v4; // rdx
	  int v5; // edi
	  _BYTE *v6; // rbp
	  int i; // ebx
	  int v8; // ebx
	  _BYTE *v9; // rbp
	  _BYTE *v10; // rbx
	  __int64 *v11; // rdi
	  int v12; // ebx
	  __int64 v13; // rax
	  _DWORD *v14; // rax
	  char v15; // dl
	  int v17; // [rsp+20h] [rbp-18h]
	  int v18; // [rsp+28h] [rbp-10h]

	  *((_BYTE *)a1 + 32) = 0;
	  sub_140243D20((__int64)a1);
	  ((void (__fastcall *)(__int64 **, __int64, _QWORD))(*a1)[23])(a1, v2, 0i64);
	  ((void (__fastcall *)(__int64 **, __int64, _QWORD))(*a1)[19])(a1, v3, 0i64);
	  ((void (__fastcall *)(__int64 **, __int64, _QWORD))(*a1)[66])(a1, v4, 0i64);
	  v5 = 0;
	  v6 = (char *)a1 + 268;
	  for ( i = 0; i < 2; ++i )
	  {
		LOBYTE(v17) = 0;
		((void (__fastcall *)(__int64 **, _QWORD, _BYTE *, _BYTE *, int))(*a1)[28])(a1, (unsigned int)i, v6, v6 + 8, v17);
		v6 += 4;
	  }
	  v8 = 0;
	  v9 = (char *)a1 + 292;
	  do
	  {
		LOBYTE(v17) = 0;
		((void (__fastcall *)(__int64 **, _QWORD, _BYTE *, _BYTE *, int))(*a1)[30])(a1, (unsigned int)v8++, v9, v9 + 8, v17);
		v9 += 4;
	  }
	  while ( v8 < 2 );
	  v10 = (char *)a1 + 340;
	  do
	  {
		LOBYTE(v18) = 0;
		((void (__fastcall *)(__int64 **, _QWORD, _BYTE *, _BYTE *, _BYTE *, int))(*a1)[32])(
		  a1,
		  (unsigned int)v5++,
		  v10 - 24,
		  v10,
		  v10 + 24,
		  v18);
		v10 += 4;
	  }
	  while ( v5 < 6 );
	  ((void (__fastcall *)(__int64 **, _QWORD, _QWORD))(*a1)[41])(a1, *((unsigned int *)a1 + 66), 0i64);
	  v11 = a1[7];
	  v12 = *((_DWORD *)a1 + 18);
	  sub_140007A80(v11);
	  v13 = *v11;
	  ++*(_DWORD *)(v13 + 20);
	  **(_BYTE **)v13 = v12;
	  v14 = (_DWORD *)*v11;
	  ++v14[5];
	  *(_BYTE *)(*(_QWORD *)v14 + 1i64) = 61;
	  sub_140007AF0((__int64 *)*v11, 0);
	  sub_140007AF0((__int64 *)*v11, v15);
	  *(_DWORD *)(*v11 + 12) = 7;
	return sub_140212F70((__int64)a1[8], (__int64**)a1[7]);*/
	return 1;
}
__int64 ThreewayGen1_1::sub_140243DC0(_BYTE* a1, __int64 a2, __int64 a3)
{
	/*  __int64 v3; // rax
	  char v4; // bl
	  __int64 v6; // rdx
	  __int64 v7; // r8
	  __int64 v8; // r8
	  __int64 v9; // rdx
	  int v10; // ebx
	  _BYTE *v11; // rbp
	  int i; // esi
	  int v13; // esi
	  _BYTE *v14; // rbp
	  _BYTE *v15; // rsi
	  __int64 result; // rax
	  int v17; // [rsp+20h] [rbp-18h]
	  int v18; // [rsp+28h] [rbp-10h]
	  int v19; // [rsp+48h] [rbp+10h] BYREF

	  v3 = *(_QWORD *)a1;
	  LOBYTE(a3) = 1;
	  a1[32] = a2;
	  v4 = a2;
	  v19 = 0;
	  (*(void (__fastcall **)(_BYTE *, __int64, __int64))(v3 + 184))(a1, a2, a3);
	  if ( v4 )
	  {
		LOBYTE(v7) = 1;
		(*(void (__fastcall **)(_BYTE *, __int64, __int64))(*(_QWORD *)a1 + 152i64))(a1, v6, v7);
		LOBYTE(v8) = 1;
		(*(void (__fastcall **)(_BYTE *, __int64, __int64))(*(_QWORD *)a1 + 528i64))(a1, v9, v8);
	  }
	  v10 = 0;
	  v11 = a1 + 268;
	  for ( i = 0; i < 2; ++i )
	  {
		LOBYTE(v17) = 1;
		(*(void (__fastcall **)(_BYTE *, _QWORD, _BYTE *, int *, int))(*(_QWORD *)a1 + 224i64))(
		  a1,
		  (unsigned int)i,
		  v11,
		  &v19,
		  v17);
		v11 += 4;
	  }
	  v13 = 0;
	  v14 = a1 + 292;
	  do
	  {
		LOBYTE(v17) = 1;
		(*(void (__fastcall **)(_BYTE *, _QWORD, _BYTE *, int *, int))(*(_QWORD *)a1 + 240i64))(
		  a1,
		  (unsigned int)v13++,
		  v14,
		  &v19,
		  v17);
		v14 += 4;
	  }
	  while ( v13 < 2 );
	  v15 = a1 + 316;
	  do
	  {
		LOBYTE(v18) = 1;
		result = (*(__int64 (__fastcall **)(_BYTE *, _QWORD, _BYTE *, int *, _BYTE *, int))(*(_QWORD *)a1 + 256i64))(
				   a1,
				   (unsigned int)v10++,
				   v15,
				   &v19,
				   v15 + 48,
				   v18);
		v15 += 4;
	  }
	  while ( v10 < 6 );
	return result;*/
	return 1;
}
bool ThreewayGen1_1::sub_140243AC0(__int64 a1, char a2, char a3, char a4, char a5, char a6, char a7, char a8, char a9, char a10, int a11, int a12)
{
	/*  __int64 v14; // rdx
	  __int64 v15; // rcx
	  __int64 v16; // r8
	  char v17; // r9
	  char v18; // cl
	  __int64 v19; // rax
	  _DWORD *v20; // rax
	  char v21; // dl
	  char v22; // dl
	  char v23; // dl
	  __int64 v24; // rcx
	  __int64 v25; // r9
	  __int64 v26; // r8
	  char v27; // dl
	  __int64 v28; // r9
	  __int64 v29; // r8
	  char v30; // dl
	  int v32; // [rsp+28h] [rbp-80h]
	  int v33; // [rsp+60h] [rbp-48h]

	  if ( !sub_140210740(a1) )
		return 0;
	  if ( v17 )
	  {
		LOBYTE(v16) = 1;
		(*(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)a1 + 528i64))(a1, v14, v16);
		v17 = a2;
	  }
	  else if ( !a3 && !a6 && !a5 && !a8 && !a9 && !a10 && !a7 )
	  {
		sub_140007A80(*(__int64 **)(a1 + 56));
		v18 = *(_BYTE *)(a1 + 72);
		v19 = **(_QWORD **)(a1 + 56);
		++*(_DWORD *)(v19 + 20);
		**(_BYTE **)v19 = v18;
		v20 = **(_DWORD ***)(a1 + 56);
		++v20[5];
		*(_BYTE *)(*(_QWORD *)v20 + 1i64) = 5;
		sub_140007AF0(**(__int64 ***)(a1 + 56), 0);
		sub_140007AF0(**(__int64 ***)(a1 + 56), v21);
		sub_140007AF0(**(__int64 ***)(a1 + 56), v22);
		sub_140007AF0(**(__int64 ***)(a1 + 56), v23);
		*(_DWORD *)(**(_QWORD **)(a1 + 56) + 12i64) = 9;
		sub_140212F70(*(_QWORD *)(a1 + 64), *(__int64 ***)(a1 + 56));
		v24 = *(_QWORD *)(*(_QWORD *)(a1 + 56) + 8i64);
		*(_DWORD *)(v24 + 20) = 1;
		v25 = *(_QWORD *)(*(_QWORD *)(a1 + 56) + 8i64);
		v26 = *(int *)(v25 + 20);
		v27 = *(_BYTE *)(v26 + *(_QWORD *)v25);
		*(_DWORD *)(v25 + 20) = v26 + 1;
		if ( v27 == 9 )
		  return 1;
		LOBYTE(v32) = a4;
		sub_14021BBC0(v24, *(__int64 **)(a1 + 56), *(_DWORD *)(a1 + 72), 0, 0, v32, 0, 0, 0, 0, 0, 0, v33, a12);
		goto LABEL_14;
	  }
	  LOBYTE(v32) = a4;
	  sub_14021BBC0(v15, *(__int64 **)(a1 + 56), *(_DWORD *)(a1 + 72), v17, a3, v32, a5, a6, a7, a8, a9, a10, v33, a12);
	LABEL_14:
	  sub_140212F70(*(_QWORD *)(a1 + 64), *(__int64 ***)(a1 + 56));
	  *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 56) + 8i64) + 20i64) = 1;
	  v28 = *(_QWORD *)(*(_QWORD *)(a1 + 56) + 8i64);
	  v29 = *(int *)(v28 + 20);
	  v30 = *(_BYTE *)(v29 + *(_QWORD *)v28);
	  *(_DWORD *)(v28 + 20) = v29 + 1;
	return v30 == 9;*/
	return true;
}
char ThreewayGen1_1::sub_140243940(__int64 a1, double a2, char a3)
{
	/*  char result; // al
	  float v5; // xmm6_4
	  __int64 v6; // rcx
	  __int64 v7; // rax

	  if ( !a3 )
		*(double *)(a1 + 112) = a2;
	  result = sub_140210740(a1);
	  if ( result )
	  {
		v5 = *(float *)(a1 + 16) + a2;
		if ( *(_BYTE *)(a1 + 32) )
		  v5 = a2;
		sub_140007A80(*(__int64 **)(a1 + 56));
		v6 = *(unsigned __int8 *)(a1 + 72);
		v7 = **(_QWORD **)(a1 + 56);
		++*(_DWORD *)(v7 + 20);
		**(_BYTE **)v7 = v6;
		sub_14021B2A0(v6, *(__int64 **)(a1 + 56), *(_DWORD *)(a1 + 72), v5);
		result = sub_140212F70(*(_QWORD *)(a1 + 64), *(__int64 ***)(a1 + 56));
	  }
	return result;*/
	return 1;
}
double ThreewayGen1_1::sub_140243930(__int64 a1)
{
	return *(double*)(a1 + 112);
}
void ThreewayGen1_1::sub_140243920(__int64 a1, double a2)
{
	*(double*)(a1 + 120) = a2;
}
double ThreewayGen1_1::sub_140243900(__int64 a1)
{
	/*  double result; // xmm0_8

	  result = *(double *)(a1 + 120);
	  if ( result == -999.0 )
		result = 0.0;
	return result;*/
	return 0;
}
char ThreewayGen1_1::sub_1402439E0(__int64 a1, double a2, char a3)
{
	/*  __int64 v4; // rcx
	  float v5; // xmm2_4
	  __int64 v6; // r9
	  __int64 v7; // r8
	  char v8; // dl
	  char result; // al

	  if ( !a3 )
	  {
		if ( a2 <= 85.0 )
		{
		  if ( a2 >= 0.0 )
			*(double *)(a1 + 128) = a2;
		  else
			*(_QWORD *)(a1 + 128) = 0i64;
		}
		else
		{
		  *(_QWORD *)(a1 + 128) = 0x4055400000000000i64;
		}
	  }
	  if ( !sub_140210740(a1) )
		goto LABEL_12;
	  v5 = a2 + *(double *)(a1 + 136);
	  if ( *(_BYTE *)(a1 + 32) )
		v5 = 0.0;
	  sub_14021B060(v4, *(__int64 **)(a1 + 56), *(_DWORD *)(a1 + 72), fminf(85.0, fmaxf(0.0, v5)));
	  sub_140212F70(*(_QWORD *)(a1 + 64), *(__int64 ***)(a1 + 56));
	  *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 56) + 8i64) + 20i64) = 1;
	  v6 = *(_QWORD *)(*(_QWORD *)(a1 + 56) + 8i64);
	  v7 = *(int *)(v6 + 20);
	  v8 = *(_BYTE *)(v7 + *(_QWORD *)v6);
	  *(_DWORD *)(v6 + 20) = v7 + 1;
	  if ( v8 == 9 )
		result = 1;
	  else
	LABEL_12:
		result = 0;
	return result;*/
	return 1;
}
double ThreewayGen1_1::sub_1402439D0(__int64 a1)
{
	return *(double*)(a1 + 128);
}
char ThreewayGen1_1::sub_1402427D0(__int64 a1, _DWORD* a2)
{
	/*  char v4; // r8
	  __int64 v5; // rax
	  _DWORD *v6; // rax
	  __int64 v7; // r9
	  __int64 v8; // r8
	  char v9; // dl
	  __int64 v10; // r9
	  __int64 v11; // r8
	  int v12; // edx
	  __int64 v13; // r9
	  __int64 v14; // r8
	  int v15; // edx
	  __int64 v16; // r9
	  __int64 v17; // r8
	  int v18; // edx
	  __int64 v19; // r9
	  __int64 v20; // r8
	  int v21; // edx
	  char result; // al

	  if ( !sub_140210740(a1) )
		return 0;
	  sub_140007A80(*(__int64 **)(a1 + 56));
	  v4 = *(_BYTE *)(a1 + 72);
	  v5 = **(_QWORD **)(a1 + 56);
	  ++*(_DWORD *)(v5 + 20);
	  **(_BYTE **)v5 = v4;
	  v6 = **(_DWORD ***)(a1 + 56);
	  ++v6[5];
	  *(_BYTE *)(*(_QWORD *)v6 + 1i64) = 23;
	  sub_140007AF0(**(__int64 ***)(a1 + 56), 4);
	  *(_DWORD *)(**(_QWORD **)(a1 + 56) + 12i64) = 6;
	  sub_140212F70(*(_QWORD *)(a1 + 64), *(__int64 ***)(a1 + 56));
	  *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 56) + 8i64) + 20i64) = 1;
	  v7 = *(_QWORD *)(*(_QWORD *)(a1 + 56) + 8i64);
	  v8 = *(int *)(v7 + 20);
	  v9 = *(_BYTE *)(v8 + *(_QWORD *)v7);
	  *(_DWORD *)(v7 + 20) = v8 + 1;
	  if ( v9 != 9 )
		return 0;
	  v10 = *(_QWORD *)(*(_QWORD *)(a1 + 56) + 8i64);
	  v11 = *(int *)(v10 + 20);
	  v12 = *(unsigned __int8 *)(v11 + *(_QWORD *)v10);
	  *(_DWORD *)(v10 + 20) = v11 + 1;
	  *a2 = v12;
	  v13 = *(_QWORD *)(*(_QWORD *)(a1 + 56) + 8i64);
	  v14 = *(int *)(v13 + 20);
	  v15 = *(unsigned __int8 *)(v14 + *(_QWORD *)v13);
	  *(_DWORD *)(v13 + 20) = v14 + 1;
	  a2[1] = v15;
	  v16 = *(_QWORD *)(*(_QWORD *)(a1 + 56) + 8i64);
	  v17 = *(int *)(v16 + 20);
	  v18 = *(unsigned __int8 *)(v17 + *(_QWORD *)v16);
	  *(_DWORD *)(v16 + 20) = v17 + 1;
	  a2[2] = v18;
	  v19 = *(_QWORD *)(*(_QWORD *)(a1 + 56) + 8i64);
	  v20 = *(int *)(v19 + 20);
	  v21 = *(unsigned __int8 *)(v20 + *(_QWORD *)v19);
	  *(_DWORD *)(v19 + 20) = v20 + 1;
	  result = 1;
	  a2[3] = v21;
	return result;*/
	return 1;
}
bool ThreewayGen1_1::sub_140242750(__int64 a1)
{
	/*  __int64 *v1; // r9
	  __int64 v2; // rax
	  bool result; // al
	  __int64 v4; // [rsp+20h] [rbp-48h] BYREF
	  char v5[40]; // [rsp+28h] [rbp-40h] BYREF

	  result = 0;
	  if ( sub_140210740(a1) )
	  {
		v2 = *v1;
		v4 = 0i64;
		if ( (*(unsigned __int8 (__fastcall **)(__int64 *, char *, __int64 *))(v2 + 200))(v1, v5, &v4) )
		{
		  if ( (v5[0] & 1) != 0 )
			result = 1;
		}
	  }
	return result;*/
	return 1;
}
__int64 ThreewayGen1_1::sub_140243500(__int64 a1, int a2, _DWORD* a3, _DWORD* a4)
{
	/*  __int64 v5; // rdi
	  char v8; // cl
	  __int64 v9; // rax
	  _DWORD *v10; // rax
	  __int64 v11; // r9
	  __int64 v12; // r8
	  char v13; // dl
	  __int64 v14; // r8
	  __int64 v15; // rdx
	  int v16; // ecx
	  __int64 v17; // r8
	  __int64 v18; // rdx
	  int v19; // er10
	  __int64 v20; // r8
	  __int64 v21; // rdx
	  int v22; // er9
	  __int64 result; // rax

	  v5 = a2;
	  if ( sub_140210740(a1) )
	  {
		if ( !*(_DWORD *)(a1 + 4 * v5 + 284) )
		{
		  sub_140007A80(*(__int64 **)(a1 + 56));
		  v8 = *(_BYTE *)(a1 + 72);
		  v9 = **(_QWORD **)(a1 + 56);
		  ++*(_DWORD *)(v9 + 20);
		  **(_BYTE **)v9 = v8;
		  v10 = **(_DWORD ***)(a1 + 56);
		  ++v10[5];
		  *(_BYTE *)(*(_QWORD *)v10 + 1i64) = 16;
		  sub_140007AF0(**(__int64 ***)(a1 + 56), 134);
		  sub_140007AF0(**(__int64 ***)(a1 + 56), v5 + 1);
		  *(_DWORD *)(**(_QWORD **)(a1 + 56) + 12i64) = 7;
		  sub_140212F70(*(_QWORD *)(a1 + 64), *(__int64 ***)(a1 + 56));
		  *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 56) + 8i64) + 20i64) = 1;
		  v11 = *(_QWORD *)(*(_QWORD *)(a1 + 56) + 8i64);
		  v12 = *(int *)(v11 + 20);
		  v13 = *(_BYTE *)(v12 + *(_QWORD *)v11);
		  *(_DWORD *)(v11 + 20) = v12 + 1;
		  if ( v13 == 9 )
		  {
			*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 56) + 8i64) + 20i64) = 2;
			++*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 56) + 8i64) + 20i64);
			++*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 56) + 8i64) + 20i64);
			++*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 56) + 8i64) + 20i64);
			v14 = *(_QWORD *)(*(_QWORD *)(a1 + 56) + 8i64);
			v15 = *(int *)(v14 + 20);
			v16 = *(unsigned __int8 *)(v15 + *(_QWORD *)v14);
			*(_DWORD *)(v14 + 20) = v15 + 1;
			v17 = *(_QWORD *)(*(_QWORD *)(a1 + 56) + 8i64);
			v18 = *(int *)(v17 + 20);
			v19 = *(unsigned __int8 *)(v18 + *(_QWORD *)v17);
			*(_DWORD *)(v17 + 20) = v18 + 1;
			v20 = *(_QWORD *)(*(_QWORD *)(a1 + 56) + 8i64);
			v21 = *(int *)(v20 + 20);
			v22 = *(unsigned __int8 *)(v21 + *(_QWORD *)v20);
			*(_DWORD *)(v20 + 20) = v21 + 1;
			*(_DWORD *)(a1 + 4 * v5 + 284) = v22 + ((v19 + (v16 << 8)) << 8);
		  }
		}
	  }
	  *a3 = *(_DWORD *)(a1 + 4 * v5 + 268);
	  result = *(unsigned int *)(a1 + 4 * v5 + 276);
	  *a4 = result;
	return result;*/
	return 1;
}
char ThreewayGen1_1::sub_1402431B0(__int64 a1, __int64 a2, _DWORD* a3, float* a4, char a5)
{
	/*  char v8; // r13
	  __int64 v9; // rbx
	  char result; // al
	  int v11; // er15
	  double v12; // xmm6_8
	  double v13; // xmm0_8
	  __m128d v14; // xmm2
	  double v15; // xmm1_8
	  int v16; // er12
	  double v17; // xmm0_8
	  int v18; // edi
	  int v19; // ebx
	  __int64 v20; // rax
	  char v21; // cl
	  _DWORD *v22; // rax
	  __int64 i; // r9
	  __int64 v24; // r9
	  char v25[4]; // [rsp+20h] [rbp-78h] BYREF
	  char v26[4]; // [rsp+24h] [rbp-74h] BYREF
	  char v27[16]; // [rsp+28h] [rbp-70h]

	  v8 = a2 + 1;
	  v9 = (int)a2;
	  if ( !*(_DWORD *)(a1 + 4i64 * (int)a2 + 284) )
		(*(void (__fastcall **)(__int64, __int64, char *, char *))(*(_QWORD *)a1 + 216i64))(a1, a2, v26, v25);
	  if ( *a4 > 0.0 )
		*a4 = 0.0;
	  if ( !a5 )
	  {
		*(_DWORD *)(a1 + 4 * v9 + 268) = *a3;
		*(float *)(a1 + 4 * v9 + 276) = *a4;
	  }
	  result = sub_140210740(a1);
	  if ( result )
	  {
		v11 = *(_DWORD *)(a1 + 4 * v9 + 284);
		if ( v11 )
		{
		  v12 = (float)((float)(3.1415927 / (float)v11) + (float)(3.1415927 / (float)v11)) * *(float *)a3;
		  v13 = tan(v12 * 0.5);
		  v14 = (__m128d)0x3FF0000000000000ui64;
		  v15 = (v13 - 1.0) / (v13 + 1.0);
		  if ( v12 > 2.03444 )
			v15 = -0.9999999000000001;
		  if ( v12 < 0.0001 )
			v15 = 0.9999999000000001;
		  v16 = (int)(v15 * 8388607.0) & 0xFFFFFF;
		  v14.m128d_f64[0] = 1.0 - v15 * v15;
		  if ( v14.m128d_f64[0] < 0.0 )
			v17 = sqrt(v14.m128d_f64[0]);
		  else
			*(_QWORD *)&v17 = *(_OWORD *)&_mm_sqrt_pd(v14);
		  v18 = (int)(v17 * 8388607.0);
		  v19 = (int)(pow(10.0, *a4 / 20.0) * 8388607.0 * 0.5);
		  v27[0] = v8;
		  v27[1] = (int)floor((double)v16 * 0.0000152587890625);
		  v27[2] = (int)floor((double)v16 * 0.00390625);
		  v27[3] = (int)floor((double)v16);
		  v27[4] = v11 / 0x10000;
		  v27[5] = v11 / 256;
		  v27[6] = v11;
		  v27[7] = (int)floor((double)v19 * 0.0000152587890625);
		  v27[8] = (int)floor((double)v19 * 0.00390625);
		  v27[9] = (int)floor((double)v19);
		  v27[10] = (int)floor((double)v18 * 0.0000152587890625);
		  v27[11] = (int)floor((double)v18 * 0.00390625);
		  v27[12] = (int)floor((double)v18);
		  sub_140007A80(*(__int64 **)(a1 + 56));
		  v20 = **(_QWORD **)(a1 + 56);
		  v21 = *(_BYTE *)(a1 + 72);
		  ++*(_DWORD *)(v20 + 20);
		  **(_BYTE **)v20 = v21;
		  v22 = **(_DWORD ***)(a1 + 56);
		  ++v22[5];
		  *(_BYTE *)(*(_QWORD *)v22 + 1i64) = 16;
		  sub_140007AF0(**(__int64 ***)(a1 + 56), 6);
		  sub_140007AF0(**(__int64 ***)(a1 + 56), v8);
		  for ( i = 1i64; i < 13; i = v24 + 1 )
			sub_140007AF0(**(__int64 ***)(a1 + 56), v27[i]);
		  *(_DWORD *)(**(_QWORD **)(a1 + 56) + 12i64) = 19;
		  result = sub_140212F70(*(_QWORD *)(a1 + 64), *(__int64 ***)(a1 + 56));
		}
	  }
	return result;*/
	return 1;
}
__int64 ThreewayGen1_1::sub_140242FE0(__int64 a1, int a2, _DWORD* a3, _DWORD* a4)
{
	/*  __int64 v5; // rdi
	  char v8; // cl
	  __int64 v9; // rax
	  _DWORD *v10; // rax
	  __int64 v11; // r9
	  __int64 v12; // r8
	  char v13; // dl
	  __int64 v14; // r8
	  __int64 v15; // rdx
	  int v16; // ecx
	  __int64 v17; // r8
	  __int64 v18; // rdx
	  int v19; // er10
	  __int64 v20; // r8
	  __int64 v21; // rdx
	  int v22; // er9
	  __int64 result; // rax

	  v5 = a2;
	  if ( sub_140210740(a1) )
	  {
		if ( !*(_DWORD *)(a1 + 4 * v5 + 308) )
		{
		  sub_140007A80(*(__int64 **)(a1 + 56));
		  v8 = *(_BYTE *)(a1 + 72);
		  v9 = **(_QWORD **)(a1 + 56);
		  ++*(_DWORD *)(v9 + 20);
		  **(_BYTE **)v9 = v8;
		  v10 = **(_DWORD ***)(a1 + 56);
		  ++v10[5];
		  *(_BYTE *)(*(_QWORD *)v10 + 1i64) = 16;
		  sub_140007AF0(**(__int64 ***)(a1 + 56), 134);
		  sub_140007AF0(**(__int64 ***)(a1 + 56), v5 - 127);
		  *(_DWORD *)(**(_QWORD **)(a1 + 56) + 12i64) = 7;
		  sub_140212F70(*(_QWORD *)(a1 + 64), *(__int64 ***)(a1 + 56));
		  *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 56) + 8i64) + 20i64) = 1;
		  v11 = *(_QWORD *)(*(_QWORD *)(a1 + 56) + 8i64);
		  v12 = *(int *)(v11 + 20);
		  v13 = *(_BYTE *)(v12 + *(_QWORD *)v11);
		  *(_DWORD *)(v11 + 20) = v12 + 1;
		  if ( v13 == 9 )
		  {
			*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 56) + 8i64) + 20i64) = 2;
			++*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 56) + 8i64) + 20i64);
			++*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 56) + 8i64) + 20i64);
			++*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 56) + 8i64) + 20i64);
			v14 = *(_QWORD *)(*(_QWORD *)(a1 + 56) + 8i64);
			v15 = *(int *)(v14 + 20);
			v16 = *(unsigned __int8 *)(v15 + *(_QWORD *)v14);
			*(_DWORD *)(v14 + 20) = v15 + 1;
			v17 = *(_QWORD *)(*(_QWORD *)(a1 + 56) + 8i64);
			v18 = *(int *)(v17 + 20);
			v19 = *(unsigned __int8 *)(v18 + *(_QWORD *)v17);
			*(_DWORD *)(v17 + 20) = v18 + 1;
			v20 = *(_QWORD *)(*(_QWORD *)(a1 + 56) + 8i64);
			v21 = *(int *)(v20 + 20);
			v22 = *(unsigned __int8 *)(v21 + *(_QWORD *)v20);
			*(_DWORD *)(v20 + 20) = v21 + 1;
			*(_DWORD *)(a1 + 4 * v5 + 308) = v22 + ((v19 + (v16 << 8)) << 8);
			++*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 56) + 8i64) + 20i64);
			++*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 56) + 8i64) + 20i64);
			++*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 56) + 8i64) + 20i64);
		  }
		}
	  }
	  *a3 = *(_DWORD *)(a1 + 4 * v5 + 292);
	  result = *(unsigned int *)(a1 + 4 * v5 + 300);
	  *a4 = result;
	return result;*/
	return 1;
}
char ThreewayGen1_1::sub_140242C70(__int64 a1, unsigned int a2, _DWORD* a3, float* a4, char a5)
{
	/*  __int64 v7; // r14
	  char v9; // r12
	  float v10; // xmm1_4
	  char result; // al
	  int v12; // er14
	  double v13; // xmm6_8
	  double v14; // xmm0_8
	  __m128d v15; // xmm2
	  double v16; // xmm1_8
	  int v17; // er15
	  double v18; // xmm0_8
	  int v19; // edi
	  int v20; // ebx
	  __int64 v21; // rax
	  char v22; // cl
	  _DWORD *v23; // rax
	  __int64 i; // r9
	  __int64 v25; // r9
	  char v26[4]; // [rsp+20h] [rbp-68h] BYREF
	  char v27[4]; // [rsp+24h] [rbp-64h] BYREF
	  char v28[16]; // [rsp+28h] [rbp-60h]

	  v7 = (int)a2;
	  v9 = a2 - 127;
	  if ( !*(_DWORD *)(a1 + 4i64 * (int)a2 + 308) )
		(*(void (__fastcall **)(__int64, _QWORD, char *, char *))(*(_QWORD *)a1 + 232i64))(a1, a2, v27, v26);
	  v10 = *a4;
	  if ( (_DWORD)v7 )
	  {
		if ( v10 > 0.0 )
		  *a4 = 0.0;
	  }
	  else if ( v10 > 3.0 )
	  {
		*a4 = 3.0;
	  }
	  if ( !a5 )
	  {
		*(_DWORD *)(a1 + 4 * v7 + 292) = *a3;
		*(float *)(a1 + 4 * v7 + 300) = *a4;
	  }
	  result = sub_140210740(a1);
	  if ( result )
	  {
		v12 = *(_DWORD *)(a1 + 4 * v7 + 308);
		if ( v12 )
		{
		  v13 = (float)((float)(3.1415927 / (float)v12) + (float)(3.1415927 / (float)v12)) * *(float *)a3;
		  v14 = tan(v13 * 0.5);
		  v15 = (__m128d)0x3FF0000000000000ui64;
		  v16 = (v14 - 1.0) / (v14 + 1.0);
		  if ( v13 > 2.03444 )
			v16 = -0.9999999000000001;
		  if ( v13 < 0.0001 )
			v16 = 0.9999999000000001;
		  v17 = (int)(v16 * 8388607.0) & 0xFFFFFF;
		  v15.m128d_f64[0] = 1.0 - v16 * v16;
		  if ( v15.m128d_f64[0] < 0.0 )
			v18 = sqrt(v15.m128d_f64[0]);
		  else
			*(_QWORD *)&v18 = *(_OWORD *)&_mm_sqrt_pd(v15);
		  v19 = (int)(v18 * 8388607.0);
		  v20 = (int)(pow(10.0, *a4 / 20.0) * 8388607.0 * 0.5);
		  v28[0] = v9;
		  v28[1] = (int)floor((double)v17 * 0.0000152587890625);
		  v28[2] = (int)floor((double)v17 * 0.00390625);
		  v28[3] = (int)floor((double)v17);
		  v28[4] = v12 / 0x10000;
		  v28[5] = v12 / 256;
		  v28[6] = v12;
		  v28[7] = (int)floor((double)v20 * 0.0000152587890625);
		  v28[8] = (int)floor((double)v20 * 0.00390625);
		  v28[9] = (int)floor((double)v20);
		  v28[10] = (int)floor((double)v19 * 0.0000152587890625);
		  v28[11] = (int)floor((double)v19 * 0.00390625);
		  v28[12] = (int)floor((double)v19);
		  sub_140007A80(*(__int64 **)(a1 + 56));
		  v21 = **(_QWORD **)(a1 + 56);
		  v22 = *(_BYTE *)(a1 + 72);
		  ++*(_DWORD *)(v21 + 20);
		  **(_BYTE **)v21 = v22;
		  v23 = **(_DWORD ***)(a1 + 56);
		  ++v23[5];
		  *(_BYTE *)(*(_QWORD *)v23 + 1i64) = 16;
		  sub_140007AF0(**(__int64 ***)(a1 + 56), 6);
		  sub_140007AF0(**(__int64 ***)(a1 + 56), v9);
		  for ( i = 1i64; i < 13; i = v25 + 1 )
			sub_140007AF0(**(__int64 ***)(a1 + 56), v28[i]);
		  *(_DWORD *)(**(_QWORD **)(a1 + 56) + 12i64) = 19;
		  result = sub_140212F70(*(_QWORD *)(a1 + 64), *(__int64 ***)(a1 + 56));
		}
	  }
	return result;*/
	return 1;
}
_DWORD* ThreewayGen1_1::sub_140242A90(__int64 a1, int a2, _DWORD* a3, _DWORD* a4, _DWORD* a5)
{
	/*  __int64 v6; // rdi
	  char v9; // cl
	  __int64 v10; // rax
	  _DWORD *v11; // rax
	  __int64 v12; // r9
	  __int64 v13; // r8
	  char v14; // dl
	  __int64 v15; // r8
	  __int64 v16; // rdx
	  int v17; // ecx
	  __int64 v18; // r8
	  __int64 v19; // rdx
	  int v20; // er10
	  __int64 v21; // r8
	  __int64 v22; // rdx
	  int v23; // er9
	  _DWORD *result; // rax

	  v6 = a2;
	  if ( sub_140210740(a1) )
	  {
		if ( !*(_DWORD *)(a1 + 4 * v6 + 388) )
		{
		  sub_140007A80(*(__int64 **)(a1 + 56));
		  v9 = *(_BYTE *)(a1 + 72);
		  v10 = **(_QWORD **)(a1 + 56);
		  ++*(_DWORD *)(v10 + 20);
		  **(_BYTE **)v10 = v9;
		  v11 = **(_DWORD ***)(a1 + 56);
		  ++v11[5];
		  *(_BYTE *)(*(_QWORD *)v11 + 1i64) = 16;
		  sub_140007AF0(**(__int64 ***)(a1 + 56), 135);
		  sub_140007AF0(**(__int64 ***)(a1 + 56), v6 + 1);
		  *(_DWORD *)(**(_QWORD **)(a1 + 56) + 12i64) = 7;
		  sub_140212F70(*(_QWORD *)(a1 + 64), *(__int64 ***)(a1 + 56));
		  *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 56) + 8i64) + 20i64) = 1;
		  v12 = *(_QWORD *)(*(_QWORD *)(a1 + 56) + 8i64);
		  v13 = *(int *)(v12 + 20);
		  v14 = *(_BYTE *)(v13 + *(_QWORD *)v12);
		  *(_DWORD *)(v12 + 20) = v13 + 1;
		  if ( v14 == 9 )
		  {
			*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 56) + 8i64) + 20i64) = 2;
			++*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 56) + 8i64) + 20i64);
			++*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 56) + 8i64) + 20i64);
			++*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 56) + 8i64) + 20i64);
			v15 = *(_QWORD *)(*(_QWORD *)(a1 + 56) + 8i64);
			v16 = *(int *)(v15 + 20);
			v17 = *(unsigned __int8 *)(v16 + *(_QWORD *)v15);
			*(_DWORD *)(v15 + 20) = v16 + 1;
			v18 = *(_QWORD *)(*(_QWORD *)(a1 + 56) + 8i64);
			v19 = *(int *)(v18 + 20);
			v20 = *(unsigned __int8 *)(v19 + *(_QWORD *)v18);
			*(_DWORD *)(v18 + 20) = v19 + 1;
			v21 = *(_QWORD *)(*(_QWORD *)(a1 + 56) + 8i64);
			v22 = *(int *)(v21 + 20);
			v23 = *(unsigned __int8 *)(v22 + *(_QWORD *)v21);
			*(_DWORD *)(v21 + 20) = v22 + 1;
			*(_DWORD *)(a1 + 4 * v6 + 388) = v23 + ((v20 + (v17 << 8)) << 8);
			++*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 56) + 8i64) + 20i64);
			++*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 56) + 8i64) + 20i64);
			++*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 56) + 8i64) + 20i64);
		  }
		}
	  }
	  *a3 = *(_DWORD *)(a1 + 4 * v6 + 316);
	  *a4 = *(_DWORD *)(a1 + 4 * v6 + 340);
	  result = a5;
	  *a5 = *(_DWORD *)(a1 + 4 * v6 + 364);
	return result;*/
	return (_DWORD*)1;
}
char ThreewayGen1_1::sub_140242920(__int64 a1, __int64 a2, float* a3, float* a4, float* a5, char a6)
{
	/*  __int64 v6; // rdi
	  char v7; // bp
	  float *v11; // rsi
	  __int64 v12; // rax
	  float v13; // xmm6_4
	  __int64 v14; // rcx
	  __int64 v15; // rax
	  __int64 v17; // [rsp+80h] [rbp+8h] BYREF
	  __int64 v18; // [rsp+88h] [rbp+10h] BYREF

	  v6 = (int)a2;
	  v7 = a2 + 1;
	  if ( !*(_DWORD *)(a1 + 4i64 * (int)a2 + 388) )
		(*(void (__fastcall **)(__int64, __int64, __int64 *, __int64 *, __int64 *))(*(_QWORD *)a1 + 248i64))(
		  a1,
		  a2,
		  &v17,
		  &v18,
		  &v18);
	  if ( *a4 > 0.0 )
		*a4 = 0.0;
	  v11 = a5;
	  if ( *a5 <= 30.0 )
	  {
		if ( *a5 <= 0.0 )
		  *a5 = 0.1;
	  }
	  else
	  {
		*a5 = 30.0;
	  }
	  if ( !a6 )
	  {
		*(float *)(a1 + 4 * v6 + 316) = *a3;
		*(float *)(a1 + 4 * v6 + 340) = *a4;
		*(float *)(a1 + 4 * v6 + 364) = *v11;
	  }
	  LOBYTE(v12) = sub_140210740(a1);
	  if ( (_BYTE)v12 && *(_DWORD *)(a1 + 4 * v6 + 388) )
	  {
		v13 = *a4;
		sub_140007A80(*(__int64 **)(a1 + 56));
		v14 = *(unsigned __int8 *)(a1 + 72);
		v15 = **(_QWORD **)(a1 + 56);
		++*(_DWORD *)(v15 + 20);
		**(_BYTE **)v15 = v14;
		sub_14021AC10(v14, *(__int64 **)(a1 + 56), *(_DWORD *)(a1 + 72), v7, *a3, v13, *v11, *(_DWORD *)(a1 + 4 * v6 + 388));
		sub_140212F70(*(_QWORD *)(a1 + 64), *(__int64 ***)(a1 + 56));
		*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 56) + 8i64) + 20i64) = 1;
		v12 = *(_QWORD *)(a1 + 56);
		++*(_DWORD *)(*(_QWORD *)(v12 + 8) + 20i64);
	  }
	return v12;*/
	return 1;
}
__int64 ThreewayGen1_1::sub_1402424A0(__int64 a1)
{
	return (unsigned int)(int)(85.0 - *(double*)(a1 + 128));
}
__int64 ThreewayGen1_1::sub_140242470(double* a1, int a2, char a3)
{
	/*  if ( !a3 )
		a1[17] = (double)a2;*/
	return (*(__int64 (**)(void))(*(_QWORD*)a1 + 184i64))();
}
__int64 ThreewayGen1_1::sub_140242460(__int64 a1)
{
	return (unsigned int)(int) * (double*)(a1 + 136);
}
__int64 ThreewayGen1_1::sub_140242740(__int64 a1, _DWORD* a2)
{
	/*  __int64 result; // rax

	  result = *(unsigned int *)(a1 + 264);
	  *a2 = result;
	return result;*/
	return 1;
}
bool ThreewayGen1_1::sub_1402426B0(__int64 a1, int a2, char a3)
{
	/*  __int64 v4; // rcx
	  int v5; // er9
	  __int64 v6; // r9
	  __int64 v7; // r8
	  char v8; // dl
	  bool result; // al

	  if ( !a3 )
		*(_DWORD *)(a1 + 264) = a2;
	  result = 0;
	  if ( sub_140210740(a1) )
	  {
		sub_14021A170(v4, *(__int64 **)(a1 + 56), *(_DWORD *)(a1 + 72), v5);
		sub_140212F70(*(_QWORD *)(a1 + 64), *(__int64 ***)(a1 + 56));
		*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 56) + 8i64) + 20i64) = 1;
		v6 = *(_QWORD *)(*(_QWORD *)(a1 + 56) + 8i64);
		v7 = *(int *)(v6 + 20);
		v8 = *(_BYTE *)(v7 + *(_QWORD *)v6);
		*(_DWORD *)(v6 + 20) = v7 + 1;
		if ( v8 == 9 )
		  result = 1;
	  }
	return result;*/
	return 1;
}
__int64 ThreewayGen1_1::sub_140241A90(__int64 a1, __int64 a2)
{
	/*  char *v4; // rcx
	  __int64 v5; // rbx
	  _BYTE *v6; // rbx
	  _DWORD *v7; // rcx
	  unsigned __int8 *v8; // rcx
	  unsigned __int8 *v9; // rcx
	  unsigned __int8 *v10; // rcx
	  float v11; // xmm1_4
	  unsigned __int8 *v12; // rcx
	  float v13; // xmm1_4
	  unsigned __int8 *v14; // rcx
	  float v15; // xmm1_4
	  unsigned __int8 *v16; // rcx
	  float v17; // xmm1_4
	  unsigned __int8 *v18; // rcx
	  float v19; // xmm1_4
	  unsigned __int8 *v20; // rcx
	  float v21; // xmm1_4
	  unsigned __int8 *v22; // rcx
	  float v23; // xmm1_4
	  unsigned __int8 *v24; // rcx
	  float v25; // xmm1_4
	  unsigned __int8 *v26; // rcx
	  float v27; // xmm1_4
	  unsigned __int8 *v28; // rcx
	  float v29; // xmm1_4
	  unsigned __int8 *v30; // rcx
	  float v31; // xmm1_4
	  unsigned __int8 *v32; // rcx
	  float v33; // xmm1_4
	  unsigned __int8 *v34; // rcx
	  float v35; // xmm1_4
	  unsigned __int8 *v36; // rcx
	  float v37; // xmm1_4
	  unsigned __int8 *v38; // rcx
	  float v39; // xmm1_4
	  unsigned __int8 *v40; // rcx
	  float v41; // xmm1_4
	  unsigned __int8 *v42; // rcx
	  float v43; // xmm1_4
	  unsigned __int8 *v44; // rcx
	  float v45; // xmm1_4
	  unsigned __int8 *v46; // rcx
	  float v47; // xmm1_4
	  unsigned __int8 *v48; // rcx
	  float v49; // xmm1_4
	  unsigned __int8 *v50; // rcx
	  float v51; // xmm1_4
	  unsigned __int8 *v52; // rcx
	  float v53; // xmm1_4
	  unsigned __int8 *v54; // rcx
	  float v55; // xmm1_4
	  unsigned __int8 *v56; // rcx
	  float v57; // xmm1_4
	  unsigned __int8 *v58; // rcx
	  float v59; // xmm1_4
	  unsigned __int8 *v60; // rcx
	  float v61; // xmm1_4
	  _DWORD *v62; // rax
	  _DWORD *v63; // rcx
	  _BYTE *v64; // rax
	  _BYTE *v65; // rcx
	  _DWORD *v66; // rcx
	  _DWORD *v67; // rcx
	  _BYTE *v68; // rcx
	  _DWORD *v70; // [rsp+20h] [rbp-E0h] BYREF
	  _DWORD *v71; // [rsp+28h] [rbp-D8h] BYREF
	  _DWORD *v72; // [rsp+30h] [rbp-D0h] BYREF
	  _DWORD *v73; // [rsp+38h] [rbp-C8h] BYREF
	  _DWORD *v74; // [rsp+40h] [rbp-C0h] BYREF
	  _DWORD *v75; // [rsp+48h] [rbp-B8h] BYREF
	  _DWORD *v76; // [rsp+50h] [rbp-B0h] BYREF
	  _DWORD *v77; // [rsp+58h] [rbp-A8h] BYREF
	  _DWORD *v78; // [rsp+60h] [rbp-A0h] BYREF
	  _DWORD *v79; // [rsp+68h] [rbp-98h] BYREF
	  _DWORD *v80; // [rsp+70h] [rbp-90h] BYREF
	  _DWORD *v81; // [rsp+78h] [rbp-88h] BYREF
	  _DWORD *v82; // [rsp+80h] [rbp-80h] BYREF
	  _DWORD *v83; // [rsp+88h] [rbp-78h] BYREF
	  _DWORD *v84; // [rsp+90h] [rbp-70h] BYREF
	  _DWORD *v85; // [rsp+98h] [rbp-68h] BYREF
	  _DWORD *v86; // [rsp+A0h] [rbp-60h] BYREF
	  _DWORD *v87; // [rsp+A8h] [rbp-58h] BYREF
	  _DWORD *v88; // [rsp+B0h] [rbp-50h] BYREF
	  _DWORD *v89; // [rsp+B8h] [rbp-48h] BYREF
	  _DWORD *v90; // [rsp+C0h] [rbp-40h] BYREF
	  _DWORD *v91; // [rsp+C8h] [rbp-38h] BYREF
	  _DWORD *v92; // [rsp+D0h] [rbp-30h] BYREF
	  _DWORD *v93; // [rsp+D8h] [rbp-28h] BYREF
	  _DWORD *v94; // [rsp+E0h] [rbp-20h] BYREF
	  _DWORD *v95; // [rsp+E8h] [rbp-18h] BYREF
	  _DWORD *v96; // [rsp+F0h] [rbp-10h] BYREF
	  _DWORD *v97; // [rsp+F8h] [rbp-8h] BYREF
	  _BYTE *v98; // [rsp+100h] [rbp+0h] BYREF
	  _DWORD *v99; // [rsp+150h] [rbp+50h] BYREF
	  _BYTE *v100; // [rsp+158h] [rbp+58h] BYREF
	  _DWORD *v101; // [rsp+160h] [rbp+60h] BYREF
	  _DWORD *v102; // [rsp+168h] [rbp+68h] BYREF

	  v100 = dword_140DDCDD0;
	  v99 = dword_140DDCDD0;
	  v101 = dword_140DDCDD0;
	  while ( 1 )
	  {
		v5 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 8i64))(a2);
		if ( v5 >= 0 )
		  v5 -= (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 168i64))(a2);
		if ( v5 <= 0 )
		  break;
		sub_14020FC70(v4, a2, (__int64 *)&v100, (__int64 *)&v99);
		v6 = v100;
		if ( (unsigned int)String::isNotEmpty(v100, "[Model]") )
		{
		  if ( (unsigned int)String::isNotEmpty(v6, "[Time_of_Flight_s]") )
		  {
			if ( (unsigned int)String::isNotEmpty(v6, "[Level_dB]") )
			{
			  if ( (unsigned int)String::isNotEmpty(v6, "[Shelf_Offset_dB]") )
			  {
				if ( (unsigned int)String::isNotEmpty(v6, "[Notch_1_Frequency_Hz]") )
				{
				  if ( (unsigned int)String::isNotEmpty(v6, "[Notch_1_Gain_dB]") )
				  {
					if ( (unsigned int)String::isNotEmpty(v6, "[Notch_1_Q]") )
					{
					  if ( (unsigned int)String::isNotEmpty(v6, "[Notch_2_Frequency_Hz]") )
					  {
						if ( (unsigned int)String::isNotEmpty(v6, "[Notch_2_Gain_dB]") )
						{
						  if ( (unsigned int)String::isNotEmpty(v6, "[Notch_2_Q]") )
						  {
							if ( (unsigned int)String::isNotEmpty(v6, "[Notch_3_Frequency_Hz]") )
							{
							  if ( (unsigned int)String::isNotEmpty(v6, "[Notch_3_Gain_dB]") )
							  {
								if ( (unsigned int)String::isNotEmpty(v6, "[Notch_3_Q]") )
								{
								  if ( (unsigned int)String::isNotEmpty(v6, "[Notch_4_Frequency_Hz]") )
								  {
									if ( (unsigned int)String::isNotEmpty(v6, "[Notch_4_Gain_dB]") )
									{
									  if ( (unsigned int)String::isNotEmpty(v6, "[Notch_4_Q]") )
									  {
										if ( (unsigned int)String::isNotEmpty(v6, "[Notch_5_Frequency_Hz]") )
										{
										  if ( (unsigned int)String::isNotEmpty(v6, "[Notch_5_Gain_dB]") )
										  {
											if ( (unsigned int)String::isNotEmpty(v6, "[Notch_5_Q]") )
											{
											  if ( (unsigned int)String::isNotEmpty(v6, "[Notch_6_Frequency_Hz]") )
											  {
												if ( (unsigned int)String::isNotEmpty(v6, "[Notch_6_Gain_dB]") )
												{
												  if ( (unsigned int)String::isNotEmpty(v6, "[Notch_6_Q]") )
												  {
													if ( (unsigned int)String::isNotEmpty(v6, "[Shelf_1_Frequency_Hz]") )
													{
													  if ( (unsigned int)String::isNotEmpty(v6, "[Shelf_1_Gain_dB]") )
													  {
														if ( (unsigned int)String::isNotEmpty(v6, "[Shelf_2_Frequency_Hz]") )
														{
														  if ( (unsigned int)String::isNotEmpty(v6, "[Shelf_2_Gain_dB]") )
														  {
															if ( (unsigned int)String::isNotEmpty(
																				 v6,
																				 "[Shelf_3_Frequency_Hz]") )
															{
															  if ( (unsigned int)String::isNotEmpty(v6, "[Shelf_3_Gain_dB]") )
															  {
																if ( (unsigned int)String::isNotEmpty(
																					 v6,
																					 "[Shelf_4_Frequency_Hz]") )
																{
																  if ( !(unsigned int)String::isNotEmpty(
																						v6,
																						"[Shelf_4_Gain_dB]") )
																  {
																	v96 = v99;
																	v60 = (unsigned __int8 *)(unsigned int)*(v99 - 4);
																	if ( ((unsigned int)v60 & 0x30000000) == 0 )
																	  _InterlockedIncrement(v99 - 4);
																	v61 = sub_14020F700(v60, (unsigned __int8 *)&v96).m128d_f64[0];
																	*(float *)(a1 + 280) = v61;
																  }
																}
																else
																{
																  v95 = v99;
																  v58 = (unsigned __int8 *)(unsigned int)*(v99 - 4);
																  if ( ((unsigned int)v58 & 0x30000000) == 0 )
																	_InterlockedIncrement(v99 - 4);
																  v59 = sub_14020F700(v58, (unsigned __int8 *)&v95).m128d_f64[0];
																  *(float *)(a1 + 272) = v59;
																}
															  }
															  else
															  {
																v94 = v99;
																v56 = (unsigned __int8 *)(unsigned int)*(v99 - 4);
																if ( ((unsigned int)v56 & 0x30000000) == 0 )
																  _InterlockedIncrement(v99 - 4);
																v57 = sub_14020F700(v56, (unsigned __int8 *)&v94).m128d_f64[0];
																*(float *)(a1 + 276) = v57;
															  }
															}
															else
															{
															  v93 = v99;
															  v54 = (unsigned __int8 *)(unsigned int)*(v99 - 4);
															  if ( ((unsigned int)v54 & 0x30000000) == 0 )
																_InterlockedIncrement(v99 - 4);
															  v55 = sub_14020F700(v54, (unsigned __int8 *)&v93).m128d_f64[0];
															  *(float *)(a1 + 268) = v55;
															}
														  }
														  else
														  {
															v92 = v99;
															v52 = (unsigned __int8 *)(unsigned int)*(v99 - 4);
															if ( ((unsigned int)v52 & 0x30000000) == 0 )
															  _InterlockedIncrement(v99 - 4);
															v53 = sub_14020F700(v52, (unsigned __int8 *)&v92).m128d_f64[0];
															*(float *)(a1 + 304) = v53;
														  }
														}
														else
														{
														  v91 = v99;
														  v50 = (unsigned __int8 *)(unsigned int)*(v99 - 4);
														  if ( ((unsigned int)v50 & 0x30000000) == 0 )
															_InterlockedIncrement(v99 - 4);
														  v51 = sub_14020F700(v50, (unsigned __int8 *)&v91).m128d_f64[0];
														  *(float *)(a1 + 296) = v51;
														}
													  }
													  else
													  {
														v90 = v99;
														v48 = (unsigned __int8 *)(unsigned int)*(v99 - 4);
														if ( ((unsigned int)v48 & 0x30000000) == 0 )
														  _InterlockedIncrement(v99 - 4);
														v49 = sub_14020F700(v48, (unsigned __int8 *)&v90).m128d_f64[0];
														*(float *)(a1 + 300) = v49;
													  }
													}
													else
													{
													  v89 = v99;
													  v46 = (unsigned __int8 *)(unsigned int)*(v99 - 4);
													  if ( ((unsigned int)v46 & 0x30000000) == 0 )
														_InterlockedIncrement(v99 - 4);
													  v47 = sub_14020F700(v46, (unsigned __int8 *)&v89).m128d_f64[0];
													  *(float *)(a1 + 292) = v47;
													}
												  }
												  else
												  {
													v88 = v99;
													v44 = (unsigned __int8 *)(unsigned int)*(v99 - 4);
													if ( ((unsigned int)v44 & 0x30000000) == 0 )
													  _InterlockedIncrement(v99 - 4);
													v45 = sub_14020F700(v44, (unsigned __int8 *)&v88).m128d_f64[0];
													*(float *)(a1 + 384) = v45;
												  }
												}
												else
												{
												  v87 = v99;
												  v42 = (unsigned __int8 *)(unsigned int)*(v99 - 4);
												  if ( ((unsigned int)v42 & 0x30000000) == 0 )
													_InterlockedIncrement(v99 - 4);
												  v43 = sub_14020F700(v42, (unsigned __int8 *)&v87).m128d_f64[0];
												  *(float *)(a1 + 360) = v43;
												}
											  }
											  else
											  {
												v86 = v99;
												v40 = (unsigned __int8 *)(unsigned int)*(v99 - 4);
												if ( ((unsigned int)v40 & 0x30000000) == 0 )
												  _InterlockedIncrement(v99 - 4);
												v41 = sub_14020F700(v40, (unsigned __int8 *)&v86).m128d_f64[0];
												*(float *)(a1 + 336) = v41;
											  }
											}
											else
											{
											  v85 = v99;
											  v38 = (unsigned __int8 *)(unsigned int)*(v99 - 4);
											  if ( ((unsigned int)v38 & 0x30000000) == 0 )
												_InterlockedIncrement(v99 - 4);
											  v39 = sub_14020F700(v38, (unsigned __int8 *)&v85).m128d_f64[0];
											  *(float *)(a1 + 380) = v39;
											}
										  }
										  else
										  {
											v84 = v99;
											v36 = (unsigned __int8 *)(unsigned int)*(v99 - 4);
											if ( ((unsigned int)v36 & 0x30000000) == 0 )
											  _InterlockedIncrement(v99 - 4);
											v37 = sub_14020F700(v36, (unsigned __int8 *)&v84).m128d_f64[0];
											*(float *)(a1 + 356) = v37;
										  }
										}
										else
										{
										  v83 = v99;
										  v34 = (unsigned __int8 *)(unsigned int)*(v99 - 4);
										  if ( ((unsigned int)v34 & 0x30000000) == 0 )
											_InterlockedIncrement(v99 - 4);
										  v35 = sub_14020F700(v34, (unsigned __int8 *)&v83).m128d_f64[0];
										  *(float *)(a1 + 332) = v35;
										}
									  }
									  else
									  {
										v82 = v99;
										v32 = (unsigned __int8 *)(unsigned int)*(v99 - 4);
										if ( ((unsigned int)v32 & 0x30000000) == 0 )
										  _InterlockedIncrement(v99 - 4);
										v33 = sub_14020F700(v32, (unsigned __int8 *)&v82).m128d_f64[0];
										*(float *)(a1 + 376) = v33;
									  }
									}
									else
									{
									  v81 = v99;
									  v30 = (unsigned __int8 *)(unsigned int)*(v99 - 4);
									  if ( ((unsigned int)v30 & 0x30000000) == 0 )
										_InterlockedIncrement(v99 - 4);
									  v31 = sub_14020F700(v30, (unsigned __int8 *)&v81).m128d_f64[0];
									  *(float *)(a1 + 352) = v31;
									}
								  }
								  else
								  {
									v80 = v99;
									v28 = (unsigned __int8 *)(unsigned int)*(v99 - 4);
									if ( ((unsigned int)v28 & 0x30000000) == 0 )
									  _InterlockedIncrement(v99 - 4);
									v29 = sub_14020F700(v28, (unsigned __int8 *)&v80).m128d_f64[0];
									*(float *)(a1 + 328) = v29;
								  }
								}
								else
								{
								  v79 = v99;
								  v26 = (unsigned __int8 *)(unsigned int)*(v99 - 4);
								  if ( ((unsigned int)v26 & 0x30000000) == 0 )
									_InterlockedIncrement(v99 - 4);
								  v27 = sub_14020F700(v26, (unsigned __int8 *)&v79).m128d_f64[0];
								  *(float *)(a1 + 372) = v27;
								}
							  }
							  else
							  {
								v78 = v99;
								v24 = (unsigned __int8 *)(unsigned int)*(v99 - 4);
								if ( ((unsigned int)v24 & 0x30000000) == 0 )
								  _InterlockedIncrement(v99 - 4);
								v25 = sub_14020F700(v24, (unsigned __int8 *)&v78).m128d_f64[0];
								*(float *)(a1 + 348) = v25;
							  }
							}
							else
							{
							  v77 = v99;
							  v22 = (unsigned __int8 *)(unsigned int)*(v99 - 4);
							  if ( ((unsigned int)v22 & 0x30000000) == 0 )
								_InterlockedIncrement(v99 - 4);
							  v23 = sub_14020F700(v22, (unsigned __int8 *)&v77).m128d_f64[0];
							  *(float *)(a1 + 324) = v23;
							}
						  }
						  else
						  {
							v76 = v99;
							v20 = (unsigned __int8 *)(unsigned int)*(v99 - 4);
							if ( ((unsigned int)v20 & 0x30000000) == 0 )
							  _InterlockedIncrement(v99 - 4);
							v21 = sub_14020F700(v20, (unsigned __int8 *)&v76).m128d_f64[0];
							*(float *)(a1 + 368) = v21;
						  }
						}
						else
						{
						  v75 = v99;
						  v18 = (unsigned __int8 *)(unsigned int)*(v99 - 4);
						  if ( ((unsigned int)v18 & 0x30000000) == 0 )
							_InterlockedIncrement(v99 - 4);
						  v19 = sub_14020F700(v18, (unsigned __int8 *)&v75).m128d_f64[0];
						  *(float *)(a1 + 344) = v19;
						}
					  }
					  else
					  {
						v74 = v99;
						v16 = (unsigned __int8 *)(unsigned int)*(v99 - 4);
						if ( ((unsigned int)v16 & 0x30000000) == 0 )
						  _InterlockedIncrement(v99 - 4);
						v17 = sub_14020F700(v16, (unsigned __int8 *)&v74).m128d_f64[0];
						*(float *)(a1 + 320) = v17;
					  }
					}
					else
					{
					  v73 = v99;
					  v14 = (unsigned __int8 *)(unsigned int)*(v99 - 4);
					  if ( ((unsigned int)v14 & 0x30000000) == 0 )
						_InterlockedIncrement(v99 - 4);
					  v15 = sub_14020F700(v14, (unsigned __int8 *)&v73).m128d_f64[0];
					  *(float *)(a1 + 364) = v15;
					}
				  }
				  else
				  {
					v72 = v99;
					v12 = (unsigned __int8 *)(unsigned int)*(v99 - 4);
					if ( ((unsigned int)v12 & 0x30000000) == 0 )
					  _InterlockedIncrement(v99 - 4);
					v13 = sub_14020F700(v12, (unsigned __int8 *)&v72).m128d_f64[0];
					*(float *)(a1 + 340) = v13;
				  }
				}
				else
				{
				  v71 = v99;
				  v10 = (unsigned __int8 *)(unsigned int)*(v99 - 4);
				  if ( ((unsigned int)v10 & 0x30000000) == 0 )
					_InterlockedIncrement(v99 - 4);
				  v11 = sub_14020F700(v10, (unsigned __int8 *)&v71).m128d_f64[0];
				  *(float *)(a1 + 316) = v11;
				}
			  }
			}
			else
			{
			  v70 = v99;
			  v9 = (unsigned __int8 *)(unsigned int)*(v99 - 4);
			  if ( ((unsigned int)v9 & 0x30000000) == 0 )
				_InterlockedIncrement(v99 - 4);
			  *(_QWORD *)(a1 + 112) = *(_OWORD *)&sub_14020F700(v9, (unsigned __int8 *)&v70);
			}
		  }
		  else
		  {
			v102 = v99;
			v8 = (unsigned __int8 *)(unsigned int)*(v99 - 4);
			if ( ((unsigned int)v8 & 0x30000000) == 0 )
			  _InterlockedIncrement(v99 - 4);
			*(double *)(a1 + 128) = sub_14020F700(v8, (unsigned __int8 *)&v102).m128d_f64[0] * 1000.0;
		  }
		}
		else
		{
		  if ( (*(v99 - 4) & 0x30000000) == 0 )
			_InterlockedIncrement(v99 - 4);
		  v7 = (_DWORD *)(_InterlockedExchange64((volatile __int64 *)&v101, (__int64)v99) - 16);
		  if ( (*v7 & 0x30000000) == 0 && _InterlockedDecrement(v7) == -1 )
			j_j_free(v7);
		}
		sub_140048D00(&v97, &unk_14046E0E3);
		v62 = v99;
		v99 = v97;
		v97 = v62;
		v63 = v62 - 4;
		if ( (*(v62 - 4) & 0x30000000) == 0 && _InterlockedDecrement(v63) == -1 )
		  j_j_free(v63);
		sub_140048D00(&v98, &unk_14046E097);
		v64 = v100;
		v100 = v98;
		v98 = v64;
		v65 = v64 - 16;
		if ( (*((_DWORD *)v64 - 4) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32 *)v65) == -1 )
		  j_j_free(v65);
	  }
	  *(_DWORD *)(a1 + 108) = 1;
	  v66 = v101 - 4;
	  if ( (*(v101 - 4) & 0x30000000) == 0 && _InterlockedDecrement(v66) == -1 )
		j_j_free(v66);
	  v67 = v99 - 4;
	  if ( (*(v99 - 4) & 0x30000000) == 0 && _InterlockedDecrement(v67) == -1 )
		j_j_free(v67);
	  v68 = v100 - 16;
	  if ( (*((_DWORD *)v100 - 4) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32 *)v68) == -1 )
		j_j_free(v68);*/
	return 0i64;
}
__int64 ThreewayGen1_1::sub_140241A80()
{
	return 0i64;
}
__int64 ThreewayGen1_1::sub_140240AD0(__int64 a1, __int64** a2)
{
	/*  __int64 *v4; // rbx
	  __int64 *v5; // rcx
	  __int64 v6; // rax
	  __int64 v7; // rax
	  __int64 v8; // rax
	  __int64 (__fastcall ****v9)(); // rax
	  __int64 (__fastcall ****v10)(); // rbx
	  void *v11; // rcx
	  unsigned __int8 *v12; // rcx
	  __int64 *v13; // rbx
	  __int64 v14; // rax
	  __int64 v15; // rax
	  __int64 (__fastcall ****v16)(); // rax
	  __int64 (__fastcall ****v17)(); // rbx
	  void *v18; // rcx
	  unsigned __int8 *v19; // rcx
	  __int64 *v20; // rbx
	  __int64 v21; // rax
	  __int64 v22; // rax
	  __int64 (__fastcall ****v23)(); // rax
	  __int64 *v24; // rbx
	  void *v25; // rcx
	  __int64 *v26; // rbx
	  __int64 v27; // rax
	  __int64 v28; // rax
	  __int64 (__fastcall ****v29)(); // rax
	  __int64 *v30; // rbx
	  void *v31; // rcx
	  int v32; // er15
	  int v33; // er12
	  int v34; // er13
	  __int64 v35; // rbx
	  __m128i *v36; // rsi
	  __int64 v37; // rax
	  __int64 *v38; // rax
	  __int64 v39; // rdx
	  __int64 v40; // rcx
	  __int64 *v41; // rbx
	  __int64 v42; // rax
	  __int64 v43; // rax
	  __int64 (__fastcall ****v44)(); // rbx
	  void *v45; // rcx
	  _BYTE *v46; // rbx
	  int v47; // edi
	  _BYTE *v48; // rcx
	  __int64 *v49; // rax
	  __int64 v50; // rbx
	  bool v51; // zf
	  struct _RTL_CRITICAL_SECTION *v52; // rdi
	  struct _RTL_CRITICAL_SECTION *v53; // rcx
	  __int64 v54; // rax
	  __int64 v55; // rax
	  __int64 (__fastcall ****v56)(); // rax
	  __int64 (__fastcall ****v57)(); // rbx
	  void *v58; // rcx
	  unsigned __int8 *v59; // rcx
	  float v60; // xmm1_4
	  __int64 v61; // rsi
	  __int64 *v62; // rbx
	  __int64 v63; // rax
	  __int64 v64; // rax
	  __int64 (__fastcall ****v65)(); // rax
	  __int64 (__fastcall ****v66)(); // rbx
	  void *v67; // rcx
	  unsigned __int8 *v68; // rcx
	  float v69; // xmm1_4
	  __int64 *v70; // rbx
	  __int64 v71; // rax
	  __int64 v72; // rax
	  __int64 (__fastcall ****v73)(); // rax
	  __int64 (__fastcall ****v74)(); // rbx
	  void *v75; // rcx
	  unsigned __int8 *v76; // rcx
	  float v77; // xmm1_4
	  __int64 v78; // rax
	  __int64 v79; // rax
	  __int64 (__fastcall ****v80)(); // rax
	  __int64 (__fastcall ****v81)(); // rbx
	  void *v82; // rcx
	  _BYTE *v83; // rbx
	  int v84; // edi
	  _BYTE *v85; // rcx
	  __int64 *v86; // rbx
	  __int64 v87; // rax
	  __int64 v88; // rax
	  __int64 (__fastcall ****v89)(); // rax
	  __int64 (__fastcall ****v90)(); // rbx
	  void *v91; // rcx
	  unsigned __int8 *v92; // rcx
	  float v93; // xmm1_4
	  __int64 *v94; // rbx
	  __int64 v95; // rax
	  __int64 v96; // rax
	  __int64 (__fastcall ****v97)(); // rax
	  __int64 (__fastcall ****v98)(); // rbx
	  void *v99; // rcx
	  unsigned __int8 *v100; // rcx
	  float v101; // xmm1_4
	  __int64 *v102; // rbx
	  __int64 v103; // rax
	  __int64 v104; // rax
	  __int64 (__fastcall ****v105)(); // rax
	  __int64 (__fastcall ****v106)(); // rbx
	  void *v107; // rcx
	  _BYTE *v108; // rbx
	  int v109; // edi
	  _BYTE *v110; // rcx
	  __int64 *v111; // rbx
	  __int64 v112; // rax
	  __int64 v113; // rax
	  __int64 (__fastcall ****v114)(); // rax
	  __int64 (__fastcall ****v115)(); // rbx
	  void *v116; // rcx
	  unsigned __int8 *v117; // rcx
	  float v118; // xmm1_4
	  __int64 *v119; // rbx
	  __int64 v120; // rax
	  __int64 v121; // rax
	  __int64 (__fastcall ****v122)(); // rax
	  __int64 (__fastcall ****v123)(); // rbx
	  void *v124; // rcx
	  unsigned __int8 *v125; // rcx
	  float v126; // xmm1_4
	  __int64 v128; // [rsp+30h] [rbp-D0h] BYREF
	  __int64 v129; // [rsp+38h] [rbp-C8h] BYREF
	  __int64 v130; // [rsp+40h] [rbp-C0h] BYREF
	  __int64 v131; // [rsp+48h] [rbp-B8h] BYREF
	  __int64 v132; // [rsp+50h] [rbp-B0h] BYREF
	  __int64 v133; // [rsp+58h] [rbp-A8h] BYREF
	  __int64 v134; // [rsp+60h] [rbp-A0h] BYREF
	  __int64 v135; // [rsp+68h] [rbp-98h] BYREF
	  __int64 v136; // [rsp+70h] [rbp-90h] BYREF
	  __int64 v137; // [rsp+78h] [rbp-88h] BYREF
	  __int64 v138; // [rsp+80h] [rbp-80h] BYREF
	  __int64 v139; // [rsp+88h] [rbp-78h] BYREF
	  __int64 v140; // [rsp+90h] [rbp-70h] BYREF
	  __int64 v141; // [rsp+98h] [rbp-68h] BYREF
	  char *v142; // [rsp+A0h] [rbp-60h] BYREF
	  char *v143; // [rsp+A8h] [rbp-58h] BYREF
	  char *v144; // [rsp+B0h] [rbp-50h] BYREF
	  char *v145; // [rsp+B8h] [rbp-48h] BYREF
	  char *v146; // [rsp+C0h] [rbp-40h] BYREF
	  char *v147; // [rsp+C8h] [rbp-38h] BYREF
	  char *v148; // [rsp+D0h] [rbp-30h] BYREF
	  char *v149; // [rsp+D8h] [rbp-28h] BYREF
	  _QWORD **v150; // [rsp+E0h] [rbp-20h]
	  __m128i *v151; // [rsp+E8h] [rbp-18h]
	  unsigned __int8 v152[8]; // [rsp+F0h] [rbp-10h] BYREF
	  unsigned __int8 v153[8]; // [rsp+F8h] [rbp-8h] BYREF
	  unsigned __int8 v154[8]; // [rsp+100h] [rbp+0h] BYREF
	  unsigned __int8 v155[8]; // [rsp+108h] [rbp+8h] BYREF
	  char *v156; // [rsp+110h] [rbp+10h] BYREF
	  char *v157; // [rsp+118h] [rbp+18h] BYREF
	  char *v158; // [rsp+120h] [rbp+20h] BYREF
	  __int64 v159; // [rsp+128h] [rbp+28h]
	  char *v160; // [rsp+130h] [rbp+30h] BYREF
	  unsigned __int8 v161[8]; // [rsp+138h] [rbp+38h] BYREF
	  unsigned __int8 v162[8]; // [rsp+140h] [rbp+40h] BYREF
	  char *v163; // [rsp+148h] [rbp+48h] BYREF
	  unsigned __int8 v164[8]; // [rsp+150h] [rbp+50h] BYREF
	  unsigned __int8 v165[8]; // [rsp+158h] [rbp+58h] BYREF
	  unsigned __int8 v166[8]; // [rsp+160h] [rbp+60h] BYREF
	  _BYTE *v167; // [rsp+168h] [rbp+68h] BYREF
	  char *v168; // [rsp+170h] [rbp+70h] BYREF
	  _BYTE *v169; // [rsp+178h] [rbp+78h] BYREF
	  __int64 **v170; // [rsp+180h] [rbp+80h]
	  _BYTE *v171[16]; // [rsp+188h] [rbp+88h] BYREF
	  __int64 v172; // [rsp+208h] [rbp+108h]
	  char v173[8]; // [rsp+210h] [rbp+110h] BYREF
	  __int64 v174; // [rsp+218h] [rbp+118h]
	  char v175[8]; // [rsp+220h] [rbp+120h] BYREF
	  __int64 v176; // [rsp+228h] [rbp+128h]
	  char v177[8]; // [rsp+230h] [rbp+130h] BYREF
	  __m128i v178; // [rsp+238h] [rbp+138h] BYREF
	  int v179; // [rsp+248h] [rbp+148h]
	  int v180; // [rsp+24Ch] [rbp+14Ch]

	  v170 = a2;
	  v171[15] = a2;
	  v4 = sub_1402F7E90();
	  v171[1] = v4 + 2;
	  EnterCriticalSection((LPCRITICAL_SECTION)(v4 + 2));
	  sub_1402F8020((__int64)v4);
	  v168 = "delayrel";
	  sub_1402DDCD0(&v128, (__int64)v4, &v168);
	  LeaveCriticalSection((LPCRITICAL_SECTION)(v4 + 2));
	  v5 = *a2;
	  v6 = **a2;
	  v150 = a2 + 1;
	  v7 = (*(__int64 (__fastcall **)(__int64 *, __int64 **))(v6 + 48))(v5, a2 + 1);
	  v8 = _RTDynamicCast(
			 v7,
			 0i64,
			 &juce::ReferenceCountedObject `RTTI Type Descriptor',
			 &juce::DynamicObject `RTTI Type Descriptor',
			 0);
	  if ( v8 )
		v9 = (__int64 (__fastcall ****)())(*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v8 + 16i64))(v8, &v128);
	  else
		v9 = sub_14030AB50();
	  v10 = v9;
	  v11 = (void *)(v128 - 16);
	  if ( (*(_DWORD *)(v128 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32 *)v11) == -1 )
		j_j_free(v11);
	  ((void (__fastcall *)(__int64 (__fastcall ***)(), unsigned __int8 *, __int64 (__fastcall ****)()))(**v10)[4])(
		*v10,
		v161,
		v10 + 1);
	  *(double *)(a1 + 128) = sub_14020F700(v12, v161).m128d_f64[0] * 1000.0;
	  v13 = sub_1402F7E90();
	  v171[2] = v13 + 2;
	  EnterCriticalSection((LPCRITICAL_SECTION)(v13 + 2));
	  sub_1402F8020((__int64)v13);
	  v142 = "levelcorrdb";
	  sub_1402DDCD0(&v129, (__int64)v13, &v142);
	  LeaveCriticalSection((LPCRITICAL_SECTION)(v13 + 2));
	  v14 = (*(__int64 (__fastcall **)(__int64 *, __int64 **))(**a2 + 48))(*a2, a2 + 1);
	  v15 = _RTDynamicCast(
			  v14,
			  0i64,
			  &juce::ReferenceCountedObject `RTTI Type Descriptor',
			  &juce::DynamicObject `RTTI Type Descriptor',
			  0);
	  if ( v15 )
		v16 = (__int64 (__fastcall ****)())(*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v15 + 16i64))(
											 v15,
											 &v129);
	  else
		v16 = sub_14030AB50();
	  v17 = v16;
	  v18 = (void *)(v129 - 16);
	  if ( (*(_DWORD *)(v129 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32 *)v18) == -1 )
		j_j_free(v18);
	  ((void (__fastcall *)(__int64 (__fastcall ***)(), unsigned __int8 *, __int64 (__fastcall ****)()))(**v17)[4])(
		*v17,
		v162,
		v17 + 1);
	  *(double *)(a1 + 112) = sub_14020F700(v19, v162).m128d_f64[0] * -1.0;
	  v20 = sub_1402F7E90();
	  v171[3] = v20 + 2;
	  EnterCriticalSection((LPCRITICAL_SECTION)(v20 + 2));
	  sub_1402F8020((__int64)v20);
	  v156 = "filter";
	  sub_1402DDCD0(&v130, (__int64)v20, &v156);
	  LeaveCriticalSection((LPCRITICAL_SECTION)(v20 + 2));
	  v21 = (*(__int64 (__fastcall **)(__int64 *, __int64 **))(**a2 + 48))(*a2, a2 + 1);
	  v22 = _RTDynamicCast(
			  v21,
			  0i64,
			  &juce::ReferenceCountedObject `RTTI Type Descriptor',
			  &juce::DynamicObject `RTTI Type Descriptor',
			  0);
	  if ( v22 )
		v23 = (__int64 (__fastcall ****)())(*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v22 + 16i64))(
											 v22,
											 &v130);
	  else
		v23 = sub_14030AB50();
	  v24 = (__int64 *)v23;
	  v25 = (void *)(v130 - 16);
	  if ( (*(_DWORD *)(v130 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32 *)v25) == -1 )
		j_j_free(v25);
	  v176 = *v24;
	  (*(void (__fastcall **)(void *, char *, __int64 *))(*(_QWORD *)v176 + 184i64))(v25, v177, v24 + 1);
	  v26 = sub_1402F7E90();
	  v171[4] = v26 + 2;
	  EnterCriticalSection((LPCRITICAL_SECTION)(v26 + 2));
	  sub_1402F8020((__int64)v26);
	  v157 = "sos";
	  sub_1402DDCD0(&v131, (__int64)v26, &v157);
	  LeaveCriticalSection((LPCRITICAL_SECTION)(v26 + 2));
	  v27 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v176 + 48i64))(v176, v177);
	  v28 = _RTDynamicCast(
			  v27,
			  0i64,
			  &juce::ReferenceCountedObject `RTTI Type Descriptor',
			  &juce::DynamicObject `RTTI Type Descriptor',
			  0);
	  if ( v28 )
		v29 = (__int64 (__fastcall ****)())(*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v28 + 16i64))(
											 v28,
											 &v131);
	  else
		v29 = sub_14030AB50();
	  v30 = (__int64 *)v29;
	  v31 = (void *)(v131 - 16);
	  if ( (*(_DWORD *)(v131 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32 *)v31) == -1 )
		j_j_free(v31);
	  v174 = *v30;
	  (*(void (__fastcall **)(void *, char *, __int64 *))(*(_QWORD *)v174 + 184i64))(v31, v175, v30 + 1);
	  v32 = 0;
	  v33 = 0;
	  *(_QWORD *)(a1 + 276) = 0i64;
	  *(_QWORD *)(a1 + 300) = 0i64;
	  v178 = _mm_load_si128((const __m128i *)&xmmword_140E19F60);
	  v179 = 0;
	  v180 = 2;
	  v34 = 0;
	  v35 = 0i64;
	  v36 = &v178;
	  v151 = &v178;
	  while ( 1 )
	  {
		v159 = v35;
		v37 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v174 + 56i64))(v174, v175);
		if ( v37 )
		  LODWORD(v37) = *(_DWORD *)(v37 + 12);
		if ( v34 >= (int)v37 )
		  break;
		v38 = (__int64 *)(*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v174 + 56i64))(v174, v175);
		v39 = *v38;
		v172 = *(_QWORD *)(v35 + *v38);
		(*(void (__fastcall **)(__int64, char *, __int64))(*(_QWORD *)v172 + 184i64))(v40, v173, v35 + v39 + 8);
		v41 = sub_1402F7E90();
		v171[5] = v41 + 2;
		EnterCriticalSection((LPCRITICAL_SECTION)(v41 + 2));
		sub_1402F8020((__int64)v41);
		v158 = "type";
		sub_1402DDCD0(&v132, (__int64)v41, &v158);
		LeaveCriticalSection((LPCRITICAL_SECTION)(v41 + 2));
		v42 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v172 + 48i64))(v172, v173);
		v43 = _RTDynamicCast(
				v42,
				0i64,
				&juce::ReferenceCountedObject `RTTI Type Descriptor',
				&juce::DynamicObject `RTTI Type Descriptor',
				0);
		if ( v43 )
		{
		  v44 = (__int64 (__fastcall ****)())(*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v43 + 16i64))(
											   v43,
											   &v132);
		}
		else
		{
		  if ( dword_140EC06B4 > *(_DWORD *)(*(_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + 4i64) )
		  {
			Init_thread_header(&dword_140EC06B4);
			if ( dword_140EC06B4 == -1 )
			{
			  off_140EB1E18 = off_140EB1BC8;
			  atexit(sub_14046AD80);
			  Init_thread_footer(&dword_140EC06B4);
			}
		  }
		  v44 = &off_140EB1E18;
		}
		v45 = (void *)(v132 - 16);
		if ( (*(_DWORD *)(v132 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32 *)v45) == -1 )
		  j_j_free(v45);
		((void (__fastcall *)(__int64 (__fastcall ***)(), _BYTE **, __int64 (__fastcall ****)()))(**v44)[4])(
		  *v44,
		  &v169,
		  v44 + 1);
		v46 = v169;
		v47 = String::isNotEmpty(v169, "NOTCH");
		v48 = v46 - 16;
		if ( (*((_DWORD *)v46 - 4) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32 *)v48) == -1 )
		  j_j_free(v48);
		v49 = sub_1402F7E90();
		v50 = (__int64)v49;
		v51 = v47 == 0;
		v52 = (struct _RTL_CRITICAL_SECTION *)(v49 + 2);
		v53 = (struct _RTL_CRITICAL_SECTION *)(v49 + 2);
		if ( v51 )
		{
		  v171[6] = v49 + 2;
		  EnterCriticalSection(v53);
		  sub_1402F8020(v50);
		  v144 = "fc";
		  sub_1402DDCD0(&v133, v50, &v144);
		  LeaveCriticalSection(v52);
		  v54 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v172 + 48i64))(v172, v173);
		  v55 = _RTDynamicCast(
				  v54,
				  0i64,
				  &juce::ReferenceCountedObject `RTTI Type Descriptor',
				  &juce::DynamicObject `RTTI Type Descriptor',
				  0);
		  if ( v55 )
			v56 = (__int64 (__fastcall ****)())(*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v55 + 16i64))(
												 v55,
												 &v133);
		  else
			v56 = sub_14030AB50();
		  v57 = v56;
		  v58 = (void *)(v133 - 16);
		  if ( (*(_DWORD *)(v133 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32 *)v58) == -1 )
			j_j_free(v58);
		  ((void (__fastcall *)(__int64 (__fastcall ***)(), unsigned __int8 *, __int64 (__fastcall ****)()))(**v57)[4])(
			*v57,
			v164,
			v57 + 1);
		  v60 = sub_14020F700(v59, v164).m128d_f64[0];
		  v61 = v36->m128i_i32[0];
		  *(float *)(a1 + 4 * v61 + 316) = v60;
		  v62 = sub_1402F7E90();
		  v171[7] = v62 + 2;
		  EnterCriticalSection((LPCRITICAL_SECTION)(v62 + 2));
		  sub_1402F8020((__int64)v62);
		  v143 = "g";
		  sub_1402DDCD0(&v134, (__int64)v62, &v143);
		  LeaveCriticalSection((LPCRITICAL_SECTION)(v62 + 2));
		  v63 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v172 + 48i64))(v172, v173);
		  v64 = _RTDynamicCast(
				  v63,
				  0i64,
				  &juce::ReferenceCountedObject `RTTI Type Descriptor',
				  &juce::DynamicObject `RTTI Type Descriptor',
				  0);
		  if ( v64 )
			v65 = (__int64 (__fastcall ****)())(*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v64 + 16i64))(
												 v64,
												 &v134);
		  else
			v65 = sub_14030AB50();
		  v66 = v65;
		  v67 = (void *)(v134 - 16);
		  if ( (*(_DWORD *)(v134 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32 *)v67) == -1 )
			j_j_free(v67);
		  ((void (__fastcall *)(__int64 (__fastcall ***)(), unsigned __int8 *, __int64 (__fastcall ****)()))(**v66)[4])(
			*v66,
			v165,
			v66 + 1);
		  v69 = sub_14020F700(v68, v165).m128d_f64[0];
		  *(float *)(a1 + 4 * v61 + 340) = v69;
		  v70 = sub_1402F7E90();
		  v171[8] = v70 + 2;
		  EnterCriticalSection((LPCRITICAL_SECTION)(v70 + 2));
		  sub_1402F8020((__int64)v70);
		  v145 = "q";
		  sub_1402DDCD0(&v135, (__int64)v70, &v145);
		  LeaveCriticalSection((LPCRITICAL_SECTION)(v70 + 2));
		  v71 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v172 + 48i64))(v172, v173);
		  v72 = _RTDynamicCast(
				  v71,
				  0i64,
				  &juce::ReferenceCountedObject `RTTI Type Descriptor',
				  &juce::DynamicObject `RTTI Type Descriptor',
				  0);
		  if ( v72 )
			v73 = (__int64 (__fastcall ****)())(*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v72 + 16i64))(
												 v72,
												 &v135);
		  else
			v73 = sub_14030AB50();
		  v74 = v73;
		  v75 = (void *)(v135 - 16);
		  if ( (*(_DWORD *)(v135 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32 *)v75) == -1 )
			j_j_free(v75);
		  ((void (__fastcall *)(__int64 (__fastcall ***)(), unsigned __int8 *, __int64 (__fastcall ****)()))(**v74)[4])(
			*v74,
			v166,
			v74 + 1);
		  v77 = sub_14020F700(v76, v166).m128d_f64[0];
		  *(float *)(a1 + 4 * v61 + 364) = v77;
		  v36 = (__m128i *)&v151->m128i_i8[4];
		  v151 = (__m128i *)((char *)v151 + 4);
		}
		else
		{
		  v171[9] = v49 + 2;
		  EnterCriticalSection(v53);
		  sub_1402F8020(v50);
		  v160 = "type";
		  sub_1402DDCD0(&v136, v50, &v160);
		  LeaveCriticalSection(v52);
		  v78 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v172 + 48i64))(v172, v173);
		  v79 = _RTDynamicCast(
				  v78,
				  0i64,
				  &juce::ReferenceCountedObject `RTTI Type Descriptor',
				  &juce::DynamicObject `RTTI Type Descriptor',
				  0);
		  if ( v79 )
			v80 = (__int64 (__fastcall ****)())(*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v79 + 16i64))(
												 v79,
												 &v136);
		  else
			v80 = sub_14030AB50();
		  v81 = v80;
		  v82 = (void *)(v136 - 16);
		  if ( (*(_DWORD *)(v136 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32 *)v82) == -1 )
			j_j_free(v82);
		  ((void (__fastcall *)(__int64 (__fastcall ***)(), _BYTE **, __int64 (__fastcall ****)()))(**v81)[4])(
			*v81,
			v171,
			v81 + 1);
		  v83 = v171[0];
		  v84 = String::isNotEmpty(v171[0], "HPS");
		  v85 = v83 - 16;
		  if ( (*((_DWORD *)v83 - 4) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32 *)v85) == -1 )
			j_j_free(v85);
		  if ( v84 )
		  {
			v102 = sub_1402F7E90();
			v171[12] = v102 + 2;
			EnterCriticalSection((LPCRITICAL_SECTION)(v102 + 2));
			sub_1402F8020((__int64)v102);
			v163 = "type";
			sub_1402DDCD0(&v139, (__int64)v102, &v163);
			LeaveCriticalSection((LPCRITICAL_SECTION)(v102 + 2));
			v103 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v172 + 48i64))(v172, v173);
			v104 = _RTDynamicCast(
					 v103,
					 0i64,
					 &juce::ReferenceCountedObject `RTTI Type Descriptor',
					 &juce::DynamicObject `RTTI Type Descriptor',
					 0);
			if ( v104 )
			  v105 = (__int64 (__fastcall ****)())(*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v104 + 16i64))(
													v104,
													&v139);
			else
			  v105 = sub_14030AB50();
			v106 = v105;
			v107 = (void *)(v139 - 16);
			if ( (*(_DWORD *)(v139 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32 *)v107) == -1 )
			  j_j_free(v107);
			((void (__fastcall *)(__int64 (__fastcall ***)(), _BYTE **, __int64 (__fastcall ****)()))(**v106)[4])(
			  *v106,
			  &v167,
			  v106 + 1);
			v108 = v167;
			v109 = String::isNotEmpty(v167, "LPS");
			v110 = v108 - 16;
			if ( (*((_DWORD *)v108 - 4) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32 *)v110) == -1 )
			  j_j_free(v110);
			if ( !v109 )
			{
			  if ( !v33 )
			  {
				v111 = sub_1402F7E90();
				v171[13] = v111 + 2;
				EnterCriticalSection((LPCRITICAL_SECTION)(v111 + 2));
				sub_1402F8020((__int64)v111);
				v148 = "fc";
				sub_1402DDCD0(&v140, (__int64)v111, &v148);
				LeaveCriticalSection((LPCRITICAL_SECTION)(v111 + 2));
				v112 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v172 + 48i64))(v172, v173);
				v113 = _RTDynamicCast(
						 v112,
						 0i64,
						 &juce::ReferenceCountedObject `RTTI Type Descriptor',
						 &juce::DynamicObject `RTTI Type Descriptor',
						 0);
				if ( v113 )
				  v114 = (__int64 (__fastcall ****)())(*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v113 + 16i64))(
														v113,
														&v140);
				else
				  v114 = sub_14030AB50();
				v115 = v114;
				v116 = (void *)(v140 - 16);
				if ( (*(_DWORD *)(v140 - 16) & 0x30000000) == 0
				  && _InterlockedDecrement((volatile signed __int32 *)v116) == -1 )
				{
				  j_j_free(v116);
				}
				((void (__fastcall *)(__int64 (__fastcall ***)(), unsigned __int8 *, __int64 (__fastcall ****)()))(**v115)[4])(
				  *v115,
				  v154,
				  v115 + 1);
				v118 = sub_14020F700(v117, v154).m128d_f64[0];
				*(float *)(a1 + 272) = v118;
				v119 = sub_1402F7E90();
				v171[14] = v119 + 2;
				EnterCriticalSection((LPCRITICAL_SECTION)(v119 + 2));
				sub_1402F8020((__int64)v119);
				v149 = "g";
				sub_1402DDCD0(&v141, (__int64)v119, &v149);
				LeaveCriticalSection((LPCRITICAL_SECTION)(v119 + 2));
				v120 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v172 + 48i64))(v172, v173);
				v121 = _RTDynamicCast(
						 v120,
						 0i64,
						 &juce::ReferenceCountedObject `RTTI Type Descriptor',
						 &juce::DynamicObject `RTTI Type Descriptor',
						 0);
				if ( v121 )
				  v122 = (__int64 (__fastcall ****)())(*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v121 + 16i64))(
														v121,
														&v141);
				else
				  v122 = sub_14030AB50();
				v123 = v122;
				v124 = (void *)(v141 - 16);
				if ( (*(_DWORD *)(v141 - 16) & 0x30000000) == 0
				  && _InterlockedDecrement((volatile signed __int32 *)v124) == -1 )
				{
				  j_j_free(v124);
				}
				((void (__fastcall *)(__int64 (__fastcall ***)(), unsigned __int8 *, __int64 (__fastcall ****)()))(**v123)[4])(
				  *v123,
				  v155,
				  v123 + 1);
				v126 = sub_14020F700(v125, v155).m128d_f64[0];
				*(float *)(a1 + 280) = v126;
			  }
			  ++v33;
			}
		  }
		  else
		  {
			if ( !v32 )
			{
			  v86 = sub_1402F7E90();
			  v171[10] = v86 + 2;
			  EnterCriticalSection((LPCRITICAL_SECTION)(v86 + 2));
			  sub_1402F8020((__int64)v86);
			  v146 = "fc";
			  sub_1402DDCD0(&v137, (__int64)v86, &v146);
			  LeaveCriticalSection((LPCRITICAL_SECTION)(v86 + 2));
			  v87 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v172 + 48i64))(v172, v173);
			  v88 = _RTDynamicCast(
					  v87,
					  0i64,
					  &juce::ReferenceCountedObject `RTTI Type Descriptor',
					  &juce::DynamicObject `RTTI Type Descriptor',
					  0);
			  if ( v88 )
				v89 = (__int64 (__fastcall ****)())(*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v88 + 16i64))(
													 v88,
													 &v137);
			  else
				v89 = sub_14030AB50();
			  v90 = v89;
			  v91 = (void *)(v137 - 16);
			  if ( (*(_DWORD *)(v137 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32 *)v91) == -1 )
				j_j_free(v91);
			  ((void (__fastcall *)(__int64 (__fastcall ***)(), unsigned __int8 *, __int64 (__fastcall ****)()))(**v90)[4])(
				*v90,
				v152,
				v90 + 1);
			  v93 = sub_14020F700(v92, v152).m128d_f64[0];
			  *(float *)(a1 + 296) = v93;
			  v94 = sub_1402F7E90();
			  v171[11] = v94 + 2;
			  EnterCriticalSection((LPCRITICAL_SECTION)(v94 + 2));
			  sub_1402F8020((__int64)v94);
			  v147 = "g";
			  sub_1402DDCD0(&v138, (__int64)v94, &v147);
			  LeaveCriticalSection((LPCRITICAL_SECTION)(v94 + 2));
			  v95 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v172 + 48i64))(v172, v173);
			  v96 = _RTDynamicCast(
					  v95,
					  0i64,
					  &juce::ReferenceCountedObject `RTTI Type Descriptor',
					  &juce::DynamicObject `RTTI Type Descriptor',
					  0);
			  if ( v96 )
				v97 = (__int64 (__fastcall ****)())(*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v96 + 16i64))(
													 v96,
													 &v138);
			  else
				v97 = sub_14030AB50();
			  v98 = v97;
			  v99 = (void *)(v138 - 16);
			  if ( (*(_DWORD *)(v138 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32 *)v99) == -1 )
				j_j_free(v99);
			  ((void (__fastcall *)(__int64 (__fastcall ***)(), unsigned __int8 *, __int64 (__fastcall ****)()))(**v98)[4])(
				*v98,
				v153,
				v98 + 1);
			  v101 = sub_14020F700(v100, v153).m128d_f64[0];
			  *(float *)(a1 + 304) = v101;
			}
			++v32;
		  }
		}
		(*(void (__fastcall **)(__int64, char *))(*(_QWORD *)v172 + 176i64))(v172, v173);
		++v34;
		v35 = v159 + 16;
	  }
	  *(_DWORD *)(a1 + 108) = 3;
	  (*(void (__fastcall **)(__int64, char *))(*(_QWORD *)v174 + 176i64))(v174, v175);
	  (*(void (__fastcall **)(__int64, char *))(*(_QWORD *)v176 + 176i64))(v176, v177);
	  (*(void (__fastcall **)(__int64 *, _QWORD **))(**v170 + 176))(*v170, v150);*/
	return 0i64;
}
char ThreewayGen1_1::sub_140240920(__int64 a1, __int64* a2)
{
	/*  __int64 v3; // xmm6_8
	  __int64 v5; // rcx
	  __int64 v6; // r9
	  __int64 v7; // rdx
	  char v8; // r8
	  __int64 v9; // r9
	  __int64 v10; // r8
	  __int64 v11; // rdx
	  int v12; // er11
	  __int64 v13; // r8
	  __int64 v14; // rdx
	  int v15; // er10
	  __int64 v16; // r8
	  __int64 v17; // rdx
	  int v18; // er9
	  double v19; // xmm2_8
	  char result; // al
	  __int64 v21; // r9
	  __int64 v22; // r8
	  char v23; // dl
	  __int64 v24; // r9
	  __int64 v25; // r8
	  char v26; // dl

	  v3 = 0x3F8F266BA493C89Fi64;
	  if ( !sub_140210740(a1) )
	  {
	LABEL_8:
		*a2 = v3;
		return 1;
	  }
	  sub_140007A80(*(__int64 **)(a1 + 56));
	  sub_14021B000(v5, *(__int64 **)(a1 + 56), *(_DWORD *)(a1 + 72));
	  sub_140212F70(*(_QWORD *)(a1 + 64), *(__int64 ***)(a1 + 56));
	  *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 56) + 8i64) + 20i64) = 1;
	  v6 = *(_QWORD *)(*(_QWORD *)(a1 + 56) + 8i64);
	  v7 = *(int *)(v6 + 20);
	  v8 = *(_BYTE *)(v7 + *(_QWORD *)v6);
	  *(_DWORD *)(v6 + 20) = v7 + 1;
	  v9 = *(_QWORD *)(a1 + 56);
	  if ( v8 != 9 )
	  {
		v21 = *(_QWORD *)(v9 + 8);
		v22 = *(int *)(v21 + 20);
		v23 = *(_BYTE *)(v22 + *(_QWORD *)v21);
		*(_DWORD *)(v21 + 20) = v22 + 1;
		if ( v23 == 16
		  || (v24 = *(_QWORD *)(*(_QWORD *)(a1 + 56) + 8i64),
			  v25 = *(int *)(v24 + 20),
			  v26 = *(_BYTE *)(v25 + *(_QWORD *)v24),
			  *(_DWORD *)(v24 + 20) = v25 + 1,
			  v26 == 17) )
		{
		  v3 = 0i64;
		}
		goto LABEL_8;
	  }
	  *(_DWORD *)(*(_QWORD *)(v9 + 8) + 20i64) = 2;
	  v10 = *(_QWORD *)(*(_QWORD *)(a1 + 56) + 8i64);
	  v11 = *(int *)(v10 + 20);
	  v12 = *(unsigned __int8 *)(v11 + *(_QWORD *)v10);
	  *(_DWORD *)(v10 + 20) = v11 + 1;
	  v13 = *(_QWORD *)(*(_QWORD *)(a1 + 56) + 8i64);
	  v14 = *(int *)(v13 + 20);
	  v15 = *(unsigned __int8 *)(v14 + *(_QWORD *)v13);
	  *(_DWORD *)(v13 + 20) = v14 + 1;
	  v16 = *(_QWORD *)(*(_QWORD *)(a1 + 56) + 8i64);
	  v17 = *(int *)(v16 + 20);
	  v18 = *(unsigned __int8 *)(v17 + *(_QWORD *)v16);
	  *(_DWORD *)(v16 + 20) = v17 + 1;
	  v19 = (double)(v12 << 16) + (double)(v15 << 8) + (double)v18;
	  *(double *)a2 = v19 / 1000000.0;
	  if ( v19 < 15210.0 )
	  {
		result = 1;
		*a2 = 0x3F8F266BA493C89Fi64;
		return result;
	  }*/
	return 1;
}
char ThreewayGen1_1::sub_140240840(__int64 a1)
{
	/*  __int64 v2; // rdx
	  __int64 v3; // r8
	  char v4; // cl
	  __int64 v5; // rax
	  _DWORD *v6; // rax
	  __int64 v7; // r9
	  __int64 v8; // r8
	  char v9; // dl
	  char result; // al

	  if ( !sub_140210740(a1) )
		goto LABEL_4;
	  LOBYTE(v3) = 1;
	  (*(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)a1 + 152i64))(a1, v2, v3);
	  sub_140007A80(*(__int64 **)(a1 + 56));
	  v4 = *(_BYTE *)(a1 + 72);
	  v5 = **(_QWORD **)(a1 + 56);
	  ++*(_DWORD *)(v5 + 20);
	  **(_BYTE **)v5 = v4;
	  v6 = **(_DWORD ***)(a1 + 56);
	  ++v6[5];
	  *(_BYTE *)(*(_QWORD *)v6 + 1i64) = 21;
	  sub_140007AF0(**(__int64 ***)(a1 + 56), 23);
	  sub_140007AF0(**(__int64 ***)(a1 + 56), 2);
	  *(_DWORD *)(**(_QWORD **)(a1 + 56) + 12i64) = 7;
	  sub_140212F70(*(_QWORD *)(a1 + 64), *(__int64 ***)(a1 + 56));
	  *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 56) + 8i64) + 20i64) = 1;
	  v7 = *(_QWORD *)(*(_QWORD *)(a1 + 56) + 8i64);
	  v8 = *(int *)(v7 + 20);
	  v9 = *(_BYTE *)(v8 + *(_QWORD *)v7);
	  *(_DWORD *)(v7 + 20) = v8 + 1;
	  if ( v9 == 9 )
		result = 1;
	  else
	LABEL_4:
		result = 0;
	return result;*/
	return 1;
}
char ThreewayGen1_1::sub_140240780(__int64 a1)
{
	/*  char v2; // dl
	  __int64 v3; // rax
	  _DWORD *v4; // rax
	  __int64 v5; // r9
	  __int64 v6; // r8
	  char v7; // dl
	  char result; // al

	  if ( !sub_140210740(a1) )
		goto LABEL_4;
	  sub_140007A80(*(__int64 **)(a1 + 56));
	  v2 = *(_BYTE *)(a1 + 72);
	  v3 = **(_QWORD **)(a1 + 56);
	  ++*(_DWORD *)(v3 + 20);
	  **(_BYTE **)v3 = v2;
	  v4 = **(_DWORD ***)(a1 + 56);
	  ++v4[5];
	  *(_BYTE *)(*(_QWORD *)v4 + 1i64) = 21;
	  sub_140007AF0(**(__int64 ***)(a1 + 56), 23);
	  sub_140007AF0(**(__int64 ***)(a1 + 56), 2);
	  *(_DWORD *)(**(_QWORD **)(a1 + 56) + 12i64) = 7;
	  sub_140212F70(*(_QWORD *)(a1 + 64), *(__int64 ***)(a1 + 56));
	  *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 56) + 8i64) + 20i64) = 1;
	  v5 = *(_QWORD *)(*(_QWORD *)(a1 + 56) + 8i64);
	  v6 = *(int *)(v5 + 20);
	  v7 = *(_BYTE *)(v6 + *(_QWORD *)v5);
	  *(_DWORD *)(v5 + 20) = v6 + 1;
	  if ( v7 == 9 )
		result = 1;
	  else
	LABEL_4:
		result = 0;
	return result;*/
	return 1;
}
char ThreewayGen1_1::sub_140240550(__int64 a1)
{
	/*  char v2; // cl
	  __int64 v3; // rax
	  _DWORD *v4; // rax
	  double v5; // xmm6_8
	  double v6; // xmm0_8
	  double v7; // xmm0_8
	  double v8; // xmm0_8
	  __int64 v9; // rcx
	  __int64 v10; // rcx
	  __int64 v11; // r8
	  char v12; // cl
	  __int64 v13; // rax
	  _DWORD *v14; // rax
	  __int64 v15; // r9
	  __int64 v16; // r8
	  char v17; // dl

	  if ( !sub_140210740(a1) )
		return 0;
	  (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a1 + 136i64))(a1, 0i64);
	  sub_140007A80(*(__int64 **)(a1 + 56));
	  v2 = *(_BYTE *)(a1 + 72);
	  v3 = **(_QWORD **)(a1 + 56);
	  ++*(_DWORD *)(v3 + 20);
	  **(_BYTE **)v3 = v2;
	  v4 = **(_DWORD ***)(a1 + 56);
	  ++v4[5];
	  *(_BYTE *)(*(_QWORD *)v4 + 1i64) = 16;
	  sub_140007AF0(**(__int64 ***)(a1 + 56), 1);
	  sub_140007AF0(**(__int64 ***)(a1 + 56), 5);
	  v5 = (double)(int)(pow(10.0, 0.0) * 8388607.0);
	  v6 = floor(v5 * 0.0000152587890625);
	  sub_140007AF0(**(__int64 ***)(a1 + 56), (int)v6);
	  v7 = floor(v5 * 0.00390625);
	  sub_140007AF0(**(__int64 ***)(a1 + 56), (int)v7);
	  v8 = floor(v5);
	  sub_140007AF0(**(__int64 ***)(a1 + 56), (int)v8);
	  *(_DWORD *)(**(_QWORD **)(a1 + 56) + 12i64) = 10;
	  sub_140212F70(*(_QWORD *)(a1 + 64), *(__int64 ***)(a1 + 56));
	  sub_140219DE0(v9, *(__int64 **)(a1 + 56), *(_DWORD *)(a1 + 72), 0, 0);
	  sub_140212F70(*(_QWORD *)(a1 + 64), *(__int64 ***)(a1 + 56));
	  sub_140007A80(*(__int64 **)(a1 + 56));
	  sub_14021B1E0(v10, *(__int64 **)(a1 + 56), *(_DWORD *)(a1 + 72), 0.0);
	  sub_140212F70(*(_QWORD *)(a1 + 64), *(__int64 ***)(a1 + 56));
	  LOBYTE(v11) = 1;
	  (*(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)a1 + 328i64))(a1, 1i64, v11);
	  sub_140007A80(*(__int64 **)(a1 + 56));
	  v12 = *(_BYTE *)(a1 + 72);
	  v13 = **(_QWORD **)(a1 + 56);
	  ++*(_DWORD *)(v13 + 20);
	  **(_BYTE **)v13 = v12;
	  v14 = **(_DWORD ***)(a1 + 56);
	  ++v14[5];
	  *(_BYTE *)(*(_QWORD *)v14 + 1i64) = 21;
	  sub_140007AF0(**(__int64 ***)(a1 + 56), 23);
	  sub_140007AF0(**(__int64 ***)(a1 + 56), 2);
	  *(_DWORD *)(**(_QWORD **)(a1 + 56) + 12i64) = 7;
	  sub_140212F70(*(_QWORD *)(a1 + 64), *(__int64 ***)(a1 + 56));
	  *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 56) + 8i64) + 20i64) = 1;
	  v15 = *(_QWORD *)(*(_QWORD *)(a1 + 56) + 8i64);
	  v16 = *(int *)(v15 + 20);
	  v17 = *(_BYTE *)(v16 + *(_QWORD *)v15);
	  *(_DWORD *)(v15 + 20) = v16 + 1;
	  if ( v17 != 9 )
		return 0;
	  LOBYTE(v16) = 1;
	  (*(void (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)a1 + 328i64))(a1, *(unsigned int *)(a1 + 264), v16);*/
	return 1;
}
char ThreewayGen1_1::sub_140240520(__int64 a1)
{
	/*  __int64 v1; // r9

	  if ( !sub_140210740(a1) )
		return 0;
	  sub_140243D20(v1);*/
	return 1;
}
char ThreewayGen1_1::sub_140240430(__int64 a1, int a2, int a3)
{
	/*  __int64 v6; // rcx
	  int v7; // er9
	  int v8; // eax
	  __int64 v9; // r9
	  __int64 v10; // r8
	  char v11; // dl
	  char result; // al
	  int v13[6]; // [rsp+30h] [rbp-18h] BYREF
	  int v14; // [rsp+68h] [rbp+20h] BYREF

	  if ( !sub_140210740(a1) )
		goto LABEL_13;
	  (*(void (__fastcall **)(__int64, int *, int *))(*(_QWORD *)a1 + 480i64))(a1, v13, &v14);
	  v7 = v13[0];
	  if ( a2 >= 0 )
		v7 = a2;
	  v13[0] = v7;
	  if ( a3 < 0 )
	  {
		LOBYTE(v8) = v14;
	  }
	  else if ( a3 )
	  {
		v8 = 48;
		v6 = 16i64;
		if ( a3 == 1 )
		  v8 = 16;
		v14 = v8;
	  }
	  else
	  {
		LOBYTE(v8) = 0;
		v14 = 0;
	  }
	  sub_140219DE0(v6, *(__int64 **)(a1 + 56), *(_DWORD *)(a1 + 72), v7, v8);
	  sub_140212F70(*(_QWORD *)(a1 + 64), *(__int64 ***)(a1 + 56));
	  *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 56) + 8i64) + 20i64) = 1;
	  v9 = *(_QWORD *)(*(_QWORD *)(a1 + 56) + 8i64);
	  v10 = *(int *)(v9 + 20);
	  v11 = *(_BYTE *)(v10 + *(_QWORD *)v9);
	  *(_DWORD *)(v9 + 20) = v10 + 1;
	  if ( v11 == 9 )
		result = 1;
	  else
	LABEL_13:
		result = 0;
	return result;*/
	return 1;
}
char ThreewayGen1_1::sub_1402402F0(__int64 a1, _DWORD* a2, _DWORD* a3)
{
	/*  int v6; // ebx
	  __int64 *v7; // rdi
	  __int64 v8; // rax
	  _DWORD *v9; // rax
	  __int64 v10; // r9
	  __int64 v11; // r8
	  char v12; // dl
	  __int64 v13; // r8
	  __int64 v14; // rdx
	  int v15; // er10
	  __int64 v16; // r9
	  __int64 v17; // r8
	  char result; // al

	  if ( !sub_140210740(a1) )
		return 0;
	  v6 = *(_DWORD *)(a1 + 72);
	  v7 = *(__int64 **)(a1 + 56);
	  sub_140007A80(v7);
	  v8 = *v7;
	  ++*(_DWORD *)(v8 + 20);
	  **(_BYTE **)v8 = v6;
	  v9 = (_DWORD *)*v7;
	  ++v9[5];
	  *(_BYTE *)(*(_QWORD *)v9 + 1i64) = 16;
	  sub_140007AF0((__int64 *)*v7, 130);
	  sub_140007AF0((__int64 *)*v7, 133);
	  *(_DWORD *)(*v7 + 12) = 7;
	  sub_140212F70(*(_QWORD *)(a1 + 64), *(__int64 ***)(a1 + 56));
	  *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 56) + 8i64) + 20i64) = 1;
	  v10 = *(_QWORD *)(*(_QWORD *)(a1 + 56) + 8i64);
	  v11 = *(int *)(v10 + 20);
	  v12 = *(_BYTE *)(v11 + *(_QWORD *)v10);
	  *(_DWORD *)(v10 + 20) = v11 + 1;
	  if ( v12 != 9 )
		return 0;
	  *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 56) + 8i64) + 20i64) = 2;
	  v13 = *(_QWORD *)(*(_QWORD *)(a1 + 56) + 8i64);
	  v14 = *(int *)(v13 + 20);
	  v15 = *(unsigned __int8 *)(v14 + *(_QWORD *)v13);
	  *(_DWORD *)(v13 + 20) = v14 + 1;
	  ++*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 56) + 8i64) + 20i64);
	  v16 = *(_QWORD *)(*(_QWORD *)(a1 + 56) + 8i64);
	  v17 = *(int *)(v16 + 20);
	  LODWORD(v14) = *(unsigned __int8 *)(v17 + *(_QWORD *)v16);
	  *(_DWORD *)(v16 + 20) = v17 + 1;
	  result = 1;
	  *a2 = v14;
	  *a3 = v15;
	return result;*/
	return 1;
}
char ThreewayGen1_1::sub_1402402E0()
{
	return 0;
}
char ThreewayGen1_1::sub_1402402D0()
{
	return 0;
}
char ThreewayGen1_1::sub_140240170(__int64 a1, double a2)
{
	/*  float v3; // xmm0_4
	  float v4; // xmm6_4
	  char v5; // cl
	  __int64 v6; // rax
	  _DWORD *v7; // rax
	  double v8; // xmm6_8
	  double v9; // xmm0_8
	  double v10; // xmm0_8
	  double v11; // xmm0_8

	  v3 = a2;
	  *(float *)(a1 + 256) = v3;
	  if ( sub_140210740(a1) )
	  {
		v4 = *(float *)(a1 + 256);
		if ( v4 > 0.0 )
		{
		  *(_DWORD *)(a1 + 256) = 0;
		  v4 = 0.0;
		}
		sub_140007A80(*(__int64 **)(a1 + 56));
		v5 = *(_BYTE *)(a1 + 72);
		v6 = **(_QWORD **)(a1 + 56);
		++*(_DWORD *)(v6 + 20);
		**(_BYTE **)v6 = v5;
		v7 = **(_DWORD ***)(a1 + 56);
		++v7[5];
		*(_BYTE *)(*(_QWORD *)v7 + 1i64) = 16;
		sub_140007AF0(**(__int64 ***)(a1 + 56), 1);
		sub_140007AF0(**(__int64 ***)(a1 + 56), 5);
		v8 = (double)(int)(pow(10.0, v4 / 20.0) * 8388607.0);
		v9 = floor(v8 * 0.0000152587890625);
		sub_140007AF0(**(__int64 ***)(a1 + 56), (int)v9);
		v10 = floor(v8 * 0.00390625);
		sub_140007AF0(**(__int64 ***)(a1 + 56), (int)v10);
		v11 = floor(v8);
		sub_140007AF0(**(__int64 ***)(a1 + 56), (int)v11);
		*(_DWORD *)(**(_QWORD **)(a1 + 56) + 12i64) = 10;
		sub_140212F70(*(_QWORD *)(a1 + 64), *(__int64 ***)(a1 + 56));
		*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 56) + 8i64) + 20i64) = 1;
		++*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 56) + 8i64) + 20i64);
	  }*/
	return 0;
}
char ThreewayGen1_1::sub_1402400D0(__int64 a1, float a2, char a3)
{
	/*  __int64 v4; // rcx
	  __int64 v5; // r9
	  __int64 v6; // r8
	  char v7; // dl
	  char result; // al

	  if ( !a3 )
		*(_DWORD *)(a1 + 260) = (int)a2;
	  if ( !sub_140210740(a1) )
		goto LABEL_6;
	  sub_140007A80(*(__int64 **)(a1 + 56));
	  sub_14021B1E0(v4, *(__int64 **)(a1 + 56), *(_DWORD *)(a1 + 72), a2);
	  sub_140212F70(*(_QWORD *)(a1 + 64), *(__int64 ***)(a1 + 56));
	  *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 56) + 8i64) + 20i64) = 1;
	  v5 = *(_QWORD *)(*(_QWORD *)(a1 + 56) + 8i64);
	  v6 = *(int *)(v5 + 20);
	  v7 = *(_BYTE *)(v6 + *(_QWORD *)v5);
	  *(_DWORD *)(v5 + 20) = v6 + 1;
	  if ( v7 == 9 )
		result = 1;
	  else
	LABEL_6:
		result = 0;
	return result;*/
	return 1;
}
char ThreewayGen1_1::sub_1402400B0(__int64 a1, float* a2)
{
	/*  char result; // al

	  result = 0;
	  *a2 = (float)*(int *)(a1 + 260);
	return result;*/
	return 1;
}
__int64 ThreewayGen1_1::sub_140240030(__int64 a1, unsigned __int8 a2)
{
	/*  __int64 v4; // r8
	  __int64 v5; // rdx

	  (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 160i64))(a1);
	  LOBYTE(v4) = 1;
	  (*(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)a1 + 152i64))(a1, v5, v4);
	  return (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD, _BYTE, _BYTE, _BYTE, _BYTE, _BYTE, _BYTE, _DWORD, _DWORD))(*(_QWORD *)a1 + 144i64))(
			   a1,
			   0i64,
			   a2,
			   0i64,
			   0,
			   0,
			   0,
			   0,
			   0,
			   0,
			   0,
			   0);*/
	return 1;
}
__int64* ThreewayGen1_1::sub_14023FC00(float* a1, __int64* a2)
{
	/*  float *v4; // rdi
	  __int64 v5; // r14
	  __int64 v6; // rsi
	  __int64 v7; // rax
	  void *v8; // rcx
	  __int64 v9; // rcx
	  void *v10; // rcx
	  void *v11; // rcx
	  float *v12; // rdi
	  __int64 v13; // rax
	  void *v14; // rcx
	  __int64 v15; // rcx
	  void *v16; // rcx
	  void *v17; // rcx
	  float *v18; // rdi
	  __int64 v19; // rsi
	  __int64 v20; // rax
	  void *v21; // rcx
	  __int64 v22; // rcx
	  void *v23; // rcx
	  void *v24; // rcx
	  __int64 v26; // [rsp+30h] [rbp-D8h] BYREF
	  __int64 v27; // [rsp+38h] [rbp-D0h] BYREF
	  __int64 v28[3]; // [rsp+40h] [rbp-C8h] BYREF
	  __int64 v29; // [rsp+58h] [rbp-B0h] BYREF
	  __int64 v30; // [rsp+60h] [rbp-A8h]
	  __int64 v31; // [rsp+68h] [rbp-A0h]
	  double v32; // [rsp+70h] [rbp-98h]
	  double v33; // [rsp+78h] [rbp-90h]
	  __int64 v34; // [rsp+80h] [rbp-88h]
	  __int64 v35; // [rsp+B8h] [rbp-50h]
	  int v36; // [rsp+C8h] [rbp-40h] BYREF
	  __int64 v37; // [rsp+D0h] [rbp-38h]
	  __int64 v38; // [rsp+D8h] [rbp-30h]
	  double v39; // [rsp+E0h] [rbp-28h]
	  double v40; // [rsp+E8h] [rbp-20h]
	  __int64 v41; // [rsp+F0h] [rbp-18h]
	  __int64 v42; // [rsp+128h] [rbp+20h]
	  int v43; // [rsp+138h] [rbp+30h] BYREF
	  __int64 v44; // [rsp+140h] [rbp+38h]
	  __int64 v45; // [rsp+148h] [rbp+40h]
	  double v46; // [rsp+150h] [rbp+48h]
	  double v47; // [rsp+158h] [rbp+50h]
	  double v48; // [rsp+160h] [rbp+58h]
	  __int64 v49; // [rsp+198h] [rbp+90h]

	  v28[1] = (__int64)a2;
	  *a2 = 0i64;
	  a2[1] = 0i64;
	  a2[2] = 0i64;
	  v4 = a1 + 69;
	  v5 = 2i64;
	  v6 = 2i64;
	  do
	  {
		sub_1402021B0((__int64)&v29);
		sub_140048D00(&v26, "LOWSHELF");
		v7 = v31;
		v31 = v26;
		v26 = v7;
		v8 = (void *)(v7 - 16);
		if ( (*(_DWORD *)(v7 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32 *)v8) == -1 )
		  j_j_free(v8);
		LODWORD(v29) = -1227133513 * ((a2[1] - *a2) >> 4);
		v32 = *(v4 - 2);
		v33 = *v4;
		v34 = 0x3FE0000000000000i64;
		v35 = 0x40E7700000000000i64;
		sub_1402019D0((__int64)&v29);
		v9 = a2[1];
		if ( v9 == a2[2] )
		{
		  sub_1400080A0(a2, a2[1], (__int64)&v29);
		}
		else
		{
		  sub_140001DA0(v9, (__int64)&v29);
		  a2[1] += 112i64;
		}
		v10 = (void *)(v31 - 16);
		if ( (*(_DWORD *)(v31 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32 *)v10) == -1 )
		  j_j_free(v10);
		v11 = (void *)(v30 - 16);
		if ( (*(_DWORD *)(v30 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32 *)v11) == -1 )
		  j_j_free(v11);
		++v4;
		--v6;
	  }
	  while ( v6 );
	  v12 = a1 + 75;
	  do
	  {
		sub_1402021B0((__int64)&v36);
		sub_140048D00(&v27, "HISHELF");
		v13 = v38;
		v38 = v27;
		v27 = v13;
		v14 = (void *)(v13 - 16);
		if ( (*(_DWORD *)(v13 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32 *)v14) == -1 )
		  j_j_free(v14);
		v36 = -1227133513 * ((a2[1] - *a2) >> 4);
		v39 = *(v12 - 2);
		v40 = *v12;
		v41 = 0x3FE0000000000000i64;
		v42 = 0x40E7700000000000i64;
		sub_1402019D0((__int64)&v36);
		v15 = a2[1];
		if ( v15 == a2[2] )
		{
		  sub_1400080A0(a2, a2[1], (__int64)&v36);
		}
		else
		{
		  sub_140001DA0(v15, (__int64)&v36);
		  a2[1] += 112i64;
		}
		v16 = (void *)(v38 - 16);
		if ( (*(_DWORD *)(v38 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32 *)v16) == -1 )
		  j_j_free(v16);
		v17 = (void *)(v37 - 16);
		if ( (*(_DWORD *)(v37 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32 *)v17) == -1 )
		  j_j_free(v17);
		++v12;
		--v5;
	  }
	  while ( v5 );
	  v18 = a1 + 85;
	  v19 = 6i64;
	  do
	  {
		sub_1402021B0((__int64)&v43);
		sub_140048D00(v28, "NOTCH");
		v20 = v45;
		v45 = v28[0];
		v28[0] = v20;
		v21 = (void *)(v20 - 16);
		if ( (*(_DWORD *)(v20 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32 *)v21) == -1 )
		  j_j_free(v21);
		v43 = -1227133513 * ((a2[1] - *a2) >> 4);
		v46 = *(v18 - 6);
		v47 = *v18;
		v48 = v18[6];
		v49 = 0x40E7700000000000i64;
		sub_1402019D0((__int64)&v43);
		v22 = a2[1];
		if ( v22 == a2[2] )
		{
		  sub_1400080A0(a2, a2[1], (__int64)&v43);
		}
		else
		{
		  sub_140001DA0(v22, (__int64)&v43);
		  a2[1] += 112i64;
		}
		v23 = (void *)(v45 - 16);
		if ( (*(_DWORD *)(v45 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32 *)v23) == -1 )
		  j_j_free(v23);
		v24 = (void *)(v44 - 16);
		if ( (*(_DWORD *)(v44 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32 *)v24) == -1 )
		  j_j_free(v24);
		++v18;
		--v19;
	  }
	  while ( v19 );*/
	return a2;
}
