#include "AutoPhaseProgressWindow.h"

AutoPhaseProgressWindow::AutoPhaseProgressWindow()
	:ThreadWithProgressWindow("", false, false)
{

}

AutoPhaseProgressWindow::~AutoPhaseProgressWindow()
{

}

void AutoPhaseProgressWindow::run()
{
/*
	_QWORD* v1; // rdi
	struct _Mtx_internal_imp_t* v2; // rbx
	int v3; // eax
	__int64 v4; // r15
	int v5; // er14
	__int64* v6; // rsi
	unsigned __int64 v7; // r12
	__int64* v8; // rdi
	__int64 v9; // rax
	__int64 v10; // rbx
	__int64 v11; // rsi
	int v12; // er15
	unsigned int v13; // er14
	__int64 v14; // rcx
	__int64 v15; // rdi
	_BYTE* v16; // rbx
	__int64* v17; // rax
	__int64 v18; // rax
	_BYTE* v19; // rcx
	int v20; // er13
	__int64 v21; // r15
	struct _RTL_CRITICAL_SECTION* v22; // rdi
	__int64 v23; // r14
	int v24; // ecx
	__int64 v25; // rsi
	char* v26; // rbx
	int v27; // er14
	int v28; // edi
	__int64 v29; // r12
	__int64 v30; // r14
	_BYTE** v31; // r15
	char* v32; // rcx
	unsigned int v33; // er8
	char* v34; // r9
	void* v35; // rcx
	__int64 v36; // rcx
	void* v37; // rcx
	volatile signed __int32* v38; // rbx
	void* v39; // rcx
	void* v40; // rcx
	char* v41; // rcx
	_DWORD* v42; // rcx
	int v43; // er12
	float v44; // xmm6_4
	unsigned int v45; // ebx
	int v46; // esi
	int v47; // er13
	unsigned int v48; // er14
	float v49; // xmm7_4
	int v50; // ecx
	int v51; // er14
	int v52; // edi
	void** v53; // rax
	__int64 v54; // r12
	__int64 v55; // r14
	_BYTE** v56; // r15
	__int64 v57; // rax
	__int64 v58; // r15
	char* v59; // rbx
	int v60; // esi
	int v61; // edi
	__int64 v62; // r12
	__int64 v63; // r14
	_BYTE** v64; // rsi
	char* v65; // rcx
	__int64 v66; // rax
	__int64 v67; // rax
	void* v68; // rcx
	__int64* v69; // rbx
	__int64 v70; // rdx
	_DWORD* v71; // rcx
	__int64* v72; // rdi
	volatile signed __int32* v73; // rbx
	_DWORD* v74; // rcx
	__int64 v75; // r15
	void* v76; // rcx
	void* v77; // rcx
	char* v78; // rcx
	_QWORD* v79; // rdi
	float v80; // xmm0_4
	__int64 v81; // rcx
	int v83; // esi
	int v84; // edi
	void** v85; // rax
	__int64 v86; // r12
	__int64 v87; // r14
	_BYTE** v88; // rsi
	__int64 v89; // rax
	int v90; // [rsp+28h] [rbp-E0h]
	LONG* v91; // [rsp+30h] [rbp-D8h]
	unsigned int v92; // [rsp+30h] [rbp-D8h]
	int v93; // [rsp+38h] [rbp-D0h]
	char* v94; // [rsp+40h] [rbp-C8h] BYREF
	char* v95; // [rsp+48h] [rbp-C0h] BYREF
	LPCRITICAL_SECTION lpCriticalSection; // [rsp+50h] [rbp-B8h]
	__int64* v97; // [rsp+58h] [rbp-B0h]
	struct _RTL_CRITICAL_SECTION* v98; // [rsp+60h] [rbp-A8h]
	__int64* v99; // [rsp+68h] [rbp-A0h]
	char* v100; // [rsp+70h] [rbp-98h] BYREF
	char* v101; // [rsp+78h] [rbp-90h] BYREF
	__int64 v102; // [rsp+80h] [rbp-88h] BYREF
	__int64 v103; // [rsp+88h] [rbp-80h] BYREF
	__int64 v104; // [rsp+90h] [rbp-78h] BYREF
	__int64 v105; // [rsp+98h] [rbp-70h] BYREF
	__int64 v106; // [rsp+A0h] [rbp-68h] BYREF
	__int64 v107; // [rsp+A8h] [rbp-60h] BYREF
	__int64 v108; // [rsp+B0h] [rbp-58h] BYREF
	__int64 v109; // [rsp+B8h] [rbp-50h] BYREF
	__int64 v110; // [rsp+C0h] [rbp-48h] BYREF
	__int64 v111; // [rsp+C8h] [rbp-40h] BYREF
	__int64 v112; // [rsp+D0h] [rbp-38h] BYREF
	__int128 v113; // [rsp+D8h] [rbp-30h] BYREF
	__int64 v114; // [rsp+E8h] [rbp-20h]
	char v115[8]; // [rsp+F0h] [rbp-18h] BYREF
	char v116[8]; // [rsp+F8h] [rbp-10h] BYREF
	__int64 v117; // [rsp+100h] [rbp-8h] BYREF
	_BYTE* v118; // [rsp+108h] [rbp+0h] BYREF
	__int64 v119; // [rsp+110h] [rbp+8h]
	__int64 v120[9]; // [rsp+118h] [rbp+10h] BYREF
	char v121[32]; // [rsp+167h] [rbp+5Fh] BYREF
	char v122; // [rsp+187h] [rbp+7Fh] BYREF
	char v123[31]; // [rsp+188h] [rbp+80h] BYREF
	char v124; // [rsp+1A7h] [rbp+9Fh] BYREF
	__int64 v125[8]; // [rsp+1A8h] [rbp+A0h] BYREF

	v98 = a1;
	sub_1401FA670(ArgList, 0.0);
	v1 = ArgList;
	v2 = (struct _Mtx_internal_imp_t*) * ((_QWORD*)ArgList + 231);
	v120[3] = (__int64)v2;
	v3 = Mtx_lock(v2);
	if (v3)
		std::_Throw_C_error(v3);
	sub_140001EE0(v120, v1[66] + 32i64);
	Mtx_unlock(v2);
	v113 = 0i64;
	v4 = 0i64;
	v114 = 0i64;
	v5 = 0;
	v6 = (__int64*)v120[0];
	v7 = (v120[1] - v120[0]) >> 3;
	if (v7)
	{
		v8 = (__int64*) * ((_QWORD*)& v113 + 1);
		do
		{
			v9 = *v6;
			v117 = v9;
			if (*(_QWORD*)v9 && *(_BYTE*)(*(_QWORD*)v9 + 96i64))
			{
				if (v8 == (__int64*)v4)
				{
					sub_140002960(&v113, v8, &v117);
					v4 = v114;
					v8 = (__int64*) * ((_QWORD*)& v113 + 1);
				}
				else
				{
					*v8++ = v9;
					*((_QWORD*)& v113 + 1) = v8;
				}
				v10 = *v6;
				sub_140048D00(&v112, "layout");
				sub_14020F010(v10, &v112);
			}
			++v5;
			++v6;
		} while (v5 < v7);
	}
	v11 = *((_QWORD*)ArgList + 66);
	v12 = 0;
	v90 = 0;
	v13 = 0;
	v14 = *(_QWORD*)(v11 + 32);
	if ((*(_QWORD*)(v11 + 40) - v14) >> 3)
	{
		v15 = 0i64;
		do
		{
			sub_14020F280(*(_QWORD*)(v14 + 8 * v15), &v118);
			v16 = v118;
			if (!(unsigned int)String::isNotEmpty(v118, "SubwooferGen2")
				|| !(unsigned int)String::isNotEmpty(v16, "SubwooferGen1")
				|| !(unsigned int)String::isNotEmpty(v16, "SESubwooferGen1"))
			{
				v17 = *(__int64**)(*(_QWORD*)(v11 + 32) + 8 * v15);
				if (*((_BYTE*)v17 + 108))
				{
					v18 = *v17;
					if (v18)
					{
						if (*(_BYTE*)(v18 + 96))
							++v12;
					}
				}
			}
			v19 = v16 - 16;
			if ((*((_DWORD*)v16 - 4) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v19) == -1)
				j_j_free(v19);
			++v13;
			v14 = *(_QWORD*)(v11 + 32);
			v15 = v13;
		} while (v13 < (unsigned __int64)((*(_QWORD*)(v11 + 40) - v14) >> 3));
		v90 = v12;
	}
	v20 = 5;
	v120[4] = (__int64)& dword_140EC00EC;
	v97 = &v102;
	v99 = &v103;
	v21 = (__int64)v98;
	v22 = v98 + 14;
	lpCriticalSection = v98 + 14;
	v23 = (__int64)& v98[6].LockCount;
	v91 = &v98[6].LockCount;
	do
	{
		sub_140048D00(&v94, " Seconds");
		if (_InterlockedCompareExchange(&dword_140EC00EC, 1, 0))
		{
			v24 = 19;
			while (_InterlockedCompareExchange(&dword_140EC00EC, 1, 0))
			{
				if (--v24 < 0)
				{
					while (_InterlockedCompareExchange(&dword_140EC00EC, 1, 0))
						Sleep(0);
					break;
				}
			}
		}
		v25 = qword_140EC03E0;
		if (qword_140EC03E0)
		{
			v26 = v94;
			if (*(_QWORD*)(qword_140EC03E0 + 64))
			{
				v27 = *(_DWORD*)(qword_140EC03E0 + 36);
				if (v27 <= 0)
				{
				LABEL_44:
					v28 = -1;
				}
				else
				{
					v28 = 0;
					if (*(_BYTE*)(qword_140EC03E0 + 56))
					{
						while ((unsigned int)compareIgnoreCase(*(char**)(*(_QWORD*)(v25 + 24) + 8i64 * v28), v26))
						{
							if (++v28 >= v27)
							{
								v26 = v94;
								goto LABEL_44;
							}
						}
						v26 = v94;
					}
					else
					{
						v29 = *(int*)(qword_140EC03E0 + 36);
						v30 = 0i64;
						v31 = *(_BYTE * **)(qword_140EC03E0 + 24);
						while ((unsigned int)String::isNotEmpty(v26, *v31))
						{
							++v28;
							++v30;
							++v31;
							if (v30 >= v29)
								goto LABEL_44;
						}
					}
				}
				if (v28 < 0)
				{
					sub_1402FDDE0(*(_QWORD*)(v25 + 64), &v100, &v94, &v94);
				LABEL_47:
					v22 = lpCriticalSection;
					v21 = (__int64)v98;
					v23 = (__int64)v91;
					goto LABEL_48;
				}
			}
			v51 = *(_DWORD*)(v25 + 36);
			if (v51 > 0)
			{
				v52 = 0;
				if (*(_BYTE*)(v25 + 56))
				{
					while ((unsigned int)compareIgnoreCase(*(char**)(*(_QWORD*)(v25 + 24) + 8i64 * v52), v26))
					{
						if (++v52 >= v51)
						{
							v26 = v94;
							goto LABEL_95;
						}
					}
					v26 = v94;
				}
				else
				{
					v54 = *(int*)(v25 + 36);
					v55 = 0i64;
					v56 = *(_BYTE * **)(v25 + 24);
					while ((unsigned int)String::isNotEmpty(v26, *v56))
					{
						++v52;
						++v55;
						++v56;
						if (v55 >= v54)
							goto LABEL_95;
					}
				}
				if (v52 >= 0)
				{
					if ((unsigned int)v52 >= *(_DWORD*)(v25 + 52))
					{
						if (dword_140EC06A8 > * (_DWORD*)(*(_QWORD*)NtCurrentTeb()->ThreadLocalStoragePointer + 4i64))
						{
							Init_thread_header(&dword_140EC06A8);
							if (dword_140EC06A8 == -1)
							{
								off_140EB1E28 = dword_140DDCDD0;
								atexit(sub_14046AE50);
								Init_thread_footer(&dword_140EC06A8);
							}
						}
						v53 = &off_140EB1E28;
					}
					else
					{
						v53 = (void**)(*(_QWORD*)(v25 + 40) + 8i64 * v52);
					}
					v57 = (__int64)* v53;
					v100 = (char*)v57;
					if ((*(_DWORD*)(v57 - 16) & 0x30000000) == 0)
						_InterlockedIncrement((volatile signed __int32*)(v57 - 16));
					goto LABEL_47;
				}
			}
		LABEL_95:
			v100 = v26;
			v22 = lpCriticalSection;
			v21 = (__int64)v98;
			v23 = (__int64)v91;
			if ((*((_DWORD*)v26 - 4) & 0x30000000) == 0)
				_InterlockedIncrement((volatile signed __int32*)v26 - 4);
		}
		else
		{
			v100 = v94;
			if ((*((_DWORD*)v94 - 4) & 0x30000000) == 0)
				_InterlockedIncrement((volatile signed __int32*)v94 - 4);
		}
	LABEL_48:
		_InterlockedExchange(&dword_140EC00EC, 0);
		v32 = v94 - 16;
		if ((*((_DWORD*)v94 - 4) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v32) == -1)
			j_j_free(v32);
		v33 = v20;
		v34 = v121;
		v121[0] = 0;
		do
		{
			*--v34 = v33 % 0xA + 48;
			v33 /= 0xAu;
		} while (v33);
		sub_140040360(&v105, v34, v121 - v34);
		sub_140048D00(&v104, "Measurement starts in ");
		sub_14031AF20(&v102, &v104);
		v35 = (void*)(v104 - 16);
		if ((*(_DWORD*)(v104 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v35) == -1)
			j_j_free(v35);
		v36 = *(_QWORD*)sub_14031B920(&v102, &v105);
		v103 = v36;
		if ((*(_DWORD*)(v36 - 16) & 0x30000000) == 0)
			_InterlockedIncrement((volatile signed __int32*)(v36 - 16));
		v37 = (void*)(v102 - 16);
		if ((*(_DWORD*)(v102 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v37) == -1)
			j_j_free(v37);
		v119 = *(_QWORD*)sub_14031B920(&v103, &v100);
		v38 = (volatile signed __int32*)(v119 - 16);
		if ((*(_DWORD*)(v119 - 16) & 0x30000000) == 0)
			_InterlockedIncrement(v38);
		v39 = (void*)(v103 - 16);
		if ((*(_DWORD*)(v103 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v39) == -1)
			j_j_free(v39);
		v40 = (void*)(v105 - 16);
		if ((*(_DWORD*)(v105 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v40) == -1)
			j_j_free(v40);
		v41 = v100 - 16;
		if ((*((_DWORD*)v100 - 4) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v41) == -1)
			j_j_free(v41);
		EnterCriticalSection(v22);
		if ((*v38 & 0x30000000) == 0)
			_InterlockedIncrement(v38);
		v42 = (_DWORD*)(_InterlockedExchange64((volatile __int64*)(v21 + 552), v119) - 16);
		if ((*v42 & 0x30000000) == 0 && _InterlockedDecrement(v42) == -1)
			j_j_free(v42);
		LeaveCriticalSection(v22);
		WaitableEvent::wait(v23, 1000);
		if ((*v38 & 0x30000000) == 0 && _InterlockedDecrement(v38) == -1)
			j_j_free((void*)v38);
		--v20;
	} while (v20 > 0);
	v43 = 0;
	if (v90 <= 0)
		goto LABEL_160;
	v120[5] = (__int64)& dword_140EC00EC;
	while (2)
	{
		v44 = 0.0;
		v45 = -180;
		sub_1401FA570(ArgList);
		v93 = ++v43;
		sub_14022DF40(*((_QWORD*)ArgList + 66), (unsigned int)v43);
		sub_14022DA60(*((_QWORD*)ArgList + 66));
		sub_14022D940(*((_QWORD*)ArgList + 66), 4294967116i64);
		v46 = 0;
		v47 = -180;
		LODWORD(v97) = 0;
		while (2)
		{
			v48 = v45;
			v92 = v45;
			v49 = v44;
			sub_140048D00(&v95, ", please wait...");
			if (_InterlockedCompareExchange(&dword_140EC00EC, 1, 0))
			{
				v50 = 19;
				while (_InterlockedCompareExchange(&dword_140EC00EC, 1, 0))
				{
					if (--v50 < 0)
					{
						while (_InterlockedCompareExchange(&dword_140EC00EC, 1, 0))
							Sleep(0);
						break;
					}
				}
			}
			v58 = qword_140EC03E0;
			if (qword_140EC03E0)
			{
				v59 = v95;
				if (*(_QWORD*)(qword_140EC03E0 + 64))
				{
					v60 = *(_DWORD*)(qword_140EC03E0 + 36);
					if (v60 <= 0)
					{
					LABEL_122:
						v61 = -1;
					}
					else
					{
						v61 = 0;
						if (*(_BYTE*)(qword_140EC03E0 + 56))
						{
							while ((unsigned int)compareIgnoreCase(*(char**)(*(_QWORD*)(v58 + 24) + 8i64 * v61), v59))
							{
								if (++v61 >= v60)
								{
									v59 = v95;
									goto LABEL_122;
								}
							}
							v59 = v95;
						}
						else
						{
							v62 = *(int*)(qword_140EC03E0 + 36);
							v63 = 0i64;
							v64 = *(_BYTE * **)(qword_140EC03E0 + 24);
							while ((unsigned int)String::isNotEmpty(v59, *v64))
							{
								++v61;
								++v63;
								++v64;
								if (v63 >= v62)
									goto LABEL_122;
							}
						}
					}
					if (v61 < 0)
					{
						sub_1402FDDE0(*(_QWORD*)(v58 + 64), &v101, &v95, &v95);
						goto LABEL_125;
					}
				}
				v83 = *(_DWORD*)(v58 + 36);
				if (v83 <= 0)
					goto LABEL_168;
				v84 = 0;
				if (*(_BYTE*)(v58 + 56))
				{
					while ((unsigned int)compareIgnoreCase(*(char**)(*(_QWORD*)(v58 + 24) + 8i64 * v84), v59))
					{
						if (++v84 >= v83)
						{
							v59 = v95;
							goto LABEL_168;
						}
					}
					v59 = v95;
				}
				else
				{
					v86 = *(int*)(v58 + 36);
					v87 = 0i64;
					v88 = *(_BYTE * **)(v58 + 24);
					while ((unsigned int)String::isNotEmpty(v59, *v88))
					{
						++v84;
						++v87;
						++v88;
						if (v87 >= v86)
							goto LABEL_168;
					}
				}
				if (v84 < 0)
				{
				LABEL_168:
					v101 = v59;
					v46 = (int)v97;
					v48 = v92;
					v43 = v93;
					if ((*((_DWORD*)v59 - 4) & 0x30000000) == 0)
						_InterlockedIncrement((volatile signed __int32*)v59 - 4);
				}
				else
				{
					if ((unsigned int)v84 >= *(_DWORD*)(v58 + 52))
					{
						if (dword_140EC06A8 > * (_DWORD*)(*(_QWORD*)NtCurrentTeb()->ThreadLocalStoragePointer + 4i64))
						{
							Init_thread_header(&dword_140EC06A8);
							if (dword_140EC06A8 == -1)
							{
								off_140EB1E28 = dword_140DDCDD0;
								atexit(sub_14046AE50);
								Init_thread_footer(&dword_140EC06A8);
							}
						}
						v85 = &off_140EB1E28;
					}
					else
					{
						v85 = (void**)(*(_QWORD*)(v58 + 40) + 8i64 * v84);
					}
					v89 = (__int64)* v85;
					v101 = (char*)v89;
					if ((*(_DWORD*)(v89 - 16) & 0x30000000) == 0)
						_InterlockedIncrement((volatile signed __int32*)(v89 - 16));
				LABEL_125:
					v46 = (int)v97;
					v48 = v92;
					v43 = v93;
				}
			}
			else
			{
				v101 = v95;
				if ((*((_DWORD*)v95 - 4) & 0x30000000) == 0)
					_InterlockedIncrement((volatile signed __int32*)v95 - 4);
			}
			_InterlockedExchange(&dword_140EC00EC, 0);
			v65 = v95 - 16;
			if ((*((_DWORD*)v95 - 4) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v65) == -1)
				j_j_free(v65);
			v66 = sub_1402FCCA0(v123);
			sub_140040360(&v110, v66, &v122 - v66);
			v67 = sub_1402FCCA0(v125);
			sub_140040360(&v109, v67, &v124 - v67);
			sub_140048D00(&v106, "Calibrating subwoofer ");
			sub_14031AF20(&v107, &v106);
			v68 = (void*)(v106 - 16);
			if ((*(_DWORD*)(v106 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v68) == -1)
				j_j_free(v68);
			v69 = (__int64*)sub_14031B550(v115, &v107, &v109);
			v99 = v69;
			ImageCache::getFromHashCode(v69, " / ", (int)"");
			v70 = *v69;
			v108 = v70;
			if ((*(_DWORD*)(v70 - 16) & 0x30000000) == 0)
				_InterlockedIncrement((volatile signed __int32*)(v70 - 16));
			v71 = (_DWORD*)(*v69 - 16);
			if ((*v71 & 0x30000000) == 0 && _InterlockedDecrement(v71) == -1)
				j_j_free(v71);
			v72 = (__int64*)sub_14031B550(v116, &v108, &v110);
			v99 = v72;
			v111 = *(_QWORD*)sub_14031B920(v72, &v101);
			v73 = (volatile signed __int32*)(v111 - 16);
			if ((*(_DWORD*)(v111 - 16) & 0x30000000) == 0)
				_InterlockedIncrement(v73);
			v74 = (_DWORD*)(*v72 - 16);
			if ((*v74 & 0x30000000) == 0 && _InterlockedDecrement(v74) == -1)
				j_j_free(v74);
			v75 = (__int64)v98;
			sub_14040F570(v98, &v111);
			if ((*v73 & 0x30000000) == 0 && _InterlockedDecrement(v73) == -1)
				j_j_free((void*)v73);
			v76 = (void*)(v109 - 16);
			if ((*(_DWORD*)(v109 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v76) == -1)
				j_j_free(v76);
			v77 = (void*)(v110 - 16);
			if ((*(_DWORD*)(v110 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v77) == -1)
				j_j_free(v77);
			v78 = v101 - 16;
			if ((*((_DWORD*)v101 - 4) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v78) == -1)
				j_j_free(v78);
			*(double*)(v75 + 536) = (double)v46 / 360.0;
			v46 += 15;
			LODWORD(v97) = v46;
			WaitableEvent::wait(v75 + 248, 2500);
			v79 = ArgList;
			v80 = (float)(int)sub_140204C20(*((_QWORD*)ArgList + 174));
			if (v44 > v80)
				v44 = v80;
			v45 = v47;
			if (v49 <= v80)
				v45 = v48;
			sub_14022D940(v79[66], (unsigned int)v47);
			v47 += 15;
			if (v47 <= 180)
				continue;
			break;
		}
		sub_14022D720(*((_QWORD*)ArgList + 66), v45);
		if (v43 < v90)
			continue;
		break;
	}
LABEL_160:
	sub_1401FA670(ArgList, -130.0);
	sub_14022E650(*((_QWORD*)ArgList + 66));
	if ((_QWORD)v113)
		sub_1400020C0(v81, v113, (v114 - (__int64)v113) >> 3);
	return sub_140001FE0(v120);*/
}

void AutoPhaseProgressWindow::threadComplete(bool userPressedCancel)
{
/*
	__int64 v3; // rdi
	void* v4; // rcx
	void* v5; // rcx
	void* v6; // rcx
	void* v7; // rcx
	void* v8; // rcx
	int v9; // eax
	void* v10; // rcx
	void* v11; // rcx
	void* v12; // rcx
	void* v13; // rcx
	void* v14; // rcx
	__int64 v15; // rsi
	__int64 v16; // rdi
	void* v17; // rcx
	void* v18; // rcx
	__int64 v19; // rdi
	void(__fastcall * v20)(__int64, __int64*); // rsi
	void* v21; // rcx
	__int64 v22; // [rsp+30h] [rbp-29h] BYREF
	__int64 v23; // [rsp+38h] [rbp-21h] BYREF
	__int64 v24; // [rsp+40h] [rbp-19h] BYREF
	__int64 v25; // [rsp+48h] [rbp-11h] BYREF
	__int64 v26; // [rsp+50h] [rbp-9h] BYREF
	__int64 v27; // [rsp+58h] [rbp-1h] BYREF
	__int64 v28; // [rsp+60h] [rbp+7h] BYREF
	__int64 v29; // [rsp+68h] [rbp+Fh] BYREF
	__int64 v30; // [rsp+70h] [rbp+17h] BYREF
	__int64 v31; // [rsp+78h] [rbp+1Fh] BYREF
	__int64 v32[6]; // [rsp+80h] [rbp+27h] BYREF
	__int64 v33; // [rsp+C0h] [rbp+67h] BYREF
	__int64 v34; // [rsp+D0h] [rbp+77h] BYREF
	__int64 v35; // [rsp+D8h] [rbp+7Fh] BYREF

	v3 = *(_QWORD*)(a1 + 616);
	if (a2)
	{
		sub_140048D00(&v23, &unk_14046D572);
		sub_140048D00(&v33, "AutoPhase aborted!");
		sub_14031AF20(&v22, &v33);
		v4 = (void*)(v33 - 16);
		if ((*(_DWORD*)(v33 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v4) == -1)
			j_j_free(v4);
		sub_140048D00(&v34, "AutoPhase");
		sub_14031AF20(&v35, &v34);
		v5 = (void*)(v34 - 16);
		if ((*(_DWORD*)(v34 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v5) == -1)
			j_j_free(v5);
		sub_14040FE70(2, (unsigned int)& v35, (unsigned int)& v22, (unsigned int)& v23, v3);
		v6 = (void*)(v35 - 16);
		if ((*(_DWORD*)(v35 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v6) == -1)
			j_j_free(v6);
		v7 = (void*)(v22 - 16);
		if ((*(_DWORD*)(v22 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v7) == -1)
			j_j_free(v7);
		v8 = (void*)(v23 - 16);
		v9 = *(_DWORD*)(v23 - 16);
	}
	else
	{
		sub_140048D00(&v28, &unk_14046D573);
		sub_140048D00(&v24, "AutoPhase was succesfully completed.");
		sub_14031AF20(&v27, &v24);
		v10 = (void*)(v24 - 16);
		if ((*(_DWORD*)(v24 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v10) == -1)
			j_j_free(v10);
		sub_140048D00(&v25, "AutoPhase completed");
		sub_14031AF20(&v26, &v25);
		v11 = (void*)(v25 - 16);
		if ((*(_DWORD*)(v25 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v11) == -1)
			j_j_free(v11);
		sub_14040FE70(3, (unsigned int)& v26, (unsigned int)& v27, (unsigned int)& v28, v3);
		v12 = (void*)(v26 - 16);
		if ((*(_DWORD*)(v26 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v12) == -1)
			j_j_free(v12);
		v13 = (void*)(v27 - 16);
		if ((*(_DWORD*)(v27 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v13) == -1)
			j_j_free(v13);
		v14 = (void*)(v28 - 16);
		if ((*(_DWORD*)(v28 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v14) == -1)
			j_j_free(v14);
		v15 = *(_QWORD*)(a1 + 616);
		v16 = *(_QWORD*)(v15 + 728);
		sub_140048D00(&v29, "Confirm AutoPhase");
		sub_14031AF20(&v30, &v29);
		v17 = (void*)(v29 - 16);
		if ((*(_DWORD*)(v29 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v17) == -1)
			j_j_free(v17);
		sub_140410150(v16, &v30);
		v18 = (void*)(v30 - 16);
		if ((*(_DWORD*)(v30 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v18) == -1)
			j_j_free(v18);
		v19 = *(_QWORD*)(v15 + 728);
		v20 = *(void(__fastcall * *)(__int64, __int64*))(*(_QWORD*)(v19 + 176) + 16i64);
		sub_140048D00(&v31, "Confirm the calibration and continue to the next phase.");
		sub_14031AF20(v32, &v31);
		v21 = (void*)(v31 - 16);
		if ((*(_DWORD*)(v31 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v21) == -1)
			j_j_free(v21);
		v20(v19 + 176, v32);
		v8 = (void*)(v32[0] - 16);
		v9 = *(_DWORD*)(v32[0] - 16);
	}
	if ((v9 & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v8) == -1)
		j_j_free(v8);
	if (a1 != 176)
		(**(void(__fastcall * **)(__int64, __int64))(a1 - 176))(a1 - 176, 1i64);*/
}

