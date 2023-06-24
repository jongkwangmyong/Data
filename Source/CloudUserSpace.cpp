#include "CloudUserSpace.h"
CloudUserSpace::CloudUserSpace()
{

}

CloudUserSpace::~CloudUserSpace()
{

}

void CloudUserSpace::mouseUp(const MouseEvent& event)
{
	/*v2 = *(_QWORD*)(a2 + 48);
	if (v2 == a1[35])
	{
		Button::setToggleState(a1[25], 1, 0, 0);
		v2 = *(_QWORD*)(a2 + 48);
	}
	if (v2 == a1[36])
	{
		Button::setToggleState(a1[26], 1, 0, 0);
		v2 = *(_QWORD*)(a2 + 48);
	}
	if (v2 == a1[37])
		Button::setToggleState(a1[27], 1, 0, 0);*/
}

void CloudUserSpace::paint(Graphics& g)
{
	/*v9 = 0xFFD1D6D8;
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

void CloudUserSpace::resized()
{
/*
	Component::setBounds(*(_QWORD*)(a1 + 192), *(_DWORD*)(a1 + 40) / 2 - 238, 58, 488, 32);
	Component::setBounds(*(_QWORD*)(a1 + 200), *(_DWORD*)(a1 + 40) / 2 + 168, 104, 22, 24);
	Component::setBounds(*(_QWORD*)(a1 + 208), *(_DWORD*)(a1 + 40) / 2 + 168, 145, 22, 24);
	Component::setBounds(*(_QWORD*)(a1 + 216), *(_DWORD*)(a1 + 40) / 2 + 168, 185, 22, 24);
	Component::setBounds(*(_QWORD*)(a1 + 224), *(_DWORD*)(a1 + 40) / 2 + 26, *(_DWORD*)(a1 + 44) - 44, 150, 32);
	Component::setBounds(*(_QWORD*)(a1 + 232), *(_DWORD*)(a1 + 40) / 2 - 158, *(_DWORD*)(a1 + 44) - 43, 150, 32);
	Component::setBounds(*(_QWORD*)(a1 + 240), *(_DWORD*)(a1 + 40) / 2 + 167, 250, 22, 24);
	Component::setBounds(*(_QWORD*)(a1 + 248), *(_DWORD*)(a1 + 40) / 2 - 197, 96, 383, 2);
	Component::setBounds(*(_QWORD*)(a1 + 256), *(_DWORD*)(a1 + 40) / 2 - 197, 139, 383, 2);
	Component::setBounds(*(_QWORD*)(a1 + 264), *(_DWORD*)(a1 + 40) / 2 - 197, 178, 383, 2);
	Component::setBounds(*(_QWORD*)(a1 + 272), *(_DWORD*)(a1 + 40) / 2 - 202, 246, 340, 32);
	Component::setBounds(*(_QWORD*)(a1 + 280), *(_DWORD*)(a1 + 40) / 2 - 202, 104, 364, 24);
	Component::setBounds(*(_QWORD*)(a1 + 288), *(_DWORD*)(a1 + 40) / 2 - 202, 145, 364, 24);
	return Component::setBounds(*(_QWORD*)(a1 + 296), *(_DWORD*)(a1 + 40) / 2 - 202, 185, 364, 24);
*/
}

void CloudUserSpace::buttonClicked(Button*)
{
	/*if (a2 == a1[3] || a2 == a1[4] || a2 == a1[5])
		return;
	if (a2 == a1[6])
	{
		sub_140048D00(&v28, "SetupNotSelected");
		if ((unsigned __int8)Button::getToggleState(a1[3]))
		{
			v3 = (volatile signed __int32**)sub_14040CD70(a1[13], &v23);
			v4 = *v3;
			*v3 = v28;
			v5 = (void*)(v23 - 16);
			v6 = *(_DWORD*)(v23 - 16);
		}
		else if ((unsigned __int8)Button::getToggleState(a1[4]))
		{
			v7 = (volatile signed __int32**)sub_14040CD70(a1[14], &v24);
			v4 = *v7;
			*v7 = v28;
			v5 = (void*)(v24 - 16);
			v6 = *(_DWORD*)(v24 - 16);
		}
		else
		{
			if (!(unsigned __int8)Button::getToggleState(a1[5]))
			{
			LABEL_14:
				v9 = v28;
				if ((unsigned int)String::isNotEmpty(v28, "SetupNotSelected"))
				{
					v14 = Button::getToggleState(a1[8]);
					v15 = operator new(0x280ui64);
					v26[1] = (__int64)v15;
					v22 = v9;
					if ((*(v9 - 4) & 0x30000000) == 0)
						_InterlockedIncrement(v9 - 4);
					v16 = sub_140113C90(v15, &v22, v14);
					sub_14040F9D0(v16);
				}
				else
				{
					v26[0] = (__int64)dword_140DDCDD0;
					sub_140048D00(&v29, "Please select one setup to replace.");
					sub_14031AF20(&v21, &v29);
					v10 = (void*)(v29 - 16);
					if ((*(_DWORD*)(v29 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v10) == -1)
						j_j_free(v10);
					sub_140048D00(&v30, "Action Required");
					sub_14031AF20(&v20, &v30);
					v11 = (void*)(v30 - 16);
					if ((*(_DWORD*)(v30 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v11) == -1)
						j_j_free(v11);
					sub_14040FE70(2, (unsigned int)& v20, (unsigned int)& v21, (unsigned int)v26, 0i64);
					v12 = (void*)(v20 - 16);
					if ((*(_DWORD*)(v20 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v12) == -1)
						j_j_free(v12);
					v13 = (void*)(v21 - 16);
					if ((*(_DWORD*)(v21 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v13) == -1)
						j_j_free(v13);
				}
				v17 = v28 - 4;
				if ((*(v28 - 4) & 0x30000000) == 0 && _InterlockedDecrement(v17) == -1)
					j_j_free((void*)v17);
				return;
			}
			v8 = (volatile signed __int32**)sub_14040CD70(a1[15], &v25);
			v4 = *v8;
			*v8 = v28;
			v5 = (void*)(v25 - 16);
			v6 = *(_DWORD*)(v25 - 16);
		}
		v28 = v4;
		if ((v6 & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v5) == -1)
			j_j_free(v5);
		goto LABEL_14;
	}
	if (a2 == a1[7])
	{
		v18 = qword_140EBFF78;
		v27 = operator new(0x220ui64);
		v19 = sub_140189A70(v27);
		sub_140274EA0(v18, v19);
	}*/
}