#include "TestControlContainer.h"
void TestControlContainer::paint(Graphics& g)
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
void TestControlContainer::resized()
{
	/*Component::setBounds(a1[26], 9, 12, 150, 24);
	Component::setBounds(a1[31], 227, 10, 150, 24);
	Component::setBounds(a1[32], 228, 41, 150, 24);
	Component::setBounds(a1[33], 228, 66, 150, 24);
	Component::setBounds(a1[34], 228, 90, 150, 24);
	Component::setBounds(a1[35], 227, 121, 150, 24);
	Component::setBounds(a1[36], 228, 148, 150, 24);
	return Component::setBounds(a1[37], 228, 172, 150, 24);*/
}
void TestControlContainer::buttonClicked(Button*)
{
	/*if (a2 == a1[5] || a2 == a1[6] || a2 == a1[7] || a2 == a1[10] || a2 == a1[11] || a2 == a1[12])
		return sub_1401B40F0(a1 - 22);
	if (a2 == a1[14] || a2 == a1[15])
		result = sub_1401B3F50(a1 - 22);
	return result;*/
}
void TestControlContainer::sliderValueChanged(Slider* slider)
{
	/*if (a2 == *(_QWORD*)(a1 + 56))
		result = sub_1401B40F0(a1 - 184);
	return result;*/
}