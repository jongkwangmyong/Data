#include "CloudOpen.h"

CloudOpen::CloudOpen()
{

}

CloudOpen::~CloudOpen()
{

}

void CloudOpen::mouseUp(const MouseEvent& event)
{
/*
	v2 = *(_QWORD*)(a2 + 48);
	if (v2 == a1[33])
	{
		Button::setToggleState(a1[27], 1, 0, 0);
		v2 = *(_QWORD*)(a2 + 48);
	}
	if (v2 == a1[34])
	{
		Button::setToggleState(a1[28], 1, 0, 0);
		v2 = *(_QWORD*)(a2 + 48);
	}
	if (v2 == a1[35])
		Button::setToggleState(a1[29], 1, 0, 0);*/
}

void CloudOpen::paint(Graphics& g)
{
	/*v9 = -3025192;
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

void CloudOpen::resized()
{
/*
	Component::setBounds(*(_QWORD*)(a1 + 192), *(_DWORD*)(a1 + 40) / 2 - 167, 64, 328, 24);
	Component::setBounds(*(_QWORD*)(a1 + 200), *(_DWORD*)(a1 + 40) / 2 + 18, *(_DWORD*)(a1 + 44) - 36, 150, 32);
	Component::setBounds(*(_QWORD*)(a1 + 208), *(_DWORD*)(a1 + 40) / 2 - 166, *(_DWORD*)(a1 + 44) - 37, 150, 32);
	Component::setBounds(*(_QWORD*)(a1 + 216), *(_DWORD*)(a1 + 40) / 2 + 151, 103, 22, 24);
	Component::setBounds(*(_QWORD*)(a1 + 224), *(_DWORD*)(a1 + 40) / 2 + 151, 144, 22, 24);
	Component::setBounds(*(_QWORD*)(a1 + 232), *(_DWORD*)(a1 + 40) / 2 + 151, 183, 22, 24);
	Component::setBounds(*(_QWORD*)(a1 + 240), *(_DWORD*)(a1 + 40) / 2 - 173, 95, 342, 2);
	Component::setBounds(*(_QWORD*)(a1 + 248), *(_DWORD*)(a1 + 40) / 2 - 174, 136, 342, 2);
	Component::setBounds(*(_QWORD*)(a1 + 256), *(_DWORD*)(a1 + 40) / 2 - 173, 176, 342, 2);
	Component::setBounds(*(_QWORD*)(a1 + 264), *(_DWORD*)(a1 + 40) / 2 - 178, 103, 325, 24);
	Component::setBounds(*(_QWORD*)(a1 + 272), *(_DWORD*)(a1 + 40) / 2 - 178, 144, 325, 24);
	return Component::setBounds(*(_QWORD*)(a1 + 280), *(_DWORD*)(a1 + 40) / 2 - 178, 183, 325, 24);
*/
}

void CloudOpen::buttonClicked(Button*) 
{
/*
	if (a2 == *(_QWORD*)(a1 + 24))
	{
		sub_14010E5A0(a1 - 176, &v14);
		if ((unsigned int)String::isNotEmpty(v14, "SetupNotSelected"))
		{
			v6 = operator new(0x278ui64);
			v13[1] = (__int64)v6;
			v12 = v14;
			if ((*(v14 - 4) & 0x30000000) == 0)
				_InterlockedIncrement(v14 - 4);
			v7 = sub_140111F40(v6, &v12);
			sub_14040F9D0(v7);
		}
		else
		{
			v13[0] = (__int64)dword_140DDCDD0;
			sub_140048D00(&v15, "Please select a setup from the Cloud, then press Open.");
			sub_14031AF20(&v11, &v15);
			v2 = (void*)(v15 - 16);
			if ((*(_DWORD*)(v15 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v2) == -1)
				j_j_free(v2);
			sub_140048D00(&v16, "Action Required");
			sub_14031AF20(&v17, &v16);
			v3 = (void*)(v16 - 16);
			if ((*(_DWORD*)(v16 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v3) == -1)
				j_j_free(v3);
			sub_14040FE70(2, (unsigned int)& v17, (unsigned int)& v11, (unsigned int)v13, 0i64);
			v4 = (void*)(v17 - 16);
			if ((*(_DWORD*)(v17 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v4) == -1)
				j_j_free(v4);
			v5 = (void*)(v11 - 16);
			if ((*(_DWORD*)(v11 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v5) == -1)
				j_j_free(v5);
		}
		v8 = v14 - 4;
		if ((*(v14 - 4) & 0x30000000) == 0 && _InterlockedDecrement(v8) == -1)
			j_j_free((void*)v8);
	}
	else if (a2 == *(_QWORD*)(a1 + 32))
	{
		v9 = qword_140EBFF78;
		v14 = (volatile signed __int32*)operator new(0x220ui64);
		v10 = sub_140189A70(v14);
		sub_140274EA0(v9, v10);
	}
*/
}