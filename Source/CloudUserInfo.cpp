#include "CloudUserInfo.h"
CloudUserInfo::CloudUserInfo()
{

}

CloudUserInfo::~CloudUserInfo()
{

}

void CloudUserInfo::paint(Graphics& g)
{
/*
	v9 = 0xFFD1D6D8;
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

void CloudUserInfo::resized()
{
/*
	Component::setBounds(*(_QWORD*)(a1 + 192), *(_DWORD*)(a1 + 40) - 112, *(_DWORD*)(a1 + 44) - 101, 100, 40);
	Component::setBounds(*(_QWORD*)(a1 + 200), *(_DWORD*)(a1 + 40) - 112, *(_DWORD*)(a1 + 44) - 53, 100, 40);
	return Component::setBounds(
		*(_QWORD*)(a1 + 208),
		*(_DWORD*)(a1 + 40) / 2 - (*(_DWORD*)(a1 + 40) - 32) / 2,
		61,
		*(_DWORD*)(a1 + 40) - 32,
		256);*/
}

void CloudUserInfo::buttonClicked(Button*)
{
	/*if (a2 == *(_QWORD*)(a1 + 16))
	{
		if ((unsigned __int8)sub_14026A5C0())
		{
			v18 = dword_140DDCDD0;
			sub_140048D00(&v20, "You logged out from your Cloud account!");
			sub_14031AF20(&v23, (__int64*)& v20);
			v2 = (char*)(v20 - 4);
			if ((*(v20 - 4) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v2) == -1)
				j_j_free(v2);
			sub_140048D00(&v21, "Logged Out");
			sub_14031AF20(&v22, &v21);
			v3 = (void*)(v21 - 16);
			if ((*(_DWORD*)(v21 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v3) == -1)
				j_j_free(v3);
			sub_14040FE70(3, (unsigned int)& v22, (unsigned int)& v23, (unsigned int)& v18, 0i64);
			v4 = (void*)(v22 - 16);
			if ((*(_DWORD*)(v22 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v4) == -1)
				j_j_free(v4);
			v5 = (void*)(v23 - 16);
			if ((*(_DWORD*)(v23 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v5) == -1)
				j_j_free(v5);
			sub_1401F9700(ArgList);
		}
		else
		{
			v19 = dword_140DDCDD0;
			sub_140048D00(&v14, "Could not log out from your Cloud account!");
			sub_14031AF20(&v17, &v14);
			v6 = (void*)(v14 - 16);
			if ((*(_DWORD*)(v14 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v6) == -1)
				j_j_free(v6);
			sub_140048D00(&v15, "Logout Failed");
			sub_14031AF20(&v16, &v15);
			v7 = (void*)(v15 - 16);
			if ((*(_DWORD*)(v15 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v7) == -1)
				j_j_free(v7);
			sub_14040FE70(2, (unsigned int)& v16, (unsigned int)& v17, (unsigned int)& v19, 0i64);
			v8 = (void*)(v16 - 16);
			if ((*(_DWORD*)(v16 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v8) == -1)
				j_j_free(v8);
			v9 = (void*)(v17 - 16);
			if ((*(_DWORD*)(v17 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v9) == -1)
				j_j_free(v9);
		}
		v10 = qword_140EBFF78;
		v20 = operator new(0x220ui64);
		v11 = sub_140189A70(v20);
		sub_140274EA0(v10, v11);
	}
	else if (a2 == *(_QWORD*)(a1 + 24))
	{
		v12 = qword_140EBFF78;
		v20 = operator new(0x220ui64);
		v13 = sub_140189A70(v20);
		sub_140274EA0(v12, v13);
	}*/
}