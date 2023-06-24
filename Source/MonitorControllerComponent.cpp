#include "MonitorControllerComponent.h"
void  MonitorControllerComponent::comboBoxChanged(ComboBox* comboBoxThatHasChanged)
{
	/*__int64 v3; // rdx
	_QWORD* v4; // rdi
	__int64 v5; // rsi
	__int64 v6; // rbx
	void* v7; // rcx
	__int64(__fastcall * **v8)(); // rcx
	__int64* v9; // rdx
	__int64 v10; // rbx
	void* v11; // rcx
	__int64 v12; // rbx
	void* v13; // rcx
	__int64 v14; // rbx
	void* v15; // rcx
	__int64 v16; // [rsp+20h] [rbp-39h] BYREF
	__int64 v17; // [rsp+28h] [rbp-31h] BYREF
	__int64 v18; // [rsp+30h] [rbp-29h] BYREF
	__int64 v19; // [rsp+38h] [rbp-21h] BYREF
	__int64 v20; // [rsp+40h] [rbp-19h] BYREF
	__int64 v21; // [rsp+48h] [rbp-11h] BYREF
	__int64 v22; // [rsp+50h] [rbp-9h] BYREF
	__int64 v23; // [rsp+58h] [rbp-1h] BYREF
	__int64(__fastcall * **v24)(); // [rsp+60h] [rbp+7h] BYREF
	__int64 v25; // [rsp+68h] [rbp+Fh] BYREF
	__int64(__fastcall * **v26)(); // [rsp+70h] [rbp+17h] BYREF
	__int64 v27; // [rsp+78h] [rbp+1Fh] BYREF
	__int64(__fastcall * **v28)(); // [rsp+80h] [rbp+27h] BYREF
	__int64 v29; // [rsp+88h] [rbp+2Fh] BYREF
	__int64(__fastcall * **v30)(); // [rsp+90h] [rbp+37h] BYREF
	__int64 v31; // [rsp+98h] [rbp+3Fh] BYREF

	if (a2 == *(_QWORD*)(a1 + 272))
	{
		sub_14022E650(*((_QWORD*)ArgList + 66));
		LOBYTE(v3) = 1;
		(*(void(__fastcall**)(_QWORD, __int64))(**(_QWORD**)(a1 + 288) + 88i64))(*(_QWORD*)(a1 + 288), v3);
		v4 = qword_140EBFF98;
		v5 = *((_QWORD*)qword_140EBFF98 + 7);
		if (!v5)
		{
			sub_14031E290(qword_140EBFF98);
			v5 = v4[7];
		}
		if ((unsigned int)ComboBox::getSelectedItemIndex(*(_QWORD*)(a1 + 272)))
		{
			if ((unsigned int)ComboBox::getSelectedItemIndex(*(_QWORD*)(a1 + 272)) == 1)
			{
				v10 = *(_QWORD*)(a1 + 192);
				sub_140048D00(&v21, "mute");
				sub_1401307B0(v10, &v21);
				v26 = off_140EB1BD0;
				sub_140048D00(&v27, "mute");
				sub_140048D00(&v17, "clickmode");
				sub_140317E00(v5, &v17, &v26);
				v11 = (void*)(v17 - 16);
				if ((*(_DWORD*)(v17 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v11) == -1)
					j_j_free(v11);
				v8 = v26;
				v9 = &v27;
			}
			else if ((unsigned int)ComboBox::getSelectedItemIndex(*(_QWORD*)(a1 + 272)) == 2)
			{
				v12 = *(_QWORD*)(a1 + 192);
				sub_140048D00(&v22, "info");
				sub_1401307B0(v12, &v22);
				v28 = off_140EB1BD0;
				sub_140048D00(&v29, "info");
				sub_140048D00(&v18, "clickmode");
				sub_140317E00(v5, &v18, &v28);
				v13 = (void*)(v18 - 16);
				if ((*(_DWORD*)(v18 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v13) == -1)
					j_j_free(v13);
				v8 = v28;
				v9 = &v29;
			}
			else
			{
				if ((unsigned int)ComboBox::getSelectedItemIndex(*(_QWORD*)(a1 + 272)) != 3)
					return;
				v14 = *(_QWORD*)(a1 + 192);
				sub_140048D00(&v23, "edit");
				sub_1401307B0(v14, &v23);
				v30 = off_140EB1BD0;
				sub_140048D00(&v31, "edit");
				sub_140048D00(&v19, "clickmode");
				sub_140317E00(v5, &v19, &v30);
				v15 = (void*)(v19 - 16);
				if ((*(_DWORD*)(v19 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v15) == -1)
					j_j_free(v15);
				v8 = v30;
				v9 = &v31;
			}
		}
		else
		{
			v6 = *(_QWORD*)(a1 + 192);
			sub_140048D00(&v20, "solo");
			sub_1401307B0(v6, &v20);
			v24 = off_140EB1BD0;
			sub_140048D00(&v25, "solo");
			sub_140048D00(&v16, "clickmode");
			sub_140317E00(v5, &v16, &v24);
			v7 = (void*)(v16 - 16);
			if ((*(_DWORD*)(v16 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v7) == -1)
				j_j_free(v7);
			v8 = v24;
			v9 = &v25;
		}
		((void(__fastcall*)(__int64(__fastcall***)(), __int64*))(*v8)[22])(v8, v9);
	}*/
}
void MonitorControllerComponent::sliderValueChanged(Slider* slider)
{
	
	/*__int64 v3; // rcx
	float v4; // xmm6_4
	__int64 v5; // rdx
	float v6; // xmm1_4
	__int64 v7; // rdx
	__int64 result; // rax

	v3 = *(_QWORD*)(a1 + 216);
	if (a2 == v3)
	{
		v4 = *(float*)(*((_QWORD*)ArgList + 66) + 216i64);
		v6 = *(double*)sub_14009F390(*(_QWORD*)(v3 + 512)).m128_u64;
		if (v6 < v4 || v4 == 0.0)
		{
			v7 = 0i64;
		}
		else
		{
			sub_14009F400(*(_QWORD*)(*(_QWORD*)(a1 + 216) + 512i64), v5, 3i64);
			LOBYTE(v7) = 1;
		}
		(*(void(__fastcall**)(_QWORD, __int64))(**(_QWORD**)(a1 + 328) + 88i64))(*(_QWORD*)(a1 + 328), v7);
		result = sub_1401867F0(a1 - 208);
	}
	return result;*/
}
void MonitorControllerComponent::changeListenerCallback(ChangeBroadcaster* source)
{
	/*__int64* v2; // rbx
	__int64 v3; // r9

	if (a2 == (char*)ArgList + 1104 || a2 == (char*)ArgList + 936)
		goto LABEL_22;
	if (a2 == (char*)ArgList + 1328)
	{
		Button::setToggleState(a1[33], byte_140EBFF24, 0, 0);
		return;
	}
	if (a2 == (char*)ArgList + 1160)
	{
		Button::setToggleState(a1[29], byte_140EBFF44, 0, 0);
		return;
	}
	if (a2 == (char*)ArgList + 1216)
	{
		Button::setToggleState(a1[30], byte_140EBFF25, 0, 0);
		return;
	}
	if (a2 == (char*)ArgList + 1272)
	{
	LABEL_22:
		sub_1401857D0(a1 - 25);
	}
	else if (a2 == (char*)ArgList + 1048)
	{
		v2 = a1 - 25;
		sub_1401870C0(a1 - 25);
		sub_140185770(v2);
	}
	else if (a2 == (char*)ArgList + 880)
	{
		sub_1401868B0(a1 - 25);
	}
	else
	{
		v3 = *((_QWORD*)ArgList + 174);
		if (v3)
		{
			if (a2 == (char*)(v3 + 64))
			{
				if (*(_BYTE*)v3 || *(_DWORD*)(v3 + 192) != 4)
					Component::setEnabled(a1[28], 1);
				else
					Component::setEnabled(a1[28], 0);
			}
			else if (a2 == (char*)(v3 + 120))
			{
				Component::repaint((__int64)(a1 - 25));
			}
		}
	}*/
}
void MonitorControllerComponent::buttonClicked(Button*)
{
	
	/*__int64 v4; // rcx
	unsigned __int8 v5; // r14
	_QWORD* v6; // rdi
	struct _Mtx_internal_imp_t* v7; // rbx
	int v8; // eax
	__int64 v9; // rax
	__int64 v10; // rcx
	__int64 v11; // rcx
	unsigned __int8 v12; // al
	__int64 v13; // rcx
	float v14; // xmm6_4
	float v15; // xmm0_4
	__int64 v16; // rcx
	__int64 v17; // rdx
	__int64 v18; // rcx
	unsigned __int8 v19; // al
	__int64 v20; // rcx
	__int64 v21; // rbx
	__int64 v22; // rcx
	unsigned __int8 v23; // al
	__int64 v24; // rcx
	__int64 v25; // r14
	__int64 v26; // rdx
	__int64 v27; // rcx
	__int64 v28; // rbx
	_QWORD* v29; // rax
	__int64 v30; // r8
	char v31; // al
	__int64 v33[4]; // [rsp+20h] [rbp-50h] BYREF
	__m128i v34; // [rsp+40h] [rbp-30h] BYREF

	v4 = *(_QWORD*)(a1 + 216);
	if (a2 == v4)
	{
		v5 = Button::getToggleState(v4);
		v6 = ArgList;
		byte_140EBFF44 = v5;
		sub_1401FA670(ArgList, *(float*)&dword_140EBFF3C);
		v7 = (struct _Mtx_internal_imp_t*)v6[231];
		v34.m128i_i64[0] = (__int64)v7;
		v8 = Mtx_lock(v7);
		if (v8)
			std::_Throw_C_error(v8);
		sub_140228340(v6[66], v5);
		*(_BYTE*)(*(_QWORD*)(*(_QWORD*)(v6[66] + 8i64) + 8i64 * *(int*)(v6[66] + 268i64) - 8) + 528i64) = v5;
		v9 = v6[174];
		*(_BYTE*)(v9 + 272) = 0;
		*(_DWORD*)(v9 + 228) = 0;
		Mtx_unlock(v7);
		sub_1401C9BA0(qword_140EBFFA0);
		v10 = *(_QWORD*)(a1 + 200);
		v34.m128i_i64[0] = 0i64;
		v34.m128i_i64[1] = *(_QWORD*)(v10 + 40);
		Component::internalRepaintUnchecked(v10, &v34, 1);
		sub_1401894C0(a1 - 216);
		goto LABEL_28;
	}
	v11 = *(_QWORD*)(a1 + 224);
	if (a2 == v11)
	{
		v12 = Button::getToggleState(v11);
		sub_1401F4AC0(v13, v12, 0i64);
		sub_1401894C0(a1 - 216);
		goto LABEL_28;
	}
	if (a2 == *(_QWORD*)(a1 + 232))
	{
		v14 = *(float*)(*(_QWORD*)(*(_QWORD*)(*((_QWORD*)ArgList + 66) + 8i64)
			+ 8i64 * *(int*)(*((_QWORD*)ArgList + 66) + 268i64)
			- 8)
			+ 520i64);
		v15 = *(float*)(*((_QWORD*)ArgList + 66) + 216i64);
		v16 = *(_QWORD*)(a1 + 64);
		v34.m128i_i64[0] = (__int64)off_140EB1B48;
		if (v14 > v15)
		{
		LABEL_9:
			*(double*)&v34.m128i_i64[1] = v15;
			(*(void(__fastcall**)(__int64, __m128i*))(*(_QWORD*)v16 + 16i64))(v16, &v34);
			(*(void(__fastcall**)(__int64, unsigned __int64*))(*(_QWORD*)v34.m128i_i64[0] + 176i64))(
				v34.m128i_i64[0],
				&v34.m128i_u64[1]);
			LOBYTE(v17) = 1;
		LABEL_14:
			(*(void(__fastcall**)(_QWORD, __int64))(**(_QWORD**)(a1 + 320) + 88i64))(*(_QWORD*)(a1 + 320), v17);
			sub_1401867F0(a1 - 216);
			goto LABEL_28;
		}
	LABEL_13:
		*(double*)&v34.m128i_i64[1] = v14;
		(*(void(__fastcall**)(__int64, __m128i*))(*(_QWORD*)v16 + 16i64))(v16, &v34);
		(*(void(__fastcall**)(__int64, unsigned __int64*))(*(_QWORD*)v34.m128i_i64[0] + 176i64))(
			v34.m128i_i64[0],
			&v34.m128i_u64[1]);
		v17 = 0i64;
		goto LABEL_14;
	}
	if (a2 == *(_QWORD*)(a1 + 240))
	{
		v14 = *(float*)(*(_QWORD*)(*(_QWORD*)(*((_QWORD*)ArgList + 66) + 8i64)
			+ 8i64 * *(int*)(*((_QWORD*)ArgList + 66) + 268i64)
			- 8)
			+ 524i64);
		v15 = *(float*)(*((_QWORD*)ArgList + 66) + 216i64);
		v16 = *(_QWORD*)(a1 + 64);
		v34.m128i_i64[0] = (__int64)off_140EB1B48;
		if (v14 > v15)
			goto LABEL_9;
		goto LABEL_13;
	}
	v18 = *(_QWORD*)(a1 + 248);
	if (a2 == v18)
	{
		v19 = Button::getToggleState(v18);
		sub_1401F4910(ArgList, v19, 0i64);
	}
	else
	{
		v20 = *(_QWORD*)(a1 + 288);
		if (a2 == v20)
		{
			v21 = *((_QWORD*)ArgList + 66);
			*(_BYTE*)(*(_QWORD*)(*(_QWORD*)(v21 + 8) + 8i64 * *(int*)(v21 + 268) - 8) + 556i64) = Button::getToggleState(v20);
			sub_1401894C0(a1 - 216);
		}
		else if (a2 == *(_QWORD*)(a1 + 296))
		{
			sub_14022E650(*((_QWORD*)ArgList + 66));
			Button::setToggleState(*(_QWORD*)(a1 + 216), 0, 1u, 1u);
		}
		else
		{
			v22 = *(_QWORD*)(a1 + 304);
			if (a2 == v22)
			{
				v23 = Button::getToggleState(v22);
				sub_1401F4770(v24, v23);
				sub_140185080(a1 - 216);
			}
			else
			{
				LODWORD(v25) = 0;
				v26 = *(_QWORD*)(a1 + 88);
				if ((*(_QWORD*)(a1 + 96) - v26) >> 3)
				{
					do
					{
						v27 = *(_QWORD*)(v26 + 8i64 * (int)v25);
						if (a2 == v27 && (unsigned __int8)Button::getToggleState(v27))
						{
							sub_1401F3D20(ArgList, (unsigned int)(v25 + 1), 0i64);
							v25 = (__int64)(*(_QWORD*)(a1 + 96) - *(_QWORD*)(a1 + 88)) >> 3;
							v28 = *(_QWORD*)(a1 + 200);
							v29 = sub_140001EE0(v33, a1 + 16);
							LOBYTE(v30) = 1;
							sub_140133F10(v28, v29, v30);
							sub_1401894C0(a1 - 216);
							sub_1402699F0();
							sub_140185080(a1 - 216);
						}
						LODWORD(v25) = v25 + 1;
						v26 = *(_QWORD*)(a1 + 88);
					} while ((int)v25 < (unsigned __int64)((*(_QWORD*)(a1 + 96) - v26) >> 3));
				}
			}
		}
	}
LABEL_28:
	v31 = sub_14022D460(*((_QWORD*)ArgList + 66));
	return Component::setEnabled(*(_QWORD*)(a1 + 248), v31 != 0);*/
}
void MonitorControllerComponent::timerCallback()
{
	/*__int64 v2; // rbx
	__int64 v3; // rdi
	__int64 v4; // rdx
	__int64* v5; // rcx
	__int64* v6; // rcx
	int v7; // eax
	__int64 v8; // rdi
	void* v9; // rcx
	__int64* v10; // [rsp+40h] [rbp+8h] BYREF
	__int64* v11; // [rsp+48h] [rbp+10h] BYREF
	__int64 v12; // [rsp+50h] [rbp+18h] BYREF
	__int64 v13; // [rsp+58h] [rbp+20h] BYREF

	sub_140133CE0(*(_QWORD*)(a1 + 240));
	v2 = *((_QWORD*)ArgList + 174);
	if (v2 && *(_DWORD*)(v2 + 196))
	{
		sub_140204C20(*((_QWORD*)ArgList + 174));
		v3 = *(_QWORD*)(a1 + 304);
		String::String_3((__int64)&v10, v4, 0, 0);
		v11 = (__int64*)&v10;
		ImageCache::getFromHashCode(&v10, " dBSPL", (int)"");
		v11 = v10;
		if ((*(_DWORD*)(v10 - 2) & 0x30000000) == 0)
			_InterlockedIncrement((volatile signed __int32*)v10 - 4);
		v5 = v10 - 2;
		if ((*(_DWORD*)(v10 - 2) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v5) == -1)
			j_j_free(v5);
		Label::setText(v3, (__int64*)&v11, 0);
		v6 = v11 - 2;
		v7 = *((_DWORD*)v11 - 4);
	}
	else
	{
		v8 = *(_QWORD*)(a1 + 304);
		sub_140048D00(&v12, &unk_14046DA16);
		sub_14031AF20(&v13, &v12);
		v9 = (void*)(v12 - 16);
		if ((*(_DWORD*)(v12 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v9) == -1)
			j_j_free(v9);
		Label::setText(v8, &v13, 0);
		v6 = (__int64*)(v13 - 16);
		v7 = *(_DWORD*)(v13 - 16);
	}
	if ((v7 & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v6) == -1)
		j_j_free(v6);*/
}
void MonitorControllerComponent::mouseDown(const MouseEvent&)
{
	/*int v3; // ecx
	char result; // al
	float v5; // xmm2_4
	float v6; // xmm3_4
	float v7; // xmm1_4
	float v8; // xmm0_4
	__int64 v9; // rbx
	unsigned int v10; // ecx
	unsigned int v11; // eax
	__m128i i; // xmm0
	float v13; // xmm2_4
	float v14; // xmm3_4
	float v15; // xmm1_4
	float v16; // xmm0_4
	__int64 v17; // rbx
	unsigned int v18; // ecx
	unsigned int v19; // eax
	void* v20; // rax
	__int64 v21; // rbx
	__m128i v22; // [rsp+20h] [rbp-28h] BYREF
	char v23[24]; // [rsp+30h] [rbp-18h] BYREF
	void* v24; // [rsp+58h] [rbp+10h]

	v3 = a2[4];
	result = (v3 & 0x20) != 0;
	if ((v3 & 0x20) != 0)
	{
		v5 = (float)a2[3];
		v6 = (float)a2[2];
		v7 = *(float*)(a1 + 336);
		if (v6 >= v7)
		{
			v8 = *(float*)(a1 + 340);
			if (v5 >= v8 && (float)(v7 + *(float*)(a1 + 344)) > v6 && (float)(v8 + *(float*)(a1 + 348)) > v5)
			{
				v9 = *(_QWORD*)(a1 + 480);
				v10 = *(_DWORD*)(v9 + 44);
				v11 = *(_DWORD*)(v9 + 40);
				v22.m128i_i64[0] = 0i64;
				v22.m128i_i64[1] = __PAIR64__(v10, v11);
				for (i = v22; v9; v9 = *(_QWORD*)(v9 + 24))
				{
					v22 = i;
					i = *(__m128i*)sub_1400BBAD0(v23, v9, &v22);
				}
			LABEL_16:
				v22 = i;
				v22.m128i_i32[0] = (int)(float)((float)(_mm_cvtsi128_si32(i) - *(_DWORD*)(*(_QWORD*)(a1 + 480) + 40i64))
					- *(float*)(a1 + 400));
				v20 = operator new(0x1C0ui64);
				v21 = sub_1400DAF90(v20, *((_QWORD*)ArgList + 174), a1);
				v24 = operator new(0x160ui64);
				return sub_1400AA4D0(v24, v21, &v22);
			}
		}
	}
	else if ((v3 & 0x10) != 0)
	{
		v13 = (float)a2[3];
		v14 = (float)a2[2];
		v15 = *(float*)(a1 + 336);
		if (v14 >= v15)
		{
			v16 = *(float*)(a1 + 340);
			if (v13 >= v16 && (float)(v15 + *(float*)(a1 + 344)) > v14 && (float)(v16 + *(float*)(a1 + 348)) > v13)
			{
				v17 = *(_QWORD*)(a1 + 480);
				v18 = *(_DWORD*)(v17 + 44);
				v19 = *(_DWORD*)(v17 + 40);
				v22.m128i_i64[0] = 0i64;
				v22.m128i_i64[1] = __PAIR64__(v18, v19);
				for (i = v22; v17; v17 = *(_QWORD*)(v17 + 24))
				{
					v22 = i;
					i = *(__m128i*)sub_1400BBAD0(v23, v17, &v22);
				}
				goto LABEL_16;
			}
		}
	}
	return result;*/
}
void MonitorControllerComponent::lookAndFeelChanged()
{
	/*unsigned __int64 v2; // rbp
	int v3; // edi
	__int64 v4; // rdx
	__int64 v5; // rbx
	__int64 v6; // rsi
	__int64 v7; // rax
	__int64 v8; // rcx
	__int64 v9; // r10
	__int64 v10; // rax
	int v11; // er8
	int v12; // er9
	__int64 v13; // r11
	int v14; // eax
	__int64 v15; // rax
	__int64 v16; // rbx
	__int64 v17; // rax
	__int64 v18; // rcx
	__int64 v19; // r9
	__int64 v20; // rax
	int v21; // er8
	int v22; // er10
	__int64 v23; // r11
	int v24; // eax
	__int64 v25; // rax
	__int64 v26; // rbx
	__int64 v27; // rax
	__int64 v28; // rcx
	__int64 v29; // r10
	__int64 v30; // rax
	int v31; // er8
	int v32; // er9
	__int64 v33; // r11
	int v34; // eax
	__int64 v35; // rax
	__int64 v36; // rbx
	__int64 v37; // rax
	__int64 v38; // rcx
	__int64 v39; // r10
	__int64 v40; // rax
	int v41; // er8
	int v42; // er9
	__int64 v43; // r11
	int v44; // eax
	__int64 v45; // rax
	__int64 v46; // rbx
	__int64 v47; // rax
	__int64 v48; // rcx
	__int64 v49; // r10
	__int64 v50; // rax
	int v51; // er8
	int v52; // er9
	__int64 v53; // r11
	int v54; // eax
	__int64 v55; // rax
	__int64 v56; // rbx
	__int64 v57; // rax
	__int64 v58; // rcx
	__int64 v59; // r10
	__int64 v60; // rax
	int v61; // er8
	int v62; // er9
	__int64 v63; // r11
	int v64; // eax
	__int64 v65; // rax
	__int64 v66; // rbx
	__int64 v67; // rax
	__int64 v68; // rcx
	__int64 v69; // r10
	__int64 v70; // rax
	int v71; // er8
	int v72; // er9
	__int64 v73; // r11
	int v74; // eax
	__int64 v75; // rcx
	__int64 v76; // rbx
	__int64 v77; // rax
	__int64 v78; // rcx
	__int64 v79; // r9
	__int64 v80; // rax
	int v81; // er8
	int v82; // er10
	__int64 v83; // r11
	int v84; // eax
	__int64 v85; // rax
	__int64 v86; // rbx
	__int64 v87; // rax
	__int64 v88; // rcx
	__int64 v89; // r10
	__int64 v90; // rax
	int v91; // er8
	int v92; // er9
	__int64 v93; // r11
	int v94; // eax
	__int64 v95; // rcx
	__int64 v96; // rax
	__int64 v97; // rcx
	__int64 v98; // r10
	__int64 v99; // rax
	int v100; // er8
	int v101; // er9
	int v102; // ecx
	__int64 v103; // r11
	int v104; // eax
	__int64 v105; // rdi
	__int64 v106; // rax
	__int64 v107; // rdx
	__int64 v108; // r10
	__int64 v109; // rax
	int v110; // er8
	int v111; // er9
	__int64 v112; // r11
	int v113; // eax
	unsigned __int64 v114; // rbp
	__int64 result; // rax
	void* v116; // [rsp+40h] [rbp+8h]
	void* v117; // [rsp+40h] [rbp+8h]
	void* v118; // [rsp+40h] [rbp+8h]
	void* v119; // [rsp+40h] [rbp+8h]
	void* v120; // [rsp+40h] [rbp+8h]
	void* v121; // [rsp+40h] [rbp+8h]
	void* v122; // [rsp+40h] [rbp+8h]
	void* v123; // [rsp+40h] [rbp+8h]
	void* v124; // [rsp+40h] [rbp+8h]
	void* v125; // [rsp+40h] [rbp+8h]
	void* v126; // [rsp+40h] [rbp+8h]
	unsigned int v127; // [rsp+40h] [rbp+8h]

	v2 = 0i64;
	v3 = 0;
	v4 = *(_QWORD*)(a1 + 304);
	if ((*(_QWORD*)(a1 + 312) - v4) >> 3)
	{
		v5 = 0i64;
		do
		{
			v6 = *(_QWORD*)(v4 + v5);
			v7 = a1;
			if (a1)
			{
				while (1)
				{
					v8 = *(_QWORD*)(v7 + 80);
					if (v8)
					{
						v9 = *(_QWORD*)(v8 + 16);
						if (v9)
							break;
					}
					v7 = *(_QWORD*)(v7 + 24);
					if (!v7)
						goto LABEL_7;
				}
			}
			else
			{
			LABEL_7:
				v10 = qword_140EC0000;
				if (!qword_140EC0000)
				{
					v116 = operator new(0x130ui64);
					v10 = Desktop::Desktop((__int64)v116);
					qword_140EC0000 = v10;
				}
				v9 = Desktop::getDefaultLookAndFeel(v10);
			}
			v11 = 0;
			v12 = *(_DWORD*)(v9 + 244);
			if (v12 <= 0)
				goto LABEL_18;
			v13 = *(_QWORD*)(v9 + 232);
			while (*(_DWORD*)(v13 + 8i64 * v11) != 262)
			{
				v14 = (v12 + v11) / 2;
				if (v14 != v11)
				{
					if (*(int*)(v13 + 8i64 * v14) <= 262)
						v11 = (v12 + v11) / 2;
					else
						v12 = (v12 + v11) / 2;
					if (v11 < v12)
						continue;
				}
				goto LABEL_18;
			}
			if (v11 < 0)
			{
			LABEL_18:
				LODWORD(v15) = dword_140EB15AC;
			}
			else if ((unsigned int)v11 >= *(_DWORD*)(v9 + 244))
			{
				LODWORD(v15) = 0;
			}
			else
			{
				v15 = HIDWORD(*(_QWORD*)(v13 + 8i64 * v11));
			}
			Component::setColour(v6, 16777473i64, v15);
			++v3;
			v5 += 8i64;
			v4 = *(_QWORD*)(a1 + 304);
		} while (v3 < (unsigned __int64)((*(_QWORD*)(a1 + 312) - v4) >> 3));
	}
	v16 = *(_QWORD*)(a1 + 432);
	v17 = a1;
	while (1)
	{
		v18 = *(_QWORD*)(v17 + 80);
		if (v18)
		{
			v19 = *(_QWORD*)(v18 + 16);
			if (v19)
				break;
		}
		v17 = *(_QWORD*)(v17 + 24);
		if (!v17)
		{
			v20 = qword_140EC0000;
			if (!qword_140EC0000)
			{
				v117 = operator new(0x130ui64);
				v20 = Desktop::Desktop((__int64)v117);
				qword_140EC0000 = v20;
			}
			v19 = Desktop::getDefaultLookAndFeel(v20);
			break;
		}
	}
	v21 = 0;
	v22 = *(_DWORD*)(v19 + 244);
	if (v22 <= 0)
		goto LABEL_39;
	v23 = *(_QWORD*)(v19 + 232);
	while (*(_DWORD*)(v23 + 8i64 * v21) != 261)
	{
		v24 = (v22 + v21) / 2;
		if (v24 != v21)
		{
			if (*(int*)(v23 + 8i64 * v24) <= 261)
				v21 = (v22 + v21) / 2;
			else
				v22 = (v22 + v21) / 2;
			if (v21 < v22)
				continue;
		}
		goto LABEL_39;
	}
	if (v21 < 0)
	{
	LABEL_39:
		LODWORD(v25) = dword_140EB15AC;
	}
	else if ((unsigned int)v21 >= *(_DWORD*)(v19 + 244))
	{
		LODWORD(v25) = 0;
	}
	else
	{
		v25 = HIDWORD(*(_QWORD*)(v23 + 8i64 * v21));
	}
	Component::setColour(v16, 16777473i64, v25);
	v26 = *(_QWORD*)(a1 + 440);
	v27 = a1;
	while (1)
	{
		v28 = *(_QWORD*)(v27 + 80);
		if (v28)
		{
			v29 = *(_QWORD*)(v28 + 16);
			if (v29)
				break;
		}
		v27 = *(_QWORD*)(v27 + 24);
		if (!v27)
		{
			v30 = qword_140EC0000;
			if (!qword_140EC0000)
			{
				v118 = operator new(0x130ui64);
				v30 = Desktop::Desktop((__int64)v118);
				qword_140EC0000 = v30;
			}
			v29 = Desktop::getDefaultLookAndFeel(v30);
			break;
		}
	}
	v31 = 0;
	v32 = *(_DWORD*)(v29 + 244);
	if (v32 <= 0)
		goto LABEL_59;
	v33 = *(_QWORD*)(v29 + 232);
	while (*(_DWORD*)(v33 + 8i64 * v31) != 263)
	{
		v34 = (v32 + v31) / 2;
		if (v34 != v31)
		{
			if (*(int*)(v33 + 8i64 * v34) <= 263)
				v31 = (v32 + v31) / 2;
			else
				v32 = (v32 + v31) / 2;
			if (v31 < v32)
				continue;
		}
		goto LABEL_59;
	}
	if (v31 < 0)
	{
	LABEL_59:
		LODWORD(v35) = dword_140EB15AC;
	}
	else if ((unsigned int)v31 >= *(_DWORD*)(v29 + 244))
	{
		LODWORD(v35) = 0;
	}
	else
	{
		v35 = HIDWORD(*(_QWORD*)(v33 + 8i64 * v31));
	}
	Component::setColour(v26, 16777473i64, v35);
	v36 = *(_QWORD*)(a1 + 448);
	v37 = a1;
	while (1)
	{
		v38 = *(_QWORD*)(v37 + 80);
		if (v38)
		{
			v39 = *(_QWORD*)(v38 + 16);
			if (v39)
				break;
		}
		v37 = *(_QWORD*)(v37 + 24);
		if (!v37)
		{
			v40 = qword_140EC0000;
			if (!qword_140EC0000)
			{
				v119 = operator new(0x130ui64);
				v40 = Desktop::Desktop((__int64)v119);
				qword_140EC0000 = v40;
			}
			v39 = Desktop::getDefaultLookAndFeel(v40);
			break;
		}
	}
	v41 = 0;
	v42 = *(_DWORD*)(v39 + 244);
	if (v42 <= 0)
		goto LABEL_79;
	v43 = *(_QWORD*)(v39 + 232);
	while (*(_DWORD*)(v43 + 8i64 * v41) != 262)
	{
		v44 = (v42 + v41) / 2;
		if (v44 != v41)
		{
			if (*(int*)(v43 + 8i64 * v44) <= 262)
				v41 = (v42 + v41) / 2;
			else
				v42 = (v42 + v41) / 2;
			if (v41 < v42)
				continue;
		}
		goto LABEL_79;
	}
	if (v41 < 0)
	{
	LABEL_79:
		LODWORD(v45) = dword_140EB15AC;
	}
	else if ((unsigned int)v41 >= *(_DWORD*)(v39 + 244))
	{
		LODWORD(v45) = 0;
	}
	else
	{
		v45 = HIDWORD(*(_QWORD*)(v43 + 8i64 * v41));
	}
	Component::setColour(v36, 16777473i64, v45);
	v46 = *(_QWORD*)(a1 + 456);
	v47 = a1;
	while (1)
	{
		v48 = *(_QWORD*)(v47 + 80);
		if (v48)
		{
			v49 = *(_QWORD*)(v48 + 16);
			if (v49)
				break;
		}
		v47 = *(_QWORD*)(v47 + 24);
		if (!v47)
		{
			v50 = qword_140EC0000;
			if (!qword_140EC0000)
			{
				v120 = operator new(0x130ui64);
				v50 = Desktop::Desktop((__int64)v120);
				qword_140EC0000 = v50;
			}
			v49 = Desktop::getDefaultLookAndFeel(v50);
			break;
		}
	}
	v51 = 0;
	v52 = *(_DWORD*)(v49 + 244);
	if (v52 <= 0)
		goto LABEL_99;
	v53 = *(_QWORD*)(v49 + 232);
	while (*(_DWORD*)(v53 + 8i64 * v51) != 262)
	{
		v54 = (v52 + v51) / 2;
		if (v54 != v51)
		{
			if (*(int*)(v53 + 8i64 * v54) <= 262)
				v51 = (v52 + v51) / 2;
			else
				v52 = (v52 + v51) / 2;
			if (v51 < v52)
				continue;
		}
		goto LABEL_99;
	}
	if (v51 < 0)
	{
	LABEL_99:
		LODWORD(v55) = dword_140EB15AC;
	}
	else if ((unsigned int)v51 >= *(_DWORD*)(v49 + 244))
	{
		LODWORD(v55) = 0;
	}
	else
	{
		v55 = HIDWORD(*(_QWORD*)(v53 + 8i64 * v51));
	}
	Component::setColour(v46, 16777473i64, v55);
	v56 = *(_QWORD*)(a1 + 504);
	v57 = a1;
	while (1)
	{
		v58 = *(_QWORD*)(v57 + 80);
		if (v58)
		{
			v59 = *(_QWORD*)(v58 + 16);
			if (v59)
				break;
		}
		v57 = *(_QWORD*)(v57 + 24);
		if (!v57)
		{
			v60 = qword_140EC0000;
			if (!qword_140EC0000)
			{
				v121 = operator new(0x130ui64);
				v60 = Desktop::Desktop((__int64)v121);
				qword_140EC0000 = v60;
			}
			v59 = Desktop::getDefaultLookAndFeel(v60);
			break;
		}
	}
	v61 = 0;
	v62 = *(_DWORD*)(v59 + 244);
	if (v62 <= 0)
		goto LABEL_119;
	v63 = *(_QWORD*)(v59 + 232);
	while (*(_DWORD*)(v63 + 8i64 * v61) != 262)
	{
		v64 = (v62 + v61) / 2;
		if (v64 != v61)
		{
			if (*(int*)(v63 + 8i64 * v64) <= 262)
				v61 = (v62 + v61) / 2;
			else
				v62 = (v62 + v61) / 2;
			if (v61 < v62)
				continue;
		}
		goto LABEL_119;
	}
	if (v61 < 0)
	{
	LABEL_119:
		LODWORD(v65) = dword_140EB15AC;
	}
	else if ((unsigned int)v61 >= *(_DWORD*)(v59 + 244))
	{
		LODWORD(v65) = 0;
	}
	else
	{
		v65 = HIDWORD(*(_QWORD*)(v63 + 8i64 * v61));
	}
	Component::setColour(v56, 16777473i64, v65);
	v66 = *(_QWORD*)(a1 + 464);
	v67 = a1;
	while (1)
	{
		v68 = *(_QWORD*)(v67 + 80);
		if (v68)
		{
			v69 = *(_QWORD*)(v68 + 16);
			if (v69)
				break;
		}
		v67 = *(_QWORD*)(v67 + 24);
		if (!v67)
		{
			v70 = qword_140EC0000;
			if (!qword_140EC0000)
			{
				v122 = operator new(0x130ui64);
				v70 = Desktop::Desktop((__int64)v122);
				qword_140EC0000 = v70;
			}
			v69 = Desktop::getDefaultLookAndFeel(v70);
			break;
		}
	}
	v71 = 0;
	v72 = *(_DWORD*)(v69 + 244);
	if (v72 <= 0)
		goto LABEL_139;
	v73 = *(_QWORD*)(v69 + 232);
	while (*(_DWORD*)(v73 + 8i64 * v71) != 261)
	{
		v74 = (v72 + v71) / 2;
		if (v74 != v71)
		{
			if (*(int*)(v73 + 8i64 * v74) <= 261)
				v71 = (v72 + v71) / 2;
			else
				v72 = (v72 + v71) / 2;
			if (v71 < v72)
				continue;
		}
		goto LABEL_139;
	}
	if (v71 < 0)
	{
	LABEL_139:
		LODWORD(v75) = dword_140EB15AC;
	}
	else if ((unsigned int)v71 >= *(_DWORD*)(v69 + 244))
	{
		LODWORD(v75) = 0;
	}
	else
	{
		v75 = HIDWORD(*(_QWORD*)(v73 + 8i64 * v71));
	}
	Component::setColour(v66, 16777473i64, v75);
	v76 = *(_QWORD*)(a1 + 520);
	v77 = a1;
	while (1)
	{
		v78 = *(_QWORD*)(v77 + 80);
		if (v78)
		{
			v79 = *(_QWORD*)(v78 + 16);
			if (v79)
				break;
		}
		v77 = *(_QWORD*)(v77 + 24);
		if (!v77)
		{
			v80 = qword_140EC0000;
			if (!qword_140EC0000)
			{
				v123 = operator new(0x130ui64);
				v80 = Desktop::Desktop((__int64)v123);
				qword_140EC0000 = v80;
			}
			v79 = Desktop::getDefaultLookAndFeel(v80);
			break;
		}
	}
	v81 = 0;
	v82 = *(_DWORD*)(v79 + 244);
	if (v82 <= 0)
		goto LABEL_159;
	v83 = *(_QWORD*)(v79 + 232);
	while (*(_DWORD*)(v83 + 8i64 * v81) != 16777472)
	{
		v84 = (v82 + v81) / 2;
		if (v84 != v81)
		{
			if (*(int*)(v83 + 8i64 * v84) <= 16777472)
				v81 = (v82 + v81) / 2;
			else
				v82 = (v82 + v81) / 2;
			if (v81 < v82)
				continue;
		}
		goto LABEL_159;
	}
	if (v81 < 0)
	{
	LABEL_159:
		LODWORD(v85) = dword_140EB15AC;
	}
	else if ((unsigned int)v81 >= *(_DWORD*)(v79 + 244))
	{
		LODWORD(v85) = 0;
	}
	else
	{
		v85 = HIDWORD(*(_QWORD*)(v83 + 8i64 * v81));
	}
	Component::setColour(v76, 16777472i64, v85);
	v86 = *(_QWORD*)(a1 + 520);
	v87 = a1;
	while (1)
	{
		v88 = *(_QWORD*)(v87 + 80);
		if (v88)
		{
			v89 = *(_QWORD*)(v88 + 16);
			if (v89)
				break;
		}
		v87 = *(_QWORD*)(v87 + 24);
		if (!v87)
		{
			v90 = qword_140EC0000;
			if (!qword_140EC0000)
			{
				v124 = operator new(0x130ui64);
				v90 = Desktop::Desktop((__int64)v124);
				qword_140EC0000 = v90;
			}
			v89 = Desktop::getDefaultLookAndFeel(v90);
			break;
		}
	}
	v91 = 0;
	v92 = *(_DWORD*)(v89 + 244);
	if (v92 <= 0)
		goto LABEL_179;
	v93 = *(_QWORD*)(v89 + 232);
	while (*(_DWORD*)(v93 + 8i64 * v91) != 262)
	{
		v94 = (v92 + v91) / 2;
		if (v94 != v91)
		{
			if (*(int*)(v93 + 8i64 * v94) <= 262)
				v91 = (v92 + v91) / 2;
			else
				v92 = (v92 + v91) / 2;
			if (v91 < v92)
				continue;
		}
		goto LABEL_179;
	}
	if (v91 < 0)
	{
	LABEL_179:
		LODWORD(v95) = dword_140EB15AC;
	}
	else if ((unsigned int)v91 >= *(_DWORD*)(v89 + 244))
	{
		LODWORD(v95) = 0;
	}
	else
	{
		v95 = HIDWORD(*(_QWORD*)(v93 + 8i64 * v91));
	}
	Component::setColour(v86, 16777473i64, v95);
	v96 = a1;
	while (1)
	{
		v97 = *(_QWORD*)(v96 + 80);
		if (v97)
		{
			v98 = *(_QWORD*)(v97 + 16);
			if (v98)
				break;
		}
		v96 = *(_QWORD*)(v96 + 24);
		if (!v96)
		{
			v99 = qword_140EC0000;
			if (!qword_140EC0000)
			{
				v125 = operator new(0x130ui64);
				v99 = Desktop::Desktop((__int64)v125);
				qword_140EC0000 = v99;
			}
			v98 = Desktop::getDefaultLookAndFeel(v99);
			break;
		}
	}
	v100 = 0;
	v101 = *(_DWORD*)(v98 + 244);
	v102 = dword_140EB15AC;
	if (v101 <= 0)
		goto LABEL_199;
	v103 = *(_QWORD*)(v98 + 232);
	while (*(_DWORD*)(v103 + 8i64 * v100) != 254)
	{
		v104 = (v101 + v100) / 2;
		if (v104 != v100)
		{
			if (*(int*)(v103 + 8i64 * v104) <= 254)
				v100 = (v101 + v100) / 2;
			else
				v101 = (v101 + v100) / 2;
			if (v100 < v101)
				continue;
		}
		goto LABEL_199;
	}
	if (v100 < 0)
	{
	LABEL_199:
		LODWORD(v105) = dword_140EB15AC;
	}
	else if ((unsigned int)v100 >= *(_DWORD*)(v98 + 244))
	{
		LODWORD(v105) = 0;
	}
	else
	{
		v105 = HIDWORD(*(_QWORD*)(v103 + 8i64 * v100));
	}
	v106 = a1;
	while (1)
	{
		v107 = *(_QWORD*)(v106 + 80);
		if (v107)
		{
			v108 = *(_QWORD*)(v107 + 16);
			if (v108)
				break;
		}
		v106 = *(_QWORD*)(v106 + 24);
		if (!v106)
		{
			v109 = qword_140EC0000;
			if (!qword_140EC0000)
			{
				v126 = operator new(0x130ui64);
				v109 = Desktop::Desktop((__int64)v126);
				qword_140EC0000 = v109;
			}
			v108 = Desktop::getDefaultLookAndFeel(v109);
			v102 = dword_140EB15AC;
			break;
		}
	}
	v110 = 0;
	v111 = *(_DWORD*)(v108 + 244);
	if (v111 <= 0)
		goto LABEL_219;
	v112 = *(_QWORD*)(v108 + 232);
	while (*(_DWORD*)(v112 + 8i64 * v110) != 255)
	{
		v113 = (v111 + v110) / 2;
		if (v113 != v110)
		{
			if (*(int*)(v112 + 8i64 * v113) <= 255)
				v110 = (v111 + v110) / 2;
			else
				v111 = (v111 + v110) / 2;
			if (v110 < v111)
				continue;
		}
		goto LABEL_219;
	}
	if (v110 < 0)
	{
	LABEL_219:
		LODWORD(v114) = v102;
	}
	else
	{
		if ((unsigned int)v110 < *(_DWORD*)(v108 + 244))
			v2 = *(_QWORD*)(v112 + 8i64 * v110);
		v114 = HIDWORD(v2);
	}
	v127 = v114;
	HIBYTE(v127) = 0;
	(*(void(__fastcall**)(_QWORD, _QWORD, _QWORD))(**(_QWORD**)(a1 + 328) + 368i64))(
		*(_QWORD*)(a1 + 328),
		*(unsigned int*)(a1 + 356),
		v127);
	(*(void(__fastcall**)(_QWORD, _QWORD, _QWORD))(**(_QWORD**)(a1 + 328) + 368i64))(
		*(_QWORD*)(a1 + 328),
		*(unsigned int*)(a1 + 352),
		(unsigned int)v105);
	result = (*(__int64(__fastcall**)(_QWORD, _QWORD, _QWORD))(**(_QWORD**)(a1 + 384) + 368i64))(
		*(_QWORD*)(a1 + 384),
		*(unsigned int*)(a1 + 352),
		(unsigned int)v105);
	*(_DWORD*)(a1 + 352) = v105;
	*(_DWORD*)(a1 + 356) = v127;
	return result;*/
}
void MonitorControllerComponent::paint(Graphics&)
{
	/*__int64 v3; // rdi
	__int64 v4; // rax
	__int64 v5; // r8
	__int64 v6; // rcx
	__int64 v7; // rax
	unsigned int* v8; // rax
	__int64 v9; // rbx
	float* v10; // rax
	float* v11; // rax
	__int64 v12; // rbx
	float* v13; // rax
	float* v14; // rax
	void* result; // rax
	__int64 v16; // rcx
	__int64 v17; // rbx
	float* v18; // rax
	float* v19; // rax
	__int128 v20; // [rsp+20h] [rbp-48h] BYREF
	char v21[16]; // [rsp+30h] [rbp-38h] BYREF
	float v22[10]; // [rsp+40h] [rbp-28h] BYREF
	int v23; // [rsp+70h] [rbp+8h] BYREF
	void* v24; // [rsp+80h] [rbp+18h]

	v3 = a1;
	v4 = a1;
	if (a1)
	{
		while (1)
		{
			v5 = *(_QWORD*)(v4 + 80);
			if (v5)
			{
				v6 = *(_QWORD*)(v5 + 16);
				if (v6)
					break;
			}
			v4 = *(_QWORD*)(v4 + 24);
			if (!v4)
				goto LABEL_5;
		}
	}
	else
	{
	LABEL_5:
		v7 = qword_140EC0000;
		if (!qword_140EC0000)
		{
			v24 = operator new(0x130ui64);
			v7 = Desktop::Desktop((__int64)v24);
			qword_140EC0000 = v7;
		}
		v6 = Desktop::getDefaultLookAndFeel(v7);
	}
	v8 = LookAndFeel::findColour(v6, &v23, 16799488);
	Graphics::fillAll(a2, *v8);
	v9 = *(_QWORD*)(v3 + 328);
	v20 = *(_OWORD*)(v3 + 336);
	v23 = 36;
	v10 = (float*)(*(__int64(__fastcall**)(__int64, char*))(*(_QWORD*)v9 + 360i64))(v9, v21);
	v11 = RectanglePlacement::getTransformToFit(&v23, v22, v10, (float*)&v20);
	Drawable::nonConstDraw(v9, a2, 1.0, v11);
	v12 = *(_QWORD*)(v3 + 360);
	v20 = *(_OWORD*)(v3 + 368);
	v23 = 36;
	v13 = (float*)(*(__int64(__fastcall**)(__int64, char*))(*(_QWORD*)v12 + 360i64))(v12, v21);
	v14 = RectanglePlacement::getTransformToFit(&v23, v22, v13, (float*)&v20);
	Drawable::nonConstDraw(v12, a2, 1.0, v14);
	result = ArgList;
	v16 = *((_QWORD*)ArgList + 174);
	if (v16)
	{
		if (*(_DWORD*)(v16 + 196))
		{
			v17 = *(_QWORD*)(v3 + 384);
			v20 = *(_OWORD*)(v3 + 392);
			v23 = 36;
			v18 = (float*)(*(__int64(__fastcall**)(__int64, char*))(*(_QWORD*)v17 + 360i64))(v17, v21);
			v19 = RectanglePlacement::getTransformToFit(&v23, v22, v18, (float*)&v20);
			result = (void*)Drawable::nonConstDraw(v17, a2, 1.0, v19);
		}
	}
	return result;*/

}
void MonitorControllerComponent::resized()
{
	/*int v2; // edi
	int v3; // esi
	int v4; // ebp
	int v5; // edx
	int v6; // er8
	int v7; // esi
	int v8; // edx
	int v9; // eax
	int v10; // er9
	int v11; // edx
	int v12; // edx
	int v13; // er12
	int v14; // ecx
	int v15; // er14
	int v16; // edx
	int v17; // er12
	int v18; // edi
	int v19; // ebx
	int v20; // esi
	int v21; // edx
	__int64 v22; // rbp
	int v23; // eax
	int v24; // ecx
	int v25; // ebx
	int v26; // eax
	int v27; // er14
	int v28; // esi
	int v29; // er12
	int v30; // ebp
	int v31; // ecx
	int v32; // er15
	int v33; // ebx
	int v34; // esi
	int v35; // esi
	int v36; // edi
	int v37; // esi
	int v38; // ecx
	int v39; // esi
	int v40; // edi
	int v41; // ebx
	int v42; // esi
	int v43; // ecx
	int v44; // edi
	int v45; // esi
	int v46; // ebx
	int v47; // esi
	int v48; // ecx
	int v49; // esi
	int v50; // edi
	int v51; // ebx
	int v52; // esi
	int v53; // ecx
	int v54; // esi
	int v55; // edi
	int v56; // ebx
	int v57; // ecx
	int v58; // esi
	int v59; // edi
	int v60; // esi
	int v61; // ebx
	int v62; // esi
	int v63; // ecx
	int v64; // esi
	int v65; // edi
	int v66; // ebx
	__m128 v67; // xmm3
	int v68; // esi
	int v69; // eax
	__m128 v70; // xmm3
	__m128 v71; // xmm3
	__m128 v72; // xmm3
	float v73; // xmm0_4
	float v74; // xmm1_4
	float v75; // xmm0_4
	__m128 v76; // xmm3
	float v77; // xmm1_4
	float v78; // xmm2_4
	__m128 v79; // xmm3
	__int64 v80; // rcx
	__m128 v81; // xmm3
	__m128 v82; // xmm3
	int v83; // ecx
	int v84; // eax
	__int64 v85; // rdx
	__int64* v86; // rcx
	__int64 v87; // rax
	__int64 v88; // rdx
	__int64 v89; // rdx
	__int64* v90; // rcx
	__int64 v91; // rax
	__int64 v92; // rdx
	int v94; // [rsp+30h] [rbp-68h]
	int v95; // [rsp+A0h] [rbp+8h]
	int v96; // [rsp+A8h] [rbp+10h]
	int v97; // [rsp+A8h] [rbp+10h]
	int v98; // [rsp+B0h] [rbp+18h]
	int v99; // [rsp+B8h] [rbp+20h]

	Component::setBounds(*(_QWORD*)(a1 + 408), 89, 213, 16, 76);
	Component::setBounds(*(_QWORD*)(a1 + 416), *(_DWORD*)(a1 + 40) / 2 - 220, *(_DWORD*)(a1 + 44) / 2 - 220, 440, 440);
	Component::setBounds(*(_QWORD*)(a1 + 424), 132, 96, 40, *(_DWORD*)(a1 + 44) - 150);
	Component::setBounds(*(_QWORD*)(a1 + 472), *(_DWORD*)(a1 + 40) - 273, 0, 272, 24);
	Component::setBounds(*(_QWORD*)(a1 + 480), 98, *(_DWORD*)(a1 + 44) - 46, 110, 40);
	Component::setBounds(*(_QWORD*)(a1 + 488), *(_DWORD*)(a1 + 40) - 273, 24, 272, 24);
	v2 = 100;
	Component::setBounds(*(_QWORD*)(a1 + 512), *(_DWORD*)(a1 + 40) / 2 - 49, *(_DWORD*)(a1 + 44) - 36, 100, 30);
	Component::setBounds(*(_QWORD*)(a1 + 528), 120, *(_DWORD*)(a1 + 44) - 1142, 72, 40);
	v3 = *(_DWORD*)(a1 + 44);
	v4 = 24;
	v5 = *(_DWORD*)(a1 + 40);
	v6 = 100;
	if (v3 < 24)
		v4 = *(_DWORD*)(a1 + 44);
	v7 = v3 - v4;
	v98 = v4;
	v96 = v7;
	if (v5 < 100)
		v6 = *(_DWORD*)(a1 + 40);
	v8 = v5 - v6;
	v95 = v6;
	v9 = 8;
	v10 = v7;
	if (v8 < 8)
		v9 = v8;
	v11 = v8 - v9;
	if (v11 < 100)
		v2 = v11;
	v12 = v11 - v2;
	v94 = v9 + v6;
	v13 = v12;
	v99 = v2;
	v14 = v2 + v9 + v6;
	v15 = v2 + v6 + 8;
	if (v12 < v15)
		v15 = v12;
	v16 = v12 - v15;
	v17 = v14 + v13 - v15;
	if (v16 <= v7)
		v10 = v16;
	Component::setBounds(*(_QWORD*)(a1 + 416), v14 + (v16 - v10) / 2, v4 + (v7 - v10) / 2, v10, v10);
	v18 = 0;
	if ((__int64)(*(_QWORD*)(a1 + 312) - *(_QWORD*)(a1 + 304)) >> 3)
	{
		v19 = v7;
		v20 = v4;
		v21 = v4;
		v22 = 0i64;
		do
		{
			if (v18)
			{
				v23 = 24;
				if (v19 < 24)
					v23 = v19;
				v24 = v21 + v23;
			}
			else
			{
				v23 = 32;
				if (v19 < 32)
					v23 = v19;
				v24 = v20 + v23;
			}
			v25 = v19 - v23;
			v26 = 32;
			if (v25 < 32)
				v26 = v25;
			v19 = v25 - v26;
			v20 = v26 + v24;
			Component::setBounds(*(_QWORD*)(*(_QWORD*)(a1 + 304) + v22), v17, v24, v15, v26);
			++v18;
			v22 += 8i64;
			v21 = v20;
		} while (v18 < (unsigned __int64)((__int64)(*(_QWORD*)(a1 + 312) - *(_QWORD*)(a1 + 304)) >> 3));
		v7 = v96;
		v4 = v98;
	}
	v27 = 32;
	if (v7 < 32)
		v27 = v7;
	v28 = v7 - v27;
	v97 = v28;
	v29 = v27 + v4;
	v30 = 32;
	if (v28 < 32)
		v30 = v28;
	Component::setBounds(*(_QWORD*)(a1 + 432), 0, v29, v95, v30);
	v31 = 24;
	v33 = 32;
	v34 = v28 - v30;
	v32 = v34;
	if (v34 < 24)
		v31 = v34;
	v35 = v34 - v31;
	v36 = v30 + v29 + v31;
	if (v35 < 32)
		v33 = v35;
	Component::setBounds(*(_QWORD*)(a1 + 440), 0, v36, v95, v33);
	v37 = v35 - v33;
	v38 = 24;
	if (v37 < 24)
		v38 = v37;
	v39 = v37 - v38;
	v40 = v38 + v33 + v36;
	v41 = 32;
	if (v39 < 32)
		v41 = v39;
	Component::setBounds(*(_QWORD*)(a1 + 504), 0, v40, v95, v41);
	v42 = v39 - v41;
	v43 = 24;
	if (v42 < 24)
		v43 = v42;
	v44 = v43 + v41 + v40;
	v45 = v42 - v43;
	v46 = 32;
	if (v45 < 32)
		v46 = v45;
	Component::setBounds(*(_QWORD*)(a1 + 448), 0, v44, v95, v46);
	Component::setBounds(
		*(_QWORD*)(a1 + 408),
		*(_DWORD*)(*(_QWORD*)(a1 + 504) + 32i64) + *(_DWORD*)(*(_QWORD*)(a1 + 504) + 40i64),
		*(_DWORD*)(*(_QWORD*)(a1 + 504) + 36i64) + *(_DWORD*)(*(_QWORD*)(a1 + 504) + 44i64) / 2,
		16,
		56);
	v47 = v45 - v46;
	v48 = 24;
	if (v47 < 24)
		v48 = v47;
	v49 = v47 - v48;
	v50 = v48 + v46 + v44;
	v51 = 32;
	if (v49 < 32)
		v51 = v49;
	Component::setBounds(*(_QWORD*)(a1 + 456), 0, v50, v95, v51);
	v52 = v49 - v51;
	v53 = 24;
	if (v52 < 24)
		v53 = v52;
	v54 = v52 - v53;
	v55 = v53 + v51 + v50;
	v56 = 32;
	if (v54 < 32)
		v56 = v54;
	Component::setBounds(*(_QWORD*)(a1 + 464), 0, v55, v95, v56);
	v57 = 24;
	v58 = v54 - v56;
	if (v58 < 24)
		v57 = v58;
	v59 = v57 + v56 + v55;
	v60 = v58 - v57;
	v61 = 32;
	if (v60 < 32)
		v61 = v60;
	Component::setBounds(*(_QWORD*)(a1 + 520), 0, v59, v95, v61);
	v62 = v60 - v61;
	v63 = 24;
	if (v62 < 24)
		v63 = v62;
	v64 = v62 - v63;
	v65 = v63 + v61 + v59;
	v66 = 32;
	if (v64 < 32)
		v66 = v64;
	Component::setBounds(*(_QWORD*)(a1 + 496), 0, v65, v95, v66);
	Component::setBounds(*(_QWORD*)(a1 + 528), v94, v98, v99, v27);
	v67 = _mm_shuffle_ps((__m128)0i64, (__m128)0i64, 225);
	v68 = v64 - v66;
	v69 = 32;
	if (v68 < 32)
		v69 = v68;
	v67.m128_f32[0] = (float)(v65 + v66 + v68 - v69);
	v70 = _mm_shuffle_ps(v67, v67, 198);
	v70.m128_f32[0] = (float)v95;
	v71 = _mm_shuffle_ps(v70, v70, 39);
	v71.m128_f32[0] = (float)v69;
	v72 = _mm_shuffle_ps(v71, v71, 57);
	*(__m128*)(a1 + 368) = v72;
	v73 = *(float*)(a1 + 380) * 0.5;
	*(__m128*)(a1 + 336) = v72;
	v74 = *(float*)(a1 + 348) + *(float*)(a1 + 368);
	*(float*)(a1 + 380) = v73;
	*(float*)(a1 + 376) = *(float*)(a1 + 376) * 0.5;
	v75 = *(float*)(a1 + 344) + *(float*)(a1 + 372);
	*(float*)(a1 + 368) = v74;
	*(float*)(a1 + 372) = v75;
	v76 = (__m128) * (unsigned int*)(a1 + 344);
	v77 = *(float*)(a1 + 348);
	v78 = fminf(*(float*)(a1 + 344), 32.0);
	v76.m128_f32[0] = (float)(v76.m128_f32[0] + *(float*)(a1 + 336)) - v78;
	v79 = _mm_shuffle_ps(v76, v76, 225);
	*(float*)(a1 + 344) = *(float*)(a1 + 344) - v78;
	v80 = *(_QWORD*)(a1 + 480);
	v79.m128_f32[0] = *(float*)(a1 + 340);
	v81 = _mm_shuffle_ps(v79, v79, 198);
	v81.m128_f32[0] = v78;
	v82 = _mm_shuffle_ps(v81, v81, 39);
	v82.m128_f32[0] = v77;
	*(__m128*)(a1 + 392) = _mm_shuffle_ps(v82, v82, 57);
	Component::setBounds(v80, v94, v29 + v97 - v30, v99, v30);
	Component::toFront(*(_QWORD*)(a1 + 480), 0);
	v83 = 20;
	v84 = 20;
	if (v99 < 20)
		v84 = v99;
	if (v99 - v84 < 20)
		v83 = v99 - v84;
	Component::setBounds(*(_QWORD*)(a1 + 424), v94 + v84, v29, v99 - v84 - v83, v32);
	v86 = *(__int64**)(a1 + 512);
	v87 = *v86;
	if (*(int*)(a1 + 40) >= 500)
	{
		LOBYTE(v85) = 1;
		(*(void(__fastcall**)(__int64*, __int64))(v87 + 88))(v86, v85);
		LOBYTE(v88) = 1;
	}
	else
	{
		(*(void(__fastcall**)(__int64*, _QWORD))(v87 + 88))(v86, 0i64);
		v88 = 0i64;
	}
	(*(void(__fastcall**)(_QWORD, __int64))(**(_QWORD**)(a1 + 416) + 88i64))(*(_QWORD*)(a1 + 416), v88);
	v90 = *(__int64**)(a1 + 488);
	v91 = *v90;
	if (*(int*)(a1 + 40) >= 300)
	{
		LOBYTE(v89) = 1;
		(*(void(__fastcall**)(__int64*, __int64))(v91 + 88))(v90, v89);
		LOBYTE(v92) = 1;
	}
	else
	{
		(*(void(__fastcall**)(__int64*, _QWORD))(v91 + 88))(v90, 0i64);
		v92 = 0i64;
	}
	return (*(__int64(__fastcall**)(_QWORD, __int64))(**(_QWORD**)(a1 + 472) + 88i64))(*(_QWORD*)(a1 + 472), v92);*/

}