#include "InfoPanel.h"
void InfoPanel::buttonClicked(Button*)
{
	/*unsigned __int8 v3; // al
	__int64 v4; // r8
	__int64 result; // rax
	unsigned __int8 v6; // al
	__int64 v7; // r8
	__int64 v8; // rcx
	void* v9; // rcx
	unsigned __int8 v10; // al
	__int64 v11; // r8
	__int64 v12; // rcx
	unsigned __int8 v13; // al
	__int64 v14; // rcx

	if (a2 == a1[13])
	{
		v3 = Button::getToggleState(a1[13]);
		LOBYTE(v4) = 1;
		return sub_1401F65E0(ArgList, v3, v4);
	}
	if (a2 == a1[14])
	{
		v6 = Button::getToggleState(a1[14]);
		LOBYTE(v7) = 1;
		return sub_1401F4AC0(v8, v6, v7);
	}
	if (a2 == a1[15])
	{
		v9 = ArgList;
		LOBYTE(a3) = 1;
		if (*(float*)(*(_QWORD*)(*(_QWORD*)(*((_QWORD*)ArgList + 66) + 8i64)
			+ 8i64 * *(int*)(*((_QWORD*)ArgList + 66) + 268i64)
			- 8)
			+ 520i64) > *(float*)(*((_QWORD*)ArgList + 66) + 216i64))
			return sub_1401F7670(ArgList, a2, a3);
		return sub_1401F7670(v9, a2, a3);
	}
	if (a2 == a1[16])
	{
		v9 = ArgList;
		LOBYTE(a3) = 1;
		return sub_1401F7670(v9, a2, a3);
	}
	result = a1[17];
	if (a2 == result)
	{
		v10 = Button::getToggleState(a1[17]);
		LOBYTE(v11) = 1;
		result = sub_1401F4910(ArgList, v10, v11);
	}
	else
	{
		v12 = a1[18];
		if (a2 == v12)
		{
			v13 = Button::getToggleState(v12);
			result = sub_1401F4770(v14, v13);
		}
	}
	return result;*/
	
}
void InfoPanel::changeListenerCallback(ChangeBroadcaster* source)
{
	/*if (a2 == (char*)ArgList + 1104 || a2 == (char*)ArgList + 936)
		goto LABEL_14;
	if (a2 == (char*)ArgList + 1328)
	{
		Button::setToggleState(a1[18], byte_140EBFF24, 0, 0);
		return;
	}
	if (a2 == (char*)ArgList + 1160)
	{
		Button::setToggleState(a1[14], byte_140EBFF44, 0, 0);
		return;
	}
	if (a2 == (char*)ArgList + 1216)
	{
		Button::setToggleState(a1[15], byte_140EBFF25, 0, 0);
		return;
	}
	if (a2 == (char*)ArgList + 1272)
	{
		sub_140167160(a1 - 25);
		return;
	}
	if (a2 == (char*)ArgList + 1048)
	{
	LABEL_14:
		sub_140167E70(a1 - 25);
	}
	else if (a2 == (char*)ArgList + 880)
	{
		sub_140167510(a1 - 25);
	}*/
}
void  InfoPanel::timerCallback()
{
	/*__int64 v2; // rbx
	__int64 result; // rax

	Timer::stopTimer(a1);
	v2 = a1 - 176;
	result = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)v2 + 88i64))(v2, 0i64);
	if (v2)
		result = (**(__int64(__fastcall***)(__int64, __int64))v2)(v2, 1i64);
	return result;*/
	//return 1;
}
void InfoPanel::lookAndFeelChanged()
{
/*

	_QWORD* v1; // rbx
	__int64 v2; // rdi
	_QWORD* v3; // rax
	__int64 v4; // rcx
	__int64 v5; // rcx
	__int64 v6; // rax
	int* v7; // rax
	__int64 v8; // rdi
	_QWORD* v9; // rax
	__int64 v10; // rcx
	__int64 v11; // rcx
	__int64 v12; // rax
	int* v13; // rax
	__int64 v14; // rdi
	_QWORD* v15; // rax
	__int64 v16; // rcx
	__int64 v17; // rcx
	__int64 v18; // rax
	int* v19; // rax
	__int64 v20; // rdi
	_QWORD* v21; // rax
	__int64 v22; // rcx
	__int64 v23; // rcx
	__int64 v24; // rax
	int* v25; // rax
	__int64 v26; // rdi
	_QWORD* v27; // rax
	__int64 v28; // rcx
	__int64 v29; // rcx
	__int64 v30; // rax
	int* v31; // rax
	__int64 v32; // rdi
	_QWORD* v33; // rax
	__int64 v34; // rcx
	__int64 v35; // rcx
	__int64 v36; // rax
	int* v37; // rax
	__int64 v38; // rdi
	__int64 v39; // rax
	__int64 v40; // rax
	__int64 v41; // rax
	int* v42; // rax
	int v44; // [rsp+30h] [rbp+8h] BYREF
	void* v45; // [rsp+38h] [rbp+10h] BYREF
	void* v46; // [rsp+40h] [rbp+18h]

	v1 = a1;
	v2 = a1[39];
	v3 = a1;
	while (1)
	{
		v4 = v3[10];
		if (v4)
		{
			v5 = *(_QWORD*)(v4 + 16);
			if (v5)
				break;
		}
		v3 = (_QWORD*)v3[3];
		if (!v3)
		{
			v6 = qword_140EC0000;
			if (!qword_140EC0000)
			{
				v45 = operator new(0x130ui64);
				v6 = Desktop::Desktop((__int64)v45);
				qword_140EC0000 = v6;
			}
			v5 = Desktop::getDefaultLookAndFeel(v6);
			break;
		}
	}
	v7 = LookAndFeel::findColour(v5, &v44, 261);
	Component::setColour(v2, 16777473i64, *v7);
	v8 = v1[40];
	v9 = v1;
	while (1)
	{
		v10 = v9[10];
		if (v10)
		{
			v11 = *(_QWORD*)(v10 + 16);
			if (v11)
				break;
		}
		v9 = (_QWORD*)v9[3];
		if (!v9)
		{
			v12 = qword_140EC0000;
			if (!qword_140EC0000)
			{
				v46 = operator new(0x130ui64);
				v12 = Desktop::Desktop((__int64)v46);
				qword_140EC0000 = v12;
			}
			v11 = Desktop::getDefaultLookAndFeel(v12);
			break;
		}
	}
	v13 = LookAndFeel::findColour(v11, &v45, 263);
	Component::setColour(v8, 16777473i64, *v13);
	v14 = v1[41];
	v15 = v1;
	while (1)
	{
		v16 = v15[10];
		if (v16)
		{
			v17 = *(_QWORD*)(v16 + 16);
			if (v17)
				break;
		}
		v15 = (_QWORD*)v15[3];
		if (!v15)
		{
			v18 = qword_140EC0000;
			if (!qword_140EC0000)
			{
				v46 = operator new(0x130ui64);
				v18 = Desktop::Desktop((__int64)v46);
				qword_140EC0000 = v18;
			}
			v17 = Desktop::getDefaultLookAndFeel(v18);
			break;
		}
	}
	v19 = LookAndFeel::findColour(v17, &v44, 262);
	Component::setColour(v14, 16777473i64, *v19);
	v20 = v1[42];
	v21 = v1;
	while (1)
	{
		v22 = v21[10];
		if (v22)
		{
			v23 = *(_QWORD*)(v22 + 16);
			if (v23)
				break;
		}
		v21 = (_QWORD*)v21[3];
		if (!v21)
		{
			v24 = qword_140EC0000;
			if (!qword_140EC0000)
			{
				v46 = operator new(0x130ui64);
				v24 = Desktop::Desktop((__int64)v46);
				qword_140EC0000 = v24;
			}
			v23 = Desktop::getDefaultLookAndFeel(v24);
			break;
		}
	}
	v25 = LookAndFeel::findColour(v23, &v45, 262);
	Component::setColour(v20, 16777473i64, *v25);
	v26 = v1[43];
	v27 = v1;
	while (1)
	{
		v28 = v27[10];
		if (v28)
		{
			v29 = *(_QWORD*)(v28 + 16);
			if (v29)
				break;
		}
		v27 = (_QWORD*)v27[3];
		if (!v27)
		{
			v30 = qword_140EC0000;
			if (!qword_140EC0000)
			{
				v46 = operator new(0x130ui64);
				v30 = Desktop::Desktop((__int64)v46);
				qword_140EC0000 = v30;
			}
			v29 = Desktop::getDefaultLookAndFeel(v30);
			break;
		}
	}
	v31 = LookAndFeel::findColour(v29, &v44, 261);
	Component::setColour(v26, 16777473i64, *v31);
	v32 = v1[44];
	v33 = v1;
	while (1)
	{
		v34 = v33[10];
		if (v34)
		{
			v35 = *(_QWORD*)(v34 + 16);
			if (v35)
				break;
		}
		v33 = (_QWORD*)v33[3];
		if (!v33)
		{
			v36 = qword_140EC0000;
			if (!qword_140EC0000)
			{
				v46 = operator new(0x130ui64);
				v36 = Desktop::Desktop((__int64)v46);
				qword_140EC0000 = v36;
			}
			v35 = Desktop::getDefaultLookAndFeel(v36);
			break;
		}
	}
	v37 = LookAndFeel::findColour(v35, &v45, 16777472);
	Component::setColour(v32, 16777472i64, *v37);
	v38 = v1[44];
	while (1)
	{
		v39 = v1[10];
		if (v39)
		{
			v40 = *(_QWORD*)(v39 + 16);
			if (v40)
				break;
		}
		v1 = (_QWORD*)v1[3];
		if (!v1)
		{
			v41 = qword_140EC0000;
			if (!qword_140EC0000)
			{
				v46 = operator new(0x130ui64);
				v41 = Desktop::Desktop((__int64)v46);
				qword_140EC0000 = v41;
			}
			v40 = Desktop::getDefaultLookAndFeel(v41);
			break;
		}
	}
	v42 = LookAndFeel::findColour(v40, &v44, 262);
	return Component::setColour(v38, 16777473i64, *v42);*/

}
void InfoPanel::paint(Graphics& g)
{
	/*__int64 v3; // rsi
	__int64 v4; // rax
	__int64 v5; // r8
	__int64 v6; // rcx
	__int64 v7; // rax
	int* v8; // rax
	__m128 v9; // xmm2
	__m128 v10; // xmm2
	int v11; // edi
	int v12; // ebx
	__int64 v13; // rsi
	__m128 v14; // xmm3
	__m128 v15; // xmm3
	__m128 v16; // xmm3
	float* v17; // rax
	float* v18; // rax
	__m128 v20; // [rsp+20h] [rbp-58h] BYREF
	char v21[16]; // [rsp+30h] [rbp-48h] BYREF
	float v22[14]; // [rsp+40h] [rbp-38h] BYREF
	int v23; // [rsp+80h] [rbp+8h] BYREF
	void* v24; // [rsp+90h] [rbp+18h]

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
	Graphics::setColour(a2, *v8);
	v20.m128_u64[0] = 0i64;
	v9 = _mm_shuffle_ps(v20, v20, 210);
	v9.m128_f32[0] = (float)*(int*)(v3 + 40);
	v10 = _mm_shuffle_ps(v9, v9, 39);
	v10.m128_f32[0] = (float)*(int*)(v3 + 44);
	v20 = _mm_shuffle_ps(v10, v10, 57);
	Graphics::fillRoundedRectangle(a2, &v20, 5.0);
	v11 = *(_DWORD*)(v3 + 44) - 24;
	v12 = *(_DWORD*)(v3 + 40);
	sub_140167CE0(v3);
	v13 = *(_QWORD*)(v3 + 224);
	v20.m128_i32[0] = 0;
	v14 = _mm_shuffle_ps(v20, v20, 225);
	v14.m128_f32[0] = (float)v11;
	v15 = _mm_shuffle_ps(v14, v14, 198);
	v15.m128_f32[0] = (float)v12;
	v16 = _mm_shuffle_ps(v15, v15, 39);
	v16.m128_f32[0] = 12.0;
	v20 = _mm_shuffle_ps(v16, v16, 57);
	v23 = 36;
	v17 = (float*)(*(__int64(__fastcall**)(__int64, char*))(*(_QWORD*)v13 + 360i64))(v13, v21);
	v18 = RectanglePlacement::getTransformToFit(&v23, v22, v17, v20.m128_f32);
	return Drawable::nonConstDraw(v13, a2, 1.0, v18);*/

}
