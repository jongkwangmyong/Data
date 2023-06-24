#include "RefCalComponent.h"
void RefCalComponent::paint(Graphics& g)
{
	//Component::setEnabled(*(_QWORD*)(a1 + 304), *(_BYTE*)(a1 + 208));
	//while (1)
	//{
	//	v4 = *(_QWORD*)(v3 + 80);
	//	if (v4)
	//	{
	//		v5 = *(_QWORD*)(v4 + 16);
	//		if (v5)
	//			break;
	//	}
	//	v3 = *(_QWORD*)(v3 + 24);
	//	if (!v3)
	//	{
	//		v6 = qword_140EC0000;
	//		if (!qword_140EC0000)
	//		{
	//			v10 = operator new(0x130ui64);
	//			v6 = Desktop::Desktop((__int64)v10);
	//			qword_140EC0000 = v6;
	//		}
	//		v5 = Desktop::getDefaultLookAndFeel(v6);
	//		break;
	//	}
	//}
	//v7 = LookAndFeel::findColour(v5, &v9, 16799488);
	//return Graphics::fillAll(a2, *v7);
}
void RefCalComponent::resized()
{
	/*v2 = 150;
	Component::setBounds(*(_QWORD*)(a1 + 216), 0, *(_DWORD*)(a1 + 44) - 40, 150, 32);
	Component::setBounds(*(_QWORD*)(a1 + 224), *(_DWORD*)(a1 + 40) - 150, 88, 150, 408);
	Component::setBounds(*(_QWORD*)(a1 + 264), *(_DWORD*)(a1 + 40) / 2 - 250, *(_DWORD*)(a1 + 44) / 2 - 244, 500, 500);
	Component::setBounds(*(_QWORD*)(a1 + 296), 0, *(_DWORD*)(a1 + 44) - 87, 150, 32);
	Component::setBounds(*(_QWORD*)(a1 + 304), *(_DWORD*)(a1 + 40) - 150, *(_DWORD*)(a1 + 44) - 40, 150, 32);
	v3 = *(_DWORD*)(a1 + 40);
	v4 = 150;
	v5 = *(_DWORD*)(a1 + 44);
	v6 = 40;
	if (v3 < 150)
		v4 = *(_DWORD*)(a1 + 40);
	v7 = v3 - v4;
	if (v7 < 150)
		v2 = v7;
	v8 = v7 - v2;
	if (v5 < 40)
		v6 = *(_DWORD*)(a1 + 44);
	v9 = v5 - v6;
	v10 = v9;
	if (v8 <= v9)
		v10 = v8;
	return Component::setBounds(*(_QWORD*)(a1 + 264), v4 + (v8 - v10) / 2, v6 + (v9 - v10) / 2, v10, v10);*/
}
void RefCalComponent::buttonClicked(Button*)
{
	/*if (a2 == a1[4])
	{
		v3 = qword_140EBFF78;
		v11 = operator new(0x220ui64);
		v4 = sub_140189A70(v11);
		sub_140274EA0(v3, v4);
	}
	else if (a2 == a1[13])
	{
		if ((int)ComboBox::getSelectedItemIndex(a1[6]) < 7)
		{
			v5 = (int) * (double*)sub_14009F390(*(_QWORD*)(a1[12] + 512i64)).m128_u64;
			v6 = *(double*)sub_14009F390(*(_QWORD*)(a1[11] + 512i64)).m128_u64;
			sub_14019B330(a1 - 23, (unsigned int)(int)v6, v5);
		}
	}
	else if (a2 != a1[14] && a2 == a1[15])
	{
		if ((unsigned int)ComboBox::getSelectedItemIndex(a1[6]) == 7)
		{
			sub_14019B070();
		}
		else
		{
			v12 = *((_QWORD*)ArgList + 281);
			v7 = (volatile signed __int32*)(v12 - 16);
			if ((*(_DWORD*)(v12 - 16) & 0x30000000) == 0)
				_InterlockedIncrement(v7);
			v8 = (_BYTE*) * ((_QWORD*)ArgList + 281);
			v11 = v8;
			if ((*((_DWORD*)v8 - 4) & 0x30000000) == 0)
				_InterlockedIncrement((volatile signed __int32*)v8 - 4);
			sub_140200820((__int64)ArgList, &v11, 0);
			v9 = qword_140EBFF78;
			v13 = operator new(0x220ui64);
			v10 = sub_140189A70(v13);
			sub_140274EA0(v9, v10);
			if ((*v7 & 0x30000000) == 0 && _InterlockedDecrement(v7) == -1)
				j_j_free((void*)v7);
		}
	}*/
}
void RefCalComponent::comboBoxChanged(ComboBox* comboBoxThatHasChanged)
{
	/*v3 = *(_QWORD*)(a1 + 40);
	if (a2 == v3)
	{
		ComboBox::getSelectedItemIndex(v3);
		sub_14009F400(*(_QWORD*)(*(_QWORD*)(a1 + 80) + 512i64), v4, 0);
		sub_14009F400(*(_QWORD*)(*(_QWORD*)(a1 + 88) + 512i64), v5, 0);
		*(_BYTE*)(a1 + 16) = (unsigned int)ComboBox::getSelectedItemIndex(*(_QWORD*)(a1 + 40)) == 7;
	}*/
}
void RefCalComponent::changeListenerCallback(ChangeBroadcaster* source)
{
	/*result = (char*)ArgList + 880;
	if (a2 == (char*)ArgList + 880)
		result = (char*)sub_140133CE0(*(_QWORD*)(a1 + 88));
	return result;*/
}