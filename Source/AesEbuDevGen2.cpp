#include "AesEbuDevGen2.h"


char  sub_140207380(_QWORD* a1, __int64 a2)//override
{
	/*
	void(__fastcall * v4)(_QWORD*, __int64, _QWORD*, __int64*, __int64*); // rbx
	__int64 v5; // rcx
	void(__fastcall * v6)(_QWORD*, __int64, __int64*, __int64*); // rbx
	void(__fastcall * v7)(_QWORD*, __int64, __int64*, char*); // rbx
	__int64 v8; // rax
	void(__fastcall * v9)(_QWORD*, __int64, __int64*, char*); // rbx
	__int64 v10; // rax
	void(__fastcall * v11)(_QWORD*, __int64, __int64*, char*); // rbx
	__int64 v12; // rax
	void(__fastcall * v13)(_QWORD*, __int64, __int64*, char*); // rbx
	__int64 v14; // rax
	void(__fastcall * v15)(_QWORD*, __int64, __int64*, char*); // rbx
	__int64 v16; // rax
	void(__fastcall * v17)(_QWORD*, __int64, __int64*, char*); // rbx
	__int64 v18; // rax
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
	void(__fastcall * v32)(_QWORD*, __int64, __int64*, __int64*); // rbx
	__int64 v34; // [rsp+30h] [rbp-D0h] BYREF
	__int64 v35; // [rsp+38h] [rbp-C8h] BYREF
	char v36[8]; // [rsp+40h] [rbp-C0h] BYREF
	__int64 v37; // [rsp+48h] [rbp-B8h] BYREF
	char v38[8]; // [rsp+50h] [rbp-B0h] BYREF
	__int64 v39; // [rsp+58h] [rbp-A8h] BYREF
	char v40[8]; // [rsp+60h] [rbp-A0h] BYREF
	__int64 v41; // [rsp+68h] [rbp-98h] BYREF
	char v42[8]; // [rsp+70h] [rbp-90h] BYREF
	__int64 v43; // [rsp+78h] [rbp-88h] BYREF
	char v44[8]; // [rsp+80h] [rbp-80h] BYREF
	__int64 v45; // [rsp+88h] [rbp-78h] BYREF
	char v46[8]; // [rsp+90h] [rbp-70h] BYREF
	__int64 v47; // [rsp+98h] [rbp-68h] BYREF
	char v48[8]; // [rsp+A0h] [rbp-60h] BYREF
	__int64 v49; // [rsp+A8h] [rbp-58h] BYREF
	char v50[8]; // [rsp+B0h] [rbp-50h] BYREF
	__int64 v51; // [rsp+B8h] [rbp-48h] BYREF
	char v52[8]; // [rsp+C0h] [rbp-40h] BYREF
	__int64 v53; // [rsp+C8h] [rbp-38h] BYREF
	char v54[8]; // [rsp+D0h] [rbp-30h] BYREF
	__int64 v55; // [rsp+D8h] [rbp-28h] BYREF
	char v56[8]; // [rsp+E0h] [rbp-20h] BYREF
	__int64 v57; // [rsp+E8h] [rbp-18h] BYREF
	char v58[8]; // [rsp+F0h] [rbp-10h] BYREF
	__int64 v59; // [rsp+F8h] [rbp-8h] BYREF
	__int64 v60; // [rsp+100h] [rbp+0h] BYREF
	__int64 v61; // [rsp+108h] [rbp+8h] BYREF
	__int64 v62; // [rsp+110h] [rbp+10h] BYREF
	__int64 v63; // [rsp+118h] [rbp+18h] BYREF
	__int64 v64; // [rsp+120h] [rbp+20h] BYREF
	_QWORD v65[4]; // [rsp+128h] [rbp+28h] BYREF
	char v66; // [rsp+14Fh] [rbp+4Fh] BYREF
	char v67[31]; // [rsp+150h] [rbp+50h] BYREF
	char v68; // [rsp+16Fh] [rbp+6Fh] BYREF
	char v69[31]; // [rsp+170h] [rbp+70h] BYREF
	char v70; // [rsp+18Fh] [rbp+8Fh] BYREF
	char v71[31]; // [rsp+190h] [rbp+90h] BYREF
	char v72; // [rsp+1AFh] [rbp+AFh] BYREF
	char v73[31]; // [rsp+1B0h] [rbp+B0h] BYREF
	char v74; // [rsp+1CFh] [rbp+CFh] BYREF
	char v75[31]; // [rsp+1D0h] [rbp+D0h] BYREF
	char v76; // [rsp+1EFh] [rbp+EFh] BYREF
	char v77[31]; // [rsp+1F0h] [rbp+F0h] BYREF
	char v78; // [rsp+20Fh] [rbp+10Fh] BYREF
	char v79[31]; // [rsp+210h] [rbp+110h] BYREF
	char v80; // [rsp+22Fh] [rbp+12Fh] BYREF
	char v81[31]; // [rsp+230h] [rbp+130h] BYREF
	char v82; // [rsp+24Fh] [rbp+14Fh] BYREF
	char v83[31]; // [rsp+250h] [rbp+150h] BYREF
	char v84; // [rsp+26Fh] [rbp+16Fh] BYREF
	char v85[31]; // [rsp+270h] [rbp+170h] BYREF
	char v86; // [rsp+28Fh] [rbp+18Fh] BYREF
	char v87[31]; // [rsp+290h] [rbp+190h] BYREF
	char v88; // [rsp+2AFh] [rbp+1AFh] BYREF
	__int64 v89[4]; // [rsp+2B0h] [rbp+1B0h] BYREF

	v4 = *(void(__fastcall**)(_QWORD*, __int64, _QWORD*, __int64*, __int64*))(*a1 + 16i64);
	v5 = a1[3];
	v64 = v5;
	if ((*(_DWORD*)(v5 - 16) & 0x30000000) == 0)
		_InterlockedIncrement((volatile signed __int32*)(v5 - 16));
	sub_140048D00(v65, "Class:");
	v4(a1, a2, v65, &v64, &v64);
	v6 = *(void(__fastcall**)(_QWORD*, __int64, __int64*, __int64*))(*a1 + 16i64);
	sub_140048D00(&v34, &unk_14046DC4A);
	sub_140048D00(&v35, "----------------------------------------------");
	v6(a1, a2, &v35, &v34);
	v7 = *(void(__fastcall**)(_QWORD*, __int64, __int64*, char*))(*a1 + 16i64);
	v8 = sub_1402FCD90(v67, a1[10]);
	sub_140040360(v36, v8, &v66 - v8);
	sub_140048D00(&v37, "Serial:");
	v7(a1, a2, &v37, v36);
	v9 = *(void(__fastcall**)(_QWORD*, __int64, __int64*, char*))(*a1 + 16i64);
	v10 = sub_1402FCCA0(v69);
	sub_140040360(v38, v10, &v68 - v10);
	sub_140048D00(&v39, "Group_ON:");
	v9(a1, a2, &v39, v38);
	v11 = *(void(__fastcall**)(_QWORD*, __int64, __int64*, char*))(*a1 + 16i64);
	v12 = sub_1402FCCA0(v71);
	sub_140040360(v40, v12, &v70 - v12);
	sub_140048D00(&v41, "Input:");
	v11(a1, a2, &v41, v40);
	v13 = *(void(__fastcall**)(_QWORD*, __int64, __int64*, char*))(*a1 + 16i64);
	v14 = sub_1402FCCA0(v73);
	sub_140040360(v42, v14, &v72 - v14);
	sub_140048D00(&v43, "Input1_AES_EBUChannel:");
	v13(a1, a2, &v43, v42);
	v15 = *(void(__fastcall**)(_QWORD*, __int64, __int64*, char*))(*a1 + 16i64);
	v16 = sub_1402FCCA0(v75);
	sub_140040360(v44, v16, &v74 - v16);
	sub_140048D00(&v45, "Input2_AES_EBUChannel:");
	v15(a1, a2, &v45, v44);
	v17 = *(void(__fastcall**)(_QWORD*, __int64, __int64*, char*))(*a1 + 16i64);
	v18 = sub_1402FCCA0(v77);
	sub_140040360(v46, v18, &v76 - v18);
	sub_140048D00(&v47, "Input3_AES_EBUChannel:");
	v17(a1, a2, &v47, v46);
	v19 = *(void(__fastcall**)(_QWORD*, __int64, __int64*, char*))(*a1 + 16i64);
	v20 = sub_1402FCCA0(v79);
	sub_140040360(v48, v20, &v78 - v20);
	sub_140048D00(&v49, "Input4_AES_EBUChannel:");
	v19(a1, a2, &v49, v48);
	v21 = *(void(__fastcall**)(_QWORD*, __int64, __int64*, char*))(*a1 + 16i64);
	v22 = sub_1402FCCA0(v81);
	sub_140040360(v50, v22, &v80 - v22);
	sub_140048D00(&v51, "Input5_AES_EBUChannel:");
	v21(a1, a2, &v51, v50);
	v23 = *(void(__fastcall**)(_QWORD*, __int64, __int64*, char*))(*a1 + 16i64);
	v24 = sub_1402FCCA0(v83);
	sub_140040360(v52, v24, &v82 - v24);
	sub_140048D00(&v53, "Input6_AES_EBUChannel:");
	v23(a1, a2, &v53, v52);
	v25 = *(void(__fastcall**)(_QWORD*, __int64, __int64*, char*))(*a1 + 16i64);
	v26 = sub_1402FCCA0(v85);
	sub_140040360(v54, v26, &v84 - v26);
	sub_140048D00(&v55, "Input7_AES_EBUChannel:");
	v25(a1, a2, &v55, v54);
	v27 = *(void(__fastcall**)(_QWORD*, __int64, __int64*, char*))(*a1 + 16i64);
	v28 = sub_1402FCCA0(v87);
	sub_140040360(v56, v28, &v86 - v28);
	sub_140048D00(&v57, "Input8_AES_EBUChannel:");
	v27(a1, a2, &v57, v56);
	v29 = *(void(__fastcall**)(_QWORD*, __int64, __int64*, char*))(*a1 + 16i64);
	v30 = sub_1402FCCA0(v89);
	sub_140040360(v58, v30, &v88 - v30);
	sub_140048D00(&v59, "LFE_Channel:");
	v29(a1, a2, &v59, v58);
	v31 = *(void(__fastcall**)(_QWORD*, __int64, __int64*, __int64*))(*a1 + 16i64);
	sub_140048D00(&v60, &unk_14046DC6B);
	sub_140048D00(&v61, "Data_End:");
	v31(a1, a2, &v61, &v60);
	v32 = *(void(__fastcall**)(_QWORD*, __int64, __int64*, __int64*))(*a1 + 16i64);
	sub_140048D00(&v62, &unk_14046DC7A);
	sub_140048D00(&v63, " ");
	v32(a1, a2, &v63, &v62);
	return 1;
	*/
     return 0;
}

_BOOL8 __fastcall sub_140207020(__int64 a1, __int64 a2)//override
{
	/*
	bool v4; // r14
	__int64 v5; // rbx
	_BYTE* v6; // rbx
	char* v7; // rax
	char* v8; // rcx
	_BYTE* v9; // rax
	_BYTE* v10; // rcx
	char* v11; // rcx
	_BYTE* v12; // rcx
	_BYTE* v14; // [rsp+20h] [rbp-10h] BYREF
	char* String; // [rsp+78h] [rbp+48h] BYREF
	_BYTE* v16; // [rsp+80h] [rbp+50h] BYREF
	char* v17; // [rsp+88h] [rbp+58h] BYREF

	v4 = 0;
	v16 = dword_140DDCDD0;
	String = (char*)dword_140DDCDD0;
	while (1)
	{
		v5 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)a2 + 8i64))(a2);
		if (v5 >= 0)
			v5 -= (*(__int64(__fastcall**)(__int64))(*(_QWORD*)a2 + 168i64))(a2);
		if (v5 <= 0 || v4)
			break;
		(*(void(__fastcall**)(__int64, __int64, _BYTE**, char**))(*(_QWORD*)a1 + 32i64))(a1, a2, &v16, &String);
		v6 = v16;
		if ((unsigned int)String::isNotEmpty(v16, "Serial"))
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
								if ((unsigned int)String::isNotEmpty(v6, "Input5_AES_EBUChannel"))
								{
									if ((unsigned int)String::isNotEmpty(v6, "Input6_AES_EBUChannel"))
									{
										if ((unsigned int)String::isNotEmpty(v6, "Input7_AES_EBUChannel"))
										{
											if ((unsigned int)String::isNotEmpty(v6, "Input8_AES_EBUChannel"))
											{
												if ((unsigned int)String::isNotEmpty(v6, "Group_ON"))
												{
													if ((unsigned int)String::isNotEmpty(v6, "LFE_Channel"))
														v4 = (unsigned int)String::isNotEmpty(v6, "Data_End") == 0;
													else
														*(_DWORD*)(a1 + 312) = atoi(String);
												}
												else
												{
													*(_BYTE*)(a1 + 96) = (unsigned int)String::isNotEmpty(String, "0") != 0;
												}
											}
											else
											{
												*(_DWORD*)(a1 + 188) = atoi(String);
											}
										}
										else
										{
											*(_DWORD*)(a1 + 184) = atoi(String);
										}
									}
									else
									{
										*(_DWORD*)(a1 + 180) = atoi(String);
									}
								}
								else
								{
									*(_DWORD*)(a1 + 176) = atoi(String);
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
			*(_QWORD*)(a1 + 80) = atoi(String);
		}
		sub_140048D00(&v17, &unk_14046DC4B);
		v7 = String;
		String = v17;
		v17 = v7;
		v8 = v7 - 16;
		if ((*((_DWORD*)v7 - 4) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v8) == -1)
			j_j_free(v8);
		sub_140048D00(&v14, &unk_14046DC6A);
		v9 = v16;
		v16 = v14;
		v14 = v9;
		v10 = v9 - 16;
		if ((*((_DWORD*)v9 - 4) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v10) == -1)
			j_j_free(v10);
	}
	v11 = String - 16;
	if ((*((_DWORD*)String - 4) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v11) == -1)
		j_j_free(v11);
	v12 = v16 - 16;
	if ((*((_DWORD*)v16 - 4) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v12) == -1)
		j_j_free(v12);
	return v4;
	*/
}


__int64  sub_140206C50(__int64 a1, __int64 a2, __int64 a3, __int64 a4, char a5, char a6)//override
{
	/*
	__int64 result; // rax
	int v8; // er9
	char v9; // r10
	int v10; // ebx
	_QWORD* v11; // rdi
	_DWORD* v12; // rax
	_DWORD* v13; // rax
	__int64 v14; // rdx
	__int64 v15; // rdx
	__int64 v16; // rdx
	__int64 v17; // rdx
	__int64 v18; // rdx
	__int64 v19; // rdx
	__int64 v20; // rdx
	__int64 v21; // rdx
	__int64 v22; // rdx
	_QWORD* v23; // rdi
	int v24; // ebx
	_DWORD* v25; // rax
	__int64 v26; // rdx
	_DWORD* v27; // rax
	__int64 v28; // rdx
	__int64 v29; // rdx
	__int64 v30; // rdx
	__int64 v31; // rdx
	__int64 v32; // rdx
	__int64 v33; // rdx
	__int64 v34; // rdx
	__int64 v35; // rdx

	if (!a6)
		*(_DWORD*)(a1 + 192) = a2;
	result = sub_140210740(a1, a2, a3, (unsigned int)a2);
	if ((_BYTE)result && a5 && !v9 && (v8 & 0xFFFFFFFB) == 0)
	{
		v10 = *(_DWORD*)(a1 + 72);
		v11 = *(_QWORD**)(a1 + 56);
		sub_140007A80(v11);
		v12 = (_DWORD*)*v11;
		++v12[5];
		**(_BYTE**)v12 = v10;
		v13 = (_DWORD*)*v11;
		++v13[5];
		*(_BYTE*)(*(_QWORD*)v13 + 1i64) = 68;
		sub_140007AF0(*v11, 0i64);
		sub_140007AF0(*v11, v14);
		sub_140007AF0(*v11, v15);
		sub_140007AF0(*v11, v16);
		sub_140007AF0(*v11, v17);
		sub_140007AF0(*v11, v18);
		sub_140007AF0(*v11, v19);
		sub_140007AF0(*v11, v20);
		sub_140007AF0(*v11, v21);
		sub_140007AF0(*v11, v22);
		*(_DWORD*)(*v11 + 12i64) = 15;
		sub_140212F70(*(_QWORD*)(a1 + 64), *(_QWORD*)(a1 + 56));
		v23 = *(_QWORD**)(a1 + 56);
		v24 = *(_DWORD*)(a1 + 72);
		sub_140007A80(v23);
		v25 = (_DWORD*)*v23;
		LOBYTE(v26) = 1;
		++v25[5];
		**(_BYTE**)v25 = v24;
		v27 = (_DWORD*)*v23;
		++v27[5];
		*(_BYTE*)(*(_QWORD*)v27 + 1i64) = 68;
		sub_140007AF0(*v23, v26);
		sub_140007AF0(*v23, 0i64);
		sub_140007AF0(*v23, v28);
		sub_140007AF0(*v23, v29);
		sub_140007AF0(*v23, v30);
		sub_140007AF0(*v23, v31);
		sub_140007AF0(*v23, v32);
		sub_140007AF0(*v23, v33);
		sub_140007AF0(*v23, v34);
		sub_140007AF0(*v23, v35);
		*(_DWORD*)(*v23 + 12i64) = 15;
		result = sub_140212F70(*(_QWORD*)(a1 + 64), *(_QWORD*)(a1 + 56));
	}
	return result;
	*/
	return 0;
}

__int64  sub_140206C40(__int64 a1)//override
{
	return *(unsigned int*)(a1 + 192);
}

char sub_1402067E0()//override
{
	return 0;
}

__int64  sub_140206BD0(unsigned int* a1, int a2)//override
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
	case 5:
		return a1[44];
	case 6:
		return a1[45];
	case 7:
		return a1[46];
	case 8:
		return a1[47];
	}
	return 0i64;
}

__int64  sub_140206940(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, int a6, int a7, int a8, int a9, char a10, char a11)//override
{
	/*
	__int64 result; // rax
	int v13; // eax
	int v14; // ecx
	_QWORD* v15; // rdi
	int v16; // ebx
	_DWORD* v17; // rax
	_DWORD* v18; // rax
	__int64 v19; // rdx
	__int64 v20; // rdx
	__int64 v21; // rdx
	__int64 v22; // rdx
	__int64 v23; // rdx
	__int64 v24; // rdx
	__int64 v25; // rdx
	__int64 v26; // rdx
	__int64 v27; // rdx
	_QWORD* v28; // rdi
	int v29; // ebx
	_DWORD* v30; // rax
	__int64 v31; // rdx
	_DWORD* v32; // rax
	__int64 v33; // rdx
	__int64 v34; // rdx
	__int64 v35; // rdx
	__int64 v36; // rdx
	__int64 v37; // rdx
	__int64 v38; // rdx
	__int64 v39; // rdx
	__int64 v40; // rdx

	if (!a11)
	{
		*(_DWORD*)(a1 + 172) = a5;
		*(_DWORD*)(a1 + 176) = a6;
		*(_DWORD*)(a1 + 180) = a7;
		*(_DWORD*)(a1 + 184) = a8;
		*(_DWORD*)(a1 + 188) = a9;
		*(_DWORD*)(a1 + 160) = a2;
		*(_DWORD*)(a1 + 164) = a3;
		*(_DWORD*)(a1 + 168) = a4;
	}
	result = sub_140210740(a1, a2, a3, a4);
	if ((_BYTE)result && a10)
	{
		if (*(_DWORD*)(a1 + 192) == 3)
		{
			v13 = *(_DWORD*)(a1 + 312);
			if (v13 > 0)
				pow(2.0, (double)(v13 - 1));
			sub_14021BE20(
				*(_DWORD*)(a1 + 164)
				+ 4
				* (*(_DWORD*)(a1 + 168)
					+ 4
					* (*(_DWORD*)(a1 + 172)
						+ 4
						* (*(_DWORD*)(a1 + 176) + 4 * (*(_DWORD*)(a1 + 180) + 4 * (*(_DWORD*)(a1 + 184) + 4 * *(_DWORD*)(a1 + 188)))))),
				*(_QWORD*)(a1 + 56),
				*(_DWORD*)(a1 + 72),
				0,
				2);
			sub_140212F70(*(_QWORD*)(a1 + 64), *(_QWORD*)(a1 + 56));
			sub_14021BE20(v14, *(_QWORD*)(a1 + 56), *(_DWORD*)(a1 + 72), 1, 2);
		}
		else
		{
			v15 = *(_QWORD**)(a1 + 56);
			v16 = *(_DWORD*)(a1 + 72);
			sub_140007A80(v15);
			v17 = (_DWORD*)*v15;
			++v17[5];
			**(_BYTE**)v17 = v16;
			v18 = (_DWORD*)*v15;
			++v18[5];
			*(_BYTE*)(*(_QWORD*)v18 + 1i64) = 68;
			sub_140007AF0(*v15, 0i64);
			sub_140007AF0(*v15, v19);
			sub_140007AF0(*v15, v20);
			sub_140007AF0(*v15, v21);
			sub_140007AF0(*v15, v22);
			sub_140007AF0(*v15, v23);
			sub_140007AF0(*v15, v24);
			sub_140007AF0(*v15, v25);
			sub_140007AF0(*v15, v26);
			sub_140007AF0(*v15, v27);
			*(_DWORD*)(*v15 + 12i64) = 15;
			sub_140212F70(*(_QWORD*)(a1 + 64), *(_QWORD*)(a1 + 56));
			v28 = *(_QWORD**)(a1 + 56);
			v29 = *(_DWORD*)(a1 + 72);
			sub_140007A80(v28);
			v30 = (_DWORD*)*v28;
			LOBYTE(v31) = 1;
			++v30[5];
			**(_BYTE**)v30 = v29;
			v32 = (_DWORD*)*v28;
			++v32[5];
			*(_BYTE*)(*(_QWORD*)v32 + 1i64) = 68;
			sub_140007AF0(*v28, v31);
			sub_140007AF0(*v28, 0i64);
			sub_140007AF0(*v28, v33);
			sub_140007AF0(*v28, v34);
			sub_140007AF0(*v28, v35);
			sub_140007AF0(*v28, v36);
			sub_140007AF0(*v28, v37);
			sub_140007AF0(*v28, v38);
			sub_140007AF0(*v28, v39);
			sub_140007AF0(*v28, v40);
			*(_DWORD*)(*v28 + 12i64) = 15;
		}
		result = sub_140212F70(*(_QWORD*)(a1 + 64), *(_QWORD*)(a1 + 56));
	}
	return result;
	*/
	return 0;
}

__int64  sub_140206F50(unsigned int* a1)//override
{
	/*
	int v3; // [rsp+30h] [rbp-38h]
	char v4; // [rsp+48h] [rbp-20h]
	char v5; // [rsp+50h] [rbp-18h]

	v5 = 0;
	v4 = 1;
	(*(void(__fastcall**)(unsigned int*, _QWORD, _QWORD, _QWORD, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, char, char))(*(_QWORD*)a1 + 104i64))(
		a1,
		a1[40],
		a1[41],
		a1[42],
		a1[43],
		a1[44],
		a1[45],
		a1[46],
		a1[47],
		v4,
		v5);
	LOBYTE(v3) = 0;
	return (*(__int64(__fastcall**)(unsigned int*, _QWORD, _QWORD, _QWORD, unsigned int, unsigned int, int))(*(_QWORD*)a1 + 400i64))(
		a1,
		a1[78],
		a1[80],
		a1[76],
		a1[77],
		a1[79],
		v3);
	*/

	return 0;
}

bool  sub_140206E40(__int64 a1, __int64 a2, __int64 a3, __int64 a4, char a5, char a6, char a7, char a8, char a9, char a10, int a11, int a12)//override
{
	/*
	int v13; // ecx
	char v14; // r9
	char v15; // r10
	unsigned __int8 v16; // r11
	__int64 v17; // r9
	__int64 v18; // r8
	char v19; // dl
	bool result; // al

	result = 0;
	if ((unsigned __int8)sub_140210740(a1, a2, a3, a4))
	{
		sub_14021C2C0(
			v13,
			*(_QWORD*)(a1 + 56),
			*(_DWORD*)(a1 + 72),
			v16,
			v15,
			v14,
			a5,
			a6,
			a7,
			a8,
			a9,
			a10,
			0,
			0,
			a11,
			a12);
		sub_140212F70(*(_QWORD*)(a1 + 64), *(_QWORD*)(a1 + 56));
		*(_DWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 56) + 8i64) + 20i64) = 1;
		v17 = *(_QWORD*)(*(_QWORD*)(a1 + 56) + 8i64);
		v18 = *(int*)(v17 + 20);
		v19 = *(_BYTE*)(v18 + *(_QWORD*)v17);
		*(_DWORD*)(v17 + 20) = v18 + 1;
		if (v19 == 9)
			result = 1;
	}
	return result;
	*/
		return 0;
}

double sub_140206E00()//override
{
	return 0.0;
}
double sub_140206DE0()//override
{
	return 0.0;
}

char sub_140206E30()//override
{
	return 1;
}

double sub_140206E20()//override
{
	return 0.0;
}

char sub_140206910()//override
{
	return 0;
}

bool  sub_140206890(__int64 a1, __int64 a2, __int64 a3)//override
{
	/*
	__int64* v3; // r9
	__int64 v4; // rax
	bool result; // al
	__int64 v6; // [rsp+20h] [rbp-48h] BYREF
	char v7[40]; // [rsp+28h] [rbp-40h] BYREF

	result = 0;
	if ((unsigned __int8)sub_140210740(a1, a2, a3, a1))
	{
		v4 = *v3;
		v6 = 0i64;
		if ((*(unsigned __int8(__fastcall**)(__int64*, char*, __int64*))(v4 + 200))(v3, v7, &v6))
		{
			if ((v7[0] & 1) != 0)
				result = 1;
		}
	}
	return result;
	*/
	return 0;
}

__int64 sub_1402067D0()//override
{
	return 0i64;
}

__int64 sub_1402067B0()//override
{
	return 0i64;
}

__int64  sub_140206880(__int64 a1, _DWORD* a2)//override
{
	__int64 result; // rax

	result = *(unsigned int*)(a1 + 288);
	*a2 = result;
	return result;
}

char sub_140206870()//override
{
	return 0;
}

void  sub_140206860(__int64 a1, _DWORD* a2)//override
{
	*a2 = 0;
}

_QWORD*  sub_140206820(__int64 a1, _QWORD* a2)//override
{
	//sub_140048D00(a2, "0");
	return a2;
}

void  sub_1402067F0(__int64 a1, _QWORD* a2)//override
{
	/*
	_DWORD* v2; // rcx

	v2 = (_DWORD*)(*a2 - 16i64);
	if ((*v2 & 0x30000000) == 0 && _InterlockedDecrement(v2) == -1)
		j_j_free(v2);
	*/
}

_DWORD* __fastcall sub_140206730(_DWORD* a1, _DWORD* a2, _DWORD* a3, _DWORD* a4, _DWORD* a5, _DWORD* a6)//override
{
	_DWORD* result; // rax

	*a2 = a1[78];
	*a3 = a1[80];
	*a4 = a1[76];
	*a5 = a1[77];
	result = a6;
	*a6 = a1[79];
	return result;
}

__int64  sub_140206690(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, int a6)//override
{
	/*
	__int64 result; // rax
	int v8; // ecx
	__int64 v9; // rcx

	*(_DWORD*)(a1 + 308) = a5;
	*(_DWORD*)(a1 + 316) = a6;
	*(_DWORD*)(a1 + 312) = a2;
	*(_DWORD*)(a1 + 304) = a4;
	result = sub_140210740(a1, a2, a3, a4);
	if ((_BYTE)result)
	{
		LOBYTE(v8) = *(_DWORD*)(a1 + 308) != 0;
		sub_14021C230(v8, *(_QWORD*)(a1 + 56), *(_DWORD*)(a1 + 72), *(_DWORD*)(a1 + 312), *(_DWORD*)(a1 + 304) != 0, v8);
		sub_140212F70(*(_QWORD*)(a1 + 64), *(_QWORD*)(a1 + 56));
		sub_14021C080(v9, *(_QWORD*)(a1 + 56), *(unsigned int*)(a1 + 72));
		result = sub_140212F70(*(_QWORD*)(a1 + 64), *(_QWORD*)(a1 + 56));
	}
	return result;
	*/
	return 0;
}

__int64 sub_140206680()//override
{
	return 0i64;
}
__int64 sub_140206670()//override
{
	return 0i64;
}

__int64  sub_140206640(__int64 a1, _QWORD* a2)//override
{
	(*(void(__fastcall**)(_QWORD, _QWORD*))(*(_QWORD*)*a2 + 176i64))(*a2, a2 + 1);
	return 0i64;
}

char sub_140206630()//override
{
	return 1;
}

char  sub_140206570(__int64 a1, __int64 a2, __int64 a3, __int64 a4)//override
{
	/*
	__int64 v5; // rdx
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
	v6 = **(_QWORD**)(a1 + 56);
	++* (_DWORD*)(v6 + 20);
	**(_BYTE**)v6 = v5;
	LOBYTE(v5) = 51;
	v7 = **(_DWORD***)(a1 + 56);
	++v7[5];
	*(_BYTE*)(*(_QWORD*)v7 + 1i64) = 21;
	sub_140007AF0(**(_QWORD**)(a1 + 56), v5);
	sub_140007AF0(**(_QWORD**)(a1 + 56), 0i64);
	*(_DWORD*)(**(_QWORD**)(a1 + 56) + 12i64) = 7;
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
	return result;
	*/
		return 0;
}

char  sub_1402064B0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)//override
{
	/*
	__int64 v5; // rdx
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
	v6 = **(_QWORD**)(a1 + 56);
	++* (_DWORD*)(v6 + 20);
	**(_BYTE**)v6 = v5;
	LOBYTE(v5) = 51;
	v7 = **(_DWORD***)(a1 + 56);
	++v7[5];
	*(_BYTE*)(*(_QWORD*)v7 + 1i64) = 21;
	sub_140007AF0(**(_QWORD**)(a1 + 56), v5);
	sub_140007AF0(**(_QWORD**)(a1 + 56), 0i64);
	*(_DWORD*)(**(_QWORD**)(a1 + 56) + 12i64) = 7;
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
	return result;
	*/
	return 0;
}

char  sub_1402063F0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)//override
{
	/*
	__int64 v5; // rdx
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
	v6 = **(_QWORD**)(a1 + 56);
	++* (_DWORD*)(v6 + 20);
	**(_BYTE**)v6 = v5;
	LOBYTE(v5) = 52;
	v7 = **(_DWORD***)(a1 + 56);
	++v7[5];
	*(_BYTE*)(*(_QWORD*)v7 + 1i64) = 21;
	sub_140007AF0(**(_QWORD**)(a1 + 56), v5);
	LOBYTE(v8) = -1;
	sub_140007AF0(**(_QWORD**)(a1 + 56), v8);
	*(_DWORD*)(**(_QWORD**)(a1 + 56) + 12i64) = 7;
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
	return result;
	*/
		return 0;
}

char sub_140206350()//override
{
	return 0;
}

char  sub_140206390(__int64 a1, __int64 a2, __int64 a3)//override
{
	/*
	__int64 v4; // rcx

	if ((unsigned __int8)sub_140210740(a1, a2, a3, (unsigned int)a2))
	{
		sub_14021BF80(v4, *(_QWORD*)(a1 + 56), *(unsigned int*)(a1 + 72));
		sub_140212F70(*(_QWORD*)(a1 + 64), *(_QWORD*)(a1 + 56));
		*(_DWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 56) + 8i64) + 20i64) = 1;
		++* (_DWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 56) + 8i64) + 20i64);
	}
	return 0;
	*/
	return 0;
}

char sub_140206380()//override
{
	return 0;
}
char sub_140206370()//override
{
	return 0;
}

char sub_140206360()//override
{
	return 0;
}

char sub_140210730()//override
{
	return 0;
}
char sub_140210720()//override
{
	return 0;
}

char sub_1402062E0()//override
{
	return 0;
}

char sub_140206340()//override
{
	return 0;
}

char sub_140206330()//override
{
	return 0;
}
char sub_1402062D0()//override
{
	return 0;
}

