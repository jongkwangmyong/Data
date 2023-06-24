#include "AcousticEditorComponent.h"
AcousticEditorComponent::AcousticEditorComponent()
{

}

AcousticEditorComponent::~AcousticEditorComponent()
{
/*
	*(_QWORD*)a1 = &AcousticEditorComponent::`vftable';
		v2 = (_QWORD*)(a1 + 176);
	*(_QWORD*)(a1 + 176) = &AcousticEditorComponent::`vftable';
		* (_QWORD*)(a1 + 200) = &AcousticEditorComponent::`vftable';
		* (_QWORD*)(a1 + 208) = &AcousticEditorComponent::`vftable';
		v3 = a1 + 216;
	*(_QWORD*)(a1 + 216) = &AcousticEditorComponent::`vftable';
		* (_QWORD*)(a1 + 224) = &AcousticEditorComponent::`vftable';
		v4 = 0;
	if (*(_BYTE*)(a1 + 232))
		goto LABEL_92;
	v5 = *(_QWORD*)(a1 + 392);
	if ((*(_BYTE*)(v5 + 169) & 0x10) != 0)
		goto LABEL_92;
	v6 = *(_QWORD*)(v5 + 24);
	if (v6)
	{
		if (!Component::isEnabled(v6))
			goto LABEL_92;
	}
	sub_140048D00(&v130, "Settings have changed. Do you want to save changes before exit?");
	v7 = 19;
	if (_InterlockedCompareExchange(&dword_140EC00EC, 1, 0))
	{
		v8 = 19;
		while (_InterlockedCompareExchange(&dword_140EC00EC, 1, 0))
		{
			if (--v8 < 0)
			{
				while (_InterlockedCompareExchange(&dword_140EC00EC, 1, 0))
					Sleep(0);
				break;
			}
		}
	}
	v9 = qword_140EC03E0;
	if (qword_140EC03E0)
	{
		if (*(_QWORD*)(qword_140EC03E0 + 64)
			&& (int)StringArray::indexOf(qword_140EC03E0 + 24, v130, *(_BYTE*)(qword_140EC03E0 + 56), 0) < 0)
		{
			sub_1402FDDE0(*(_QWORD*)(v9 + 64), &v138, &v130, &v130);
			goto LABEL_21;
		}
		v10 = StringArray::indexOf(v9 + 24, v130, *(_BYTE*)(v9 + 56), 0);
		if (v10 < 0)
		{
			v11 = v130;
			v138 = v130;
			v12 = *((_DWORD*)v130 - 4);
		}
		else
		{
			v11 = *(_BYTE * *)sub_140316E00(v9 + 40, (unsigned int)v10);
			v138 = v11;
			v12 = *((_DWORD*)v11 - 4);
		}
	}
	else
	{
		v11 = v130;
		v138 = v130;
		v12 = *((_DWORD*)v130 - 4);
	}
	if ((v12 & 0x30000000) == 0)
		_InterlockedIncrement((volatile signed __int32*)v11 - 4);
LABEL_21:
	_InterlockedExchange(&dword_140EC00EC, 0);
	v13 = v130 - 16;
	if ((*((_DWORD*)v130 - 4) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v13) == -1)
		j_j_free(v13);
	sub_140048D00(&v131, "No");
	if (_InterlockedCompareExchange(&dword_140EC00EC, 1, 0))
	{
		v14 = 19;
		while (_InterlockedCompareExchange(&dword_140EC00EC, 1, 0))
		{
			if (--v14 < 0)
			{
				while (_InterlockedCompareExchange(&dword_140EC00EC, 1, 0))
					Sleep(0);
				break;
			}
		}
	}
	v15 = qword_140EC03E0;
	if (qword_140EC03E0)
	{
		if (*(_QWORD*)(qword_140EC03E0 + 64)
			&& (int)StringArray::indexOf(qword_140EC03E0 + 24, v131, *(_BYTE*)(qword_140EC03E0 + 56), 0) < 0)
		{
			sub_1402FDDE0(*(_QWORD*)(v15 + 64), &v137, &v131, &v131);
			goto LABEL_40;
		}
		v16 = StringArray::indexOf(v15 + 24, v131, *(_BYTE*)(v15 + 56), 0);
		if (v16 < 0)
		{
			v17 = v131;
			v137 = v131;
			v18 = *((_DWORD*)v131 - 4);
		}
		else
		{
			v17 = *(_BYTE * *)sub_140316E00(v15 + 40, (unsigned int)v16);
			v137 = v17;
			v18 = *((_DWORD*)v17 - 4);
		}
	}
	else
	{
		v17 = v131;
		v137 = v131;
		v18 = *((_DWORD*)v131 - 4);
	}
	if ((v18 & 0x30000000) == 0)
		_InterlockedIncrement((volatile signed __int32*)v17 - 4);
LABEL_40:
	_InterlockedExchange(&dword_140EC00EC, 0);
	v19 = v131 - 16;
	if ((*((_DWORD*)v131 - 4) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v19) == -1)
		j_j_free(v19);
	sub_140048D00(&v132, "Yes");
	if (_InterlockedCompareExchange(&dword_140EC00EC, 1, 0))
	{
		v20 = 19;
		while (_InterlockedCompareExchange(&dword_140EC00EC, 1, 0))
		{
			if (--v20 < 0)
			{
				while (_InterlockedCompareExchange(&dword_140EC00EC, 1, 0))
					Sleep(0);
				break;
			}
		}
	}
	v21 = qword_140EC03E0;
	if (qword_140EC03E0)
	{
		if (*(_QWORD*)(qword_140EC03E0 + 64)
			&& (int)StringArray::indexOf(qword_140EC03E0 + 24, v132, *(_BYTE*)(qword_140EC03E0 + 56), 0) < 0)
		{
			sub_1402FDDE0(*(_QWORD*)(v21 + 64), &v136, &v132, &v132);
			goto LABEL_59;
		}
		v22 = StringArray::indexOf(v21 + 24, v132, *(_BYTE*)(v21 + 56), 0);
		if (v22 < 0)
		{
			v23 = v132;
			v136 = v132;
			v24 = *((_DWORD*)v132 - 4);
		}
		else
		{
			v23 = *(_BYTE * *)sub_140316E00(v21 + 40, (unsigned int)v22);
			v136 = v23;
			v24 = *((_DWORD*)v23 - 4);
		}
	}
	else
	{
		v23 = v132;
		v136 = v132;
		v24 = *((_DWORD*)v132 - 4);
	}
	if ((v24 & 0x30000000) == 0)
		_InterlockedIncrement((volatile signed __int32*)v23 - 4);
LABEL_59:
	_InterlockedExchange(&dword_140EC00EC, 0);
	v25 = v132 - 16;
	if ((*((_DWORD*)v132 - 4) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v25) == -1)
		j_j_free(v25);
	sub_140048D00(&v133, "Save settings");
	if (_InterlockedCompareExchange(&dword_140EC00EC, 1, 0))
	{
		while (_InterlockedCompareExchange(&dword_140EC00EC, 1, 0))
		{
			if (--v7 < 0)
			{
				while (_InterlockedCompareExchange(&dword_140EC00EC, 1, 0))
					Sleep(0);
				break;
			}
		}
	}
	v26 = qword_140EC03E0;
	if (!qword_140EC03E0)
	{
		v28 = v133;
		v135 = v133;
		v29 = *((_DWORD*)v133 - 4);
		goto LABEL_75;
	}
	if (!*(_QWORD*)(qword_140EC03E0 + 64)
		|| (int)StringArray::indexOf(qword_140EC03E0 + 24, v133, *(_BYTE*)(qword_140EC03E0 + 56), 0) >= 0)
	{
		v27 = StringArray::indexOf(v26 + 24, v133, *(_BYTE*)(v26 + 56), 0);
		if (v27 < 0)
		{
			v28 = v133;
			v135 = v133;
			v29 = *((_DWORD*)v133 - 4);
		}
		else
		{
			v28 = *(_BYTE * *)sub_140316E00(v26 + 40, (unsigned int)v27);
			v135 = v28;
			v29 = *((_DWORD*)v28 - 4);
		}
	LABEL_75:
		if ((v29 & 0x30000000) == 0)
			_InterlockedIncrement((volatile signed __int32*)v28 - 4);
		goto LABEL_77;
	}
	sub_1402FDDE0(*(_QWORD*)(v26 + 64), &v135, &v133, &v133);
LABEL_77:
	_InterlockedExchange(&dword_140EC00EC, 0);
	v30 = v133 - 16;
	if ((*((_DWORD*)v133 - 4) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v30) == -1)
		j_j_free(v30);
	v4 = (unsigned __int8)sub_14040FB40(
		1,
		(unsigned int)& v135,
		(unsigned int)& v138,
		(unsigned int)& v136,
		(__int64)& v137,
		0i64,
		0i64);
	v31 = v135 - 16;
	if ((*((_DWORD*)v135 - 4) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v31) == -1)
		j_j_free(v31);
	v32 = v136 - 16;
	if ((*((_DWORD*)v136 - 4) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v32) == -1)
		j_j_free(v32);
	v33 = v137 - 16;
	if ((*((_DWORD*)v137 - 4) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v33) == -1)
		j_j_free(v33);
	v34 = v138 - 16;
	if ((*((_DWORD*)v138 - 4) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v34) == -1)
		j_j_free(v34);
LABEL_92:
	v35 = *(_QWORD*)(a1 + 392);
	if (*(_BYTE*)(a1 + 232))
	{
		if ((*(_BYTE*)(v35 + 169) & 0x10) == 0)
		{
			v92 = *(_QWORD*)(v35 + 24);
			if (!v92 || Component::isEnabled(v92))
			{
				v93 = **(_QWORD * *)(a1 + 328);
				v94 = *(void(__fastcall * *)(__int64, __int64, _QWORD))(*(_QWORD*)v93 + 152i64);
				sub_14009F390(*(_QWORD*)(*(_QWORD*)(a1 + 248) + 512i64));
				v94(v93, v95, 0i64);
				v96 = **(_QWORD * *)(a1 + 328);
				v97 = *(void(__fastcall * *)(__int64, __int64, _QWORD))(*(_QWORD*)v96 + 184i64);
				sub_14009F390(*(_QWORD*)(*(_QWORD*)(a1 + 264) + 512i64));
				v97(v96, v98, 0i64);
				if ((*(_BYTE*)(*(_QWORD*)(a1 + 272) + 168i64) & 2) != 0)
				{
					v99 = **(_QWORD * *)(a1 + 328);
					v100 = *(void(__fastcall * *)(__int64, __int64, _QWORD))(*(_QWORD*)v99 + 528i64);
					sub_14009F390(*(_QWORD*)(*(_QWORD*)(a1 + 280) + 512i64));
					v100(v99, v101, 0i64);
				}
				if ((*(_BYTE*)(*(_QWORD*)(a1 + 288) + 168i64) & 2) != 0)
				{
					v102 = **(_QWORD * *)(a1 + 328);
					v103 = *(void(__fastcall * *)(__int64, _QWORD, _QWORD))(*(_QWORD*)v102 + 368i64);
					v104 = *(double*)sub_14009F390(*(_QWORD*)(*(_QWORD*)(a1 + 296) + 512i64)).m128_u64;
					v103(v102, (unsigned int)(int)v104, 0i64);
				}
				v105 = (unsigned __int64*)sub_14020F280(*(_QWORD*)(a1 + 328), &v142);
				v106 = String::endsWithIgnoreCase(v105, "WooferExtensionGen2");
				v107 = (void*)(v142 - 16);
				if ((*(_DWORD*)(v142 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v107) == -1)
					j_j_free(v107);
				if (v106)
				{
					v108 = *(__int64**)(a1 + 336);
					if (v108)
					{
						v109 = *v108;
						v110 = *(void(__fastcall * *)(__int64, __int64, _QWORD))(*(_QWORD*)v109 + 152i64);
						sub_14009F390(*(_QWORD*)(*(_QWORD*)(a1 + 248) + 512i64));
						v110(v109, v111, 0i64);
						v112 = **(_QWORD * *)(a1 + 336);
						v113 = *(void(__fastcall * *)(__int64, __int64, _QWORD))(*(_QWORD*)v112 + 184i64);
						sub_14009F390(*(_QWORD*)(*(_QWORD*)(a1 + 264) + 512i64));
						v113(v112, v114, 0i64);
						if ((*(_BYTE*)(*(_QWORD*)(a1 + 272) + 168i64) & 2) != 0)
						{
							v115 = **(_QWORD * *)(a1 + 336);
							v116 = *(void(__fastcall * *)(__int64, __int64, _QWORD))(*(_QWORD*)v115 + 528i64);
							sub_14009F390(*(_QWORD*)(*(_QWORD*)(a1 + 280) + 512i64));
							v116(v115, v117, 0i64);
						}
						if ((*(_BYTE*)(*(_QWORD*)(a1 + 288) + 168i64) & 2) != 0)
						{
							v118 = **(_QWORD * *)(a1 + 336);
							v119 = *(void(__fastcall * *)(__int64, _QWORD, _QWORD))(*(_QWORD*)v118 + 368i64);
							v120 = *(double*)sub_14009F390(*(_QWORD*)(*(_QWORD*)(a1 + 296) + 512i64)).m128_u64;
							v119(v118, (unsigned int)(int)v120, 0i64);
						}
					}
				}
				v121 = *((_QWORD*)ArgList + 281);
				v143 = v121;
				if ((*(_DWORD*)(v121 - 16) & 0x30000000) == 0)
					_InterlockedIncrement((volatile signed __int32*)(v121 - 16));
				sub_140200820(ArgList, &v143, 0i64);
				v122 = **(_QWORD * *)(a1 + 328);
				v123 = *(_DWORD*)(v122 + 108);
				if (v123 == 1)
				{
					*(_DWORD*)(v122 + 108) = 2;
				}
				else if (v123 == 3)
				{
					*(_DWORD*)(v122 + 108) = 4;
				}
				if (*(_DWORD*)(qword_140EBFF78 + 76) <= 1u)
					v124 = 0i64;
				else
					v124 = *(_QWORD*)(*(_QWORD*)(qword_140EBFF78 + 64) + 8i64);
				v125 = *(char**)(v124 + 16);
				v126 = (volatile signed __int32*)(v125 - 16);
				if ((*((_DWORD*)v125 - 4) & 0x30000000) == 0)
					_InterlockedIncrement(v126);
				if (!(unsigned int)compareIgnoreCase(v125, "MonitorController"))
				{
					v127 = _RTDynamicCast(
						v124,
						0i64,
						&juce::Component `RTTI Type Descriptor',
						& MonitorControllerComponent `RTTI Type Descriptor',
						0);
					sub_14018D250(v127);
				}
				if ((*v126 & 0x30000000) == 0 && _InterlockedDecrement(v126) == -1)
					j_j_free((void*)v126);
			}
		}
	}
	else if ((*(_BYTE*)(v35 + 169) & 0x10) == 0)
	{
		v36 = *(_QWORD*)(v35 + 24);
		if ((!v36 || Component::isEnabled(v36)) && v4 != 1)
		{
			v37 = *(__int64***)(a1 + 328);
			v38 = *v37;
			v39 = **v37;
			(*(void(__fastcall * *)(__int64*))(v39 + 160))(*v37);
			(*(void(__fastcall * *)(__int64*, __int64, _QWORD))(v39 + 152))(v38, v40, 0i64);
			v41 = *(__int64***)(a1 + 328);
			v42 = *v41;
			v43 = **v41;
			(*(void(__fastcall * *)(__int64*))(v43 + 192))(*v41);
			(*(void(__fastcall * *)(__int64*, __int64, _QWORD))(v43 + 184))(v42, v44, 0i64);
			if ((*(_BYTE*)(*(_QWORD*)(a1 + 272) + 168i64) & 2) != 0)
			{
				(*(void(__fastcall * *)(_QWORD, int*))(***(_QWORD * **)(a1 + 328) + 536i64))(**(_QWORD * *)(a1 + 328), &v149);
				(*(void(__fastcall * *)(_QWORD, __int64, _QWORD))(***(_QWORD * **)(a1 + 328) + 528i64))(
					**(_QWORD * *)(a1 + 328),
					v45,
					0i64);
			}
			if ((*(_BYTE*)(*(_QWORD*)(a1 + 288) + 168i64) & 2) != 0)
			{
				(*(void(__fastcall * *)(_QWORD, unsigned int*))(***(_QWORD * **)(a1 + 328) + 360i64))(
					**(_QWORD * *)(a1 + 328),
					&v134);
				(*(void(__fastcall * *)(_QWORD, _QWORD, _QWORD))(***(_QWORD * **)(a1 + 328) + 368i64))(
					**(_QWORD * *)(a1 + 328),
					v134,
					0i64);
			}
			v46 = (unsigned __int64*)sub_14020F280(*(_QWORD*)(a1 + 328), &v140);
			v47 = String::endsWithIgnoreCase(v46, "WooferExtensionGen2");
			v48 = (void*)(v140 - 16);
			if ((*(_DWORD*)(v140 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v48) == -1)
				j_j_free(v48);
			if (v47)
			{
				v49 = *(__int64***)(a1 + 336);
				if (v49)
				{
					v50 = *v49;
					v51 = *v50;
					(*(void(__fastcall * *)(__int64*))(*v50 + 160))(v50);
					(*(void(__fastcall * *)(__int64*, __int64, _QWORD))(v51 + 152))(v50, v52, 0i64);
					v53 = *(__int64***)(a1 + 336);
					v54 = *v53;
					v55 = **v53;
					(*(void(__fastcall * *)(__int64*))(v55 + 192))(*v53);
					(*(void(__fastcall * *)(__int64*, __int64, _QWORD))(v55 + 184))(v54, v56, 0i64);
					if ((*(_BYTE*)(*(_QWORD*)(a1 + 272) + 168i64) & 2) != 0)
						(*(void(__fastcall * *)(_QWORD, __int64, _QWORD))(***(_QWORD * **)(a1 + 336) + 528i64))(
							**(_QWORD * *)(a1 + 336),
							v57,
							0i64);
					if ((*(_BYTE*)(*(_QWORD*)(a1 + 288) + 168i64) & 2) != 0)
						(*(void(__fastcall * *)(_QWORD, _QWORD, _QWORD))(***(_QWORD * **)(a1 + 336) + 368i64))(
							**(_QWORD * *)(a1 + 336),
							v134,
							0i64);
				}
			}
			v58 = 0;
			v59 = *(_QWORD*)(a1 + 344);
			if (0x6DB6DB6DB6DB6DB7i64 * ((*(_QWORD*)(a1 + 352) - v59) >> 4))
			{
				v60 = 0i64;
				v61 = 0i64;
				do
				{
					v62 = *(double*)(v59 + v61 + 24);
					v147 = v62;
					v146 = *(double*)(v59 + v61 + 32);
					v148 = *(double*)(v59 + v61 + 40);
					sub_14020F280(*(_QWORD*)(a1 + 328), &v139);
					v63 = 112 * v60;
					v64 = sub_140001DA0(v144, 112 * v60 + *(_QWORD*)(a1 + 344));
					sub_140211360(v65, v64);
					v66 = v139;
					if ((unsigned int)compareIgnoreCase(v139, "twowaygen1")
						&& (unsigned int)compareIgnoreCase(v66, "twowaygen2")
						&& (unsigned int)compareIgnoreCase(v66, "threewaygen1")
						&& (unsigned int)compareIgnoreCase(v66, "threewaygen1_1")
						&& (unsigned int)compareIgnoreCase(v66, "threewaygen2")
						&& (unsigned int)compareIgnoreCase(v66, "WooferExtensionGen2"))
					{
						v67 = *(_QWORD*)(a1 + 344);
						if (!(unsigned int)String::isNotEmpty(*(_BYTE * *)(v67 + v63 + 16), "NOTCH"))
						{
							LOBYTE(v129) = 0;
							(*(void(__fastcall * *)(_QWORD, _QWORD, float*, float*, float*, int))(***(_QWORD * **)(a1 + 328) + 256i64))(
								**(_QWORD * *)(a1 + 328),
								*(unsigned int*)(v67 + v61),
								&v147,
								&v146,
								&v148,
								v129);
						}
					}
					else
					{
						v68 = *(_QWORD*)(a1 + 344);
						if ((unsigned int)String::isNotEmpty(*(_BYTE * *)(v68 + v63 + 16), "LOWSHELF"))
						{
							if ((unsigned int)String::isNotEmpty(*(_BYTE * *)(v68 + v63 + 16), "HISHELF"))
							{
								if (!(unsigned int)String::isNotEmpty(*(_BYTE * *)(v68 + v63 + 16), "NOTCH"))
								{
									LOBYTE(v129) = 0;
									(*(void(__fastcall * *)(_QWORD, _QWORD, float*, float*, float*, int))(***(_QWORD * **)(a1 + 328)
										+ 256i64))(
											**(_QWORD * *)(a1 + 328),
											(unsigned int)(*(_DWORD*)(v68 + v61) - 4),
											&v147,
											&v146,
											&v148,
											v129);
								}
							}
							else
							{
								LOBYTE(v128) = 0;
								(*(void(__fastcall * *)(_QWORD, _QWORD, float*, float*, int))(***(_QWORD * **)(a1 + 328) + 240i64))(
									**(_QWORD * *)(a1 + 328),
									(unsigned int)(*(_DWORD*)(v68 + v61) - 2),
									&v147,
									&v146,
									v128);
							}
						}
						else
						{
							LOBYTE(v128) = 0;
							(*(void(__fastcall * *)(_QWORD, _QWORD, float*, float*, int))(***(_QWORD * **)(a1 + 328) + 224i64))(
								**(_QWORD * *)(a1 + 328),
								*(unsigned int*)(v68 + v61),
								&v147,
								&v146,
								v128);
						}
					}
					v69 = (unsigned __int64*)sub_14020F280(*(_QWORD*)(a1 + 328), &v141);
					v70 = String::endsWithIgnoreCase(v69, "WooferExtensionGen2");
					v71 = (void*)(v141 - 16);
					if ((*(_DWORD*)(v141 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v71) == -1)
						j_j_free(v71);
					if (v70 && *(_QWORD*)(a1 + 336))
					{
						v72 = sub_140001DA0(v145, v63 + *(_QWORD*)(a1 + 368));
						sub_140211360(v73, v72);
						v74 = *(_QWORD*)(a1 + 344);
						if ((unsigned int)String::isNotEmpty(*(_BYTE * *)(v74 + v63 + 16), "LOWSHELF"))
						{
							if ((unsigned int)String::isNotEmpty(*(_BYTE * *)(v74 + v63 + 16), "HISHELF"))
							{
								if (!(unsigned int)String::isNotEmpty(*(_BYTE * *)(v74 + v63 + 16), "NOTCH"))
								{
									LOBYTE(v129) = 0;
									(*(void(__fastcall * *)(_QWORD, _QWORD, float*, float*, float*, int))(***(_QWORD * **)(a1 + 336)
										+ 256i64))(
											**(_QWORD * *)(a1 + 336),
											(unsigned int)(*(_DWORD*)(v74 + v61) - 4),
											&v147,
											&v146,
											&v148,
											v129);
								}
							}
							else
							{
								LOBYTE(v128) = 0;
								(*(void(__fastcall * *)(_QWORD, _QWORD, float*, float*, int))(***(_QWORD * **)(a1 + 336) + 240i64))(
									**(_QWORD * *)(a1 + 336),
									(unsigned int)(*(_DWORD*)(v74 + v61) - 2),
									&v147,
									&v146,
									v128);
							}
						}
						else
						{
							LOBYTE(v128) = 0;
							(*(void(__fastcall * *)(_QWORD, _QWORD, float*, float*, int))(***(_QWORD * **)(a1 + 336) + 224i64))(
								**(_QWORD * *)(a1 + 336),
								*(unsigned int*)(v74 + v61),
								&v147,
								&v146,
								v128);
						}
					}
					v75 = v139 - 16;
					if ((*((_DWORD*)v139 - 4) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v75) == -1)
						j_j_free(v75);
					++v58;
					v61 += 112i64;
					v59 = *(_QWORD*)(a1 + 344);
					v60 = v58;
				} while (v58 < (unsigned __int64)(0x6DB6DB6DB6DB6DB7i64 * ((*(_QWORD*)(a1 + 352) - v59) >> 4)));
				v2 = (_QWORD*)(a1 + 176);
				v3 = a1 + 216;
			}
		}
	}
	v76 = *(void(__fastcall * ***)(_QWORD, __int64))(a1 + 392);
	*(_QWORD*)(a1 + 392) = 0i64;
	if (v76)
		(**v76)(v76, 1i64);
	v77 = *(void(__fastcall * ***)(_QWORD, __int64))(a1 + 400);
	*(_QWORD*)(a1 + 400) = 0i64;
	if (v77)
		(**v77)(v77, 1i64);
	sub_140326480((char*)ArgList + 992, v3);
	v78 = *(void(__fastcall * ***)(_QWORD, __int64))(a1 + 400);
	if (v78)
		(**v78)(v78, 1i64);
	v79 = *(void(__fastcall * ***)(_QWORD, __int64))(a1 + 392);
	if (v79)
		(**v79)(v79, 1i64);
	sub_140002040(a1 + 368);
	sub_140002040(a1 + 344);
	v80 = *(void(__fastcall * ***)(_QWORD, __int64))(a1 + 320);
	if (v80)
		(**v80)(v80, 1i64);
	v81 = *(void(__fastcall * ***)(_QWORD, __int64))(a1 + 312);
	if (v81)
		(**v81)(v81, 1i64);
	v82 = *(void(__fastcall * ***)(_QWORD, __int64))(a1 + 304);
	if (v82)
		(**v82)(v82, 1i64);
	v83 = *(void(__fastcall * ***)(_QWORD, __int64))(a1 + 296);
	if (v83)
		(**v83)(v83, 1i64);
	v84 = *(void(__fastcall * ***)(_QWORD, __int64))(a1 + 288);
	if (v84)
		(**v84)(v84, 1i64);
	v85 = *(void(__fastcall * ***)(_QWORD, __int64))(a1 + 280);
	if (v85)
		(**v85)(v85, 1i64);
	v86 = *(void(__fastcall * ***)(_QWORD, __int64))(a1 + 272);
	if (v86)
		(**v86)(v86, 1i64);
	v87 = *(void(__fastcall * ***)(_QWORD, __int64))(a1 + 264);
	if (v87)
		(**v87)(v87, 1i64);
	v88 = *(void(__fastcall * ***)(_QWORD, __int64))(a1 + 256);
	if (v88)
		(**v88)(v88, 1i64);
	v89 = *(void(__fastcall * ***)(_QWORD, __int64))(a1 + 248);
	if (v89)
		(**v89)(v89, 1i64);
	v90 = *(void(__fastcall * ***)(_QWORD, __int64))(a1 + 240);
	if (v90)
		(**v90)(v90, 1i64);
	*v2 = &juce::Timer::`vftable';
		Timer::stopTimer((__int64)v2);
	return sub_140411F20(a1);*/
}

void AcousticEditorComponent::paint(Graphics& g)
{
	g.fillAll(getLookAndFeel().findColour(ResizableWindow::backgroundColourId));
}

void AcousticEditorComponent::resized()
{
/*
	Component::setBounds(a1[24].m128i_i64[1], a1[2].m128i_i32[2] - 151, a1[2].m128i_i32[3] - 36, 150, 32);
	Component::setBounds(a1[25].m128i_i64[0], 0, a1[2].m128i_i32[3] - 36, 150, 32);
	v2 = a1[2].m128i_i32[3] / 2;
	v3 = _mm_srli_si128(a1[2], 8).m128i_u64[0];
	v47 = a1[2].m128i_i64[0];
	if (SHIDWORD(v3) < v2)
		v2 = HIDWORD(v3);
	v4 = HIDWORD(v3) - v2;
	v46 = HIDWORD(v3) - v2;
	Component::setBounds(a1[19].m128i_i64[0], a1[2].m128i_i64[0], SHIDWORD(v47), v3, v2);
	v5 = 200;
	v6 = 24;
	v7 = 24;
	if ((int)v3 < 200)
		v5 = v3;
	v8 = v2 + HIDWORD(v47) + 8;
	v9 = 0;
	v52 = v3 - v5;
	v10 = v47 + 8;
	v51 = v8;
	v11 = v47 + v5;
	v12 = v5 - 16;
	v50 = v11;
	v13 = v4 - 16;
	v14 = 0;
	if (v12 > 0)
		v14 = v12;
	if (v13 > 0)
		v9 = v13;
	if (v9 < 24)
		v7 = v9;
	v15 = v8 + v7;
	Component::setBounds(a1[15].m128i_i64[0], v10, v8, v14, v7);
	v16 = v9 - v7;
	v17 = 25;
	if (v16 < 25)
		v17 = v16;
	v18 = v16 - v17;
	v19 = v17 + v15;
	Component::setBounds(a1[15].m128i_i64[1], v10, v15, v14, v17);
	v20 = a1[17].m128i_i64[0];
	v21 = 10;
	if ((*(_BYTE*)(v20 + 168) & 2) != 0)
	{
		v22 = 10;
		if (v18 < 10)
			v22 = v18;
		v23 = v18 - v22;
		v24 = v22 + v19;
		v25 = 24;
		if (v23 < 24)
			v25 = v23;
		v26 = v25 + v24;
		Component::setBounds(v20, v10, v24, v14, v25);
		v27 = v23 - v25;
		v28 = 25;
		if (v27 < 25)
			v28 = v27;
		v18 = v27 - v28;
		v19 = v28 + v26;
		Component::setBounds(a1[17].m128i_i64[1], v10, v26, v14, v28);
	}
	v29 = 10;
	if (v18 < 10)
		v29 = v18;
	v30 = v18 - v29;
	v31 = v19 + v29;
	v32 = 24;
	if (v30 < 24)
		v32 = v30;
	v33 = v32 + v31;
	v49 = v32 + v31;
	Component::setBounds(a1[16].m128i_i64[0], v10, v31, v14, v32);
	v34 = v30 - v32;
	v48 = v33;
	v35 = 25;
	v36 = 25;
	if (v34 < 25)
		v36 = v34;
	Component::setBounds(a1[16].m128i_i64[1], v10, v48, v14, v36);
	v37 = a1[18].m128i_i64[0];
	if ((*(_BYTE*)(v37 + 168) & 2) != 0)
	{
		v38 = v34 - v36;
		if (v38 < 10)
			v21 = v38;
		v39 = v38 - v21;
		v40 = v49 + v21 + v36;
		if (v39 < 24)
			v6 = v39;
		Component::setBounds(v37, v10, v40, v14, v6);
		v41 = v39 - v6;
		if (v41 < 25)
			v35 = v41;
		Component::setBounds(a1[18].m128i_i64[1], v10, v6 + v40, v14, v35);
	}
	v42 = v52 - 16;
	v43 = 0;
	v44 = 0;
	if (v52 - 16 > 0)
		v44 = v52 - 16;
	if (v46 - 16 > 0)
		v43 = v46 - 16;
	Component::setBounds(a1[20].m128i_i64[0], v50 + 8, v51, v44, v43);
	Component::setBounds(
		a1[20].m128i_i64[0],
		*(_DWORD*)(a1[20].m128i_i64[0] + 32),
		*(_DWORD*)(a1[20].m128i_i64[0] + 36),
		v42,
		v46 - 80);
	return Component::setBounds(
		a1[19].m128i_i64[1],
		*(_DWORD*)(a1[19].m128i_i64[1] + 32),
		*(_DWORD*)(a1[19].m128i_i64[1] + 36),
		v42,
		v46 - 80);
*/
}

void AcousticEditorComponent::buttonClicked(Button*)
{
/*
	if (a2 == *(_QWORD*)(a1 + 168))
	{
		*(_BYTE*)(a1 + 8) = 1;
	}
	else
	{
		if (a2 != *(_QWORD*)(a1 + 176))
			return result;
		*(_BYTE*)(a1 + 8) = 0;
	}
	v2 = *(__int64(__fastcall * ***)(_QWORD, __int64))(a1 - 200);
	if (v2)
		result = (**v2)(v2, 1i64);
	return result;
*/
}

void AcousticEditorComponent::sliderValueChanged(Slider* slider)
{
/*
	Component::setEnabled(*(_QWORD*)(a1 + 192), 1);
	v4 = *(_QWORD*)(a1 + 48);
	if (a2 == v4)
	{
		v5 = **(_QWORD * *)(a1 + 128);
		v6 = *(void(__fastcall * *)(__int64, __int64, __int64))(*(_QWORD*)v5 + 152i64);
		sub_14009F390(*(_QWORD*)(v4 + 512));
		LOBYTE(v7) = 1;
		v6(v5, v8, v7);
		v9 = (unsigned __int64*)sub_14020F280(*(_QWORD*)(a1 + 128), &v77);
		v10 = String::endsWithIgnoreCase(v9, "WooferExtensionGen2");
		v11 = v77;
		if ((*(_DWORD*)(v77 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)(v77 - 16)) == -1)
			j_j_free((void*)(v11 - 16));
		if (v10)
		{
			v12 = *(__int64**)(a1 + 136);
			if (v12)
			{
				v13 = *v12;
				v14 = *(void(__fastcall * *)(__int64, __int64, __int64))(*(_QWORD*)v13 + 152i64);
				v15 = *(_QWORD*)(a1 + 48);
			LABEL_15:
				sub_14009F390(*(_QWORD*)(v15 + 512));
				LOBYTE(v25) = 1;
				v14(v13, v26, v25);
				return;
			}
		}
	}
	else
	{
		v16 = *(_QWORD*)(a1 + 64);
		if (a2 == v16)
		{
			v17 = **(_QWORD * *)(a1 + 128);
			v18 = *(void(__fastcall * *)(__int64, __int64, __int64))(*(_QWORD*)v17 + 184i64);
			sub_14009F390(*(_QWORD*)(v16 + 512));
			LOBYTE(v19) = 1;
			v18(v17, v20, v19);
			v21 = (unsigned __int64*)sub_14020F280(*(_QWORD*)(a1 + 128), &v78);
			v22 = String::endsWithIgnoreCase(v21, "WooferExtensionGen2");
			v23 = v78;
			if ((*(_DWORD*)(v78 - 16) & 0x30000000) == 0
				&& _InterlockedDecrement((volatile signed __int32*)(v78 - 16)) == -1)
			{
				j_j_free((void*)(v23 - 16));
			}
			if (v22)
			{
				v24 = *(__int64**)(a1 + 136);
				if (v24)
				{
					v13 = *v24;
					v14 = *(void(__fastcall * *)(__int64, __int64, __int64))(*(_QWORD*)v13 + 184i64);
					v15 = *(_QWORD*)(a1 + 64);
					goto LABEL_15;
				}
			}
		}
		else
		{
			v27 = *(_QWORD*)(a1 + 80);
			if (a2 == v27)
			{
				v28 = **(_QWORD * *)(a1 + 128);
				v29 = *(void(__fastcall * *)(__int64, __int64, __int64))(*(_QWORD*)v28 + 528i64);
				sub_14009F390(*(_QWORD*)(v27 + 512));
				LOBYTE(v30) = 1;
				v29(v28, v31, v30);
				v32 = (unsigned __int64*)sub_14020F280(*(_QWORD*)(a1 + 128), &v79);
				v33 = String::endsWithIgnoreCase(v32, "WooferExtensionGen2");
				v34 = v79;
				if ((*(_DWORD*)(v79 - 16) & 0x30000000) == 0
					&& _InterlockedDecrement((volatile signed __int32*)(v79 - 16)) == -1)
				{
					j_j_free((void*)(v34 - 16));
				}
				if (v33)
				{
					v35 = *(__int64**)(a1 + 136);
					if (v35)
					{
						v36 = *v35;
						v37 = *(void(__fastcall * *)(__int64, __int64, __int64))(*(_QWORD*)v36 + 528i64);
						sub_14009F390(*(_QWORD*)(*(_QWORD*)(a1 + 80) + 512i64));
						LOBYTE(v38) = 1;
						v37(v36, v39, v38);
					}
				}
			}
			else
			{
				v40 = *(_QWORD*)(a1 + 96);
				if (a2 == v40)
				{
					v41 = **(_QWORD * *)(a1 + 128);
					v42 = *(void(__fastcall * *)(__int64, _QWORD, __int64))(*(_QWORD*)v41 + 368i64);
					v43 = *(double*)sub_14009F390(*(_QWORD*)(v40 + 512)).m128_u64;
					LOBYTE(v44) = 1;
					v42(v41, (unsigned int)(int)v43, v44);
					v45 = (unsigned __int64*)sub_14020F280(*(_QWORD*)(a1 + 128), &v80);
					v46 = String::endsWithIgnoreCase(v45, "WooferExtensionGen2");
					v47 = v80;
					if ((*(_DWORD*)(v80 - 16) & 0x30000000) == 0
						&& _InterlockedDecrement((volatile signed __int32*)(v80 - 16)) == -1)
					{
						j_j_free((void*)(v47 - 16));
					}
					if (v46)
					{
						v48 = *(__int64**)(a1 + 136);
						if (v48)
						{
							v49 = *v48;
							v50 = *(void(__fastcall * *)(__int64, _QWORD, __int64))(*(_QWORD*)v49 + 368i64);
							v51 = *(double*)sub_14009F390(*(_QWORD*)(*(_QWORD*)(a1 + 96) + 512i64)).m128_u64;
							LOBYTE(v52) = 1;
							v50(v49, (unsigned int)(int)v51, v52);
						}
					}
				}
				else
				{
					v53 = atoi(*(const char**)(a2 + 16));
					sub_140006690(&v83, **(_QWORD * *)(a1 + 128) + 232i64);
					sub_140001DA0(&v88, &v83[14 * v53 - 14]);
					if (v55)
					{
						if (v55 != v84)
						{
							v56 = v55 + 1;
							do
							{
								v57 = (_DWORD*)(v56[1] - 16i64);
								if ((*v57 & 0x30000000) == 0 && _InterlockedDecrement(v57) == -1)
									j_j_free(v57);
								v58 = (_DWORD*)(*v56 - 16i64);
								if ((*v58 & 0x30000000) == 0 && _InterlockedDecrement(v58) == -1)
									j_j_free(v58);
								v56 += 14;
							} while (v56 - 1 != v84);
							v55 = v83;
						}
						v59 = (char*)v55;
						if ((unsigned __int64)(16 * ((v85 - (__int64)v55) >> 4)) >= 0x1000)
						{
							v55 = (_QWORD*) * (v55 - 1);
							if ((unsigned __int64)(v59 - (char*)v55 - 8) > 0x1F)
								invalid_parameter_noinfo_noreturn();
						}
						j_j_free(v55);
					}
					if ((int)sub_1400497C0(a2 + 8, "frequency", v54, v55) < 0)
					{
						if ((int)sub_1400497C0(a2 + 8, "gain", v60, v61) < 0)
						{
							if ((int)sub_1400497C0(a2 + 8, "q", v62, v63) >= 0)
								v92 = sub_14009F390(*(_QWORD*)(a2 + 512)).m128_u64[0];
						}
						else
						{
							*((_QWORD*)& v91 + 1) = sub_14009F390(*(_QWORD*)(a2 + 512)).m128_u64[0];
						}
					}
					else
					{
						*(_QWORD*)& v91 = sub_14009F390(*(_QWORD*)(a2 + 512)).m128_u64[0];
					}
					v64 = sub_140001DA0(v86, &v88);
					sub_140211360(v65, v64);
					v66 = (unsigned __int64*)sub_14020F280(*(_QWORD*)(a1 + 128), &v81);
					v67 = String::endsWithIgnoreCase(v66, "WooferExtensionGen2");
					v68 = v81;
					if ((*(_DWORD*)(v81 - 16) & 0x30000000) == 0
						&& _InterlockedDecrement((volatile signed __int32*)(v81 - 16)) == -1)
					{
						j_j_free((void*)(v68 - 16));
					}
					if (v67)
					{
						v98 = v88;
						v99 = v89;
						v69 = (volatile signed __int32*)(v89 - 16);
						if ((*(_DWORD*)(v89 - 16) & 0x30000000) == 0)
							_InterlockedIncrement(v69);
						v100 = v90;
						v70 = (volatile signed __int32*)(v90 - 16);
						if ((*((_DWORD*)v90 - 4) & 0x30000000) == 0)
							_InterlockedIncrement(v70);
						v101 = v91;
						v102 = v92;
						v103 = v93;
						v104 = v94;
						v105 = v95;
						v106 = v96;
						v107 = v97;
						if (*(_QWORD*)(a1 + 136))
						{
							sub_140048D00(&v82, "notch");
							v71 = v82;
							if (v90 == v82)
								v72 = 0;
							else
								v72 = compareIgnoreCase(v90, v82);
							if ((*((_DWORD*)v71 - 4) & 0x30000000) == 0
								&& _InterlockedDecrement((volatile signed __int32*)v71 - 4) == -1)
							{
								j_j_free(v71 - 16);
							}
							if (v72)
								v98 = v88 + 12;
							v73 = sub_140001DA0(v87, &v98);
							sub_140211360(v74, v73);
						}
						if ((*v70 & 0x30000000) == 0 && _InterlockedDecrement(v70) == -1)
							j_j_free((void*)v70);
						if ((*v69 & 0x30000000) == 0 && _InterlockedDecrement(v69) == -1)
							j_j_free((void*)v69);
					}
					sub_140152750(*(_QWORD*)(a1 + 104));
					v75 = v90 - 16;
					if ((*((_DWORD*)v90 - 4) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v75) == -1)
						j_j_free(v75);
					v76 = (void*)(v89 - 16);
					if ((*(_DWORD*)(v89 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v76) == -1)
						j_j_free(v76);
				}
			}
		}
	}*/
}

void AcousticEditorComponent::comboBoxChanged(ComboBox* comboBoxThatHasChanged)
{
/*
	v4 = atoi(*(const char**)(a2 + 16));
	sub_140006690(&Block, **(_QWORD * *)(a1 + 120) + 232i64);
	v5 = (char*)Block + 112 * v4 - 112;
	v36 = *(_DWORD*)v5;
	v37 = *((_QWORD*)v5 + 1);
	v6 = (volatile signed __int32*)(v37 - 16);
	if ((*(_DWORD*)(v37 - 16) & 0x30000000) == 0)
		_InterlockedIncrement(v6);
	v7 = *((_QWORD*)v5 + 2);
	v38 = v7;
	if ((*(_DWORD*)(v7 - 16) & 0x30000000) == 0)
		_InterlockedIncrement((volatile signed __int32*)(v7 - 16));
	v39 = *(_OWORD*)(v5 + 24);
	v40 = *((_QWORD*)v5 + 5);
	v41 = *((_OWORD*)v5 + 3);
	v42 = *((_QWORD*)v5 + 8);
	v43 = *(_OWORD*)(v5 + 72);
	v44 = *(_OWORD*)(v5 + 88);
	v45 = v5[104];
	v8 = (char*)Block;
	if (Block)
	{
		if (Block != v23)
		{
			v9 = (char*)Block + 8;
			do
			{
				v10 = (_DWORD*)(v9[1] - 16i64);
				if ((*v10 & 0x30000000) == 0 && _InterlockedDecrement(v10) == -1)
					j_j_free(v10);
				v11 = (_DWORD*)(*v9 - 16i64);
				if ((*v11 & 0x30000000) == 0 && _InterlockedDecrement(v11) == -1)
					j_j_free(v11);
				v9 += 14;
			} while (v9 - 1 != v23);
			v8 = (char*)Block;
		}
		v12 = v8;
		if ((unsigned __int64)(16 * ((v24 - (__int64)v8) >> 4)) >= 0x1000)
		{
			v8 = (char*) * ((_QWORD*)v8 - 1);
			if ((unsigned __int64)(v12 - v8 - 8) > 0x1F)
				invalid_parameter_noinfo_noreturn();
		}
		j_j_free(v8);
	}
	sub_14040CD70(*(_QWORD*)(a2 + 368), &v20);
	v13 = v38;
	v38 = v20;
	v14 = (void*)(v13 - 16);
	if ((*(_DWORD*)(v13 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v14) == -1)
		j_j_free(v14);
	v15 = **(_QWORD * *)(a1 + 120);
	v26 = v36;
	v27 = v37;
	if ((*v6 & 0x30000000) == 0)
		_InterlockedIncrement(v6);
	v28 = v20;
	v16 = (volatile signed __int32*)(v20 - 16);
	if ((*(_DWORD*)(v20 - 16) & 0x30000000) == 0)
		_InterlockedIncrement(v16);
	v29 = v39;
	v30 = v40;
	v31 = v41;
	v32 = v42;
	v33 = v43;
	v34 = v44;
	v35 = v45;
	sub_140211360(v15, &v26);
	v17 = *(_QWORD*)(a1 + 96);
	sub_140150180(v17);
	v18 = *(_DWORD*)(v17 + 44);
	v19 = *(_DWORD*)(v17 + 40);
	v21.m128i_i64[0] = 0i64;
	v21.m128i_i64[1] = __PAIR64__(v18, v19);
	v25 = v21;
	Component::internalRepaintUnchecked(v17, &v25, 1);
	if ((*v16 & 0x30000000) == 0 && _InterlockedDecrement(v16) == -1)
		j_j_free((void*)v16);
	if ((*v6 & 0x30000000) == 0 && _InterlockedDecrement(v6) == -1)
		j_j_free((void*)v6);*/
}

void AcousticEditorComponent::changeListenerCallback(ChangeBroadcaster* source)
{
/*
	__int64 v3; // rbx
	__int64 v4; // rcx
	__m128i v5; // [rsp+20h] [rbp-18h] BYREF

	if (a2 == (char*)ArgList + 992)
	{
		v3 = *(_QWORD*)(a1 + 88);
		sub_140150180(v3);
		v5.m128i_i64[1] = *(_QWORD*)(v3 + 40);
		v5.m128i_i64[0] = 0i64;
		Component::internalRepaintUnchecked(v3, &v5, 1);
		v4 = *(_QWORD*)(a1 + 96);
		v5.m128i_i64[0] = 0i64;
		v5.m128i_i64[1] = *(_QWORD*)(v4 + 40);
		Component::internalRepaintUnchecked(v4, &v5, 1);
	}
*/
}