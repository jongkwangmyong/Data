#include "TextProgressComponent.h"
void TextProgressComponent::lookAndFeelChanged()
{
	/*sub_1401B6F80(a1, *(unsigned int*)(a1 + 176));
	v2.m128i_i64[0] = 0i64;
	v2.m128i_i64[1] = *(_QWORD*)(a1 + 40);
	Component::internalRepaintUnchecked(a1, &v2, 1);*/
}
void TextProgressComponent::paint(Graphics& g)
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
