#include "AutoCalDefinition.h"

AutoCalDefinition::AutoCalDefinition()
{

}

AutoCalDefinition::~AutoCalDefinition()
{

}

void AutoCalDefinition::mouseUp(const MouseEvent& event)
{
/*
	__int64 v2; // rax
	__int64 v4; // rcx

	v2 = *(_QWORD*)(a1 + 352);
	if (*(_QWORD*)(a2 + 48) == v2)
	{
		v4 = *(_QWORD*)(a1 + 312);
		v2 = qword_140EC0010;
		if (qword_140EC0010 != v4)
		{
			if (qword_140EC0010)
			{
				while (1)
				{
					v2 = *(_QWORD*)(v2 + 24);
					if (v2 == v4)
						break;
					if (!v2)
						goto LABEL_6;
				}
			}
			else
			{
			LABEL_6:
				TextEditor::selectAll(v4);
				LOBYTE(v2) = Component::grabKeyboardFocusInternal(*(_QWORD*)(a1 + 312), 2u, 1);
			}
		}
	}
	return v2;
*/
}

void AutoCalDefinition::paint(Graphics& g)
{
/*
	LODWORD(v18) = -13484476;
	Graphics::fillAll(a2, 0xFF323E44);
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
			v19 = operator new(0x130ui64);
			v7 = Desktop::Desktop((__int64)v19);
			qword_140EC0000 = v7;
		}
		v6 = Desktop::getDefaultLookAndFeel(v7);
	}
	v8 = LookAndFeel::findColour(v6, &v18, 16799488);
	Graphics::fillAll(a2, *v8);
	if (!*(_BYTE*)(a1 + 304))
	{
		Component::grabKeyboardFocusInternal(*(_QWORD*)(a1 + 312), 2u, 1);
		*(_BYTE*)(a1 + 304) = 1;
	}
	v18 = (float) * (int*)(a1 + 40) + 6.755399441055744e15;
	Graphics::setColour(a2, -16777216);
	v9 = *(_QWORD*)(a1 + 200);
	if (v9)
	{
		v10 = _mm_shuffle_ps((__m128)0x40000000u, (__m128)0x40000000u, 225);
		v10.m128_f32[0] = 100.0;
		v11 = _mm_shuffle_ps(v10, v10, 198);
		v11.m128_f32[0] = (float)(LODWORD(v18) - 2);
		v12 = _mm_shuffle_ps(v11, v11, 39);
		v12.m128_f32[0] = 200.0;
		v15 = _mm_shuffle_ps(v12, v12, 57);
		LODWORD(v18) = 36;
		v13 = (float*)(*(__int64(__fastcall * *)(__int64, char*))(*(_QWORD*)v9 + 360i64))(v9, v16);
		v14 = RectanglePlacement::getTransformToFit((int*)& v18, v17, v13, v15.m128_f32);
		Drawable::nonConstDraw(v9, a2, 1.0, v14);
	}
*/
}

void AutoCalDefinition::resized()
{
/*
	Component::setBounds(*(_QWORD*)(a1 + 312), 192, *(_DWORD*)(a1 + 44) - 282, *(_DWORD*)(a1 + 40) - 206, 160);
	Component::setBounds(*(_QWORD*)(a1 + 320), *(_DWORD*)(a1 + 40) - 102, *(_DWORD*)(a1 + 44) - 122, 88, 24);
	Component::setBounds(*(_QWORD*)(a1 + 328), 0, *(_DWORD*)(a1 + 44) - 42, 150, 32);
	Component::setBounds(*(_QWORD*)(a1 + 336), *(_DWORD*)(a1 + 40) - 150, *(_DWORD*)(a1 + 44) - 42, 150, 32);
	Component::setBounds(*(_QWORD*)(a1 + 344), *(_DWORD*)(a1 + 40) - 627, *(_DWORD*)(a1 + 44) - 98, 588, 40);
	Component::setBounds(*(_QWORD*)(a1 + 352), 192, *(_DWORD*)(a1 + 44) - 314, 411, 26);
	Component::setBounds(*(_QWORD*)(a1 + 360), 5, 16, *(_DWORD*)(a1 + 40) - 16, 64);
	Component::setBounds(*(_QWORD*)(a1 + 368), *(_DWORD*)(a1 + 40) - 35, *(_DWORD*)(a1 + 44) - 90, 24, 24);
	Component::setBounds(*(_QWORD*)(a1 + 376), 4, *(_DWORD*)(a1 + 44) - 314, 172, 27);
	Component::setBounds(*(_QWORD*)(a1 + 384), 30, *(_DWORD*)(a1 + 44) - 242, 104, 24);
	Component::setBounds(*(_QWORD*)(a1 + 392), 30, *(_DWORD*)(a1 + 44) - 278, 104, 24);
	Component::setBounds(*(_QWORD*)(a1 + 400), 30, *(_DWORD*)(a1 + 44) - 206, 104, 24);
	Component::setBounds(*(_QWORD*)(a1 + 408), 136, *(_DWORD*)(a1 + 44) - 241, 47, 24);
	Component::setBounds(*(_QWORD*)(a1 + 416), 4, *(_DWORD*)(a1 + 44) - 242, 20, 24);
	Component::setBounds(*(_QWORD*)(a1 + 424), 4, *(_DWORD*)(a1 + 44) - 278, 20, 24);
	Component::setBounds(*(_QWORD*)(a1 + 432), 4, *(_DWORD*)(a1 + 44) - 206, 20, 24);
	Component::setBounds(*(_QWORD*)(a1 + 440), 136, *(_DWORD*)(a1 + 44) - 277, 48, 24);
	Component::setBounds(*(_QWORD*)(a1 + 448), 136, *(_DWORD*)(a1 + 44) - 205, 48, 24);
	Component::setBounds(*(_QWORD*)(a1 + 456), 4, *(_DWORD*)(a1 + 44) - 144, 156, 20);
	return Component::setBounds(*(_QWORD*)(a1 + 464), 0, *(_DWORD*)(a1 + 44) - 169, 172, 20);
*/
}

void AutoCalDefinition::sliderValueChanged(Slider* slider)
{
/*
	_QWORD* v2; // rbx
	unsigned __int64 v3; // xmm7_8
	unsigned __int64 v4; // xmm6_8

	v2 = (_QWORD*) * ((_QWORD*)ArgList + 66);
	v3 = sub_14009F390(*(_QWORD*)(a1[27] + 512i64)).m128_u64[0];
	v4 = sub_14009F390(*(_QWORD*)(a1[26] + 512i64)).m128_u64[0];
	v2[7] = sub_14009F390(*(_QWORD*)(a1[25] + 512i64)).m128_u64[0];
	v2[8] = v4;
	v2[9] = v3;
	sub_1400E2150(a1 - 23);
*/
}

void AutoCalDefinition::buttonClicked(Button*)
{
/*
	void(__fastcall * **v3)(_QWORD, __int64); // rcx
	__int64 v4; // rcx
	__int64 v5; // rsi
	char v6; // dl
	int v7; // ecx
	__int64 v8; // rbx
	__int64 v9; // rax
	_BYTE* v10; // rbx
	char** v11; // rdx
	__int64 v12; // rbx
	__int64 v13; // rbx
	__int64 v14; // rax
	_BYTE* v15; // rcx
	void* v16; // rcx
	void* v17; // rcx
	void* v18; // rcx
	void* v19; // rcx
	void* v20; // rcx
	void* v21; // rcx
	__int64 v22; // [rsp+30h] [rbp-48h] BYREF
	__int64 v23; // [rsp+38h] [rbp-40h] BYREF
	__int64 v24; // [rsp+40h] [rbp-38h] BYREF
	__int64 v25; // [rsp+48h] [rbp-30h] BYREF
	__int64 v26; // [rsp+50h] [rbp-28h] BYREF
	__int64 v27; // [rsp+58h] [rbp-20h] BYREF
	char v28; // [rsp+60h] [rbp-18h] BYREF
	char v29; // [rsp+A0h] [rbp+28h] BYREF
	__int64 v30; // [rsp+A8h] [rbp+30h] BYREF
	char* v31; // [rsp+B0h] [rbp+38h] BYREF
	_BYTE* v32; // [rsp+B8h] [rbp+40h] BYREF

	if (a2 == a1[19])
	{
		v3 = (void(__fastcall * **)(_QWORD, __int64)) * (a1 - 19);
	}
	else
	{
		if (a2 != a1[20])
			return;
		if (*(_DWORD*)(qword_140EBFF78 + 76) <= 1u)
			v4 = 0i64;
		else
			v4 = *(_QWORD*)(*(_QWORD*)(qword_140EBFF78 + 64) + 8i64);
		v5 = _RTDynamicCast(
			v4,
			0i64,
			&juce::Component `RTTI Type Descriptor',
			& CalibrateComponent `RTTI Type Descriptor',
			0);
		v6 = sub_1401FB760();
		v7 = *(_DWORD*)(v5 + 744);
		if (v7 == 1)
		{
			v8 = *(_QWORD*)(*(_QWORD*)(*((_QWORD*)ArgList + 66) + 8i64)
				+ 8i64 * *(int*)(*((_QWORD*)ArgList + 66) + 268i64)
				- 8);
			v9 = sub_14040E640(a1[17], &v29);
			sub_140002470(v8, v9);
			*(_BYTE*)(v5 + 752) = 0;
			*(_DWORD*)(v5 + 748) = 1;
			sub_1400F2BA0(v5);
		}
		else if ((v7 & 0xFFFFFFFD) == 0)
		{
			*(_BYTE*)(*(_QWORD*)(*(_QWORD*)(*((_QWORD*)ArgList + 66) + 8i64)
				+ 8i64 * *(int*)(*((_QWORD*)ArgList + 66) + 268i64)
				- 8)
				+ 592i64) = 1;
			if (v6)
			{
				v31 = &v29;
				sub_14040E640(*(_QWORD*)(v5 + 832), &v29);
				sub_140048D00(&v30, "cloud");
				sub_1401FA950(ArgList, &v32, &v30, &v29);
				v10 = v32;
				if ((unsigned int)String::isNotEmpty(v32, "MicFoundLocally")
					&& (unsigned int)String::isNotEmpty(v10, "MicFoundInCloud"))
				{
					v11 = &v31;
				}
				else
				{
					v12 = *((_QWORD*)ArgList + 174);
					sub_14040E640(*(_QWORD*)(v5 + 832), &v31);
					sub_1402043F0(v12, &v31);
					v11 = (char**)& v28;
				}
				v13 = *(_QWORD*)(*(_QWORD*)(*((_QWORD*)ArgList + 66) + 8i64)
					+ 8i64 * *(int*)(*((_QWORD*)ArgList + 66) + 268i64)
					- 8);
				v14 = sub_14040E640(a1[17], v11);
				sub_140002470(v13, v14);
				*(_BYTE*)(v5 + 752) = Button::getToggleState(a1[24]);
				*(_DWORD*)(v5 + 748) = 1;
				sub_1400F2BA0(v5);
				v15 = v32 - 16;
				if ((*((_DWORD*)v32 - 4) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v15) == -1)
					j_j_free(v15);
			}
			else
			{
				sub_140048D00(&v22, "OK");
				sub_14031AF20(&v27, &v22);
				v16 = (void*)(v22 - 16);
				if ((*(_DWORD*)(v22 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v16) == -1)
					j_j_free(v16);
				sub_140048D00(&v23, "Please check your Internet connection and then press Start Calibration!");
				sub_14031AF20(&v26, &v23);
				v17 = (void*)(v23 - 16);
				if ((*(_DWORD*)(v23 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v17) == -1)
					j_j_free(v17);
				sub_140048D00(&v24, "Cloud connection error");
				sub_14031AF20(&v25, &v24);
				v18 = (void*)(v24 - 16);
				if ((*(_DWORD*)(v24 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v18) == -1)
					j_j_free(v18);
				sub_14040EFD0(2, (unsigned int)& v25, (unsigned int)& v26, (unsigned int)& v27, 0i64);
				v19 = (void*)(v25 - 16);
				if ((*(_DWORD*)(v25 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v19) == -1)
					j_j_free(v19);
				v20 = (void*)(v26 - 16);
				if ((*(_DWORD*)(v26 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v20) == -1)
					j_j_free(v20);
				v21 = (void*)(v27 - 16);
				if ((*(_DWORD*)(v27 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v21) == -1)
					j_j_free(v21);
				*(_DWORD*)(v5 + 748) = -1;
			}
		}
		v3 = (void(__fastcall * **)(_QWORD, __int64)) * (a1 - 19);
	}
	if (v3)
		(**v3)(v3, 1i64);
*/
}