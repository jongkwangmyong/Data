#include "DeviceControlComponent.h"
DeviceControlComponent::DeviceControlComponent()
{

}

DeviceControlComponent::~DeviceControlComponent()
{

}

void DeviceControlComponent::paint(Graphics& g)
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

void DeviceControlComponent::buttonClicked(Button*)
{
/*
	v2 = a2 == a1[4];
	v4 = a1[5];
	if (v2)
	{
		if (!(unsigned __int8)Button::getToggleState(v4) && !(unsigned __int8)Button::getToggleState(a1[4]))
		{
		LABEL_4:
			sub_14022E650(*((_QWORD*)ArgList + 66));
			return;
		}
		Button::setToggleState(a1[5], 0, 0, 0);
		v5 = *((_QWORD*)ArgList + 66);
		v6 = Button::getToggleState(a1[4]);
		sub_14022C120(v5, a1[1], v6, 0i64);
	}
	else if (a2 == v4)
	{
		if (!(unsigned __int8)Button::getToggleState(v4) && !(unsigned __int8)Button::getToggleState(a1[4]))
			goto LABEL_4;
		Button::setToggleState(a1[4], 0, 0, 0);
		v7 = *((_QWORD*)ArgList + 66);
		v8 = Button::getToggleState(a1[5]);
		sub_14022BF30(v7, a1[1], v8, 0i64);
	}
	else if (a2 == a1[40])
	{
		v9 = sub_140002270(a1 - 25);
		(*(void(__fastcall * *)(__int64, _QWORD))(*(_QWORD*)v9 + 88i64))(v9, 0i64);
		CallOutBox::dismiss(v9, 1334026315);
		sub_1401895C0(v10, a1[1]);
	}
*/
}

void DeviceControlComponent::timerCallback()
{
	/*v2 = sub_14020EA00(a1[4]);
	v3 = a1[4];
	sub_14020F280(v3, &v49);
	v4 = v49;
	if ((unsigned int)String::isNotEmpty(v49, "SubwooferGen2")
		&& (unsigned int)String::isNotEmpty(v4, "TwowayGen2")
		&& (unsigned int)String::isNotEmpty(v4, "ThreewayGen2")
		&& (unsigned int)String::isNotEmpty(v4, "WooferExtensionGen2")
		&& (unsigned int)String::isNotEmpty(v4, "AesEbuDev")
		&& (unsigned int)String::isNotEmpty(v4, "AesEbuDevGen2"))
	{
		v5 = v4 - 16;
		if ((*((_DWORD*)v4 - 4) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v5) == -1)
			j_j_free(v5);
		v6 = -999;
	}
	else
	{
		v6 = *(_DWORD*)(v3 + 268);
		v7 = v4 - 16;
		if ((*((_DWORD*)v4 - 4) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v7) == -1)
			j_j_free(v7);
	}
	v8 = a1[11];
	if (v2 == -999)
	{
		sub_140048D00(&v36, "N/A");
		Label::setText(v8, &v36, 0);
		v9 = (void*)(v36 - 16);
		v10 = *(_DWORD*)(v36 - 16);
	}
	else
	{
		v11 = sub_1402FCCA0(v52);
		sub_140040360(&v37, v11, &v51 - v11);
		Label::setText(v8, &v37, 0);
		v9 = (void*)(v37 - 16);
		v10 = *(_DWORD*)(v37 - 16);
	}
	if ((v10 & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v9) == -1)
		j_j_free(v9);
	v12 = a1[10];
	if (v6 == -999)
	{
		sub_140048D00(&v38, "N/A");
		Label::setText(v12, &v38, 0);
		v13 = (void*)(v38 - 16);
		v14 = *(_DWORD*)(v38 - 16);
	}
	else
	{
		v15 = sub_1402FCCA0(v54);
		sub_140040360(&v39, v15, &v53 - v15);
		Label::setText(v12, &v39, 0);
		v13 = (void*)(v39 - 16);
		v14 = *(_DWORD*)(v39 - 16);
	}
	if ((v14 & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v13) == -1)
		j_j_free(v13);
	v16 = a1[13];
	sub_14020F280(a1[4], &v50);
	v17 = v50;
	if ((unsigned int)String::isNotEmpty(v50, "SubwooferGen2")
		&& (unsigned int)String::isNotEmpty(v17, "TwowayGen2")
		&& (unsigned int)String::isNotEmpty(v17, "ThreewayGen2")
		&& (unsigned int)String::isNotEmpty(v17, "WooferExtensionGen2")
		&& (unsigned int)String::isNotEmpty(v17, "AesEbuDev")
		&& (unsigned int)String::isNotEmpty(v17, "AesEbuDevGen2"))
	{
		v18 = v17 - 16;
		v19 = *((_DWORD*)v17 - 4);
	}
	else
	{
		v18 = v17 - 16;
		v19 = *((_DWORD*)v17 - 4);
	}
	if ((v19 & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v18) == -1)
		j_j_free(v18);
	v20 = sub_1402FCCA0(&v56);
	sub_140040360(&v40, v20, &v55 - v20);
	Label::setText(v16, &v40, 0);
	v21 = (void*)(v40 - 16);
	if ((*(_DWORD*)(v40 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v21) == -1)
		j_j_free(v21);
	if ((unsigned __int8)sub_14020EDA0(a1[4]))
	{
		v22 = a1[28];
		sub_140048D00(&v41, "Clipped!");
		sub_14031AF20(&v42, &v41);
		v23 = (void*)(v41 - 16);
		if ((*(_DWORD*)(v41 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v23) == -1)
			j_j_free(v23);
		Label::setText(v22, &v42, 0);
		v24 = (void*)(v42 - 16);
		v25 = *(_DWORD*)(v42 - 16);
	}
	else
	{
		v26 = sub_14020ECC0(a1[4]);
		v27 = a1[28];
		if (v26)
		{
			sub_140048D00(&v43, "Protection On!");
			sub_14031AF20(&v44, &v43);
			v28 = (void*)(v43 - 16);
			if ((*(_DWORD*)(v43 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v28) == -1)
				j_j_free(v28);
			Label::setText(v27, &v44, 0);
			v24 = (void*)(v44 - 16);
			v25 = *(_DWORD*)(v44 - 16);
		}
		else
		{
			v29 = *(_QWORD*)(a1[4] + 184i64);
			v45 = v29;
			if ((*(_DWORD*)(v29 - 16) & 0x30000000) == 0)
				_InterlockedIncrement((volatile signed __int32*)(v29 - 16));
			Label::setText(v27, &v45, 0);
			v24 = (void*)(v45 - 16);
			v25 = *(_DWORD*)(v45 - 16);
		}
	}
	if ((v25 & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v24) == -1)
		j_j_free(v24);
	v30 = (_QWORD*)a1[4];
	if ((unsigned __int8)sub_14020E5A0(v30))
	{
		v31 = (*(__int64(__fastcall * *)(_QWORD))(*(_QWORD*)* v30 + 208i64))(*v30);
		v32 = a1[22];
		if (v31)
		{
			sub_140048D00(&v47, "On");
			Label::setText(v32, &v47, 0);
			v33 = (void*)(v47 - 16);
			v34 = *(_DWORD*)(v47 - 16);
		}
		else
		{
			sub_140048D00(&v46, "Off");
			Label::setText(v32, &v46, 0);
			v33 = (void*)(v46 - 16);
			v34 = *(_DWORD*)(v46 - 16);
		}
	}
	else
	{
		v35 = a1[22];
		sub_140048D00(&v48, "N/A");
		Label::setText(v35, &v48, 0);
		v33 = (void*)(v48 - 16);
		v34 = *(_DWORD*)(v48 - 16);
	}
	if ((v34 & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v33) == -1)
		j_j_free(v33);*/
}