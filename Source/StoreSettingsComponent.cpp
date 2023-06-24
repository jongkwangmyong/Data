#include "StoreSettingsComponent.h"
void StoreSettingsComponent::paint(Graphics& g)
{
	/*if (a1)
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
void StoreSettingsComponent::resized()
{
	/*Component::setBounds(*(_QWORD*)(a1 + 200), *(_DWORD*)(a1 + 40) - 150, *(_DWORD*)(a1 + 44) - 40, 150, 32);
	Component::setBounds(*(_QWORD*)(a1 + 208), 0, *(_DWORD*)(a1 + 44) - 40, 150, 32);
	Component::setBounds(*(_QWORD*)(a1 + 224), *(_DWORD*)(a1 + 40) - 150, 101, 150, 168);
	Component::setBounds(*(_QWORD*)(a1 + 304), *(_DWORD*)(a1 + 40) / 2 - 250, *(_DWORD*)(a1 + 44) / 2 - 244, 500, 500);
	Component::setBounds(*(_QWORD*)(a1 + 312), *(_DWORD*)(a1 + 40) - 150, 277, 150, 220);
	return Component::setBounds(*(_QWORD*)(a1 + 336), *(_DWORD*)(a1 + 40) - 150, 56, 150, 32);*/
}
void StoreSettingsComponent::comboBoxChanged(ComboBox* comboBoxThatHasChanged)
{
	//if (a2 == a1[3])
	//	return sub_14019FFC0(a1 - 22);
	//if (a2 == a1[4])
	//{
	//	v3 = (__int64(__fastcall * **)(_QWORD, __int64)) * (a1 - 19);
	//	if (v3)
	//		result = (**v3)(v3, 1i64);
	//}
	//else if (a2 == a1[20])
	//{
	//	result = sub_14019F6D0();
	//}
	//return result;
}