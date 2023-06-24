#include "CustomHexLayoutComponent.h"
CustomHexLayoutComponent::CustomHexLayoutComponent()
{

}

CustomHexLayoutComponent::~CustomHexLayoutComponent()
{

}

void CustomHexLayoutComponent::resized()
{
/*
	v2 = ((((*(_DWORD*)(a1 + 44) / (2 * *(_DWORD*)(a1 + 176))) >> 31) & 3)
		+ *(_DWORD*)(a1 + 44) / (2 * *(_DWORD*)(a1 + 176))) & 0xFFFFFFFC;
	*(_DWORD*)(a1 + 180) = v2;
	v3 = *(_DWORD*)(a1 + 40) / 2;
	v38 = v3;
	v4 = 4 * (*(_DWORD*)(a1 + 44) / 8);
	v37 = v4;
	v5 = cosf(0.52359879);
	v36 = ((((int)(float)((float)v2 / v5) >> 31) & 3) + (int)(float)((float)v2 / v5)) & 0xFFFFFFFC;
	v6 = cosf(1.0471976);
	v7 = v36;
	v8 = (int)(float)((float)v36 - (float)((float)(v36 / 2) * v6));
	v9 = 0;
	v10 = *(_QWORD*)(a1 + 192);
	v11 = *(_QWORD*)(a1 + 200) - v10;
	result = (unsigned __int64)((unsigned __int128)(v11 * (__int128)0x2AAAAAAAAAAAAAABi64) >> 64) >> 63;
	v13 = v11 / 24;
	if (v11 / 24)
	{
		v14 = 0i64;
		v31 = 0i64;
		while (1)
		{
			Block = 0i64;
			v35 = 0i64;
			v15 = *(_QWORD*)(v10 + 24 * v14);
			v16 = *(_QWORD*)(v10 + 24 * v14 + 8);
			if (v15 != v16)
			{
				v17 = (v16 - v15) >> 4;
				if (v17 > 0xFFFFFFFFFFFFFFFi64)
					sub_140001B80(0xFFFFFFFFFFFFFFFi64);
				v18 = 16 * v17;
				v13 = sub_140002110(v18);
				*(_QWORD*)& Block = v13;
				v35 = v18 + v13;
				v19 = v15 - v13;
				do
				{
					*(_QWORD*)v13 = 0i64;
					*(_QWORD*)(v13 + 8) = 0i64;
					v20 = *(_QWORD*)(v19 + v13 + 8);
					if (v20)
						_InterlockedIncrement((volatile signed __int32*)(v20 + 8));
					*(_QWORD*)v13 = *(_QWORD*)(v13 + v19);
					*(_QWORD*)(v13 + 8) = *(_QWORD*)(v19 + v13 + 8);
					v13 += 16i64;
				} while (v13 + v19 != v16);
				*((_QWORD*)& Block + 1) = v13;
				v7 = v36;
			}
			v21 = (char*) * ((_QWORD*)& Block + 1);
			v22 = v3;
			v23 = v4;
			v24 = 0;
			v25 = (char*)Block;
			v33 = (__int64)(*((_QWORD*)& Block + 1) - Block) >> 4;
			if (v33)
				break;
		LABEL_82:
			if (v25)
			{
				if (v25 != v21)
				{
					do
					{
						v29 = (volatile signed __int32*) * ((_QWORD*)v25 + 1);
						if (v29)
						{
							if (_InterlockedExchangeAdd(v29 + 2, 0xFFFFFFFF) == 1)
							{
								(**(void(__fastcall * **)(volatile signed __int32*, unsigned __int64))v29)(v29, v13);
								if (_InterlockedExchangeAdd(v29 + 3, 0xFFFFFFFF) == 1)
									(*(void(__fastcall * *)(volatile signed __int32*))(*(_QWORD*)v29 + 8i64))(v29);
							}
						}
						v25 += 16;
					} while (v25 != *((char**)& Block + 1));
					v25 = (char*)Block;
				}
				v30 = v25;
				if (((v35 - (_QWORD)v25) & 0xFFFFFFFFFFFFFFF0ui64) >= 0x1000)
				{
					v25 = (char*) * ((_QWORD*)v25 - 1);
					if ((unsigned __int64)(v30 - v25 - 8) > 0x1F)
						invalid_parameter_noinfo_noreturn();
				}
				j_j_free(v25);
			}
			++v9;
			v14 = ++v31;
			v10 = *(_QWORD*)(a1 + 192);
			v13 = (*(_QWORD*)(a1 + 200) - v10) / 24;
			result = v9;
			if (v9 >= v13)
				return result;
			v7 = v36;
			v3 = v38;
		}
		v26 = (__int64*)Block;
		while (1)
		{
			if (v24)
			{
				if (v9 == 1)
				{
					if (v24 == 1)
						goto LABEL_16;
					if (v24 != 2)
					{
						if (v24 != 3)
						{
							if (v24 != 4)
							{
								if (v24 == 5)
									v23 -= *(_DWORD*)(a1 + 180);
								goto LABEL_80;
							}
						LABEL_73:
							v23 += *(_DWORD*)(a1 + 180) / -2;
							v22 -= v8;
							goto LABEL_80;
						}
					LABEL_20:
						v23 += *(_DWORD*)(a1 + 180) / 2;
						v22 -= v8;
						goto LABEL_80;
					}
					v23 += *(_DWORD*)(a1 + 180);
				}
				else if (v9 == 2)
				{
					if ((unsigned int)(v24 - 1) <= 1)
					{
					LABEL_16:
						v27 = *(_DWORD*)(a1 + 180) / 2;
					LABEL_79:
						v23 += v27;
						v22 += v8;
						goto LABEL_80;
					}
					if ((unsigned int)(v24 - 3) <= 1)
					{
					LABEL_69:
						v23 += *(_DWORD*)(a1 + 180);
						goto LABEL_80;
					}
					if ((unsigned int)(v24 - 5) <= 1)
						goto LABEL_20;
					if ((unsigned int)(v24 - 7) <= 1)
						goto LABEL_73;
					if ((unsigned int)(v24 - 9) <= 1)
						goto LABEL_75;
					if (v24 == 11)
						goto LABEL_78;
				}
				else
				{
					switch (v9)
					{
					case 3:
						if ((unsigned int)(v24 - 1) <= 2)
						{
							v27 = *(_DWORD*)(a1 + 180) / 2;
							goto LABEL_79;
						}
						if ((unsigned int)(v24 - 4) <= 2)
						{
							v23 += *(_DWORD*)(a1 + 180);
							goto LABEL_80;
						}
						if ((unsigned int)(v24 - 7) <= 2)
						{
							v23 += *(_DWORD*)(a1 + 180) / 2;
							v22 -= v8;
							goto LABEL_80;
						}
						if ((unsigned int)(v24 - 10) <= 2)
							goto LABEL_73;
						if ((unsigned int)(v24 - 13) <= 2)
						{
							v23 -= *(_DWORD*)(a1 + 180);
							goto LABEL_80;
						}
						v28 = (unsigned int)(v24 - 16) <= 1;
						break;
					case 4:
						if ((unsigned int)(v24 - 1) <= 3)
						{
							v27 = *(_DWORD*)(a1 + 180) / 2;
							goto LABEL_79;
						}
						if ((unsigned int)(v24 - 5) <= 3)
						{
							v23 += *(_DWORD*)(a1 + 180);
							goto LABEL_80;
						}
						if ((unsigned int)(v24 - 9) <= 3)
						{
							v23 += *(_DWORD*)(a1 + 180) / 2;
							v22 -= v8;
							goto LABEL_80;
						}
						if ((unsigned int)(v24 - 13) <= 3)
							goto LABEL_73;
						if ((unsigned int)(v24 - 17) <= 3)
						{
							v23 -= *(_DWORD*)(a1 + 180);
							goto LABEL_80;
						}
						v28 = (unsigned int)(v24 - 21) <= 2;
						break;
					case 5:
						if ((unsigned int)(v24 - 1) <= 4)
						{
							v27 = *(_DWORD*)(a1 + 180) / 2;
							goto LABEL_79;
						}
						if ((unsigned int)(v24 - 6) <= 4)
						{
							v23 += *(_DWORD*)(a1 + 180);
							goto LABEL_80;
						}
						if ((unsigned int)(v24 - 11) <= 4)
						{
							v23 += *(_DWORD*)(a1 + 180) / 2;
							v22 -= v8;
							goto LABEL_80;
						}
						if ((unsigned int)(v24 - 16) <= 4)
							goto LABEL_73;
						if ((unsigned int)(v24 - 21) <= 4)
						{
							v23 -= *(_DWORD*)(a1 + 180);
							goto LABEL_80;
						}
						v28 = (unsigned int)(v24 - 26) <= 3;
						break;
					case 6:
						if ((unsigned int)(v24 - 1) <= 5)
						{
							v27 = *(_DWORD*)(a1 + 180) / 2;
							goto LABEL_79;
						}
						if ((unsigned int)(v24 - 7) <= 5)
							goto LABEL_69;
						if ((unsigned int)(v24 - 13) <= 5)
						{
							v23 += *(_DWORD*)(a1 + 180) / 2;
							v22 -= v8;
							goto LABEL_80;
						}
						if ((unsigned int)(v24 - 19) <= 5)
							goto LABEL_73;
						if ((unsigned int)(v24 - 25) <= 5)
						{
						LABEL_75:
							v23 -= *(_DWORD*)(a1 + 180);
							goto LABEL_80;
						}
						v28 = (unsigned int)(v24 - 31) <= 4;
						break;
					default:
						goto LABEL_80;
					}
					if (v28)
					{
					LABEL_78:
						v27 = *(_DWORD*)(a1 + 180) / -2;
						goto LABEL_79;
					}
				}
			}
			else
			{
				v23 = v37 - *(_DWORD*)(a1 + 180) * v9;
			}
		LABEL_80:
			v32 = (float)v22 + 6.755399441055744e15;
			Component::setBounds(*v26, LODWORD(v32) - v36 / 2, v23 - *(_DWORD*)(a1 + 180) / 2, v7, *(_DWORD*)(a1 + 180));
			++v24;
			v26 += 2;
			v7 = v36;
			if (v24 >= v33)
			{
				v21 = (char*) * ((_QWORD*)& Block + 1);
				v25 = (char*)Block;
				v4 = v37;
				goto LABEL_82;
			}
		}
	}
	return result;*/
}