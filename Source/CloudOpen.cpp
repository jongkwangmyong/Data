#include "CloudOpen.h"

CloudOpen::CloudOpen()
{

}

CloudOpen::~CloudOpen()
{

}

void CloudOpen::mouseUp(const MouseEvent& event)
{
	auto e = event.eventComponent;
	if (e == &label_setup1)
	{
		toggleButton1.setToggleState(true, false);
	}
	else if (e == &label_setup2)
	{
		toggleButton2.setToggleState(true, false);
	}
	else if (e == &label_setup3)
	{
		toggleButton3.setToggleState(true, false);
	}
}

void CloudOpen::paint(Graphics& g)
{
	g.fillAll(Colour(0xFFD1D6D8));
	g.fillAll(getLookAndFeel().findColour(ResizableWindow::backgroundColourId));
}

void CloudOpen::resized()
{
	label_SelectSetup.setBounds(pos_x / 2 - 167, 64, 328, 24);
	button1.setBounds(pos_x / 2 + 18, pos_y - 36, 150, 32);
	button2.setBounds(pos_x / 2 - 166, pos_y - 37, 150, 32);
	toggleButton1.setBounds(pos_x / 2 + 151, 103, 22, 24);
	toggleButton2.setBounds(pos_x / 2 + 151, 144, 22, 24);
	toggleButton3.setBounds(pos_x / 2 + 151, 183, 22, 24);
	label1.setBounds(pos_x / 2 - 173, 95, 342, 2);
	label2.setBounds(pos_x / 2 - 174, 136, 342, 2);
	label3.setBounds(pos_x / 2 - 173, 176, 342, 2);
	label_setup1.setBounds(pos_x / 2 - 178, 103, 325, 24);
	label_setup2.setBounds(pos_x / 2 - 178, 144, 325, 24);
	label_setup3.setBounds(pos_x / 2 - 178, 183, 325, 24);
}

void CloudOpen::buttonClicked(Button* button)
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