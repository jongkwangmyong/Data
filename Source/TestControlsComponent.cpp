#include "TestControlsComponent.h"
void TestControlsComponent::paint(Graphics& g)
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
void TestControlsComponent::resized()
{
	//Component::setBounds(*(_QWORD*)(a1 + 216), *(_DWORD*)(a1 + 40) - 150, *(_DWORD*)(a1 + 44) - 40, 150, 32);
	//Component::setBounds(*(_QWORD*)(a1 + 224), *(_DWORD*)(a1 + 40) - 150, *(_DWORD*)(a1 + 44) - 40, 150, 32);
	//return Component::setBounds(
	//	*(_QWORD*)(a1 + 232),
	//	0,
	//	0,
	//	COERCE_UNSIGNED_INT64((float) * (int*)(a1 + 40) + 6.755399441055744e15),
	//	COERCE_UNSIGNED_INT64((float)((float) * (int*)(a1 + 44) * 0.80000001) + 6.755399441055744e15));
}
void TestControlsComponent::buttonClicked(Button*)
{
	/*if (a2 != *(_QWORD*)(a1 + 40) && a2 == *(_QWORD*)(a1 + 48))
	{
		v2 = *(__int64(__fastcall * ***)(_QWORD, __int64))(a1 - 152);
		if (v2)
			result = (**v2)(v2, 1i64);
	}
	return result;*/
}
