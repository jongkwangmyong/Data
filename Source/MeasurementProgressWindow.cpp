#include "MeasurementProgressWindow.h"

__int64 MeasurementProgressWindow::sub_14016D330(__int64 a1)
{
	return 1;
	/*_QWORD* v2; // rdi
	struct _Mtx_internal_imp_t* v3; // rbx
	int v4; // eax
	int v5; // edi
	__int64 v6; // rcx
	int v7; // er15
	__int64* v8; // rsi
	unsigned __int64 v9; // r12
	int v10; // edi
	char* v11; // rbx
	char v12; // r14
	char* v13; // rcx
	char* v14; // rcx
	char* v15; // rcx
	char* v16; // rcx
	__int64 v17; // rdx
	__int64 v18; // rdi
	__int64 v19; // rdx
	__int64 result; // rax
	struct _RTL_CRITICAL_SECTION* v21; // r15
	int v22; // er13
	struct _RTL_CRITICAL_SECTION* v23; // rdi
	__int64 v24; // r14
	int i; // ecx
	__int64 v26; // rsi
	char* v27; // rbx
	int v28; // er14
	int v29; // edi
	__int64 v30; // r12
	__int64 v31; // r14
	_BYTE** v32; // r15
	int v33; // er14
	int v34; // edi
	__int64 v35; // rax
	__int64 v36; // r12
	__int64 v37; // r14
	_BYTE** v38; // r15
	volatile signed __int32* v39; // rcx
	__int64 v40; // rax
	void* v41; // rcx
	__int64 v42; // rcx
	void* v43; // rcx
	volatile signed __int32* v44; // rbx
	void* v45; // rcx
	void* v46; // rcx
	volatile signed __int32* v47; // rcx
	_DWORD* v48; // rcx
	__int64 v49; // r13
	int v50; // er14
	__int64 v51; // rbx
	unsigned __int64 v52; // r8
	char* v53; // r9
	__int64 v54; // rax
	volatile signed __int32* v55; // rsi
	void* v56; // rcx
	__int64 v57; // rcx
	void* v58; // rcx
	__int64 v59; // rbx
	void* v60; // rcx
	__int64 v61; // rcx
	void* v62; // rcx
	void* v63; // rcx
	__int64* v64; // rdi
	volatile signed __int32* v65; // rbx
	_DWORD* v66; // rcx
	void* v67; // rcx
	void* v68; // rcx
	int v69; // eax
	__int64 v70; // rdi
	__int64 v71; // rax
	volatile signed __int32* v72; // rsi
	__int64 v73; // rax
	void* v74; // rcx
	__int64* v75; // rbx
	__int64 v76; // rdx
	_DWORD* v77; // rcx
	__int64* v78; // rbx
	__int64 v79; // rdx
	_DWORD* v80; // rcx
	__int64* v81; // rbx
	__int64 v82; // rdx
	_DWORD* v83; // rcx
	__int64* v84; // rdi
	volatile signed __int32* v85; // rbx
	_DWORD* v86; // rcx
	void* v87; // rcx
	void* v88; // rcx
	char v89; // r15
	int v90; // er12
	double v91; // xmm6_8
	__int64 v92; // rsi
	__int64 v93; // r14
	__int64 v94; // rbx
	__int64 v95; // rbx
	_QWORD* v96; // rdi
	_DWORD* v97; // rbx
	_DWORD* v98; // rcx
	__int64 v99; // rax
	__int64* v100; // rbx
	__int64 v101; // rdx
	_DWORD* v102; // rcx
	_QWORD* v103; // rdi
	_DWORD* v104; // rbx
	_DWORD* v105; // rcx
	int v106; // edx
	int v107; // ecx
	int v108; // er9
	char v109; // di
	__int64 v110; // rbx
	__int64 v111; // rcx
	int v112; // er9
	int v113; // ecx
	_DWORD* v114; // rcx
	double v115; // xmm6_8
	int v116; // [rsp+38h] [rbp-D0h]
	int v117; // [rsp+38h] [rbp-D0h]
	int v118; // [rsp+38h] [rbp-D0h]
	int v119; // [rsp+38h] [rbp-D0h]
	int v120; // [rsp+38h] [rbp-D0h]
	int v121; // [rsp+38h] [rbp-D0h]
	int v122; // [rsp+38h] [rbp-D0h]
	int v123; // [rsp+38h] [rbp-D0h]
	int v124; // [rsp+38h] [rbp-D0h]
	int v125; // [rsp+38h] [rbp-D0h]
	int v126; // [rsp+38h] [rbp-D0h]
	int v127; // [rsp+38h] [rbp-D0h]
	int v128; // [rsp+38h] [rbp-D0h]
	int v129; // [rsp+38h] [rbp-D0h]
	int v130; // [rsp+38h] [rbp-D0h]
	int v131; // [rsp+48h] [rbp-C0h]
	volatile signed __int32* v132; // [rsp+50h] [rbp-B8h] BYREF
	char* v133; // [rsp+58h] [rbp-B0h] BYREF
	__int64 v134; // [rsp+68h] [rbp-A0h] BYREF
	volatile signed __int32* v135; // [rsp+70h] [rbp-98h] BYREF
	__int64 v136; // [rsp+78h] [rbp-90h] BYREF
	__int64 v137; // [rsp+80h] [rbp-88h] BYREF
	__int64 v138; // [rsp+88h] [rbp-80h] BYREF
	__int64 v139; // [rsp+90h] [rbp-78h]
	__int64 v140; // [rsp+98h] [rbp-70h] BYREF
	__int64 v141; // [rsp+A0h] [rbp-68h] BYREF
	_DWORD* v142; // [rsp+A8h] [rbp-60h] BYREF
	__int64 v143; // [rsp+B0h] [rbp-58h]
	__int128 v144; // [rsp+B8h] [rbp-50h] BYREF
	__int64 v145; // [rsp+C8h] [rbp-40h]
	char* v146; // [rsp+D0h] [rbp-38h] BYREF
	char* v147; // [rsp+D8h] [rbp-30h] BYREF
	__int64 v148; // [rsp+E0h] [rbp-28h] BYREF
	__int64 v149; // [rsp+E8h] [rbp-20h] BYREF
	__int64 v150; // [rsp+F0h] [rbp-18h] BYREF
	__int64 v151; // [rsp+F8h] [rbp-10h] BYREF
	__int64 v152; // [rsp+100h] [rbp-8h] BYREF
	__int64 v153; // [rsp+108h] [rbp+0h] BYREF
	__int64 v154; // [rsp+110h] [rbp+8h] BYREF
	__int64 v155; // [rsp+118h] [rbp+10h] BYREF
	__int64 v156; // [rsp+120h] [rbp+18h] BYREF
	__int64 v157; // [rsp+128h] [rbp+20h] BYREF
	__int64 v158; // [rsp+130h] [rbp+28h] BYREF
	__int64 v159; // [rsp+138h] [rbp+30h] BYREF
	__int64 v160; // [rsp+140h] [rbp+38h] BYREF
	__int64 v161; // [rsp+148h] [rbp+40h] BYREF
	__int64 v162; // [rsp+150h] [rbp+48h] BYREF
	__int64 v163; // [rsp+158h] [rbp+50h] BYREF
	__int64 v164; // [rsp+160h] [rbp+58h] BYREF
	__int64 v165; // [rsp+168h] [rbp+60h] BYREF
	__int64 v166; // [rsp+170h] [rbp+68h] BYREF
	__int64 v167; // [rsp+178h] [rbp+70h] BYREF
	LONG* v168; // [rsp+180h] [rbp+78h]
	char* v169; // [rsp+188h] [rbp+80h] BYREF
	char* v170; // [rsp+190h] [rbp+88h] BYREF
	__int64 v171; // [rsp+198h] [rbp+90h] BYREF
	char v172[8]; // [rsp+1A0h] [rbp+98h] BYREF
	__int64 v173; // [rsp+1A8h] [rbp+A0h] BYREF
	char v174[8]; // [rsp+1B0h] [rbp+A8h] BYREF
	__int64 v175; // [rsp+1B8h] [rbp+B0h] BYREF
	char v176[8]; // [rsp+1C0h] [rbp+B8h] BYREF
	char v177[8]; // [rsp+1C8h] [rbp+C0h] BYREF
	char v178[8]; // [rsp+1D0h] [rbp+C8h] BYREF
	__int64 v179; // [rsp+1D8h] [rbp+D0h] BYREF
	__int64 v180; // [rsp+1E0h] [rbp+D8h] BYREF
	LPCRITICAL_SECTION lpCriticalSection; // [rsp+1E8h] [rbp+E0h]
	char v182[8]; // [rsp+1F0h] [rbp+E8h] BYREF
	char v183[8]; // [rsp+1F8h] [rbp+F0h] BYREF
	double v184; // [rsp+200h] [rbp+F8h] BYREF
	double v185; // [rsp+208h] [rbp+100h] BYREF
	char v186[8]; // [rsp+210h] [rbp+108h] BYREF
	__int64 v187; // [rsp+218h] [rbp+110h]
	__int64 v188[9]; // [rsp+220h] [rbp+118h] BYREF
	char v189[32]; // [rsp+26Fh] [rbp+167h] BYREF
	char v190; // [rsp+28Fh] [rbp+187h] BYREF
	char v191[31]; // [rsp+290h] [rbp+188h] BYREF
	char v192; // [rsp+2AFh] [rbp+1A7h] BYREF
	char v193[31]; // [rsp+2B0h] [rbp+1A8h] BYREF
	char v194; // [rsp+2CFh] [rbp+1C7h] BYREF
	char v195[31]; // [rsp+2D0h] [rbp+1C8h] BYREF
	char v196; // [rsp+2EFh] [rbp+1E7h] BYREF
	char v197[31]; // [rsp+2F0h] [rbp+1E8h] BYREF
	char v198; // [rsp+30Fh] [rbp+207h] BYREF
	__int64 v199[15]; // [rsp+310h] [rbp+208h] BYREF

	v139 = a1;
	*(_DWORD*)(a1 + 628) = 0;
	*(_BYTE*)(a1 + 625) = 0;
	v2 = ArgList;
	v3 = (struct _Mtx_internal_imp_t*)*((_QWORD*)ArgList + 231);
	v188[3] = (__int64)v3;
	v4 = Mtx_lock(v3);
	if (v4)
		std::_Throw_C_error(v4);
	sub_140001EE0(v188, v2[66] + 32i64);
	v5 = 16;
	v116 = 16;
	Mtx_unlock(v3);
	v144 = 0i64;
	v145 = 0i64;
	if (!*(_DWORD*)(a1 + 632))
	{
		sub_1401FA390();
		sub_1401FA0F0();
	}
	v7 = 0;
	v8 = (__int64*)v188[0];
	v9 = (v188[1] - v188[0]) >> 3;
	if (v9)
	{
		do
		{
			v6 = *v8;
			v148 = v6;
			if (*(_QWORD*)v6 && *(_BYTE*)(*(_QWORD*)v6 + 96i64))
			{
				sub_14020F280(v6, &v133);
				sub_140048D00(&v147, "AesEbuDev");
				v10 = v5 | 1;
				v116 = v10;
				v11 = v133;
				if (v133 == v147)
					goto LABEL_17;
				if (!(unsigned int)compareIgnoreCase(v133, v147))
					goto LABEL_17;
				sub_140048D00(&v146, "AesEbuDevGen2");
				v10 |= 2u;
				v116 = v10;
				if (v11 == v146
					|| !(unsigned int)compareIgnoreCase(v11, v146)
					|| (sub_140048D00(&v170, "WooferExtensionGen2"), v10 |= 4u, v116 = v10, v11 == v170)
					|| !(unsigned int)compareIgnoreCase(v11, v170)
					|| (sub_140048D00(&v169, "UnKnowDevice"), v10 |= 8u, v116 = v10, v11 == v169)
					|| !(unsigned int)compareIgnoreCase(v11, v169))
				{
				LABEL_17:
					v12 = 0;
				}
				else
				{
					v12 = 1;
				}
				if ((v10 & 8) != 0)
				{
					v116 = v10 & 0xFFFFFFF7;
					v13 = v169 - 16;
					if ((*((_DWORD*)v169 - 4) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v13) == -1)
						j_j_free(v13);
					v10 &= 0xFFFFFFF7;
					v11 = v133;
				}
				if ((v10 & 4) != 0)
				{
					v116 = v10 & 0xFFFFFFFB;
					v14 = v170 - 16;
					if ((*((_DWORD*)v170 - 4) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v14) == -1)
						j_j_free(v14);
					v10 &= 0xFFFFFFFB;
					v11 = v133;
				}
				if ((v10 & 2) != 0)
				{
					v116 = v10 & 0xFFFFFFFD;
					v15 = v146 - 16;
					if ((*((_DWORD*)v146 - 4) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v15) == -1)
						j_j_free(v15);
					v10 &= 0xFFFFFFFD;
					v11 = v133;
				}
				if ((v10 & 1) != 0)
				{
					v116 = v10 & 0xFFFFFFFE;
					v16 = v147 - 16;
					if ((*((_DWORD*)v147 - 4) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v16) == -1)
						j_j_free(v16);
					v11 = v133;
				}
				if (v12)
				{
					v17 = *((_QWORD*)&v144 + 1);
					if (*((_QWORD*)&v144 + 1) == v145)
					{
						sub_140002960(&v144, *((_QWORD*)&v144 + 1), &v148);
					}
					else
					{
						**((_QWORD**)&v144 + 1) = v148;
						*((_QWORD*)&v144 + 1) = v17 + 8;
					}
				}
				v18 = *v8;
				sub_140048D00(&v149, "layout");
				sub_14020F010(v18, &v149);
				v6 = (__int64)(v11 - 16);
				if ((*((_DWORD*)v11 - 4) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v6) == -1)
					j_j_free((void*)v6);
				v5 = v116;
			}
			++v7;
			++v8;
		} while (v7 < v9);
		v8 = (__int64*)v188[0];
	}
	v19 = v144;
	result = (__int64)(*((_QWORD*)&v144 + 1) - v144) >> 3;
	v143 = result;
	v21 = (struct _RTL_CRITICAL_SECTION*)v139;
	*(_DWORD*)(v139 + 640) = result;
	if ((_DWORD)result)
	{
		v22 = 5;
		v188[4] = (__int64)&dword_140EC00EC;
		v188[5] = (__int64)&v137;
		v23 = v21 + 14;
		lpCriticalSection = v21 + 14;
		v24 = (__int64)&v21[6].LockCount;
		v168 = &v21[6].LockCount;
		do
		{
			sub_140048D00(&v132, " Seconds");
			if (_InterlockedCompareExchange(&dword_140EC00EC, 1, 0))
			{
				for (i = 19; i >= 0; --i)
				{
					if (!_InterlockedCompareExchange(&dword_140EC00EC, 1, 0))
						goto LABEL_56;
				}
				while (_InterlockedCompareExchange(&dword_140EC00EC, 1, 0))
					Sleep(0);
			}
		LABEL_56:
			v26 = qword_140EC03E0;
			if (qword_140EC03E0)
			{
				v27 = (char*)v132;
				if (!*(_QWORD*)(qword_140EC03E0 + 64))
					goto LABEL_70;
				v28 = *(_DWORD*)(qword_140EC03E0 + 36);
				if (v28 <= 0)
					goto LABEL_67;
				v29 = 0;
				if (*(_BYTE*)(qword_140EC03E0 + 56))
				{
					while ((unsigned int)compareIgnoreCase(*(char**)(*(_QWORD*)(v26 + 24) + 8i64 * v29), v27))
					{
						if (++v29 >= v28)
						{
							v27 = (char*)v132;
							goto LABEL_67;
						}
					}
					v27 = (char*)v132;
				}
				else
				{
					v30 = *(int*)(qword_140EC03E0 + 36);
					v31 = 0i64;
					v32 = *(_BYTE***)(qword_140EC03E0 + 24);
					do
					{
						if (!(unsigned int)String::isNotEmpty(v27, *v32))
							goto LABEL_68;
						++v29;
						++v31;
						++v32;
					} while (v31 < v30);
				LABEL_67:
					v29 = -1;
				}
			LABEL_68:
				if (v29 < 0)
				{
					sub_1402FDDE0(*(_QWORD*)(v26 + 64), (__int64)&v135, (_BYTE**)&v132, (__int64)&v132);
				}
				else
				{
				LABEL_70:
					v33 = *(_DWORD*)(v26 + 36);
					if (v33 <= 0)
					{
					LABEL_75:
						v135 = (volatile signed __int32*)v27;
						if ((*((_DWORD*)v27 - 4) & 0x30000000) == 0)
							_InterlockedIncrement((volatile signed __int32*)v27 - 4);
					}
					else
					{
						v34 = 0;
						if (*(_BYTE*)(v26 + 56))
						{
							while ((unsigned int)compareIgnoreCase(*(char**)(*(_QWORD*)(v26 + 24) + 8i64 * v34), v27))
							{
								if (++v34 >= v33)
								{
									v27 = (char*)v132;
									goto LABEL_75;
								}
							}
							v27 = (char*)v132;
						}
						else
						{
							v36 = *(int*)(v26 + 36);
							v37 = 0i64;
							v38 = *(_BYTE***)(v26 + 24);
							while ((unsigned int)String::isNotEmpty(v27, *v38))
							{
								++v34;
								++v37;
								++v38;
								if (v37 >= v36)
									goto LABEL_75;
							}
						}
						if (v34 < 0)
							goto LABEL_75;
						v35 = *(_QWORD*)sub_140316E00(v26 + 40, (unsigned int)v34);
						v135 = (volatile signed __int32*)v35;
						if ((*(_DWORD*)(v35 - 16) & 0x30000000) == 0)
							_InterlockedIncrement((volatile signed __int32*)(v35 - 16));
					}
				}
				v117 = v116 | 0x180;
				v23 = lpCriticalSection;
				v24 = (__int64)v168;
				v21 = (struct _RTL_CRITICAL_SECTION*)v139;
			}
			else
			{
				v135 = v132;
				if ((*(v132 - 4) & 0x30000000) == 0)
					_InterlockedIncrement(v132 - 4);
				v117 = v116 | 0x80;
			}
			_InterlockedExchange(&dword_140EC00EC, 0);
			v118 = v117 | 0x60;
			v39 = v132 - 4;
			if ((*(v132 - 4) & 0x30000000) == 0 && _InterlockedDecrement(v39) == -1)
				j_j_free((void*)v39);
			v40 = sub_1402FCCA0(v191);
			sub_140040360(&v151, v40, &v190 - v40);
			sub_140048D00(&v150, "Measurement starts in ");
			sub_14031AF20(&v137, &v150);
			v119 = v118 | 0x200;
			v41 = (void*)(v150 - 16);
			if ((*(_DWORD*)(v150 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v41) == -1)
				j_j_free(v41);
			v42 = *(_QWORD*)sub_14031B920(&v137, &v151);
			v138 = v42;
			if ((*(_DWORD*)(v42 - 16) & 0x30000000) == 0)
				_InterlockedIncrement((volatile signed __int32*)(v42 - 16));
			v120 = v119 | 0x400;
			v43 = (void*)(v137 - 16);
			if ((*(_DWORD*)(v137 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v43) == -1)
				j_j_free(v43);
			v187 = *(_QWORD*)sub_14031B920(&v138, &v135);
			v44 = (volatile signed __int32*)(v187 - 16);
			if ((*(_DWORD*)(v187 - 16) & 0x30000000) == 0)
				_InterlockedIncrement(v44);
			v116 = v120 | 0x800;
			v45 = (void*)(v138 - 16);
			if ((*(_DWORD*)(v138 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v45) == -1)
				j_j_free(v45);
			v46 = (void*)(v151 - 16);
			if ((*(_DWORD*)(v151 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v46) == -1)
				j_j_free(v46);
			v47 = v135 - 4;
			if ((*(v135 - 4) & 0x30000000) == 0 && _InterlockedDecrement(v47) == -1)
				j_j_free((void*)v47);
			EnterCriticalSection(v23);
			if ((*v44 & 0x30000000) == 0)
				_InterlockedIncrement(v44);
			v48 = (_DWORD*)(_InterlockedExchange64((volatile __int64*)&v21[13].SpinCount, v187) - 16);
			if ((*v48 & 0x30000000) == 0 && _InterlockedDecrement(v48) == -1)
				j_j_free(v48);
			LeaveCriticalSection(v23);
			WaitableEvent::wait(v24, 1000);
			if ((*v44 & 0x30000000) == 0 && _InterlockedDecrement(v44) == -1)
				j_j_free((void*)v44);
			--v22;
		} while (v22 > 0);
		v49 = v139;
		result = *(unsigned int*)(v139 + 640);
		v50 = 0;
		v131 = 0;
		if ((int)result <= 0)
			goto LABEL_243;
	LABEL_121:
		*(double*)(v49 + 536) = (double)v50 / (double)(int)result;
		v6 = v50;
		v51 = *(_QWORD*)(v144 + 8i64 * v50);
		result = *(unsigned int*)(v49 + 440);
		if ((_DWORD)result)
			goto LABEL_243;
		if (*(_DWORD*)(v49 + 632))
		{
			v70 = sub_140316460(&v180, v143);
			v71 = sub_1402FCCA0(v195);
			sub_140040360(&v162, v71, &v194 - v71);
			v175 = *(_QWORD*)(v51 + 136);
			v72 = (volatile signed __int32*)(v175 - 16);
			if ((*(_DWORD*)(v175 - 16) & 0x30000000) == 0)
				_InterlockedIncrement(v72);
			v73 = sub_1402FCCA0(v197);
			sub_140040360(&v161, v73, &v196 - v73);
			sub_140048D00(&v156, "Measuring Optional Position ");
			sub_14031AF20(&v157, &v156);
			v126 = v116 | 0x40000;
			v74 = (void*)(v156 - 16);
			if ((*(_DWORD*)(v156 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v74) == -1)
				j_j_free(v74);
			v75 = (__int64*)sub_14031B550(v174, &v157, &v161);
			ImageCache::getFromHashCode(v75, " ", (int)"");
			v76 = *v75;
			v158 = v76;
			if ((*(_DWORD*)(v76 - 16) & 0x30000000) == 0)
				_InterlockedIncrement((volatile signed __int32*)(v76 - 16));
			v127 = v126 | 0x80000;
			v77 = (_DWORD*)(*v75 - 16);
			if ((*v77 & 0x30000000) == 0 && _InterlockedDecrement(v77) == -1)
				j_j_free(v77);
			v78 = (__int64*)sub_14031B550(v176, &v158, &v175);
			ImageCache::getFromHashCode(v78, " (", (int)"");
			v79 = *v78;
			v159 = v79;
			if ((*(_DWORD*)(v79 - 16) & 0x30000000) == 0)
				_InterlockedIncrement((volatile signed __int32*)(v79 - 16));
			v128 = v127 | 0x100000;
			v80 = (_DWORD*)(*v78 - 16);
			if ((*v80 & 0x30000000) == 0 && _InterlockedDecrement(v80) == -1)
				j_j_free(v80);
			v81 = (__int64*)sub_14031B550(v177, &v159, &v162);
			ImageCache::getFromHashCode(v81, "/", (int)"");
			v82 = *v81;
			v160 = v82;
			if ((*(_DWORD*)(v82 - 16) & 0x30000000) == 0)
				_InterlockedIncrement((volatile signed __int32*)(v82 - 16));
			v129 = v128 | 0x200000;
			v83 = (_DWORD*)(*v81 - 16);
			if ((*v83 & 0x30000000) == 0 && _InterlockedDecrement(v83) == -1)
				j_j_free(v83);
			v84 = (__int64*)sub_14031B550(v178, &v160, v70);
			ImageCache::getFromHashCode(v84, ")", (int)"");
			v179 = *v84;
			v85 = (volatile signed __int32*)(v179 - 16);
			if ((*(_DWORD*)(v179 - 16) & 0x30000000) == 0)
				_InterlockedIncrement(v85);
			v116 = v129 | 0x400000;
			v86 = (_DWORD*)(*v84 - 16);
			if ((*v86 & 0x30000000) == 0 && _InterlockedDecrement(v86) == -1)
				j_j_free(v86);
			sub_14040F570(v49, &v179);
			if ((*v85 & 0x30000000) == 0 && _InterlockedDecrement(v85) == -1)
				j_j_free((void*)v85);
			v87 = (void*)(v161 - 16);
			if ((*(_DWORD*)(v161 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v87) == -1)
				j_j_free(v87);
			if ((*v72 & 0x30000000) == 0 && _InterlockedDecrement(v72) == -1)
				j_j_free((void*)v72);
			v88 = (void*)(v162 - 16);
			if ((*(_DWORD*)(v162 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v88) == -1)
				j_j_free(v88);
			v68 = (void*)(v180 - 16);
			v69 = *(_DWORD*)(v180 - 16);
		}
		else
		{
			v52 = v143;
			v53 = v189;
			v189[0] = 0;
			do
			{
				*--v53 = v52 % 0xA + 48;
				v52 /= 0xAui64;
			} while (v52);
			sub_140040360(&v155, v53, v189 - v53);
			v54 = sub_1402FCCA0(v193);
			sub_140040360(&v154, v54, &v192 - v54);
			v171 = *(_QWORD*)(v51 + 136);
			v55 = (volatile signed __int32*)(v171 - 16);
			v49 = v139;
			if ((*(_DWORD*)(v171 - 16) & 0x30000000) == 0)
				_InterlockedIncrement(v55);
			sub_140048D00(&v152, "Measuring Primary Position:");
			sub_14031AF20(&v140, &v152);
			v121 = v116 | 0x1000;
			v56 = (void*)(v152 - 16);
			if ((*(_DWORD*)(v152 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v56) == -1)
				j_j_free(v56);
			v57 = *(_QWORD*)sub_14031B920(&v140, &v171);
			v134 = v57;
			if ((*(_DWORD*)(v57 - 16) & 0x30000000) == 0)
				_InterlockedIncrement((volatile signed __int32*)(v57 - 16));
			v122 = v121 | 0x2000;
			v58 = (void*)(v140 - 16);
			if ((*(_DWORD*)(v140 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v58) == -1)
				j_j_free(v58);
			v59 = -1i64;
			do
				++v59;
			while (*(_BYTE*)(v134 + v59));
			sub_1402FD230(&v134, v59 + 2);
			strcpy((char*)(v134 + (int)v59), " (");
			v141 = v134;
			if ((*(_DWORD*)(v134 - 16) & 0x30000000) == 0)
				_InterlockedIncrement((volatile signed __int32*)(v134 - 16));
			v123 = v122 | 0x4000;
			v60 = (void*)(v134 - 16);
			if ((*(_DWORD*)(v134 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v60) == -1)
				j_j_free(v60);
			v61 = *(_QWORD*)sub_14031B920(&v141, &v154);
			v136 = v61;
			if ((*(_DWORD*)(v61 - 16) & 0x30000000) == 0)
				_InterlockedIncrement((volatile signed __int32*)(v61 - 16));
			v124 = v123 | 0x8000;
			v62 = (void*)(v141 - 16);
			if ((*(_DWORD*)(v141 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v62) == -1)
				j_j_free(v62);
			ImageCache::getFromHashCode(&v136, "/", (int)"");
			v153 = v136;
			if ((*(_DWORD*)(v136 - 16) & 0x30000000) == 0)
				_InterlockedIncrement((volatile signed __int32*)(v136 - 16));
			v125 = v124 | 0x10000;
			v63 = (void*)(v136 - 16);
			if ((*(_DWORD*)(v136 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v63) == -1)
				j_j_free(v63);
			v64 = (__int64*)sub_14031B550(v172, &v153, &v155);
			ImageCache::getFromHashCode(v64, ")", (int)"");
			v173 = *v64;
			v65 = (volatile signed __int32*)(v173 - 16);
			if ((*(_DWORD*)(v173 - 16) & 0x30000000) == 0)
				_InterlockedIncrement(v65);
			v116 = v125 | 0x20000;
			v66 = (_DWORD*)(*v64 - 16);
			if ((*v66 & 0x30000000) == 0 && _InterlockedDecrement(v66) == -1)
				j_j_free(v66);
			sub_14040F570(v49, &v173);
			if ((*v65 & 0x30000000) == 0 && _InterlockedDecrement(v65) == -1)
				j_j_free((void*)v65);
			if ((*v55 & 0x30000000) == 0 && _InterlockedDecrement(v55) == -1)
				j_j_free((void*)v55);
			v67 = (void*)(v154 - 16);
			if ((*(_DWORD*)(v154 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v67) == -1)
				j_j_free(v67);
			v68 = (void*)(v155 - 16);
			v69 = *(_DWORD*)(v155 - 16);
		}
		if ((v69 & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v68) == -1)
			j_j_free(v68);
		v89 = 1;
		v90 = 0;
		v91 = 0.0;
		while (1)
		{
			if (*(_BYTE*)(v49 + 625))
			{
			LABEL_242:
				sub_1401FA670(ArgList, -130.0);
				v131 = ++v50;
				result = *(unsigned int*)(v49 + 640);
				if (v50 >= (int)result)
				{
				LABEL_243:
					v8 = (__int64*)v188[0];
					v19 = v144;
					break;
				}
				goto LABEL_121;
			}
			v92 = v50;
			v93 = v144;
			v94 = *(_QWORD*)(v144 + 8 * v92);
			sub_140048D00(&v163, "layout_flashing");
			sub_14020F010(v94, &v163);
			v95 = *(_QWORD*)(v93 + 8 * v92);
			sub_140048D00(&v164, "layout_flashing");
			sub_14020F010(v95, &v164);
			v142 = dword_140DDCDD0;
			if (*(_DWORD*)(v49 + 632))
			{
				v99 = sub_1402FCCA0(v199);
				sub_140040360(&v166, v99, &v198 - v99);
				v100 = (__int64*)sub_14020F300(*(_QWORD*)(v93 + 8 * v92), v182);
				ImageCache::getFromHashCode(v100, "_", (int)"");
				v101 = *v100;
				v165 = v101;
				if ((*(_DWORD*)(v101 - 16) & 0x30000000) == 0)
					_InterlockedIncrement((volatile signed __int32*)(v101 - 16));
				v130 = v116 | 0x1000000;
				v102 = (_DWORD*)(*v100 - 16);
				if ((*v102 & 0x30000000) == 0 && _InterlockedDecrement(v102) == -1)
					j_j_free(v102);
				v103 = (_QWORD*)sub_14031B550(v183, &v165, &v166);
				ImageCache::getFromHashCode(v103, ".wav", (int)"");
				v104 = (_DWORD*)*v103;
				if ((*(_DWORD*)(*v103 - 16i64) & 0x30000000) == 0)
					_InterlockedIncrement(v104 - 4);
				v116 = v130 | 0x2000000;
				v105 = (_DWORD*)(*v103 - 16i64);
				if ((*v105 & 0x30000000) == 0 && _InterlockedDecrement(v105) == -1)
					j_j_free(v105);
				v142 = v104;
				v98 = (_DWORD*)(v166 - 16);
				if ((*(_DWORD*)(v166 - 16) & 0x30000000) == 0 && _InterlockedDecrement(v98) == -1)
					j_j_free(v98);
			}
			else
			{
				v96 = (_QWORD*)sub_14020F300(*(_QWORD*)(v93 + 8 * v92), v186);
				ImageCache::getFromHashCode(v96, ".wav", (int)"");
				v97 = (_DWORD*)*v96;
				if ((*(_DWORD*)(*v96 - 16i64) & 0x30000000) == 0)
					_InterlockedIncrement(v97 - 4);
				v116 |= 0x800000u;
				v98 = (_DWORD*)(*v96 - 16i64);
				if ((*v98 & 0x30000000) == 0 && _InterlockedDecrement(v98) == -1)
					j_j_free(v98);
				v142 = v97;
			}
			sub_1401F4490(v98, &v142);
			v109 = sub_1401F3F60(v107, v106, *(_QWORD*)(v93 + 8 * v92), v108, 1);
			v110 = *(_QWORD*)(v93 + 8 * v92);
			sub_140048D00(&v167, "layout");
			sub_14020F010(v110, &v167);
			sub_14020D720(*(_QWORD*)(v93 + 8 * v92));
			sub_1401FA670(ArgList, -130.0);
			v111 = *(_QWORD*)(*((_QWORD*)ArgList + 65) + 1088i64);
			LODWORD(v110) = *(_DWORD*)(v111 + 544);
			sub_14025CB30(v111, &v184, &v185);
			if ((int)v110 > 200000 && v109)
			{
				if (v184 <= -5.0 && v184 > -55.0)
				{
					v89 = 0;
					++* (_DWORD*)(v49 + 628);
					v113 = *(_DWORD*)(v49 + 644);
					if ((unsigned int)(v113 - 1) <= 1)
					{
						sub_1401F4130(v113, *(_QWORD*)(v93 + 8 * v92), *(_DWORD*)(v49 + 632), v112, 0);
					}
					else if (!v113)
					{
						sub_1401F4130(v113, *(_QWORD*)(v93 + 8 * v92), *(_DWORD*)(v49 + 632), v112, 1);
					}
					goto LABEL_237;
				}
				if (v184 <= -5.0)
				{
					if (v185 + 110.0 >= 50.0)
						v115 = v91 + 6.0;
					else
						v115 = 0.0;
					v91 = fmin(0.0, v115);
				}
				else
				{
					v91 = v91 + -5.0;
				}
			}
			if (v90 <= 3)
			{
				++v90;
				Sleep(0x1F4u);
			LABEL_237:
				v50 = v131;
				goto LABEL_238;
			}
			v89 = 0;
			v50 = v143;
			v131 = v143;
			*(_BYTE*)(v49 + 625) = 1;
		LABEL_238:
			v114 = v142 - 4;
			if ((*(v142 - 4) & 0x30000000) == 0 && _InterlockedDecrement(v114) == -1)
				j_j_free(v114);
			if (!v89)
				goto LABEL_242;
		}
	}
	if (v19)
		result = sub_1400020C0(v6, v19, (v145 - v19) >> 3);
	if (v8)
		result = sub_1400020C0(v6, v8, (v188[2] - (__int64)v8) >> 3);
	return result;*/
}
void MeasurementProgressWindow::sub_14016C090(__int64 a1, char a2)
{
	/*void* v3; // rcx
	void* v4; // rcx
	void* v5; // rcx
	void* v6; // rcx
	int v7; // eax
	void* v8; // rcx
	void* v9; // rcx
	void* v10; // rcx
	void* v11; // rcx
	void* v12; // rcx
	void* v13; // rcx
	void* v14; // rcx
	void* v15; // rcx
	void* v16; // rcx
	void* v17; // rcx
	void* v18; // rcx
	void* v19; // rcx
	void* v20; // rcx
	void* v21; // rcx
	__int64 v22; // rax
	void* v23; // rcx
	void* v24; // rcx
	__int64* v25; // rbx
	__int64 v26; // rdx
	_DWORD* v27; // rcx
	_QWORD* v28; // rax
	_DWORD* v29; // rbx
	void* v30; // rcx
	void* v31; // rcx
	void* v32; // rcx
	void* v33; // rcx
	void* v34; // rcx
	void* v35; // rcx
	char v36; // r15
	void* v37; // rcx
	void* v38; // rcx
	void* v39; // rcx
	char v40; // r12
	__int64 v41; // rcx
	__int64 v42; // rcx
	__int64 v43; // r15
	unsigned __int64 v44; // rdx
	_BYTE* v45; // r8
	void* v46; // rcx
	void* v47; // rcx
	void* v48; // rcx
	void* v49; // rcx
	int v50; // eax
	void* v51; // rcx
	void* v52; // rcx
	void* v53; // rcx
	void* v54; // rcx
	void* v55; // rcx
	void* v56; // rcx
	void* v57; // rcx
	char v58; // bl
	void* v59; // rcx
	void* v60; // rcx
	void* v61; // rcx
	__int64 v62; // rax
	void* v63; // rcx
	void* v64; // rcx
	void* v65; // rcx
	void* v66; // rcx
	void* v67; // rcx
	void* v68; // rcx
	void* v69; // rcx
	_DWORD* v70; // rcx
	_DWORD* v71; // rcx
	__int64 v72; // rax
	unsigned int v73; // [rsp+40h] [rbp-C0h]
	void* v74; // [rsp+40h] [rbp-C0h]
	unsigned int v75; // [rsp+40h] [rbp-C0h]
	void* v76; // [rsp+40h] [rbp-C0h]
	unsigned int v77; // [rsp+40h] [rbp-C0h]
	__int64 v78; // [rsp+48h] [rbp-B8h] BYREF
	_DWORD* v79; // [rsp+50h] [rbp-B0h] BYREF
	__int64 v80; // [rsp+58h] [rbp-A8h] BYREF
	__int64 v81; // [rsp+60h] [rbp-A0h] BYREF
	__int64 v82; // [rsp+68h] [rbp-98h] BYREF
	__int64 v83; // [rsp+70h] [rbp-90h] BYREF
	__int64 v84; // [rsp+78h] [rbp-88h] BYREF
	__int64 v85; // [rsp+80h] [rbp-80h] BYREF
	__int64 v86; // [rsp+88h] [rbp-78h] BYREF
	__int64 v87; // [rsp+90h] [rbp-70h] BYREF
	__int64 v88; // [rsp+98h] [rbp-68h] BYREF
	__int64 v89; // [rsp+A0h] [rbp-60h] BYREF
	__int64 v90; // [rsp+A8h] [rbp-58h] BYREF
	__int64 v91; // [rsp+B0h] [rbp-50h] BYREF
	__int64 v92; // [rsp+B8h] [rbp-48h] BYREF
	__int64 v93; // [rsp+C0h] [rbp-40h] BYREF
	__int64 v94; // [rsp+C8h] [rbp-38h] BYREF
	__int64 v95; // [rsp+D0h] [rbp-30h] BYREF
	__int64 v96; // [rsp+D8h] [rbp-28h] BYREF
	_DWORD* v97; // [rsp+E0h] [rbp-20h] BYREF
	__int64 v98; // [rsp+E8h] [rbp-18h] BYREF
	__int64 v99; // [rsp+F0h] [rbp-10h] BYREF
	__int64 v100; // [rsp+F8h] [rbp-8h] BYREF
	__int64 v101; // [rsp+100h] [rbp+0h] BYREF
	__int64 v102; // [rsp+108h] [rbp+8h] BYREF
	__int64 v103; // [rsp+110h] [rbp+10h] BYREF
	__int64 v104; // [rsp+118h] [rbp+18h] BYREF
	__int64 v105; // [rsp+120h] [rbp+20h] BYREF
	__int64 v106; // [rsp+128h] [rbp+28h] BYREF
	__int64 v107; // [rsp+130h] [rbp+30h] BYREF
	__int64 v108; // [rsp+138h] [rbp+38h] BYREF
	__int64 v109; // [rsp+140h] [rbp+40h] BYREF
	__int64 v110; // [rsp+148h] [rbp+48h] BYREF
	__int64 v111; // [rsp+150h] [rbp+50h] BYREF
	__int64 v112; // [rsp+158h] [rbp+58h] BYREF
	__int64 v113; // [rsp+160h] [rbp+60h] BYREF
	__int64 v114; // [rsp+168h] [rbp+68h] BYREF
	__int64 v115; // [rsp+170h] [rbp+70h] BYREF
	__int64 v116; // [rsp+178h] [rbp+78h] BYREF
	__int64 v117; // [rsp+180h] [rbp+80h] BYREF
	__int64 v118; // [rsp+188h] [rbp+88h] BYREF
	__int64 v119; // [rsp+190h] [rbp+90h] BYREF
	__int64 v120; // [rsp+198h] [rbp+98h] BYREF
	__int64 v121; // [rsp+1A0h] [rbp+A0h] BYREF
	__int64 v122; // [rsp+1A8h] [rbp+A8h] BYREF
	__int64 v123; // [rsp+1B0h] [rbp+B0h] BYREF
	__int64 v124; // [rsp+1B8h] [rbp+B8h] BYREF
	__int64 v125; // [rsp+1C0h] [rbp+C0h] BYREF
	__int64 v126; // [rsp+1C8h] [rbp+C8h] BYREF
	__int64 v127; // [rsp+1D0h] [rbp+D0h] BYREF
	__int64 v128; // [rsp+1D8h] [rbp+D8h] BYREF
	__int64 v129; // [rsp+1E0h] [rbp+E0h] BYREF
	__int64 v130; // [rsp+1E8h] [rbp+E8h] BYREF
	__int64 v131; // [rsp+1F0h] [rbp+F0h] BYREF
	__int64 v132; // [rsp+1F8h] [rbp+F8h] BYREF
	__int64 v133; // [rsp+200h] [rbp+100h] BYREF
	__int64 v134; // [rsp+208h] [rbp+108h] BYREF
	__int64 v135; // [rsp+210h] [rbp+110h]
	__int64 v136; // [rsp+218h] [rbp+118h]
	_DWORD* v137; // [rsp+220h] [rbp+120h] BYREF
	_DWORD* v138; // [rsp+228h] [rbp+128h] BYREF
	_DWORD* v139; // [rsp+230h] [rbp+130h] BYREF
	char v140[8]; // [rsp+238h] [rbp+138h] BYREF
	_DWORD* v141; // [rsp+240h] [rbp+140h] BYREF
	_DWORD* v142; // [rsp+248h] [rbp+148h] BYREF
	_DWORD* v143; // [rsp+250h] [rbp+150h] BYREF
	_DWORD* v144; // [rsp+258h] [rbp+158h] BYREF
	_DWORD* v145; // [rsp+260h] [rbp+160h] BYREF
	char v146; // [rsp+287h] [rbp+187h] BYREF
	__int64 v147; // [rsp+288h] [rbp+188h] BYREF

	if (a2)
	{
		v145 = dword_140DDCDD0;
		sub_140048D00(&v133, "Measurement canceled!");
		sub_14031AF20(&v83, &v133);
		v3 = (void*)(v133 - 16);
		if ((*(_DWORD*)(v133 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v3) == -1)
			j_j_free(v3);
		sub_140048D00(&v81, "Progress Window");
		sub_14031AF20(&v82, &v81);
		v4 = (void*)(v81 - 16);
		if ((*(_DWORD*)(v81 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v4) == -1)
			j_j_free(v4);
		sub_14040FE70(2, (unsigned int)&v82, (unsigned int)&v83, (unsigned int)&v145, 0i64);
		v5 = (void*)(v82 - 16);
		if ((*(_DWORD*)(v82 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v5) == -1)
			j_j_free(v5);
		v6 = (void*)(v83 - 16);
		if ((*(_DWORD*)(v83 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v6) == -1)
			j_j_free(v6);
		goto LABEL_214;
	}
	v7 = *(_DWORD*)(a1 + 640);
	if (!v7)
	{
		v137 = dword_140DDCDD0;
		sub_140048D00(&v84, "There is no monitor/subwoofer in the system to be measured!");
		sub_14031AF20(&v87, &v84);
		v8 = (void*)(v84 - 16);
		if ((*(_DWORD*)(v84 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v8) == -1)
			j_j_free(v8);
		sub_140048D00(&v85, "Progress window");
		sub_14031AF20(&v86, &v85);
		v9 = (void*)(v85 - 16);
		if ((*(_DWORD*)(v85 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v9) == -1)
			j_j_free(v9);
		sub_14040FE70(2, (unsigned int)&v86, (unsigned int)&v87, (unsigned int)&v137, 0i64);
		v10 = (void*)(v86 - 16);
		if ((*(_DWORD*)(v86 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v10) == -1)
			j_j_free(v10);
		v11 = (void*)(v87 - 16);
		if ((*(_DWORD*)(v87 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v11) == -1)
			j_j_free(v11);
		goto LABEL_214;
	}
	if (v7 != *(_DWORD*)(a1 + 628))
	{
		v138 = dword_140DDCDD0;
		sub_140048D00(&v88, "Failed to measure the system, please try again!");
		sub_14031AF20(&v91, &v88);
		v12 = (void*)(v88 - 16);
		if ((*(_DWORD*)(v88 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v12) == -1)
			j_j_free(v12);
		sub_140048D00(&v89, "Progress window");
		sub_14031AF20(&v90, &v89);
		v13 = (void*)(v89 - 16);
		if ((*(_DWORD*)(v89 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v13) == -1)
			j_j_free(v13);
		sub_14040FE70(2, (unsigned int)&v90, (unsigned int)&v91, (unsigned int)&v138, 0i64);
		v14 = (void*)(v90 - 16);
		if ((*(_DWORD*)(v90 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v14) == -1)
			j_j_free(v14);
		v15 = (void*)(v91 - 16);
		if ((*(_DWORD*)(v91 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v15) == -1)
			j_j_free(v15);
		goto LABEL_214;
	}
	if (*(_BYTE*)(a1 + 625))
	{
		v139 = dword_140DDCDD0;
		sub_140048D00(&v92, "Failed to measure the system, please try again!");
		sub_14031AF20(&v95, &v92);
		v16 = (void*)(v92 - 16);
		if ((*(_DWORD*)(v92 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v16) == -1)
			j_j_free(v16);
		sub_140048D00(&v93, "Progress window");
		sub_14031AF20(&v94, &v93);
		v17 = (void*)(v93 - 16);
		if ((*(_DWORD*)(v93 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v17) == -1)
			j_j_free(v17);
		sub_14040FE70(2, (unsigned int)&v94, (unsigned int)&v95, (unsigned int)&v139, 0i64);
		v18 = (void*)(v94 - 16);
		if ((*(_DWORD*)(v94 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v18) == -1)
			j_j_free(v18);
		v19 = (void*)(v95 - 16);
		if ((*(_DWORD*)(v95 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v19) == -1)
			j_j_free(v19);
		goto LABEL_214;
	}
	++* (_DWORD*)(a1 + 632);
	if (*(int*)(a1 + 636) <= 0)
	{
		if ((unsigned int)(*(_DWORD*)(a1 + 644) - 1) <= 1)
		{
			v77 = (unsigned int)operator new(0x360ui64);
			v72 = sub_140196300(
				v77,
				*(_QWORD*)(a1 + 616),
				*(_DWORD*)(a1 + 632),
				*(_DWORD*)(a1 + 628),
				*(_DWORD*)(a1 + 644));
		}
		else
		{
			v76 = operator new(0x328ui64);
			v72 = sub_1400E1F40(v76, *(_QWORD*)(a1 + 616), *(unsigned int*)(a1 + 632), *(unsigned int*)(a1 + 628));
		}
		sub_14040F9D0(v72 + 176);
	LABEL_214:
		if (a1 != 176)
			(**(void(__fastcall***)(__int64, __int64))(a1 - 176))(a1 - 176, 1i64);
		return;
	}
	v79 = dword_140DDCDD0;
	if (*(_DWORD*)(a1 + 632) == 1)
	{
		sub_140048D00(&v96, "Primary position measurement completed.");
		sub_14031AF20((__int64*)&v97, &v96);
		v20 = (void*)(v96 - 16);
		if ((*(_DWORD*)(v96 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v20) == -1)
			j_j_free(v20);
		v79 = v97;
		v97 = dword_140DDCDD0;
	}
	else
	{
		sub_140048D00(&v98, "measurement completed");
		sub_14031AF20(&v102, &v98);
		v21 = (void*)(v98 - 16);
		if ((*(_DWORD*)(v98 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v21) == -1)
			j_j_free(v21);
		v22 = sub_1402FCCA0(&v147);
		sub_140040360(&v101, v22, &v146 - v22);
		sub_140048D00(&v99, "Optional position");
		sub_14031AF20(&v78, &v99);
		v23 = (void*)(v99 - 16);
		if ((*(_DWORD*)(v99 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v23) == -1)
			j_j_free(v23);
		ImageCache::getFromHashCode(&v78, " ", (int)"");
		v100 = v78;
		if ((*(_DWORD*)(v78 - 16) & 0x30000000) == 0)
			_InterlockedIncrement((volatile signed __int32*)(v78 - 16));
		v24 = (void*)(v78 - 16);
		if ((*(_DWORD*)(v78 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v24) == -1)
			j_j_free(v24);
		v25 = (__int64*)sub_14031B550(v140, &v100, &v101);
		ImageCache::getFromHashCode(v25, " ", (int)"");
		v26 = *v25;
		v80 = v26;
		if ((*(_DWORD*)(v26 - 16) & 0x30000000) == 0)
			_InterlockedIncrement((volatile signed __int32*)(v26 - 16));
		v27 = (_DWORD*)(*v25 - 16);
		if ((*v27 & 0x30000000) == 0 && _InterlockedDecrement(v27) == -1)
			j_j_free(v27);
		v28 = (_QWORD*)sub_14031B920(&v80, &v102);
		v29 = (_DWORD*)*v28;
		if ((*(_DWORD*)(*v28 - 16i64) & 0x30000000) == 0)
			_InterlockedIncrement(v29 - 4);
		v30 = (void*)(v80 - 16);
		if ((*(_DWORD*)(v80 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v30) == -1)
			j_j_free(v30);
		v79 = v29;
		v31 = (void*)(v101 - 16);
		if ((*(_DWORD*)(v101 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v31) == -1)
			j_j_free(v31);
		v32 = (void*)(v102 - 16);
		if ((*(_DWORD*)(v102 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v32) == -1)
			j_j_free(v32);
	}
	sub_140048D00(&v103, "Start Optimization");
	sub_14031AF20(&v108, &v103);
	v33 = (void*)(v103 - 16);
	if ((*(_DWORD*)(v103 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v33) == -1)
		j_j_free(v33);
	sub_140048D00(&v104, "Measure");
	sub_14031AF20(&v107, &v104);
	v34 = (void*)(v104 - 16);
	if ((*(_DWORD*)(v104 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v34) == -1)
		j_j_free(v34);
	sub_140048D00(
		&v105,
		"Do you want to make optional measurements around the Primary listening position, or start optimizing?");
	sub_14031AF20(&v106, &v105);
	v35 = (void*)(v105 - 16);
	if ((*(_DWORD*)(v105 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v35) == -1)
		j_j_free(v35);
	v36 = sub_14040FB40(1, (unsigned int)&v79, (unsigned int)&v106, (unsigned int)&v107, (__int64)&v108, 0i64, 0i64);
	v37 = (void*)(v106 - 16);
	if ((*(_DWORD*)(v106 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v37) == -1)
		j_j_free(v37);
	v38 = (void*)(v107 - 16);
	if ((*(_DWORD*)(v107 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v38) == -1)
		j_j_free(v38);
	v39 = (void*)(v108 - 16);
	if ((*(_DWORD*)(v108 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v39) == -1)
		j_j_free(v39);
	if (!v36)
	{
		if ((unsigned int)(*(_DWORD*)(a1 + 644) - 1) <= 1)
		{
			v75 = (unsigned int)operator new(0x360ui64);
			v62 = sub_140196300(
				v75,
				*(_QWORD*)(a1 + 616),
				*(_DWORD*)(a1 + 632),
				*(_DWORD*)(a1 + 628),
				*(_DWORD*)(a1 + 644));
		}
		else
		{
			v74 = operator new(0x328ui64);
			v62 = sub_1400E1F40(v74, *(_QWORD*)(a1 + 616), *(unsigned int*)(a1 + 632), *(unsigned int*)(a1 + 628));
		}
		goto LABEL_207;
	}
	v40 = 0;
	v41 = *((_QWORD*)ArgList + 174);
	if (!*(_BYTE*)(v41 + 456))
	{
		v144 = dword_140DDCDD0;
		sub_140048D00(&v129, "The GNet adapter is offline, please check the USB connection and re-try.");
		sub_14031AF20(&v132, &v129);
		v66 = (void*)(v129 - 16);
		if ((*(_DWORD*)(v129 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v66) == -1)
			j_j_free(v66);
		sub_140048D00(&v130, "GNet adapter offline");
		sub_14031AF20(&v131, &v130);
		v67 = (void*)(v130 - 16);
		if ((*(_DWORD*)(v130 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v67) == -1)
			j_j_free(v67);
		sub_14040FE70(3, (unsigned int)&v131, (unsigned int)&v132, (unsigned int)&v144, 0i64);
		v68 = (void*)(v131 - 16);
		if ((*(_DWORD*)(v131 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v68) == -1)
			j_j_free(v68);
		v69 = (void*)(v132 - 16);
		if ((*(_DWORD*)(v132 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v69) == -1)
			j_j_free(v69);
		goto LABEL_201;
	}
	sub_1401FD8D0(v41, &v134);
	v42 = 0i64;
	v43 = v134;
	v44 = (v135 - v134) >> 3;
	if (!v44)
		goto LABEL_130;
	do
	{
		v45 = *(_BYTE**)(v134 + 8i64 * (int)v42);
		if (*(_QWORD*)v45 && *(_BYTE*)(*(_QWORD*)v45 + 96i64) && !v45[108])
		{
			v40 = 1;
			v42 = (v135 - v134) >> 3;
		}
		v42 = (unsigned int)(v42 + 1);
	} while ((int)v42 < v44);
	if (!v40)
	{
	LABEL_130:
		v50 = sub_1401FA890(v42);
		v49 = ArgList;
		if (!*(_DWORD*)(*((_QWORD*)ArgList + 174) + 196i64))
		{
			v143 = dword_140DDCDD0;
			sub_140048D00(&v125, "The calibration microphone is not connected, please check the connection and re-try.");
			sub_14031AF20(&v128, &v125);
			v63 = (void*)(v125 - 16);
			if ((*(_DWORD*)(v125 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v63) == -1)
				j_j_free(v63);
			sub_140048D00(&v126, "Microphone not connected");
			sub_14031AF20(&v127, &v126);
			v64 = (void*)(v126 - 16);
			if ((*(_DWORD*)(v126 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v64) == -1)
				j_j_free(v64);
			sub_14040FE70(3, (unsigned int)&v127, (unsigned int)&v128, (unsigned int)&v143, 0i64);
			v65 = (void*)(v127 - 16);
			if ((*(_DWORD*)(v127 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v65) == -1)
				j_j_free(v65);
			v49 = (void*)(v128 - 16);
			if ((*(_DWORD*)(v128 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v49) == -1)
				j_j_free(v49);
			goto LABEL_187;
		}
		if (v50 == -1)
		{
			v142 = dword_140DDCDD0;
			sub_140048D00(
				&v113,
				"The microphone level is too low! There may be a connection issue, or the microphone may be faulty.");
			sub_14031AF20(&v116, &v113);
			v51 = (void*)(v113 - 16);
			if ((*(_DWORD*)(v113 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v51) == -1)
				j_j_free(v51);
			sub_140048D00(&v114, "Microphone level problem");
			sub_14031AF20(&v115, &v114);
			v52 = (void*)(v114 - 16);
			if ((*(_DWORD*)(v114 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v52) == -1)
				j_j_free(v52);
			sub_14040FE70(3, (unsigned int)&v115, (unsigned int)&v116, (unsigned int)&v142, 0i64);
			v53 = (void*)(v115 - 16);
			if ((*(_DWORD*)(v115 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v53) == -1)
				j_j_free(v53);
			v49 = (void*)(v116 - 16);
			if ((*(_DWORD*)(v116 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v49) == -1)
				j_j_free(v49);
			goto LABEL_187;
		}
		if (v50 == 1)
		{
			sub_140048D00(&v117, "No");
			sub_14031AF20(&v124, &v117);
			v54 = (void*)(v117 - 16);
			if ((*(_DWORD*)(v117 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v54) == -1)
				j_j_free(v54);
			sub_140048D00(&v118, "Yes");
			sub_14031AF20(&v123, &v118);
			v55 = (void*)(v118 - 16);
			if ((*(_DWORD*)(v118 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v55) == -1)
				j_j_free(v55);
			sub_140048D00(&v119, "The background noise measured by the microphone is high. Continue anyway?");
			sub_14031AF20(&v122, &v119);
			v56 = (void*)(v119 - 16);
			if ((*(_DWORD*)(v119 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v56) == -1)
				j_j_free(v56);
			sub_140048D00(&v120, "High background noise level");
			sub_14031AF20(&v121, &v120);
			v57 = (void*)(v120 - 16);
			if ((*(_DWORD*)(v120 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v57) == -1)
				j_j_free(v57);
			v58 = sub_14040FB40(1, (unsigned int)&v121, (unsigned int)&v122, (unsigned int)&v123, (__int64)&v124, 0i64, 0i64);
			v59 = (void*)(v121 - 16);
			if ((*(_DWORD*)(v121 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v59) == -1)
				j_j_free(v59);
			v60 = (void*)(v122 - 16);
			if ((*(_DWORD*)(v122 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v60) == -1)
				j_j_free(v60);
			v61 = (void*)(v123 - 16);
			if ((*(_DWORD*)(v123 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v61) == -1)
				j_j_free(v61);
			v49 = (void*)(v124 - 16);
			if ((*(_DWORD*)(v124 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v49) == -1)
				j_j_free(v49);
			if (!v58)
				goto LABEL_187;
			v43 = v134;
		}
		if (v43)
			sub_1400020C0(v49, v43, (v136 - v43) >> 3);
		v73 = (unsigned int)operator new(0x338ui64);
		v62 = sub_14016E840(v73, *(_QWORD*)(a1 + 616), *(_DWORD*)(a1 + 632), *(_DWORD*)(a1 + 636), *(_DWORD*)(a1 + 644));
	LABEL_207:
		sub_14040F9D0(v62 + 176);
		v71 = v79 - 4;
		if ((*(v79 - 4) & 0x30000000) == 0 && _InterlockedDecrement(v71) == -1)
			j_j_free(v71);
		goto LABEL_214;
	}
	v141 = dword_140DDCDD0;
	sub_140048D00(
		&v109,
		"One(or more) loudspeakers are offline and calibration cannot be started, please check the connections, power and re - try.");
	sub_14031AF20(&v112, &v109);
	v46 = (void*)(v109 - 16);
	if ((*(_DWORD*)(v109 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v46) == -1)
		j_j_free(v46);
	sub_140048D00(&v110, "Loudspeakers Offline");
	sub_14031AF20(&v111, &v110);
	v47 = (void*)(v110 - 16);
	if ((*(_DWORD*)(v110 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v47) == -1)
		j_j_free(v47);
	sub_14040FE70(3, (unsigned int)&v111, (unsigned int)&v112, (unsigned int)&v141, 0i64);
	v48 = (void*)(v111 - 16);
	if ((*(_DWORD*)(v111 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v48) == -1)
		j_j_free(v48);
	v49 = (void*)(v112 - 16);
	if ((*(_DWORD*)(v112 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v49) == -1)
		j_j_free(v49);
LABEL_187:
	if (v134)
		sub_1400020C0(v49, v134, (v136 - v134) >> 3);
LABEL_201:
	v70 = v79 - 4;
	if ((*(v79 - 4) & 0x30000000) == 0 && _InterlockedDecrement(v70) == -1)
		j_j_free(v70);*/
}