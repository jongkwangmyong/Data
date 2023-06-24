#include "DeviceModel.h"
DeviceModel::~DeviceModel()
{

}

char DeviceModel::sub_140210CA0(__int64 a1, __int64 a2, _QWORD* a3, __int64* a4)
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
	v14[1] = (__int64)& v13;
	ImageCache::getFromHashCode(&v13, "\r\n", (int)"");
	v14[0] = v13;
	if ((*(_DWORD*)(v13 - 16) & 0x30000000) == 0)
		_InterlockedIncrement((volatile signed __int32*)(v13 - 16));
	v8 = (void*)(v13 - 16);
	if ((*(_DWORD*)(v13 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v8) == -1)
		j_j_free(v8);
	(*(void(__fastcall * *)(__int64, _QWORD*, _QWORD, _QWORD, _QWORD))(*(_QWORD*)a2 + 160i64))(a2, a3, 0i64, 0i64, 0i64);
	(*(void(__fastcall * *)(__int64, __int64*, _QWORD, _QWORD, _QWORD))(*(_QWORD*)a2 + 160i64))(
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
char DeviceModel::sub_140210130(_QWORD* a1, __int64 a2)
{
	/*void(__fastcall * v4)(_QWORD*, __int64, _QWORD*, __int64*, __int64*); // rbx
	__int64 v5; // rcx
	void(__fastcall * v6)(_QWORD*, __int64, __int64*, __int64*); // rbx
	void(__fastcall * v7)(_QWORD*, __int64, __int64*, char*); // rbx
	__int64 v8; // rax
	void(__fastcall * v9)(_QWORD*, __int64, __int64*, char*); // rbx
	__int64 v10; // rdx
	void(__fastcall * v11)(_QWORD*, __int64, __int64*, char*); // rbx
	__int64 v12; // rdx
	void(__fastcall * v13)(_QWORD*, __int64, __int64*, char*); // rbx
	__int64 v14; // rdx
	void(__fastcall * v15)(_QWORD*, __int64, __int64*, char*); // rbx
	__int64 v16; // rdx
	void(__fastcall * v17)(_QWORD*, __int64, __int64*, char*); // rbx
	__int64 v18; // rdx
	void(__fastcall * v19)(_QWORD*, __int64, __int64*, char*); // rbx
	__int64 v20; // rax
	void(__fastcall * v21)(_QWORD*, __int64, __int64*, char*); // rbx
	__int64 v22; // rax
	void(__fastcall * v23)(_QWORD*, __int64, __int64*, char*); // rbx
	__int64 v24; // rax
	void(__fastcall * v25)(_QWORD*, __int64, __int64*, char*); // rbx
	__int64 v26; // rax
	void(__fastcall * v27)(_QWORD*, __int64, __int64*, char*); // rbx
	__int64 v28; // rax
	void(__fastcall * v29)(_QWORD*, __int64, __int64*, char*); // rbx
	__int64 v30; // rax
	void(__fastcall * v31)(_QWORD*, __int64, __int64*, __int64*); // rbx
	__int64 v33; // [rsp+30h] [rbp-D0h] BYREF
	__int64 v34; // [rsp+38h] [rbp-C8h] BYREF
	char v35[8]; // [rsp+40h] [rbp-C0h] BYREF
	__int64 v36; // [rsp+48h] [rbp-B8h] BYREF
	char v37[8]; // [rsp+50h] [rbp-B0h] BYREF
	__int64 v38; // [rsp+58h] [rbp-A8h] BYREF
	char v39[8]; // [rsp+60h] [rbp-A0h] BYREF
	__int64 v40; // [rsp+68h] [rbp-98h] BYREF
	char v41[8]; // [rsp+70h] [rbp-90h] BYREF
	__int64 v42; // [rsp+78h] [rbp-88h] BYREF
	char v43[8]; // [rsp+80h] [rbp-80h] BYREF
	__int64 v44; // [rsp+88h] [rbp-78h] BYREF
	char v45[8]; // [rsp+90h] [rbp-70h] BYREF
	__int64 v46; // [rsp+98h] [rbp-68h] BYREF
	char v47[8]; // [rsp+A0h] [rbp-60h] BYREF
	__int64 v48; // [rsp+A8h] [rbp-58h] BYREF
	char v49[8]; // [rsp+B0h] [rbp-50h] BYREF
	__int64 v50; // [rsp+B8h] [rbp-48h] BYREF
	char v51[8]; // [rsp+C0h] [rbp-40h] BYREF
	__int64 v52; // [rsp+C8h] [rbp-38h] BYREF
	char v53[8]; // [rsp+D0h] [rbp-30h] BYREF
	__int64 v54; // [rsp+D8h] [rbp-28h] BYREF
	char v55[8]; // [rsp+E0h] [rbp-20h] BYREF
	__int64 v56; // [rsp+E8h] [rbp-18h] BYREF
	char v57[8]; // [rsp+F0h] [rbp-10h] BYREF
	__int64 v58; // [rsp+F8h] [rbp-8h] BYREF
	__int64 v59; // [rsp+100h] [rbp+0h] BYREF
	__int64 v60; // [rsp+108h] [rbp+8h] BYREF
	__int64 v61; // [rsp+110h] [rbp+10h] BYREF
	_QWORD v62[4]; // [rsp+118h] [rbp+18h] BYREF
	char v63; // [rsp+13Fh] [rbp+3Fh] BYREF
	char v64[31]; // [rsp+140h] [rbp+40h] BYREF
	char v65; // [rsp+15Fh] [rbp+5Fh] BYREF
	char v66[31]; // [rsp+160h] [rbp+60h] BYREF
	char v67; // [rsp+17Fh] [rbp+7Fh] BYREF
	char v68[31]; // [rsp+180h] [rbp+80h] BYREF
	char v69; // [rsp+19Fh] [rbp+9Fh] BYREF
	char v70[31]; // [rsp+1A0h] [rbp+A0h] BYREF
	char v71; // [rsp+1BFh] [rbp+BFh] BYREF
	char v72[31]; // [rsp+1C0h] [rbp+C0h] BYREF
	char v73; // [rsp+1DFh] [rbp+DFh] BYREF
	char v74[31]; // [rsp+1E0h] [rbp+E0h] BYREF
	char v75; // [rsp+1FFh] [rbp+FFh] BYREF
	__int64 v76[4]; // [rsp+200h] [rbp+100h] BYREF

	v4 = *(void(__fastcall * *)(_QWORD*, __int64, _QWORD*, __int64*, __int64*))(*a1 + 16i64);
	v5 = a1[3];
	v61 = v5;
	if ((*(_DWORD*)(v5 - 16) & 0x30000000) == 0)
		_InterlockedIncrement((volatile signed __int32*)(v5 - 16));
	sub_140048D00(v62, "Class:");
	v4(a1, a2, v62, &v61, &v61);
	v6 = *(void(__fastcall * *)(_QWORD*, __int64, __int64*, __int64*))(*a1 + 16i64);
	sub_140048D00(&v33, &unk_14046DD7E);
	sub_140048D00(&v34, "----------------------------------------------");
	v6(a1, a2, &v34, &v33);
	v7 = *(void(__fastcall * *)(_QWORD*, __int64, __int64*, char*))(*a1 + 16i64);
	v8 = sub_1402FCD90(v64, a1[10]);
	sub_140040360(v35, v8, &v63 - v8);
	sub_140048D00(&v36, "Serial:");
	v7(a1, a2, &v36, v35);
	v9 = *(void(__fastcall * *)(_QWORD*, __int64, __int64*, char*))(*a1 + 16i64);
	String::String_3((__int64)v37, v10, 0, 0);
	sub_140048D00(&v38, "Level_Sensitivity:");
	v9(a1, a2, &v38, v37);
	v11 = *(void(__fastcall * *)(_QWORD*, __int64, __int64*, char*))(*a1 + 16i64);
	String::String_3((__int64)v39, v12, 0, 0);
	sub_140048D00(&v40, "Calibration_Level:");
	v11(a1, a2, &v40, v39);
	v13 = *(void(__fastcall * *)(_QWORD*, __int64, __int64*, char*))(*a1 + 16i64);
	String::String_3((__int64)v41, v14, 0, 0);
	sub_140048D00(&v42, "Time-of-flight_Compensation:");
	v13(a1, a2, &v42, v41);
	v15 = *(void(__fastcall * *)(_QWORD*, __int64, __int64*, char*))(*a1 + 16i64);
	String::String_3((__int64)v43, v16, 0, 0);
	sub_140048D00(&v44, "Video_Delay:");
	v15(a1, a2, &v44, v43);
	v17 = *(void(__fastcall * *)(_QWORD*, __int64, __int64*, char*))(*a1 + 16i64);
	String::String_3((__int64)v45, v18, 0, 0);
	sub_140048D00(&v46, "Group_Sensitivity:");
	v17(a1, a2, &v46, v45);
	v19 = *(void(__fastcall * *)(_QWORD*, __int64, __int64*, char*))(*a1 + 16i64);
	v20 = sub_1402FCCA0(v66);
	sub_140040360(v47, v20, &v65 - v20);
	sub_140048D00(&v48, "GroupDelayCompensation:");
	v19(a1, a2, &v48, v47);
	v21 = *(void(__fastcall * *)(_QWORD*, __int64, __int64*, char*))(*a1 + 16i64);
	v22 = sub_1402FCCA0(v68);
	sub_140040360(v49, v22, &v67 - v22);
	sub_140048D00(&v50, "CalibrationGroupID:");
	v21(a1, a2, &v50, v49);
	v23 = *(void(__fastcall * *)(_QWORD*, __int64, __int64*, char*))(*a1 + 16i64);
	v24 = sub_1402FCCA0(v70);
	sub_140040360(v51, v24, &v69 - v24);
	sub_140048D00(&v52, "SubwooferGroupID:");
	v23(a1, a2, &v52, v51);
	v25 = *(void(__fastcall * *)(_QWORD*, __int64, __int64*, char*))(*a1 + 16i64);
	v26 = sub_1402FCCA0(v72);
	sub_140040360(v53, v26, &v71 - v26);
	sub_140048D00(&v54, "CalibrationStatusFlag:");
	v25(a1, a2, &v54, v53);
	v27 = *(void(__fastcall * *)(_QWORD*, __int64, __int64*, char*))(*a1 + 16i64);
	v28 = sub_1402FCCA0(v74);
	sub_140040360(v55, v28, &v73 - v28);
	sub_140048D00(&v56, "Input:");
	v27(a1, a2, &v56, v55);
	v29 = *(void(__fastcall * *)(_QWORD*, __int64, __int64*, char*))(*a1 + 16i64);
	v30 = sub_1402FCCA0(v76);
	sub_140040360(v57, v30, &v75 - v30);
	sub_140048D00(&v58, "Group_ON:");
	v29(a1, a2, &v58, v57);
	v31 = *(void(__fastcall * *)(_QWORD*, __int64, __int64*, __int64*))(*a1 + 16i64);
	sub_140048D00(&v59, &unk_14046DD63);
	sub_140048D00(&v60, "Data_End:");
	v31(a1, a2, &v60, &v59);*/
	return 1;
}
char DeviceModel::sub_140210830(__int64 a1, __int64 a2, __int64* a3, char** a4)
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
	v11 = (char**)(*(__int64(__fastcall * *)(__int64, __int64*))(*(_QWORD*)a2 + 136i64))(a2, &v42);
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
	if ((int)StringArray::addTokens((__int64)& Block, v37, ":", (char*)& unk_14046DD7D) >= 2)
	{
		if (HIDWORD(v45))
		{
			v18 = (void**)Block;
		}
		else
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
				v25 = &off_140EB1E28;
			}
			else
			{
				v25 = (void**)& v24[8 * v22];
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
__int64 DeviceModel::sub_14020F940(__int64 a1, __int64 a2)
{
	return 1;
	/*unsigned __int8 v4; // si
	__int64 v5; // rbx
	_BYTE* v6; // rbx
	__int64 v7; // rcx
	__int64 v8; // rcx
	__int64 v9; // rcx
	float v10; // xmm1_4
	char* v11; // rcx
	_BYTE* v12; // rcx
	char* v14; // [rsp+20h] [rbp-20h] BYREF
	char* v15; // [rsp+28h] [rbp-18h] BYREF
	char* v16; // [rsp+30h] [rbp-10h] BYREF
	char* String; // [rsp+78h] [rbp+38h] BYREF
	_BYTE* v18; // [rsp+80h] [rbp+40h] BYREF
	char* v19; // [rsp+88h] [rbp+48h] BYREF

	v4 = 0;
	v18 = dword_140DDCDD0;
	String = (char*)dword_140DDCDD0;
	while (1)
	{
		v5 = (*(__int64(__fastcall * *)(__int64))(*(_QWORD*)a2 + 8i64))(a2);
		if (v5 >= 0)
			v5 -= (*(__int64(__fastcall * *)(__int64))(*(_QWORD*)a2 + 168i64))(a2);
		if (v5 <= 0 || v4)
			break;
		(*(void(__fastcall * *)(__int64, __int64, _BYTE * *, char**, char*, char*))(*(_QWORD*)a1 + 32i64))(
			a1,
			a2,
			&v18,
			&String,
			v14,
			v15);
		v6 = v18;
		if ((unsigned int)String::isNotEmpty(v18, "Serial"))
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
								if ((unsigned int)String::isNotEmpty(v6, "CalibrationGroupID"))
								{
									if ((unsigned int)String::isNotEmpty(v6, "SubwooferGroupID"))
									{
										if ((unsigned int)String::isNotEmpty(v6, "CalibrationStatusFlag"))
										{
											if ((unsigned int)String::isNotEmpty(v6, "GroupDelayCompensation"))
											{
												if ((unsigned int)String::isNotEmpty(v6, "Input"))
												{
													if ((unsigned int)String::isNotEmpty(v6, "Group_ON"))
													{
														if (!(unsigned int)String::isNotEmpty(v6, "Data_End"))
															v4 = 1;
													}
													else
													{
														*(_BYTE*)(a1 + 96) = (unsigned int)String::isNotEmpty(String, "0") != 0;
													}
												}
												else
												{
													*(_DWORD*)(a1 + 192) = atoi(String);
												}
											}
											else
											{
												*(_DWORD*)(a1 + 224) = atoi(String);
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
									*(_DWORD*)(a1 + 100) = atoi(String);
								}
							}
							else
							{
								v16 = String;
								v10 = sub_140048640(&v16);
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
						v15 = String;
						v9 = *((unsigned int*)String - 4);
						if ((v9 & 0x30000000) == 0)
							_InterlockedIncrement((volatile signed __int32*)String - 4);
						*(double*)(a1 + 128) = sub_14020F700(v9, &v15);
					}
				}
				else
				{
					v14 = String;
					v8 = *((unsigned int*)String - 4);
					if ((v8 & 0x30000000) == 0)
						_InterlockedIncrement((volatile signed __int32*)String - 4);
					*(double*)(a1 + 120) = sub_14020F700(v8, &v14);
				}
			}
			else
			{
				v19 = String;
				v7 = *((unsigned int*)String - 4);
				if ((v7 & 0x30000000) == 0)
					_InterlockedIncrement((volatile signed __int32*)String - 4);
				*(double*)(a1 + 112) = sub_14020F700(v7, &v19);
			}
		}
		else
		{
			*(_QWORD*)(a1 + 80) = atoi(String);
		}
	}
	v11 = String - 16;
	if ((*((_DWORD*)String - 4) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v11) == -1)
		j_j_free(v11);
	v12 = v18 - 16;
	if ((*((_DWORD*)v18 - 4) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v12) == -1)
		j_j_free(v12);
	return v4;*/
}
__int64 DeviceModel::sub_1402107D0(__int64 a1, __int64 a2)
{
	return 1;
	/*__int64 v3; // rax
	char v5; // [rsp+47h] [rbp-11h] BYREF
	__int64 v6; // [rsp+48h] [rbp-10h] BYREF

	v3 = sub_1402FCD90(&v6, *(_QWORD*)(a1 + 80));
	sub_140040360(a2, v3, &v5 - v3);
	return a2;*/
}
char DeviceModel::sub_1402107C0()
{
	return 0;
}
__int64 DeviceModel::sub_1402107B0(__int64 a1, _DWORD* a2, _DWORD* a3)
{
	__int64 result; // rax

	result = 0i64;
	*a2 = 0;
	*a3 = 0;
	return result;
}
char DeviceModel::sub_1402107A0()
{
	return 0;
}
char DeviceModel::sub_140210790()
{
	return 0;
}
_QWORD* DeviceModel::sub_14020F670(__int64 a1, _QWORD* a2)
{
	
	return a2;
	/*sub_140048D00(a2, &unk_14046DD7F);
	return a2;*/
}
void DeviceModel::sub_14020F640(__int64 a1, _QWORD* a2)
{
	/*_DWORD* v2; // rcx

	v2 = (_DWORD*)(*a2 - 16i64);
	if ((*v2 & 0x30000000) == 0 && _InterlockedDecrement(v2) == -1)
		j_j_free(v2);*/
}
char DeviceModel::sub_140210730()
{
	return 0;
}
char DeviceModel::sub_140210720()
{
	return 0;
}
char DeviceModel::sub_140210710()
{
	return 0;
}
char DeviceModel::sub_140210700()
{
	return 0;
}
__int64 DeviceModel::sub_1402106E0()
{
	return 0i64;
}
char DeviceModel::sub_1402106D0()
{
	return 0;
}
char DeviceModel::sub_1402106C0()
{
	return 0;
}
char DeviceModel::sub_14020F610()
{
	return 0;
}
char DeviceModel::sub_1402106B0()
{
	return 0;
}
char DeviceModel::sub_1402106A0()
{
	return 0;
}
_QWORD* DeviceModel::sub_140210680(__int64 a1, _QWORD* a2)
{
	*a2 = 0i64;
	a2[1] = 0i64;
	a2[2] = 0i64;
	return a2;
}