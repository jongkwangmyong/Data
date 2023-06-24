#include "SubGen1SettingsComponent.h"
void SubGen1SettingsComponent::paint(Graphics& g)
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
void SubGen1SettingsComponent::comboBoxChanged(ComboBox* comboBoxThatHasChanged)
{
	/*if (a2 == a1[5])
	{
		if (!(unsigned __int8)sub_14022D2F0(*((_QWORD*)ArgList + 66))
			&& !(unsigned __int8)sub_14022D460(*((_QWORD*)ArgList + 66)))
		{
			LOBYTE(v3) = 1;
			sub_140218C10(
				*(_QWORD*)(*(_QWORD*)(*((_QWORD*)ArgList + 66) + 8i64)
					+ 8i64 * *(int*)(*((_QWORD*)ArgList + 66) + 268i64)
					- 8),
				85i64,
				v3);
		}
		sub_14022C310(*((_QWORD*)ArgList + 66), a1[3]);
		v4 = qword_140EBFF78;
		if (*(_DWORD*)(qword_140EBFF78 + 76) <= 1u)
			v5 = 0i64;
		else
			v5 = *(_QWORD*)(*(_QWORD*)(qword_140EBFF78 + 64) + 8i64);
		v13 = *(char**)(v5 + 16);
		v6 = (volatile signed __int32*)(v13 - 16);
		if ((*((_DWORD*)v13 - 4) & 0x30000000) == 0)
			_InterlockedIncrement(v6);
		if (!(unsigned int)compareIgnoreCase(v13, "EditGroup"))
		{
			if (*(_DWORD*)(v4 + 76) <= 1u)
				v7 = 0i64;
			else
				v7 = *(_QWORD*)(*(_QWORD*)(v4 + 64) + 8i64);
			sub_1401429A0(v7);
		}
		v8 = a1[4];
		v11.m128i_i64[0] = 0i64;
		v11.m128i_i64[1] = *(_QWORD*)(v8 + 40);
		v12 = v11;
		Component::internalRepaintUnchecked(v8, &v12, 1);
		sub_1401A5340(a1 - 22);
		if ((*v6 & 0x30000000) == 0 && _InterlockedDecrement(v6) == -1)
			j_j_free((void*)v6);
	}
	else if (a2 == a1[8])
	{
		sub_1401A5CD0(a1 - 22);
	}
	else
	{
		v9 = a1[11];
		if (a2 == v9)
		{
			v10 = 1;
			if ((unsigned int)ComboBox::getSelectedItemIndex(v9))
				v10 = 5 * (ComboBox::getSelectedItemIndex(a1[11]) + 9);
			(*(void(__fastcall * *)(_QWORD, _QWORD, _QWORD))(**(_QWORD * *)a1[3] + 328i64))(*(_QWORD*)a1[3], v10, 0i64);
		}
	}*/
}
void SubGen1SettingsComponent::buttonClicked(Button*)
{
	/*if (a2 == *(_QWORD*)(a1 + 40) || a2 == *(_QWORD*)(a1 + 48))
		goto LABEL_13;
	if (a2 == *(_QWORD*)(a1 + 64))
	{
		sub_1401A5CD0(a1 - 184);
		return;
	}
	v3 = *(_QWORD*)(a1 + 72);
	if (a2 == v3)
	{
		v4 = (unsigned __int8)Button::getToggleState(v3) != 0;
		(*(void(__fastcall * *)(_QWORD, bool, _QWORD))(***(_QWORD * **)(a1 + 16) + 296i64))(**(_QWORD * *)(a1 + 16), v4, 0i64);
		return;
	}
	if (a2 == *(_QWORD*)(a1 + 104)
		|| a2 == *(_QWORD*)(a1 + 112)
		|| a2 == *(_QWORD*)(a1 + 120)
		|| a2 == *(_QWORD*)(a1 + 128)
		|| a2 == *(_QWORD*)(a1 + 136)
		|| a2 == *(_QWORD*)(a1 + 144))
	{
	LABEL_13:
		sub_1401A5D70(a1 - 184);
	}*/
}
void SubGen1SettingsComponent::sliderValueChanged(Slider* slider)
{
	/*v2 = *(_QWORD*)(a1 + 256);
	if (a2 == v2)
	{
		v3 = **(_QWORD * *)(a1 + 8);
		*(_DWORD*)(v3 + 104) = (int) * (double*)sub_14009F390(*(_QWORD*)(v2 + 512)).m128_u64;
	}*/
}