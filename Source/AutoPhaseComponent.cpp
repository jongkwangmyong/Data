#include "AutoPhaseComponent.h"

AutoPhaseComponent::AutoPhaseComponent()
	: Thread("", 0)
{

}

AutoPhaseComponent::~AutoPhaseComponent()
{

}

void AutoPhaseComponent::run()
{
/*
	v0 = ArgList;
	v1 = (struct _Mtx_internal_imp_t*) * ((_QWORD*)ArgList + 231);
	v56[3] = (__int64)v1;
	v2 = Mtx_lock(v1);
	if (v2)
		std::_Throw_C_error(v2);
	sub_140001EE0(v56, v0[66] + 32i64);
	Mtx_unlock(v1);
	v3 = 0;
	v4 = (v56[1] - v56[0]) >> 3;
	if (v4)
	{
		do
		{
			Sleep(0x3E8u);
			++v3;
		} while (v3 < v4);
	}
	v55 = dword_140DDCDD0;
	sub_140048D00(&v58, "No");
	v56[4] = (__int64)& dword_140EC00EC;
	v57 = 19;
	if (_InterlockedCompareExchange(&dword_140EC00EC, 1, 0))
	{
		v5 = 19;
		while (_InterlockedCompareExchange(&dword_140EC00EC, 1, 0))
		{
			if (--v5 < 0)
			{
				while (_InterlockedCompareExchange(&dword_140EC00EC, 1, 0))
					Sleep(0);
				break;
			}
		}
	}
	v6 = qword_140EC03E0;
	if (qword_140EC03E0)
	{
		if (*(_QWORD*)(qword_140EC03E0 + 64)
			&& (int)StringArray::indexOf(qword_140EC03E0 + 24, v58, *(_BYTE*)(qword_140EC03E0 + 56), 0) < 0)
		{
			sub_1402FDDE0(*(_QWORD*)(v6 + 64), &v54, &v58, &v58);
			goto LABEL_22;
		}
		v7 = v58;
		v8 = *(_DWORD*)(v6 + 36);
		if (v8 <= 0)
			goto LABEL_20;
		v9 = 0;
		if (*(_BYTE*)(v6 + 56))
		{
			while ((unsigned int)compareIgnoreCase(*(char**)(*(_QWORD*)(v6 + 24) + 8i64 * v9), v7))
			{
				if (++v9 >= v8)
				{
					v7 = v58;
					goto LABEL_20;
				}
			}
			v7 = v58;
		}
		else
		{
			v14 = *(int*)(v6 + 36);
			v15 = 0i64;
			v16 = *(_BYTE * **)(v6 + 24);
			while ((unsigned int)String::isNotEmpty(v7, *v16))
			{
				++v9;
				++v15;
				++v16;
				if (v15 >= v14)
					goto LABEL_20;
			}
		}
		if (v9 < 0)
		{
		LABEL_20:
			v54 = v7;
			if ((*((_DWORD*)v7 - 4) & 0x30000000) == 0)
				_InterlockedIncrement((volatile signed __int32*)v7 - 4);
			goto LABEL_22;
		}
		v12 = *(char**)sub_140316E00(v6 + 40, (unsigned int)v9);
		v54 = v12;
		v13 = *((_DWORD*)v12 - 4);
	}
	else
	{
		v12 = v58;
		v54 = v58;
		v13 = *((_DWORD*)v58 - 4);
	}
	if ((v13 & 0x30000000) == 0)
		_InterlockedIncrement((volatile signed __int32*)v12 - 4);
LABEL_22:
	_InterlockedExchange(&dword_140EC00EC, 0);
	v10 = v58 - 16;
	if ((*((_DWORD*)v58 - 4) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v10) == -1)
		j_j_free(v10);
	sub_140048D00(&v48, "Yes");
	v56[5] = (__int64)& dword_140EC00EC;
	if (_InterlockedCompareExchange(&dword_140EC00EC, 1, 0))
	{
		v11 = 19;
		while (_InterlockedCompareExchange(&dword_140EC00EC, 1, 0))
		{
			if (--v11 < 0)
			{
				while (_InterlockedCompareExchange(&dword_140EC00EC, 1, 0))
					Sleep(0);
				break;
			}
		}
	}
	v17 = qword_140EC03E0;
	if (qword_140EC03E0)
	{
		if (*(_QWORD*)(qword_140EC03E0 + 64)
			&& (int)StringArray::indexOf(qword_140EC03E0 + 24, v48, *(_BYTE*)(qword_140EC03E0 + 56), 0) < 0)
		{
			sub_1402FDDE0(*(_QWORD*)(v17 + 64), &v53, &v48, &v48);
			goto LABEL_62;
		}
		v18 = v48;
		v19 = *(_DWORD*)(v17 + 36);
		if (v19 <= 0)
			goto LABEL_50;
		v20 = 0;
		if (*(_BYTE*)(v17 + 56))
		{
			while ((unsigned int)compareIgnoreCase(*(char**)(*(_QWORD*)(v17 + 24) + 8i64 * v20), v18))
			{
				if (++v20 >= v19)
				{
					v18 = v48;
					goto LABEL_50;
				}
			}
			v18 = v48;
		}
		else
		{
			v23 = *(int*)(v17 + 36);
			v24 = 0i64;
			v25 = *(_BYTE * **)(v17 + 24);
			while ((unsigned int)String::isNotEmpty(v18, *v25))
			{
				++v20;
				++v24;
				++v25;
				if (v24 >= v23)
					goto LABEL_50;
			}
		}
		if (v20 < 0)
		{
		LABEL_50:
			v53 = v18;
			if ((*((_DWORD*)v18 - 4) & 0x30000000) == 0)
				_InterlockedIncrement((volatile signed __int32*)v18 - 4);
			goto LABEL_62;
		}
		v21 = *(char**)sub_140316E00(v17 + 40, (unsigned int)v20);
		v53 = v21;
		v22 = *((_DWORD*)v21 - 4);
	}
	else
	{
		v21 = v48;
		v53 = v48;
		v22 = *((_DWORD*)v48 - 4);
	}
	if ((v22 & 0x30000000) == 0)
		_InterlockedIncrement((volatile signed __int32*)v21 - 4);
LABEL_62:
	_InterlockedExchange(&dword_140EC00EC, 0);
	v26 = v48 - 16;
	if ((*((_DWORD*)v48 - 4) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v26) == -1)
		j_j_free(v26);
	sub_140048D00(&v49, "Do you want to measure from other positions?");
	v56[6] = (__int64)& dword_140EC00EC;
	if (_InterlockedCompareExchange(&dword_140EC00EC, 1, 0))
	{
		v27 = 19;
		while (_InterlockedCompareExchange(&dword_140EC00EC, 1, 0))
		{
			if (--v27 < 0)
			{
				while (_InterlockedCompareExchange(&dword_140EC00EC, 1, 0))
					Sleep(0);
				break;
			}
		}
	}
	v28 = qword_140EC03E0;
	if (qword_140EC03E0)
	{
		if (*(_QWORD*)(qword_140EC03E0 + 64)
			&& (int)StringArray::indexOf(qword_140EC03E0 + 24, v49, *(_BYTE*)(qword_140EC03E0 + 56), 0) < 0)
		{
			sub_1402FDDE0(*(_QWORD*)(v28 + 64), &v52, &v49, &v49);
			goto LABEL_82;
		}
		v29 = v49;
		v30 = *(_DWORD*)(v28 + 36);
		if (v30 <= 0)
			goto LABEL_80;
		v31 = 0;
		if (*(_BYTE*)(v28 + 56))
		{
			while ((unsigned int)compareIgnoreCase(*(char**)(*(_QWORD*)(v28 + 24) + 8i64 * v31), v29))
			{
				if (++v31 >= v30)
				{
					v29 = v49;
					goto LABEL_80;
				}
			}
			v29 = v49;
		}
		else
		{
			v35 = *(int*)(v28 + 36);
			v36 = 0i64;
			v37 = *(_BYTE * **)(v28 + 24);
			while ((unsigned int)String::isNotEmpty(v29, *v37))
			{
				++v31;
				++v36;
				++v37;
				if (v36 >= v35)
					goto LABEL_80;
			}
		}
		if (v31 < 0)
		{
		LABEL_80:
			v52 = v29;
			if ((*((_DWORD*)v29 - 4) & 0x30000000) == 0)
				_InterlockedIncrement((volatile signed __int32*)v29 - 4);
			goto LABEL_82;
		}
		v33 = *(char**)sub_140316E00(v28 + 40, (unsigned int)v31);
		v52 = v33;
		v34 = *((_DWORD*)v33 - 4);
	}
	else
	{
		v33 = v49;
		v52 = v49;
		v34 = *((_DWORD*)v49 - 4);
	}
	if ((v34 & 0x30000000) == 0)
		_InterlockedIncrement((volatile signed __int32*)v33 - 4);
LABEL_82:
	_InterlockedExchange(&dword_140EC00EC, 0);
	v32 = v49 - 16;
	if ((*((_DWORD*)v49 - 4) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v32) == -1)
		j_j_free(v32);
	sub_140048D00(&v50, "Measurement completed");
	v56[7] = (__int64)& dword_140EC00EC;
	if (_InterlockedCompareExchange(&dword_140EC00EC, 1, 0))
	{
		while (_InterlockedCompareExchange(&dword_140EC00EC, 1, 0))
		{
			if (--v57 < 0)
			{
				while (_InterlockedCompareExchange(&dword_140EC00EC, 1, 0))
					Sleep(0);
				break;
			}
		}
	}
	v38 = qword_140EC03E0;
	if (qword_140EC03E0)
	{
		if (*(_QWORD*)(qword_140EC03E0 + 64)
			&& (int)StringArray::indexOf(qword_140EC03E0 + 24, v50, *(_BYTE*)(qword_140EC03E0 + 56), 0) < 0)
		{
			sub_1402FDDE0(*(_QWORD*)(v38 + 64), &v51, &v50, &v50);
			goto LABEL_110;
		}
		v39 = StringArray::indexOf(v38 + 24, v50, *(_BYTE*)(v38 + 56), 0);
		if (v39 < 0)
		{
			v40 = v50;
			v51 = v50;
			v41 = *((_DWORD*)v50 - 4);
		}
		else
		{
			v40 = *(_BYTE * *)sub_140316E00(v38 + 40, (unsigned int)v39);
			v51 = v40;
			v41 = *((_DWORD*)v40 - 4);
		}
	}
	else
	{
		v40 = v50;
		v51 = v50;
		v41 = *((_DWORD*)v50 - 4);
	}
	if ((v41 & 0x30000000) == 0)
		_InterlockedIncrement((volatile signed __int32*)v40 - 4);
LABEL_110:
	_InterlockedExchange(&dword_140EC00EC, 0);
	v42 = v50 - 16;
	if ((*((_DWORD*)v50 - 4) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v42) == -1)
		j_j_free(v42);
	sub_14040D100((_DWORD)v42, (unsigned int)& v51, (unsigned int)& v52, (unsigned int)& v53, (__int64)& v54, (__int64)& v55);
	v43 = v51 - 16;
	if ((*((_DWORD*)v51 - 4) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v43) == -1)
		j_j_free(v43);
	v44 = v52 - 16;
	if ((*((_DWORD*)v52 - 4) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v44) == -1)
		j_j_free(v44);
	v45 = v53 - 16;
	if ((*((_DWORD*)v53 - 4) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v45) == -1)
		j_j_free(v45);
	v46 = v54 - 16;
	if ((*((_DWORD*)v54 - 4) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v46) == -1)
		j_j_free(v46);
	return sub_140001FE0(v56);
*/
}

void AutoPhaseComponent::buttonClicked(Button*)
{
/*
	__int64 v3; // rbx
	__int64 v4; // rax
	volatile signed __int32* v5; // r12
	__int64 v6; // r14
	__int64 v7; // rax
	void* v8; // rcx
	void* v9; // rcx
	volatile signed __int32* v10; // rbx
	volatile signed __int32* v11; // r13
	char* v12; // rax
	char v13; // dl
	unsigned __int8 v14; // cl
	_BYTE* v15; // rax
	_BYTE* v16; // rcx
	void* v17; // rcx
	int i; // ebx
	void(__fastcall * **v19)(_QWORD, __int64); // rcx
	__int64 v20; // rax
	__int64 v21; // rcx
	void(__fastcall * **v22)(_QWORD, __int64); // r8
	bool v23; // r15
	__int64 v24; // rbx
	bool v25; // si
	__int64 v26; // rcx
	__int64 v27; // rcx
	int v28; // esi
	int v29; // er15
	int v30; // eax
	char* v31; // rdx
	char v32; // cl
	unsigned __int8 j; // al
	void* v34; // rcx
	void* v35; // rcx
	volatile signed __int32* v36; // rbx
	void* v37; // rcx
	void* v38; // rcx
	void* v39; // rcx
	void* v40; // rcx
	char* v41; // rcx
	char* v42; // rcx
	volatile signed __int32* v43; // rsi
	__int64 v44; // rbx
	__int64 v45; // rax
	char* v46; // rcx
	__int64 v47; // rcx
	__int64 v48; // rbx
	__int64 v49; // rax
	__int64 v50; // rbx
	__int64 v51; // rax
	char v52; // di
	__int64 v53; // rcx
	__int64 v54; // rcx
	__int64 v55; // rbx
	unsigned __int64 v56; // rdx
	_BYTE* v57; // r8
	void* v58; // rcx
	void* v59; // rcx
	void* v60; // rcx
	void* v61; // rcx
	int v62; // eax
	void* v63; // rcx
	void* v64; // rcx
	void* v65; // rcx
	void* v66; // rcx
	void* v67; // rcx
	void* v68; // rcx
	void* v69; // rcx
	char v70; // bl
	void* v71; // rcx
	void* v72; // rcx
	void* v73; // rcx
	void* v74; // rcx
	void* v75; // rcx
	void* v76; // rcx
	void* v77; // rcx
	char v78; // bl
	void* v79; // rcx
	void* v80; // rcx
	void* v81; // rcx
	void* v82; // rcx
	__int64 v83; // rax
	void* v84; // rcx
	void* v85; // rcx
	void* v86; // rcx
	void* v87; // rcx
	void* v88; // rcx
	void* v89; // rcx
	void* v90; // rcx
	void* v91; // rcx
	void* v92; // rcx
	void* v93; // rcx
	void* v94; // rcx
	__int64 v95; // rbx
	__int64 v96; // r14
	char* v97; // [rsp+40h] [rbp-C0h] BYREF
	__int64* v98; // [rsp+48h] [rbp-B8h]
	char* v99; // [rsp+50h] [rbp-B0h] BYREF
	__int64 v100; // [rsp+58h] [rbp-A8h] BYREF
	__int64 v101; // [rsp+60h] [rbp-A0h] BYREF
	__int64 v102; // [rsp+68h] [rbp-98h] BYREF
	char* v103; // [rsp+70h] [rbp-90h] BYREF
	__int64 v104; // [rsp+78h] [rbp-88h] BYREF
	__int64 v105; // [rsp+80h] [rbp-80h] BYREF
	_BYTE* v106; // [rsp+88h] [rbp-78h] BYREF
	__int64 v107; // [rsp+90h] [rbp-70h] BYREF
	__int64 v108; // [rsp+98h] [rbp-68h] BYREF
	__int64 v109; // [rsp+A0h] [rbp-60h] BYREF
	__int64 v110; // [rsp+A8h] [rbp-58h] BYREF
	__int64 v111; // [rsp+B0h] [rbp-50h] BYREF
	__int64 v112; // [rsp+B8h] [rbp-48h] BYREF
	__int64 v113; // [rsp+C0h] [rbp-40h] BYREF
	__int64 v114; // [rsp+C8h] [rbp-38h] BYREF
	__int64 v115; // [rsp+D0h] [rbp-30h] BYREF
	__int64 v116; // [rsp+D8h] [rbp-28h] BYREF
	__int64 v117; // [rsp+E0h] [rbp-20h] BYREF
	__int64 v118; // [rsp+E8h] [rbp-18h] BYREF
	__int64 v119; // [rsp+F0h] [rbp-10h] BYREF
	__int64 v120; // [rsp+F8h] [rbp-8h] BYREF
	__int64 v121; // [rsp+100h] [rbp+0h] BYREF
	__int64 v122; // [rsp+108h] [rbp+8h] BYREF
	__int64 v123; // [rsp+110h] [rbp+10h] BYREF
	__int64 v124; // [rsp+118h] [rbp+18h] BYREF
	__int64 v125; // [rsp+120h] [rbp+20h] BYREF
	__int64 v126; // [rsp+128h] [rbp+28h] BYREF
	__int64 v127; // [rsp+130h] [rbp+30h] BYREF
	__int64 v128; // [rsp+138h] [rbp+38h] BYREF
	__int64 v129; // [rsp+140h] [rbp+40h] BYREF
	__int64 v130; // [rsp+148h] [rbp+48h] BYREF
	__int64 v131; // [rsp+150h] [rbp+50h] BYREF
	__int64 v132; // [rsp+158h] [rbp+58h] BYREF
	__int64 v133; // [rsp+160h] [rbp+60h] BYREF
	__int64 v134; // [rsp+168h] [rbp+68h] BYREF
	__int64 v135; // [rsp+170h] [rbp+70h] BYREF
	__int64 v136; // [rsp+178h] [rbp+78h] BYREF
	__int64 v137; // [rsp+180h] [rbp+80h] BYREF
	__int64 v138; // [rsp+188h] [rbp+88h] BYREF
	__int64 v139; // [rsp+190h] [rbp+90h] BYREF
	__int64 v140; // [rsp+198h] [rbp+98h] BYREF
	__int64 v141; // [rsp+1A0h] [rbp+A0h] BYREF
	__int64 v142; // [rsp+1A8h] [rbp+A8h] BYREF
	__int64 v143; // [rsp+1B0h] [rbp+B0h] BYREF
	__int64 v144; // [rsp+1B8h] [rbp+B8h] BYREF
	__int64 v145; // [rsp+1C0h] [rbp+C0h] BYREF
	__int64 v146; // [rsp+1C8h] [rbp+C8h] BYREF
	__int64 v147; // [rsp+1D0h] [rbp+D0h] BYREF
	__int64 v148; // [rsp+1D8h] [rbp+D8h] BYREF
	__int64* v149; // [rsp+1E0h] [rbp+E0h] BYREF
	_DWORD* v150; // [rsp+1E8h] [rbp+E8h] BYREF
	char* v151; // [rsp+1F0h] [rbp+F0h]
	__int64 v152; // [rsp+1F8h] [rbp+F8h] BYREF
	__int64 v153; // [rsp+200h] [rbp+100h]
	__int64 v154; // [rsp+208h] [rbp+108h]
	_DWORD* v155; // [rsp+210h] [rbp+110h] BYREF
	_BYTE* v156; // [rsp+218h] [rbp+118h]
	_DWORD* v157; // [rsp+220h] [rbp+120h] BYREF
	_DWORD* v158; // [rsp+228h] [rbp+128h] BYREF
	_DWORD* v159; // [rsp+230h] [rbp+130h] BYREF
	_DWORD* v160; // [rsp+238h] [rbp+138h] BYREF
	_DWORD* v161; // [rsp+240h] [rbp+140h] BYREF
	__int64 v162; // [rsp+248h] [rbp+148h] BYREF
	_BYTE* v163; // [rsp+250h] [rbp+150h] BYREF
	__int64 v164; // [rsp+260h] [rbp+160h] BYREF
	_BYTE* v165; // [rsp+268h] [rbp+168h]
	__int64 v166; // [rsp+270h] [rbp+170h]
	__int64 v167; // [rsp+278h] [rbp+178h]
	void* Block; // [rsp+280h] [rbp+180h]
	__int64 v169; // [rsp+288h] [rbp+188h]
	__int16 v170; // [rsp+290h] [rbp+190h]
	__int64 v171; // [rsp+2D0h] [rbp+1D0h]
	void(__fastcall * **v172)(_QWORD, __int64); // [rsp+2D8h] [rbp+1D8h]

	if (a2 == a1[4])
	{
		if ((unsigned __int8)sub_14022EBB0(*((_QWORD*)ArgList + 66)))
		{
			v3 = qword_140EBFF78;
			v150 = operator new(0x3D0ui64);
			v4 = sub_1401BB7E0(v150);
			sub_140274EA0(v3, v4);
			return;
		}
		v156 = (_BYTE*) * ((_QWORD*)ArgList + 281);
		v5 = (volatile signed __int32*)(v156 - 16);
		if ((*((_DWORD*)v156 - 4) & 0x30000000) == 0)
			_InterlockedIncrement(v5);
		v6 = 0i64;
		if ((unsigned int)String::isNotEmpty(v156, &unk_14046D553))
		{
			v47 = *((_QWORD*)ArgList + 281);
			v102 = v47;
			if ((*(_DWORD*)(v47 - 16) & 0x30000000) == 0)
				_InterlockedIncrement((volatile signed __int32*)(v47 - 16));
			sub_140200820(ArgList, &v102, 0i64);
			v48 = qword_140EBFF78;
			v98 = (__int64*)operator new(0x220ui64);
			v49 = sub_140189A70(v98);
			sub_140274EA0(v48, v49);
		}
		else
		{
			v7 = *((_QWORD*)ArgList + 272);
			v104 = v7;
			if ((*(_DWORD*)(v7 - 16) & 0x30000000) == 0)
				_InterlockedIncrement((volatile signed __int32*)(v7 - 16));
			sub_140308BF0(&v162, &v104);
			v8 = (void*)(v104 - 16);
			if ((*(_DWORD*)(v104 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v8) == -1)
				j_j_free(v8);
			sub_140048D00(&v106, "*.sam");
			sub_140048D00(&v105, "GLM4 - Save As...");
			sub_14031AF20(&v107, &v105);
			v9 = (void*)(v105 - 16);
			if ((*(_DWORD*)(v105 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v9) == -1)
				j_j_free(v9);
			v164 = v107;
			if ((*(_DWORD*)(v107 - 16) & 0x30000000) == 0)
				_InterlockedIncrement((volatile signed __int32*)(v107 - 16));
			v165 = v106;
			v10 = (volatile signed __int32*)(v106 - 16);
			if ((*((_DWORD*)v106 - 4) & 0x30000000) == 0)
				_InterlockedIncrement(v10);
			v166 = v162;
			v11 = (volatile signed __int32*)(v162 - 16);
			if ((*(_DWORD*)(v162 - 16) & 0x30000000) == 0)
				_InterlockedIncrement(v11);
			v167 = 0i64;
			Block = 0i64;
			v169 = 0i64;
			v170 = 1;
			v171 = 0i64;
			v172 = 0i64;
			v12 = v106;
			if (*v106)
			{
				v13 = *v106;
				while (v13 == 32 || (unsigned __int8)(v13 - 9) <= 4u)
				{
					++v12;
					if (v13 < 0)
					{
						v14 = 64;
						if ((v13 & 0x40) != 0)
						{
							do
							{
								if (v14 <= 8u)
									break;
								++v12;
								v14 >>= 1;
							} while ((v14 & (unsigned __int8)v13) != 0);
						}
					}
					v13 = *v12;
					if (!*v12)
						goto LABEL_30;
				}
			}
			else
			{
			LABEL_30:
				sub_140048D00(&v163, "*");
				v15 = v165;
				v165 = v163;
				v16 = v15 - 16;
				if ((*((_DWORD*)v15 - 4) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v16) == -1)
					j_j_free(v16);
			}
			v17 = (void*)(v107 - 16);
			if ((*(_DWORD*)(v107 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v17) == -1)
				j_j_free(v17);
			if ((*v10 & 0x30000000) == 0 && _InterlockedDecrement(v10) == -1)
				j_j_free((void*)v10);
			Component::BailOutChecker(&v108, qword_140EC0010);
			for (i = 0; i < SHIDWORD(v169); ++i)
				sub_140002BF0((char*)Block + 72 * i);
			HIDWORD(v169) = 0;
			if ((_DWORD)v169)
			{
				free(Block);
				Block = 0i64;
			}
			LODWORD(v169) = 0;
			v19 = v172;
			if (v172)
			{
				v172 = 0i64;
				(**v19)(v19, 1i64);
			}
			if ((_BYTE)v170)
			{
				v98 = (__int64*)operator new(0xC8ui64);
				v20 = sub_1400B76F0(v98, &v164, 134i64);
				if (v20)
					v21 = v20 + 176;
				else
					v21 = 0i64;
			}
			else
			{
				v98 = (__int64*)operator new(0xC08ui64);
				v21 = sub_140091130(v98, &v164, 134i64);
			}
			v22 = v172;
			v172 = (void(__fastcall * **)(_QWORD, __int64))v21;
			if (v22)
			{
				(**v22)(v22, 1i64);
				v21 = (__int64)v172;
			}
			(*(void(__fastcall * *)(__int64))(*(_QWORD*)v21 + 16i64))(v21);
			v23 = SHIDWORD(v169) > 0;
			v24 = v108;
			v25 = v108 != 0;
			if (v108)
			{
				if (*(_QWORD*)(v108 + 16) && Component::isShowing(*(_QWORD*)(v108 + 16)))
				{
					v26 = v25 ? *(_QWORD*)(v24 + 16) : 0i64;
					if (!Component::isCurrentlyBlockedByAnotherModalComponent(v26))
					{
						if (v25)
							v27 = *(_QWORD*)(v24 + 16);
						else
							v27 = 0i64;
						Component::grabKeyboardFocusInternal(v27, 2u, 1);
					}
				}
				if (v24 && !_InterlockedAdd((volatile signed __int32*)(v24 + 8), 0xFFFFFFFF))
					(**(void(__fastcall * **)(__int64, __int64))v108)(v108, 1i64);
			}
			if (!v23)
				goto LABEL_113;
			sub_14040F1B0(&v164, &v97);
			v28 = String::lastIndexOfChar(&v97, 92);
			v29 = v28 + 1;
			v30 = String::lastIndexOfChar(&v97, 46);
			if (v30 <= v28 + 1)
			{
				if (v29 > 0)
				{
					v31 = v97;
					while (1)
					{
						v32 = *v31;
						if (!*v31)
							break;
						++v31;
						if (v32 < 0)
						{
							for (j = 64; ((unsigned __int8)v32 & j) != 0; j >>= 1)
							{
								if (j <= 8u)
									break;
								++v31;
							}
						}
						if (--v28 < 0)
						{
							String::String(&v99, v31);
							goto LABEL_81;
						}
					}
					v99 = (char*)dword_140DDCDD0;
				}
				else
				{
					v99 = v97;
					if ((*((_DWORD*)v97 - 4) & 0x30000000) == 0)
						_InterlockedIncrement((volatile signed __int32*)v97 - 4);
				}
			}
			else
			{
				String::substring(&v97, &v99, v29, v30);
			}
		LABEL_81:
			if (!(unsigned __int8)sub_14026E2D0(&v99))
			{
				v155 = dword_140DDCDD0;
				sub_140048D00(&v112, "\\ / : * ? | < > \" # % & { } $ ! ' @ + = `");
				sub_140048D00(&v109, "Setup name contains invalid charaters, please type in a name without special characters.");
				sub_14031AF20(&v100, &v109);
				v34 = (void*)(v109 - 16);
				if ((*(_DWORD*)(v109 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v34) == -1)
					j_j_free(v34);
				v98 = &v100;
				ImageCache::getFromHashCode(&v100, "\n", (int)"");
				v101 = v100;
				if ((*(_DWORD*)(v100 - 16) & 0x30000000) == 0)
					_InterlockedIncrement((volatile signed __int32*)(v100 - 16));
				v35 = (void*)(v100 - 16);
				if ((*(_DWORD*)(v100 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v35) == -1)
					j_j_free(v35);
				v149 = &v101;
				v149 = *(__int64**)sub_14031B920(&v101, &v112);
				v36 = (volatile signed __int32*)(v149 - 2);
				if ((*(_DWORD*)(v149 - 2) & 0x30000000) == 0)
					_InterlockedIncrement(v36);
				v37 = (void*)(v101 - 16);
				if ((*(_DWORD*)(v101 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v37) == -1)
					j_j_free(v37);
				sub_140048D00(&v110, "Error");
				sub_14031AF20(&v111, &v110);
				v38 = (void*)(v110 - 16);
				if ((*(_DWORD*)(v110 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v38) == -1)
					j_j_free(v38);
				sub_14040FE70(2, (unsigned int)& v111, (unsigned int)& v149, (unsigned int)& v155, 0i64);
				v39 = (void*)(v111 - 16);
				if ((*(_DWORD*)(v111 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v39) == -1)
					j_j_free(v39);
				if ((*v36 & 0x30000000) == 0 && _InterlockedDecrement(v36) == -1)
					j_j_free((void*)v36);
				v40 = (void*)(v112 - 16);
				if ((*(_DWORD*)(v112 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v40) == -1)
					j_j_free(v40);
				v41 = v99 - 16;
				if ((*((_DWORD*)v99 - 4) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v41) == -1)
					j_j_free(v41);
				v42 = v97 - 16;
				if ((*((_DWORD*)v97 - 4) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v42) == -1)
					j_j_free(v42);
			LABEL_113:
				sub_14040F290(&v164);
				if ((*v11 & 0x30000000) == 0 && _InterlockedDecrement(v11) == -1)
					j_j_free((void*)v11);
			LABEL_138:
				if ((*v5 & 0x30000000) == 0 && _InterlockedDecrement(v5) == -1)
					j_j_free((void*)v5);
				return;
			}
			v151 = v97;
			v43 = (volatile signed __int32*)(v97 - 16);
			if ((*((_DWORD*)v97 - 4) & 0x30000000) == 0)
				_InterlockedIncrement(v43);
			v103 = v97;
			if ((*v43 & 0x30000000) == 0)
				_InterlockedIncrement(v43);
			sub_140200820(ArgList, &v103, 0i64);
			v44 = qword_140EBFF78;
			v98 = (__int64*)operator new(0x220ui64);
			v45 = sub_140189A70(v98);
			sub_140274EA0(v44, v45);
			if ((*v43 & 0x30000000) == 0 && _InterlockedDecrement(v43) == -1)
				j_j_free((void*)v43);
			v46 = v99 - 16;
			if ((*((_DWORD*)v99 - 4) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v46) == -1)
				j_j_free(v46);
			if ((*v43 & 0x30000000) == 0 && _InterlockedDecrement(v43) == -1)
				j_j_free((void*)v43);
			sub_14040F290(&v164);
			if ((*v11 & 0x30000000) == 0 && _InterlockedDecrement(v11) == -1)
				j_j_free((void*)v11);
		}
		sub_1401FBBD0();
		if (*(_DWORD*)(qword_140EBFF78 + 76) > 1u)
			v6 = *(_QWORD*)(*(_QWORD*)(qword_140EBFF78 + 64) + 8i64);
		sub_1401898D0(v6);
		goto LABEL_138;
	}
	if (a2 == a1[7])
	{
		v50 = qword_140EBFF78;
		v151 = (char*)operator new(0x390ui64);
		v51 = sub_1400EFC50(v151);
		sub_140274EA0(v50, v51);
		return;
	}
	if (a2 == a1[8])
	{
		if ((unsigned __int8)sub_14022E720(*((_QWORD*)ArgList + 66)))
		{
			v52 = 0;
			v53 = *((_QWORD*)ArgList + 174);
			if (*(_BYTE*)(v53 + 456))
			{
				sub_1401FD8D0(v53, &v152);
				v54 = 0i64;
				v55 = v152;
				v56 = (v153 - v152) >> 3;
				if (v56)
				{
					do
					{
						v57 = *(_BYTE * *)(v152 + 8i64 * (int)v54);
						if (*(_QWORD*)v57 && *(_BYTE*)(*(_QWORD*)v57 + 96i64) && !v57[108])
						{
							v52 = 1;
							v54 = (v153 - v152) >> 3;
						}
						v54 = (unsigned int)(v54 + 1);
					} while ((int)v54 < v56);
					if (v52)
					{
						v157 = dword_140DDCDD0;
						sub_140048D00(
							&v113,
							"One(or more) loudspeakers are offline and calibration cannot be started, please check the connections, pow"
							"er and re - try.");
						sub_14031AF20(&v116, &v113);
						v58 = (void*)(v113 - 16);
						if ((*(_DWORD*)(v113 - 16) & 0x30000000) == 0
							&& _InterlockedDecrement((volatile signed __int32*)v58) == -1)
						{
							j_j_free(v58);
						}
						sub_140048D00(&v114, "Loudspeakers offline");
						sub_14031AF20(&v115, &v114);
						v59 = (void*)(v114 - 16);
						if ((*(_DWORD*)(v114 - 16) & 0x30000000) == 0
							&& _InterlockedDecrement((volatile signed __int32*)v59) == -1)
						{
							j_j_free(v59);
						}
						sub_14040FE70(3, (unsigned int)& v115, (unsigned int)& v116, (unsigned int)& v157, 0i64);
						v60 = (void*)(v115 - 16);
						if ((*(_DWORD*)(v115 - 16) & 0x30000000) == 0
							&& _InterlockedDecrement((volatile signed __int32*)v60) == -1)
						{
							j_j_free(v60);
						}
						v61 = (void*)(v116 - 16);
						if ((*(_DWORD*)(v116 - 16) & 0x30000000) == 0
							&& _InterlockedDecrement((volatile signed __int32*)v61) == -1)
						{
							j_j_free(v61);
						}
					LABEL_248:
						if (v152)
							sub_1400020C0(v61, v152, (v154 - v152) >> 3);
						return;
					}
				}
				v62 = sub_1401FA890(v54);
				v61 = ArgList;
				if (!*(_DWORD*)(*((_QWORD*)ArgList + 174) + 196i64))
				{
					v159 = dword_140DDCDD0;
					sub_140048D00(&v137, "The calibration microphone is not connected, please check the connection and re-try.");
					sub_14031AF20(&v140, &v137);
					v84 = (void*)(v137 - 16);
					if ((*(_DWORD*)(v137 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v84) == -1)
						j_j_free(v84);
					sub_140048D00(&v138, "Microphone not connected");
					sub_14031AF20(&v139, &v138);
					v85 = (void*)(v138 - 16);
					if ((*(_DWORD*)(v138 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v85) == -1)
						j_j_free(v85);
					sub_14040FE70(3, (unsigned int)& v139, (unsigned int)& v140, (unsigned int)& v159, 0i64);
					v86 = (void*)(v139 - 16);
					if ((*(_DWORD*)(v139 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v86) == -1)
						j_j_free(v86);
					v61 = (void*)(v140 - 16);
					if ((*(_DWORD*)(v140 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v61) == -1)
						j_j_free(v61);
					goto LABEL_248;
				}
				if (v62 == -1)
				{
					v158 = dword_140DDCDD0;
					sub_140048D00(
						&v117,
						"The microphone level is too low! There may be a connection issue, or the microphone may be faulty.");
					sub_14031AF20(&v120, &v117);
					v63 = (void*)(v117 - 16);
					if ((*(_DWORD*)(v117 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v63) == -1)
						j_j_free(v63);
					sub_140048D00(&v118, "Microphone level problem");
					sub_14031AF20(&v119, &v118);
					v64 = (void*)(v118 - 16);
					if ((*(_DWORD*)(v118 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v64) == -1)
						j_j_free(v64);
					sub_14040FE70(3, (unsigned int)& v119, (unsigned int)& v120, (unsigned int)& v158, 0i64);
					v65 = (void*)(v119 - 16);
					if ((*(_DWORD*)(v119 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v65) == -1)
						j_j_free(v65);
					v61 = (void*)(v120 - 16);
					if ((*(_DWORD*)(v120 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v61) == -1)
						j_j_free(v61);
					goto LABEL_248;
				}
				if (v62 == 1)
				{
					sub_140048D00(&v121, "No");
					sub_14031AF20(&v128, &v121);
					v66 = (void*)(v121 - 16);
					if ((*(_DWORD*)(v121 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v66) == -1)
						j_j_free(v66);
					sub_140048D00(&v122, "Yes");
					sub_14031AF20(&v127, &v122);
					v67 = (void*)(v122 - 16);
					if ((*(_DWORD*)(v122 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v67) == -1)
						j_j_free(v67);
					sub_140048D00(&v123, "The background noise measured by the microphone is high. Continue anyway?");
					sub_14031AF20(&v126, &v123);
					v68 = (void*)(v123 - 16);
					if ((*(_DWORD*)(v123 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v68) == -1)
						j_j_free(v68);
					sub_140048D00(&v124, "High background noise level");
					sub_14031AF20(&v125, &v124);
					v69 = (void*)(v124 - 16);
					if ((*(_DWORD*)(v124 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v69) == -1)
						j_j_free(v69);
					v70 = sub_14040FB40(
						1,
						(unsigned int)& v125,
						(unsigned int)& v126,
						(unsigned int)& v127,
						(__int64)& v128,
						0i64,
						0i64);
					v71 = (void*)(v125 - 16);
					if ((*(_DWORD*)(v125 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v71) == -1)
						j_j_free(v71);
					v72 = (void*)(v126 - 16);
					if ((*(_DWORD*)(v126 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v72) == -1)
						j_j_free(v72);
					v73 = (void*)(v127 - 16);
					if ((*(_DWORD*)(v127 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v73) == -1)
						j_j_free(v73);
					v61 = (void*)(v128 - 16);
					if ((*(_DWORD*)(v128 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v61) == -1)
						j_j_free(v61);
					if (!v70)
						goto LABEL_248;
					v55 = v152;
				}
				if (v55)
					sub_1400020C0(v61, v55, (v154 - v55) >> 3);
				sub_140048D00(&v129, "Cancel");
				sub_14031AF20(&v136, &v129);
				v74 = (void*)(v129 - 16);
				if ((*(_DWORD*)(v129 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v74) == -1)
					j_j_free(v74);
				sub_140048D00(&v130, "Start");
				sub_14031AF20(&v135, &v130);
				v75 = (void*)(v130 - 16);
				if ((*(_DWORD*)(v130 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v75) == -1)
					j_j_free(v75);
				sub_140048D00(
					&v131,
					"The system will automatically calibrate the correct phase between the subwoofer and monitor pair(s). Place the"
					" microphone in the listening position at ear height, and make sure the room is quiet when measuring.");
				sub_14031AF20(&v134, &v131);
				v76 = (void*)(v131 - 16);
				if ((*(_DWORD*)(v131 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v76) == -1)
					j_j_free(v76);
				sub_140048D00(&v132, "Start AutoPhase");
				sub_14031AF20(&v133, &v132);
				v77 = (void*)(v132 - 16);
				if ((*(_DWORD*)(v132 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v77) == -1)
					j_j_free(v77);
				v78 = sub_14040FB40(
					1,
					(unsigned int)& v133,
					(unsigned int)& v134,
					(unsigned int)& v135,
					(__int64)& v136,
					0i64,
					0i64);
				v79 = (void*)(v133 - 16);
				if ((*(_DWORD*)(v133 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v79) == -1)
					j_j_free(v79);
				v80 = (void*)(v134 - 16);
				if ((*(_DWORD*)(v134 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v80) == -1)
					j_j_free(v80);
				v81 = (void*)(v135 - 16);
				if ((*(_DWORD*)(v135 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v81) == -1)
					j_j_free(v81);
				v82 = (void*)(v136 - 16);
				if ((*(_DWORD*)(v136 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v82) == -1)
					j_j_free(v82);
				if (v78 == 1)
				{
					v151 = (char*)operator new(0x320ui64);
					v83 = sub_1400ECC40(v151, a1 - 87);
					sub_14040F9D0(v83 + 176);
				}
			}
			else
			{
				v160 = dword_140DDCDD0;
				sub_140048D00(&v141, "The GNet adapter is offline, please check the USB connection and re-try.");
				sub_14031AF20(&v144, &v141);
				v87 = (void*)(v141 - 16);
				if ((*(_DWORD*)(v141 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v87) == -1)
					j_j_free(v87);
				sub_140048D00(&v142, "GNet adapter offline");
				sub_14031AF20(&v143, &v142);
				v88 = (void*)(v142 - 16);
				if ((*(_DWORD*)(v142 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v88) == -1)
					j_j_free(v88);
				sub_14040FE70(3, (unsigned int)& v143, (unsigned int)& v144, (unsigned int)& v160, 0i64);
				v89 = (void*)(v143 - 16);
				if ((*(_DWORD*)(v143 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v89) == -1)
					j_j_free(v89);
				v90 = (void*)(v144 - 16);
				if ((*(_DWORD*)(v144 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v90) == -1)
					j_j_free(v90);
			}
		}
		else
		{
			v161 = dword_140DDCDD0;
			v150 = dword_140DDCDD0;
			sub_140048D00(
				&v145,
				"Please select the subwoofer and monitor pair(s) by first clicking the subwoofer icon, then clicking the monitor "
				"icon that is used to calibrate the subwoofer phase.Then click the Calibrate button again.");
			sub_14031AF20(&v148, &v145);
			v91 = (void*)(v145 - 16);
			if ((*(_DWORD*)(v145 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v91) == -1)
				j_j_free(v91);
			sub_140048D00(&v146, "Select the subwoofer and monitor pair(s)");
			sub_14031AF20(&v147, &v146);
			v92 = (void*)(v146 - 16);
			if ((*(_DWORD*)(v146 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v92) == -1)
				j_j_free(v92);
			sub_14040FB40(3, (unsigned int)& v147, (unsigned int)& v148, (unsigned int)& v150, (__int64)& v161, 0i64, 0i64);
			v93 = (void*)(v147 - 16);
			if ((*(_DWORD*)(v147 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v93) == -1)
				j_j_free(v93);
			v94 = (void*)(v148 - 16);
			if ((*(_DWORD*)(v148 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v94) == -1)
				j_j_free(v94);
		}
	}
	else if (a2 == a1[14])
	{
		v95 = qword_140EBFF78;
		sub_140274D60(qword_140EBFF78);
		if (*(_DWORD*)(v95 + 76) <= 1u)
			v96 = 0i64;
		else
			v96 = *(_QWORD*)(*(_QWORD*)(v95 + 64) + 8i64);
		sub_1401898D0(v96);
	}
*/
}

void AutoPhaseComponent::comboBoxChanged(ComboBox* comboBoxThatHasChanged)
{
/*
	__int64 v3; // rcx
	int v4; // eax
	__int64 v5; // rdx
	__int64* v6; // rcx
	__int64 v7; // r8
	__int64 v8; // rdx
	unsigned int v9; // edi
	__int64 v10; // r8
	__int64 v11; // rdx
	__int64 v12; // rax
	__int64 v13; // rcx
	__int64 v14; // rcx

	v3 = a1[10];
	if (a2 != v3)
	{
		v14 = a1[11];
		if (a2 != v14)
			return;
		v9 = 1;
		if ((unsigned int)ComboBox::getSelectedItemIndex(v14))
			v9 = 5 * (ComboBox::getSelectedItemIndex(a1[11]) + 9);
		v10 = *((_QWORD*)ArgList + 66);
		v12 = *(int*)(v10 + 268);
		v13 = *(_QWORD*)(v10 + 8);
		goto LABEL_13;
	}
	v4 = ComboBox::getSelectedItemIndex(v3);
	v6 = (__int64*)a1[12];
	v7 = *v6;
	if (!v4)
	{
		(*(void(__fastcall * *)(__int64*, _QWORD))(v7 + 88))(v6, 0i64);
		LOBYTE(v8) = 1;
		(*(void(__fastcall * *)(_QWORD, __int64))(*(_QWORD*)a1[11] + 88i64))(a1[11], v8);
		v9 = 1;
		if ((unsigned int)ComboBox::getSelectedItemIndex(a1[11]))
			v9 = 5 * (ComboBox::getSelectedItemIndex(a1[11]) + 9);
		v11 = *((_QWORD*)ArgList + 66);
		v12 = *(int*)(v11 + 268);
		v13 = *(_QWORD*)(v11 + 8);
	LABEL_13:
		LOBYTE(v10) = 1;
		sub_140218C10(*(_QWORD*)(v13 + 8 * v12 - 8), v9, v10);
		return;
	}
	LOBYTE(v5) = 1;
	(*(void(__fastcall * *)(__int64*, __int64))(v7 + 88))(v6, v5);
	(*(void(__fastcall * *)(_QWORD, _QWORD))(*(_QWORD*)a1[11] + 88i64))(a1[11], 0i64);
	if ((unsigned int)ComboBox::getSelectedItemIndex(a1[11]))
		ComboBox::getSelectedItemIndex(a1[11]);
	*(_BYTE*)(*(_QWORD*)(*(_QWORD*)(*((_QWORD*)ArgList + 66) + 8i64)
		+ 8i64 * *(int*)(*((_QWORD*)ArgList + 66) + 268i64)
		- 8)
		+ 531i64) = 0;
*/
}

void AutoPhaseComponent::paint(Graphics& g)
{
	g.fillAll(getLookAndFeel().findColour(ResizableWindow::backgroundColourId));
}

void AutoPhaseComponent::resized()
{
/*
	Component::setBounds(*(_QWORD*)(a1 + 720), *(_DWORD*)(a1 + 40) / 2 - 250, *(_DWORD*)(a1 + 44) / 2 - 250, 500, 500);
	v2 = 150;
	Component::setBounds(*(_QWORD*)(a1 + 728), *(_DWORD*)(a1 + 40) - 150, *(_DWORD*)(a1 + 44) - 40, 150, 32);
	v3 = 40;
	Component::setBounds(*(_QWORD*)(a1 + 736), *(_DWORD*)(a1 + 40) / 2 - 100, 8, 200, 40);
	Component::setBounds(*(_QWORD*)(a1 + 752), 0, *(_DWORD*)(a1 + 44) - 40, 150, 32);
	Component::setBounds(*(_QWORD*)(a1 + 768), *(_DWORD*)(a1 + 40) / 2 - 225, 0, 450, 50);
	Component::setBounds(*(_QWORD*)(a1 + 808), 0, *(_DWORD*)(a1 + 44) - 87, 150, 32);
	v4 = *(_DWORD*)(a1 + 40);
	v5 = 150;
	v6 = *(_DWORD*)(a1 + 44);
	if (v4 < 150)
		v5 = *(_DWORD*)(a1 + 40);
	v7 = v4 - v5;
	if (v7 < 150)
		v2 = v7;
	v8 = v7 - v2;
	if (v6 < 40)
		v3 = *(_DWORD*)(a1 + 44);
	v9 = *(_DWORD*)(a1 + 44) - v3;
	v10 = v9;
	if (v8 <= v9)
		v10 = v8;
	v11 = v5 + (v8 - v10) / 2;
	v12 = v9 - v10;
	v13 = *(_QWORD*)(a1 + 816);
	v14 = v3 + v12 / 2;
	v15 = *(_DWORD*)(v13 + 44);
	v16 = 76;
	v24 = v14;
	if (v6 < 76)
		v16 = *(_DWORD*)(a1 + 44);
	v17 = v6 - v16;
	if (v17 < v15)
		v15 = v17;
	Component::setBounds(v13, 0, v16, v5, v15);
	v18 = *(_QWORD*)(a1 + 744);
	v19 = v17 - v15;
	v20 = 24;
	v21 = *(_DWORD*)(v18 + 44);
	if (v19 < 24)
		v20 = v19;
	v22 = v19 - v20;
	if (v22 < v21)
		v21 = v22;
	Component::setBounds(v18, 0, v16 + v15 + v20, v5, v21);
	return Component::setBounds(*(_QWORD*)(a1 + 720), v11, v24, v10, v10);
*/
}

void AutoPhaseComponent::changeListenerCallback(ChangeBroadcaster* source)
{
/*
	char* result; // rax

	result = (char*)ArgList + 880;
	if (a2 == (char*)ArgList + 880)
		result = (char*)sub_140133CE0(*(_QWORD*)(a1 + 32));
	return result;
*/
}

unsigned __int64 AutoPhaseComponent::sub_140133CE0(__int64 a1)
{
	return 0;
/*
	__int64 v1; // r13
	int v2; // er12
	__int64 v3; // r8
	unsigned __int64 result; // rax
	__int64 v5; // r15
	char* v6; // rbx
	char* v7; // rsi
	unsigned __int64 v8; // rdi
	__int64 v9; // rdi
	char* v10; // rdx
	signed __int64 v11; // rbx
	__int64 v12; // rax
	int v13; // esi
	char* v14; // rdi
	unsigned __int64 v15; // rbp
	_QWORD* v16; // rbx
	volatile signed __int32* v17; // rbx
	char* v18; // rax
	__int128 Block; // [rsp+20h] [rbp-48h]
	char* v20; // [rsp+30h] [rbp-38h]

	v1 = a1;
	v2 = 0;
	v3 = *(_QWORD*)(a1 + 192);
	result = (unsigned __int64)((unsigned __int128)((*(_QWORD*)(a1 + 200) - v3) * (__int128)0x2AAAAAAAAAAAAAABi64) >> 64) >> 63;
	if ((*(_QWORD*)(a1 + 200) - v3) / 24)
	{
		v5 = 0i64;
		do
		{
			Block = 0i64;
			v20 = 0i64;
			v6 = *(char**)(v5 + v3);
			v7 = *(char**)(v5 + v3 + 8);
			if (v6 != v7)
			{
				v8 = (v7 - v6) >> 4;
				if (v8 > 0xFFFFFFFFFFFFFFFi64)
					sub_140001B80(a1);
				v9 = 16 * v8;
				v10 = (char*)sub_140002110(v9);
				*(_QWORD*)& Block = v10;
				v20 = &v10[v9];
				v11 = v6 - v10;
				do
				{
					*(_QWORD*)v10 = 0i64;
					*((_QWORD*)v10 + 1) = 0i64;
					v12 = *(_QWORD*)& v10[v11 + 8];
					if (v12)
						_InterlockedIncrement((volatile signed __int32*)(v12 + 8));
					*(_QWORD*)v10 = *(_QWORD*)& v10[v11];
					*((_QWORD*)v10 + 1) = *(_QWORD*)& v10[v11 + 8];
					v10 += 16;
				} while (&v10[v11] != v7);
				*((_QWORD*)& Block + 1) = v10;
			}
			v13 = 0;
			v14 = (char*)Block;
			v15 = (__int64)(*((_QWORD*)& Block + 1) - Block) >> 4;
			if (v15)
			{
				v16 = (_QWORD*)Block;
				do
				{
					sub_140165980(*v16);
					++v13;
					v16 += 2;
				} while (v13 < v15);
			}
			if ((_QWORD)Block)
			{
				if ((_QWORD)Block != *((_QWORD*)& Block + 1))
				{
					do
					{
						v17 = (volatile signed __int32*) * ((_QWORD*)v14 + 1);
						if (v17)
						{
							if (_InterlockedExchangeAdd(v17 + 2, 0xFFFFFFFF) == 1)
							{
								(**(void(__fastcall * **)(volatile signed __int32*))v17)(v17);
								if (_InterlockedExchangeAdd(v17 + 3, 0xFFFFFFFF) == 1)
									(*(void(__fastcall * *)(volatile signed __int32*))(*(_QWORD*)v17 + 8i64))(v17);
							}
						}
						v14 += 16;
					} while (v14 != *((char**)& Block + 1));
					v14 = (char*)Block;
				}
				v18 = v14;
				if (((v20 - v14) & 0xFFFFFFFFFFFFFFF0ui64) >= 0x1000)
				{
					v14 = (char*) * ((_QWORD*)v14 - 1);
					if ((unsigned __int64)(v18 - v14 - 8) > 0x1F)
						invalid_parameter_noinfo_noreturn();
				}
				j_j_free(v14);
			}
			++v2;
			v5 += 24i64;
			v3 = *(_QWORD*)(v1 + 192);
			a1 = *(_QWORD*)(v1 + 200) - v3;
			result = v2;
		} while (v2 < (unsigned __int64)(a1 / 24));
	}
	return result;
*/
}