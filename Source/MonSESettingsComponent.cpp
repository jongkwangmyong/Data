#include "MonSESettingsComponent.h"
void MonSESettingsComponent::paint(Graphics&)
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
	return Graphics::fillAll(a2, *v6);
*/

}
void MonSESettingsComponent::comboBoxChanged(ComboBox* comboBoxThatHasChanged)
{
	/*__int64 v3; // rcx
	__m128i v4; // [rsp+20h] [rbp-18h] BYREF

	if (a2 == a1[4])
	{
		sub_14022C310(*((_QWORD*)ArgList + 66), a1[2]);
		v3 = a1[3];
		v4.m128i_i64[0] = 0i64;
		v4.m128i_i64[1] = *(_QWORD*)(v3 + 40);
		Component::internalRepaintUnchecked(v3, &v4, 1);
	}*/
}