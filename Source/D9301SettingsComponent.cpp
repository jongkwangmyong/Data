#include "D9301SettingsComponent.h"
D9301SettingsComponent::D9301SettingsComponent()
{

}

D9301SettingsComponent::~D9301SettingsComponent()
{

}

void D9301SettingsComponent::paint(Graphics& g)
{
/*
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


void D9301SettingsComponent::comboBoxChanged(ComboBox* comboBoxThatHasChanged)
{
/*
	if (a2 == a1[5])
	{
		sub_14022C310(*((_QWORD*)ArgList + 66), a1[2]);
		sub_14022C7A0(*((_QWORD*)ArgList + 66));
		v3 = a1[3];
		v4.m128i_i64[0] = 0i64;
		v4.m128i_i64[1] = *(_QWORD*)(v3 + 40);
		Component::internalRepaintUnchecked(v3, &v4, 1);
	}
	else if (a2 == a1[9])
	{
		sub_140134840((__int64)(a1 - 22));
	}
*/
}

void D9301SettingsComponent::buttonClicked(Button*)
{
/*
	if (a2 == a1[5]
		|| a2 == a1[6]
		|| a2 == a1[10]
		|| a2 == a1[11]
		|| a2 == a1[12]
		|| a2 == a1[13]
		|| a2 == a1[14]
		|| a2 == a1[15]
		|| a2 == a1[20]
		|| a2 == a1[21]
		|| a2 == a1[22]
		|| a2 == a1[23]
		|| a2 == a1[24]
		|| a2 == a1[25]
		|| a2 == a1[26]
		|| a2 == a1[27])
	{
		result = sub_140134840((__int64)(a1 - 23));
	}
	return result;
*/
}