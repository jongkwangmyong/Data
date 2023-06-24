#include "ProductRegistration.h"
void ProductRegistration::paint(Graphics& g)
{
	/*v9 = -3025192;
	Graphics::fillAll(a2, 0xFFD1D6D8);
	if (a1)
	{
		while (1)
		{
			v4 = *(_QWORD*)(a1 + 80);
			if (v4)
			{
				v5 = *(_QWORD*)(v4 + 16);
				if (v5)
					break;
			}
			a1 = *(_QWORD*)(a1 + 24);
			if (!a1)
				goto LABEL_5;
		}
	}
	else
	{
	LABEL_5:
		v6 = qword_140EC0000;
		if (!qword_140EC0000)
		{
			v10 = operator new(0x130ui64);
			v6 = Desktop::Desktop((__int64)v10);
			qword_140EC0000 = v6;
		}
		v5 = Desktop::getDefaultLookAndFeel(v6);
	}
	v7 = LookAndFeel::findColour(v5, &v9, 16799488);
	return Graphics::fillAll(a2, *v7);*/
}
void ProductRegistration::resized()
{
	/*Component::setBounds(*(_QWORD*)(a1 + 150440), *(_DWORD*)(a1 + 40) / 2 + 26, *(_DWORD*)(a1 + 44) - 70, 150, 32);
	Component::setBounds(*(_QWORD*)(a1 + 150448), *(_DWORD*)(a1 + 40) / 2 - 212, *(_DWORD*)(a1 + 44) - 67, 150, 32);
	Component::setBounds(*(_QWORD*)(a1 + 150456), *(_DWORD*)(a1 + 40) / 2 - 165, 58, 312, 24);
	Component::setBounds(*(_QWORD*)(a1 + 150464), *(_DWORD*)(a1 + 40) / 2 - 207, 107, 383, 2);
	v2 = *(_QWORD*)(a1 + 150464);
	v3 = *(_DWORD*)(v2 + 36);
	v4 = *(_DWORD*)(*(_QWORD*)(a1 + 150448) + 36i64) - v3 - 10;
	Component::setBounds(a1 + 664, *(_DWORD*)(v2 + 32), v3, 400, 20 * *(_DWORD*)(a1 + 184) + 10);
	Component::setBounds(
		a1 + 224,
		*(_DWORD*)(*(_QWORD*)(a1 + 150464) + 32i64),
		*(_DWORD*)(*(_QWORD*)(a1 + 150464) + 36i64),
		400,
		v4);
	Component::setBounds(*(_QWORD*)(a1 + 150440), *(_DWORD*)(a1 + 40) - 154, *(_DWORD*)(a1 + 44) - 44, 150, 32);
	Component::setBounds(*(_QWORD*)(a1 + 150448), 4, *(_DWORD*)(a1 + 44) - 44, 150, 32);
	Component::setBounds(*(_QWORD*)(a1 + 150456), *(_DWORD*)(a1 + 40) / 2 - 165, 41, 312, 24);
	Component::setBounds(*(_QWORD*)(a1 + 150464), *(_DWORD*)(a1 + 40) / 2 - 207, 107, 383, 2);
	Component::setBounds(*(_QWORD*)(a1 + 150472), *(_DWORD*)(a1 + 40) / 2 - 205, 81, 48, 20);
	result = Component::setBounds(*(_QWORD*)(a1 + 150480), *(_DWORD*)(a1 + 40) / 2 - 61, 81, 96, 20);
	v6 = 0;
	if (*(int*)(a1 + 184) > 0)
	{
		v7 = 0;
		do
		{
			Component::setBounds(520i64 * v6 + a1 + 840, *(_DWORD*)(a1 + 696), v7 + *(_DWORD*)(a1 + 700) + 10, 120, 20);
			Component::setBounds(
				520i64 * v6 + a1 + 52840,
				*(_DWORD*)(*(_QWORD*)(a1 + 150464) + 40i64) / 2 + *(_DWORD*)(a1 + 696) - 45,
				v7 + *(_DWORD*)(a1 + 700) + 10,
				120,
				20);
			result = Component::setBounds(
				456i64 * v6++ + a1 + 104840,
				*(_DWORD*)(*(_QWORD*)(a1 + 150464) + 40i64) + *(_DWORD*)(a1 + 696) - 30,
				v7 + *(_DWORD*)(a1 + 700) + 10,
				40,
				20);
			v7 += 20;
		} while (v6 < *(_DWORD*)(a1 + 184));
	}
	return result;*/
}
void ProductRegistration::buttonClicked(Button*)
{
	/*if (a2 == *(_QWORD*)(a1 + 150264))
	{
		sub_140048D00(&v37, &unk_14046DA2E);
		v3 = 0;
		v4 = *(int*)(a1 + 28);
		if (v4 > 0)
		{
			v5 = (_QWORD*)(a1 + 105088);
			do
			{
				(*(void(__fastcall * *)(_QWORD, __int64*))(*(_QWORD*)* v5 + 8i64))(*v5, &v57);
				v6 = (*(__int64(__fastcall * *)(__int64, char*))(*(_QWORD*)v57 + 40i64))(v57, v58);
				(*(void(__fastcall * *)(__int64, char*))(*(_QWORD*)v57 + 176i64))(v57, v58);
				if (v6)
				{
					v7 = a1 + 32;
					if (v3)
					{
						v14 = sub_140316E00(v7, v3);
						v39 = v37;
						if ((*(v37 - 4) & 0x30000000) == 0)
							_InterlockedIncrement(v37 - 4);
						v41 = &v39;
						ImageCache::getFromHashCode(&v39, ":", (int)"");
						v42 = v39;
						if ((*(v39 - 4) & 0x30000000) == 0)
							_InterlockedIncrement(v39 - 4);
						v15 = v39 - 4;
						if ((*(v39 - 4) & 0x30000000) == 0 && _InterlockedDecrement(v15) == -1)
							j_j_free((void*)v15);
						v41 = &v42;
						v16 = (volatile signed __int32**)sub_14031B920(&v42, v14);
						v10 = *v16;
						if ((*(*v16 - 4) & 0x30000000) == 0)
							_InterlockedIncrement(v10 - 4);
						v17 = v42 - 4;
						if ((*(v42 - 4) & 0x30000000) == 0 && _InterlockedDecrement(v17) == -1)
							j_j_free((void*)v17);
						v12 = v37 - 4;
						v13 = *((_DWORD*)v37 - 4);
					}
					else
					{
						v8 = sub_140316E00(v7, 0);
						v40 = v37;
						if ((*(v37 - 4) & 0x30000000) == 0)
							_InterlockedIncrement(v37 - 4);
						v41 = &v40;
						v9 = (volatile signed __int32**)sub_14031B920(&v40, v8);
						v10 = *v9;
						if ((*(*v9 - 4) & 0x30000000) == 0)
							_InterlockedIncrement(v10 - 4);
						v11 = v40 - 4;
						if ((*(v40 - 4) & 0x30000000) == 0 && _InterlockedDecrement(v11) == -1)
							j_j_free((void*)v11);
						v12 = v37 - 4;
						v13 = *((_DWORD*)v37 - 4);
					}
					v37 = v10;
					if ((v13 & 0x30000000) == 0 && _InterlockedDecrement(v12) == -1)
						j_j_free((void*)v12);
				}
				++v3;
				v5 += 57;
				--v4;
			} while (v4);
		}
		v18 = v37;
		if ((unsigned int)String::isNotEmpty(v37, &unk_14046DA2B))
		{
			sub_140048D00(&v38, "https://community.genelec.com/register-products/");
			if (*v38)
			{
				v24 = -1i64;
				do
					++v24;
				while (*((_BYTE*)v18 + v24));
				ImageCache::getFromHashCode(&v38, (const void*)v18, (_DWORD)v18 + v24);
			}
			else
			{
				if ((*(v18 - 4) & 0x30000000) == 0)
					_InterlockedIncrement(v18 - 4);
				v23 = (_DWORD*)(_InterlockedExchange64((volatile __int64*)& v38, (__int64)v37) - 16);
				if ((*v23 & 0x30000000) == 0 && _InterlockedDecrement(v23) == -1)
					j_j_free(v23);
			}
			v56 = v38;
			v25 = (volatile signed __int32*)(v38 - 16);
			if ((*((_DWORD*)v38 - 4) & 0x30000000) == 0)
				_InterlockedIncrement(v25);
			v26 = v38 - 16;
			if ((*((_DWORD*)v38 - 4) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v26) == -1)
				j_j_free(v26);
			v47 = v56;
			if ((*v25 & 0x30000000) == 0)
				_InterlockedIncrement(v25);
			v48 = 0i64;
			v49 = 0i64;
			v50 = 0i64;
			v51 = 0i64;
			v52 = 0i64;
			v53 = 0i64;
			Block[0] = 0i64;
			Block[1] = 0i64;
			sub_1402E1290(&v47);
			URL::launchInDefaultBrowser((__int64*)& v47);
			sub_140002F30(Block);
			free(Block[0]);
			if (SHIDWORD(v53) > 0)
			{
				v27 = v52;
				v28 = HIDWORD(v53);
				do
				{
					v29 = (_DWORD*)(*v27 - 16i64);
					if ((*v29 & 0x30000000) == 0 && _InterlockedDecrement(v29) == -1)
						j_j_free(v29);
					++v27;
					--v28;
				} while (v28);
			}
			free(v52);
			if (SHIDWORD(v51) > 0)
			{
				v30 = v50;
				v31 = HIDWORD(v51);
				do
				{
					v32 = (_DWORD*)(*v30 - 16i64);
					if ((*v32 & 0x30000000) == 0 && _InterlockedDecrement(v32) == -1)
						j_j_free(v32);
					++v30;
					--v31;
				} while (v31);
			}
			free(v50);
			free(v48);
			v33 = v47 - 16;
			if ((*((_DWORD*)v47 - 4) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v33) == -1)
				j_j_free(v33);
			if ((*v25 & 0x30000000) == 0 && _InterlockedDecrement(v25) == -1)
				j_j_free((void*)v25);
		}
		else
		{
			v55 = dword_140DDCDD0;
			sub_140048D00(&v43, "Please select at least one product and then press Register!");
			sub_14031AF20(&v46, &v43);
			v19 = (void*)(v43 - 16);
			if ((*(_DWORD*)(v43 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v19) == -1)
				j_j_free(v19);
			sub_140048D00(&v44, "Attention");
			sub_14031AF20(&v45, &v44);
			v20 = (void*)(v44 - 16);
			if ((*(_DWORD*)(v44 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v20) == -1)
				j_j_free(v20);
			sub_14040FE70(2, (unsigned int)& v45, (unsigned int)& v46, (unsigned int)& v55, 0i64);
			v21 = (void*)(v45 - 16);
			if ((*(_DWORD*)(v45 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v21) == -1)
				j_j_free(v21);
			v22 = (void*)(v46 - 16);
			if ((*(_DWORD*)(v46 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v22) == -1)
				j_j_free(v22);
		}
		v34 = v37 - 4;
		if ((*(v37 - 4) & 0x30000000) == 0 && _InterlockedDecrement(v34) == -1)
			j_j_free((void*)v34);
	}
	else if (a2 == *(_QWORD*)(a1 + 150272))
	{
		v35 = qword_140EBFF78;
		v41 = (volatile signed __int32**)operator new(0x220ui64);
		v36 = sub_140189A70(v41);
		sub_140274EA0(v35, v36);
	}*/
}