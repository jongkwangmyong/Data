#include "ReferenceLevelProgressWindow.h"
void ReferenceLevelProgressWindow::run()
{
	/*sub_140048D00(&v52, "Calibrating, please wait...");
	sub_14031AF20(&v53, &v52);
	v2 = (void*)(v52 - 16);
	if ((*(_DWORD*)(v52 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v2) == -1)
		j_j_free(v2);
	sub_14040F570(a1, &v53);
	v3 = (void*)(v53 - 16);
	if ((*(_DWORD*)(v53 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v3) == -1)
		j_j_free(v3);
	*(_QWORD*)(a1 + 536) = 0x3FE0000000000000i64;
	v4 = -30.0;
	v5 = *((_QWORD*)ArgList + 66);
	v6 = (__int64)(*(_QWORD*)(v5 + 40) - *(_QWORD*)(v5 + 32)) >> 3;
	v7 = dword_140DDCDD0;
	v57 = *(int*)(v5 + 268);
	v8 = *(_QWORD*)(*(_QWORD*)(v5 + 8) + 8 * v57 - 8);
	v64 = *(_DWORD*)(v8 + 560);
	v63 = *(_DWORD*)(v8 + 564);
	((void (*)(void))sub_1401F23E0)();
	v9 = -1;
	v10 = 0;
	v11 = ArgList;
	if ((_DWORD)v6)
	{
		do
		{
			v12 = sub_14020F280(*(_QWORD*)(*(_QWORD*)(v11[66] + 32i64) + 8i64 * v10), &v58);
			v65 = (_BYTE*)* v12;
			*v12 = (__int64)v7;
			v13 = (void*)(v58 - 16);
			if ((*(_DWORD*)(v58 - 16) & 0x30000000) == 0
				&& !_InterlockedExchangeAdd((volatile signed __int32*)v13, 0xFFFFFFFF))
			{
				j_j_free(v13);
			}
			v7 = v65;
			v14 = String::isNotEmpty(v65, "TwowayGen2");
			v11 = ArgList;
			if (!v14
				|| !(unsigned int)String::isNotEmpty(v65, "TwowayGen1")
				|| !(unsigned int)String::isNotEmpty(v65, "ThreewayGen2")
				|| !(unsigned int)String::isNotEmpty(v65, "ThreewayGen1")
				|| !(unsigned int)String::isNotEmpty(v65, "ThreewayGen1_1")
				|| !(unsigned int)String::isNotEmpty(v65, "SEMonitorGen1"))
			{
				v15 = *(_QWORD*)(*(_QWORD*)(v11[66] + 32i64) + 8i64 * v10);
				if (*(_QWORD*)v15)
				{
					if (*(_BYTE*)(*(_QWORD*)v15 + 96i64)
						&& *(_BYTE*)(v15 + 108)
						&& !(unsigned int)String::isNotEmpty(*(_BYTE * *)(v15 + 184), "soloed"))
					{
						v9 = v10;
						v10 = v6;
					}
				}
			}
			++v10;
		} while (v10 < (unsigned int)v6);
		v16 = v63;
		if (v9 >= 0)
			goto LABEL_40;
	}
	v17 = 0;
	if ((_DWORD)v6)
	{
		do
		{
			v18 = sub_14020F280(*(_QWORD*)(*(_QWORD*)(v11[66] + 32i64) + 8i64 * v17), &v59);
			v66 = (_BYTE*)* v18;
			*v18 = (__int64)v7;
			v19 = (void*)(v59 - 16);
			if ((*(_DWORD*)(v59 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v19) == -1)
				j_j_free(v19);
			v7 = v66;
			v20 = String::isNotEmpty(v66, "TwowayGen2");
			v11 = ArgList;
			if (!v20
				|| !(unsigned int)String::isNotEmpty(v66, "TwowayGen1")
				|| !(unsigned int)String::isNotEmpty(v66, "ThreewayGen2")
				|| !(unsigned int)String::isNotEmpty(v66, "ThreewayGen1")
				|| !(unsigned int)String::isNotEmpty(v66, "ThreewayGen1_1")
				|| !(unsigned int)String::isNotEmpty(v66, "SEMonitorGen1"))
			{
				v21 = *(_BYTE * *)(*(_QWORD*)(v11[66] + 32i64) + 8i64 * v17);
				if (*(_QWORD*)v21)
				{
					if (*(_BYTE*)(*(_QWORD*)v21 + 96i64) && v21[108])
					{
						v9 = v17;
						v17 = v6;
					}
				}
			}
			++v17;
		} while (v17 < (unsigned int)v6);
		v16 = v63;
		if (v9 >= 0)
		{
		LABEL_40:
			v22 = v11[66];
			v23 = (unsigned int)v9;
			v61 = (unsigned int)v9;
			v24 = sub_14020F280(*(_QWORD*)(*(_QWORD*)(v22 + 32) + 8i64 * (unsigned int)v9), &v60);
			v67 = (_BYTE*)* v24;
			*v24 = (__int64)v7;
			v25 = (void*)(v60 - 16);
			if ((*(_DWORD*)(v60 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v25) == -1)
				j_j_free(v25);
			v26 = ArgList;
			v27 = *((_QWORD*)ArgList + 66);
			v28 = *(_QWORD*)(v27 + 32);
			v29 = *(_QWORD * *)(v28 + 8i64 * (unsigned int)v9);
			v30 = 0;
			v31 = 0;
			v32 = *(_QWORD*)(v27 + 40);
			if ((int)((v32 - v28) >> 3) > 0)
			{
				v33 = 0i64;
				while (1)
				{
					v34 = *(_QWORD * *)(v33 + v28);
					if (*(_BYTE*)(*v34 + 96i64))
					{
						if (v29 == v34)
						{
							sub_140048D00(&v54, "soloed");
							v35 = &v54;
						}
						else
						{
							v36 = (_BYTE*)v34[23];
							v37 = (volatile signed __int32*)(v36 - 16);
							if ((*((_DWORD*)v36 - 4) & 0x30000000) == 0)
								_InterlockedIncrement(v37);
							v38 = String::isNotEmpty(v36, "normal");
							if ((*v37 & 0x30000000) == 0 && !_InterlockedExchangeAdd(v37, 0xFFFFFFFF))
								j_j_free((void*)v37);
							if (v38)
								goto LABEL_57;
							v34 = *(_QWORD * *)(v33 + *(_QWORD*)(v27 + 32));
							sub_140048D00(&v55, "muted");
							v35 = &v55;
						}
					}
					else
					{
						sub_140048D00(&v56, "group_off");
						v35 = &v56;
					}
					sub_14020F010(v34, v35);
				LABEL_57:
					++v31;
					v33 += 8i64;
					v32 = *(_QWORD*)(v27 + 40);
					v28 = *(_QWORD*)(v27 + 32);
					if (v31 >= (int)((v32 - v28) >> 3))
					{
						v26 = ArgList;
						v16 = v63;
						v23 = v61;
						v30 = 0;
						break;
					}
				}
			}
			if (!*(_BYTE*)(v27 + 220) && (int)((v32 - v28) >> 3) > 0)
			{
				v39 = 0i64;
				do
				{
					sub_14020D720(*(_QWORD*)(v39 + *(_QWORD*)(v27 + 32)));
					++v30;
					v39 += 8i64;
				} while (v30 < (int)((__int64)(*(_QWORD*)(v27 + 40) - *(_QWORD*)(v27 + 32)) >> 3));
				v26 = ArgList;
			}
			v26[2114] = 1;
			sub_1401FA670(v26, -30.0);
			v40 = **(_QWORD * *)(*(_QWORD*)(*((_QWORD*)ArgList + 66) + 32i64) + 8 * v23);
			LOBYTE(v41) = 1;
			(*(void(__fastcall * *)(__int64, __int64))(*(_QWORD*)v40 + 592i64))(v40, v41);
			if (v16)
			{
				while (!*(_DWORD*)(v62 + 440))
				{
					sub_1401F23E0(ArgList);
					sub_1401FA670(ArgList, v4);
					Sleep(0x3E8u);
					sub_1401F23E0(ArgList);
					v42 = ArgList;
					v43 = *((_QWORD*)ArgList + 174);
					v44 = (int) * (double*)(v43 + 264) + sub_140204C20(v43) + (int) * (double*)(v43 + 256) + 114;
					v45 = v44 < v16;
					if (v44 == v16)
					{
						Sleep(0x3E8u);
						v42 = ArgList;
						v46 = *((_QWORD*)ArgList + 174);
						v44 = (int) * (double*)(v46 + 264) + sub_140204C20(v46) + (int) * (double*)(v46 + 256) + 114;
						v45 = v44 < v16;
						if (v44 == v16)
						{
							sub_1401FA670(v42, -120.0);
							v47 = (float)((float)(-23 - v64) + (float)(v4 + 0.0)) - 8.0;
							v7 = v67;
							if (!(unsigned int)String::isNotEmpty(v67, "SEMonitorGen1"))
								v47 = v47 + 8.0;
							v48 = *(_QWORD*)(*(_QWORD*)(*((_QWORD*)ArgList + 66) + 8i64) + 8 * v57 - 8);
							*(_DWORD*)(v48 + 560) = v64;
							*(_DWORD*)(v48 + 564) = v16;
							*(float*)(v48 + 568) = v47;
							goto LABEL_81;
						}
					}
					if (v45)
					{
						if (v4 >= 0.0)
							goto LABEL_79;
						v4 = fminf(0.0, fminf(6.0, (float)(v16 - v44)) + v4);
					}
					else
					{
						if (v45 || v4 <= -50.0)
						{
						LABEL_79:
							v49 = *(_DWORD * *)(*(_QWORD*)(v42[66] + 8i64) + 8 * v57 - 8);
							v49[140] = v64;
							v49[141] = v16;
							v49[142] = -1024458752;
							sub_1401FA670(v42, -120.0);
							break;
						}
						v4 = v4 + (float)(v16 - v44);
					}
					sub_1401FA670(v42, v4);
					Sleep(0xC8u);
					sub_1401F23E0(ArgList);
					sub_1401FA670(ArgList, v4);
					Sleep(0xC8u);
					sub_1401F23E0(ArgList);
					if (v44 == v16)
						break;
				}
			}
			v7 = v67;
		LABEL_81:
			v50 = **(_QWORD * *)(*(_QWORD*)(*((_QWORD*)ArgList + 66) + 32i64) + 8 * v23);
			(*(void(__fastcall * *)(__int64, _QWORD))(*(_QWORD*)v50 + 592i64))(v50, 0i64);
			*(_QWORD*)(v62 + 536) = 0x3FF0000000000000i64;
		}
	}
	v51 = v7 - 4;
	if ((*(v7 - 4) & 0x30000000) == 0 && _InterlockedDecrement(v51) == -1)
		j_j_free(v51);*/
}
void ReferenceLevelProgressWindow::threadComplete(bool userPressedCancel)
{
	/*v56 = &juce::MessageManagerLock::`vftable';
		v57 = 0i64;
	v58 = 0;
	Mtx_init_in_situ((_Mtx_t)v59, 2);
	Cnd_init_in_situ((_Cnd_t)v60);
	v60[72] = 0;
	v61 = 0i64;
	while (!(unsigned __int8)sub_140324270(&v57))
		;
	v62 = 1;
	if (a2)
	{
		sub_1401F4680(v4, (char*)& v32 + 4, &v32, v49);
		sub_1401F2CC0(v5, HIDWORD(v32), (unsigned int)v32);
		v52 = dword_140DDCDD0;
		sub_140048D00(&v33, "Operation Canceled!");
		sub_14031AF20(&v36, &v33);
		v6 = (void*)(v33 - 16);
		if ((*(_DWORD*)(v33 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v6) == -1)
			j_j_free(v6);
		sub_140048D00(&v34, "Reference Level Calibration");
		sub_14031AF20(&v35, &v34);
		v7 = (void*)(v34 - 16);
		if ((*(_DWORD*)(v34 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v7) == -1)
			j_j_free(v7);
		sub_14040FE70(2, (unsigned int)& v35, (unsigned int)& v36, (unsigned int)& v52, 0i64);
		v8 = (void*)(v35 - 16);
		if ((*(_DWORD*)(v35 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v8) == -1)
			j_j_free(v8);
		v9 = (void*)(v36 - 16);
		if ((*(_DWORD*)(v36 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v9) == -1)
			j_j_free(v9);
	}
	else
	{
		sub_1401F4680(v4, v51, v50, &v31);
		if (v10)
		{
			v55 = dword_140DDCDD0;
			sub_140048D00(&v45, "Calibration level cannot be reached!");
			sub_14031AF20(&v48, &v45);
			v22 = (void*)(v45 - 16);
			if ((*(_DWORD*)(v45 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v22) == -1)
				j_j_free(v22);
			sub_140048D00(&v46, "Reference Level Calibration");
			sub_14031AF20(&v47, &v46);
			v23 = (void*)(v46 - 16);
			if ((*(_DWORD*)(v46 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v23) == -1)
				j_j_free(v23);
			sub_14040FE70(2, (unsigned int)& v47, (unsigned int)& v48, (unsigned int)& v55, 0i64);
			v24 = (void*)(v47 - 16);
			if ((*(_DWORD*)(v47 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v24) == -1)
				j_j_free(v24);
			v25 = (void*)(v48 - 16);
			if ((*(_DWORD*)(v48 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v25) == -1)
				j_j_free(v25);
		}
		else if (v31 > -120.0)
		{
			v54 = dword_140DDCDD0;
			sub_140048D00(&v41, "Reference level calibration was successfully completed.");
			sub_14031AF20(&v44, &v41);
			v15 = (void*)(v41 - 16);
			if ((*(_DWORD*)(v41 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v15) == -1)
				j_j_free(v15);
			sub_140048D00(&v42, "Reference Level Calibration");
			sub_14031AF20(&v43, &v42);
			v16 = (void*)(v42 - 16);
			if ((*(_DWORD*)(v42 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v16) == -1)
				j_j_free(v16);
			sub_14040FE70(3, (unsigned int)& v43, (unsigned int)& v44, (unsigned int)& v54, 0i64);
			v17 = (void*)(v43 - 16);
			if ((*(_DWORD*)(v43 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v17) == -1)
				j_j_free(v17);
			v18 = (void*)(v44 - 16);
			if ((*(_DWORD*)(v44 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v18) == -1)
				j_j_free(v18);
			if (v31 <= -120.0)
			{
				*(_BYTE*)(*(_QWORD*)(*(_QWORD*)(*((_QWORD*)ArgList + 66) + 8i64)
					+ 8i64 * *(int*)(*((_QWORD*)ArgList + 66) + 268i64)
					- 8)
					+ 556i64) = 0;
			}
			else
			{
				v19 = *((_QWORD*)ArgList + 66);
				v20 = *(_QWORD*)(v19 + 8);
				*(float*)(*(_QWORD*)(v20 + 8i64 * *(int*)(v19 + 268) - 8) + 520i64) = v31;
				*(_BYTE*)(*(_QWORD*)(v20 + 8i64 * *(int*)(v19 + 268) - 8) + 556i64) = 1;
			}
			v21 = *(_QWORD*)(a1 + 624);
			*(_BYTE*)(v21 + 208) = 1;
			Component::setEnabled(*(_QWORD*)(v21 + 304), 1);
		}
		else
		{
			v53 = dword_140DDCDD0;
			sub_140048D00(&v37, "Failed to calibrate!");
			sub_14031AF20(&v40, &v37);
			v11 = (void*)(v37 - 16);
			if ((*(_DWORD*)(v37 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v11) == -1)
				j_j_free(v11);
			sub_140048D00(&v38, "Reference Level Calibration");
			sub_14031AF20(&v39, &v38);
			v12 = (void*)(v38 - 16);
			if ((*(_DWORD*)(v38 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v12) == -1)
				j_j_free(v12);
			sub_14040FE70(2, (unsigned int)& v39, (unsigned int)& v40, (unsigned int)& v53, 0i64);
			v13 = (void*)(v39 - 16);
			if ((*(_DWORD*)(v39 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v13) == -1)
				j_j_free(v13);
			v14 = (void*)(v40 - 16);
			if ((*(_DWORD*)(v40 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v14) == -1)
				j_j_free(v14);
		}
		sub_14022E650(*((_QWORD*)ArgList + 66));
	}
	if (a1 != 176)
		(**(void(__fastcall * **)(__int64, __int64))(a1 - 176))(a1 - 176, 1i64);
	v56 = &juce::MessageManagerLock::`vftable';
		if (_InterlockedCompareExchange((volatile signed __int32*)& v61 + 1, 0, 1) == 1)
		{
			v26 = (volatile __int64*)qword_140EBFFC8;
			_InterlockedExchange((volatile __int32*)& v61 + 1, 0);
			if (v26)
				_InterlockedExchange64(v26 + 3, 0i64);
			if (v57)
			{
				WaitableEvent::signal(v57 + 72);
				v27 = v57;
				v57 = 0i64;
				if (v27)
				{
					if (_InterlockedExchangeAdd((volatile signed __int32*)(v27 + 8), 0xFFFFFFFF) == 1)
						(**(void(__fastcall * **)(__int64, __int64))v27)(v27, 1i64);
				}
			}
		}
	if (_InterlockedCompareExchange((volatile signed __int32*)& v61 + 1, 0, 1) == 1)
	{
		v28 = (volatile __int64*)qword_140EBFFC8;
		_InterlockedExchange((volatile __int32*)& v61 + 1, 0);
		if (v28)
			_InterlockedExchange64(v28 + 3, 0i64);
		if (v57)
		{
			WaitableEvent::signal(v57 + 72);
			v29 = v57;
			v57 = 0i64;
			if (v29)
			{
				if (_InterlockedExchangeAdd((volatile signed __int32*)(v29 + 8), 0xFFFFFFFF) == 1)
					(**(void(__fastcall * **)(__int64, __int64))v29)(v29, 1i64);
			}
		}
	}
	Cnd_destroy_in_situ((_Cnd_t)v60);
	Mtx_destroy_in_situ((_Mtx_t)v59);
	v30 = (void(__fastcall * **)(_QWORD, __int64))v57;
	if (v57)
	{
		if (_InterlockedExchangeAdd((volatile signed __int32*)(v57 + 8), 0xFFFFFFFF) == 1)
			(**v30)(v30, 1i64);
	}*/
}