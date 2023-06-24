#include "MonGen1SettingsComponent.h"
void MonGen1SettingsComponent::sliderValueChanged(Slider* slider)
{
	/*__int64 v2; // r8
	__int64 v3; // rbx

	v2 = *(_QWORD*)(a1 + 160);
	if (a2 == v2)
	{
		v3 = **(_QWORD**)(a1 + 8);
		*(_DWORD*)(v3 + 100) = (int)*(double*)sub_14009F390(*(_QWORD*)(v2 + 512)).m128_u64;
	}*/
}
void MonGen1SettingsComponent::comboBoxChanged(ComboBox* comboBoxThatHasChanged)
{
	/*__int64 v3; // rcx
	__int64 v4; // rcx
	unsigned int v5; // edi
	__m128i v6; // [rsp+20h] [rbp-18h] BYREF

	if (a2 == a1[6])
	{
		sub_14022C310(*((_QWORD*)ArgList + 66), a1[3]);
		v3 = a1[4];
		v6.m128i_i64[0] = 0i64;
		v6.m128i_i64[1] = *(_QWORD*)(v3 + 40);
		Component::internalRepaintUnchecked(v3, &v6, 1);
	}
	else
	{
		v4 = a1[13];
		if (a2 == v4)
		{
			v5 = 1;
			if ((unsigned int)ComboBox::getSelectedItemIndex(v4))
				v5 = 5 * (ComboBox::getSelectedItemIndex(a1[13]) + 9);
			(*(void(__fastcall**)(_QWORD, _QWORD, _QWORD))(**(_QWORD**)a1[3] + 328i64))(*(_QWORD*)a1[3], v5, 0i64);
		}
	}*/
}
void MonGen1SettingsComponent::buttonClicked(Button*)
{
	/*__int64 result; // rax

	if (a2 == a1[6] || a2 == a1[7] || a2 == a1[8])
		result = sub_14017E9C0(a1 - 23);
	return result;*/
}
void MonGen1SettingsComponent::paint(Graphics&)
{
	/*__int64 v3; // rax
	__int64 v4; // rax
	__int64 v5; // rax
	unsigned int* v6; // rax
	int v8; // [rsp+30h] [rbp+8h] BYREF
	void* v9; // [rsp+40h] [rbp+18h]

	if (a1)
	{
		while (1)
		{
			v3 = *(_QWORD*)(a1 + 80);
			if (v3)
			{
				v4 = *(_QWORD*)(v3 + 16);
				if (v4)
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
		v5 = qword_140EC0000;
		if (!qword_140EC0000)
		{
			v9 = operator new(0x130ui64);
			v5 = Desktop::Desktop((__int64)v9);
			qword_140EC0000 = v5;
		}
		v4 = Desktop::getDefaultLookAndFeel(v5);
	}
	v6 = LookAndFeel::findColour(v4, &v8, 16799488);
	return Graphics::fillAll(a2, *v6);*/
}