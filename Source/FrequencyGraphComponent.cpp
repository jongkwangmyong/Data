#include "FrequencyGraphComponent.h"
FrequencyGraphComponent::FrequencyGraphComponent()
{

}

FrequencyGraphComponent::~FrequencyGraphComponent()
{

}

void FrequencyGraphComponent::mouseMove(const MouseEvent& event)
{
	/*v3 = *(_DWORD*)(a2 + 12);
	v4 = 0;
	v5 = 0;
	if (*(_DWORD*)(a1 + 40) - 48 > 0)
		v5 = *(_DWORD*)(a1 + 40) - 48;
	v6 = *(float*)(a1 + 244);
	v7 = powf(*(float*)(a1 + 240) / v6, (float)(*(_DWORD*)(a2 + 8) - 24) / (float)v5) * v6;
	if (*(_DWORD*)(a1 + 44) - 48 > 0)
		v4 = *(_DWORD*)(a1 + 44) - 48;
	v8 = (float)((float)((float)v4 * 0.5) - (float)(v3 - 24))
		/ (float)((double)v4 / (float)(*(float*)(a1 + 248) - *(float*)(a1 + 252)));
	if (v7 >= 10.0 && v7 <= 23500.0 && v8 >= -20.0 && v8 <= 20.0)
	{
		v9 = *(_QWORD*)(a1 + 224);
		v22 = v7 + 6.755399441055744e15;
		v10 = (__int64*)sub_14031BAC0(v18);
		v20 = v10;
		ImageCache::getFromHashCode(v10, " Hz", (int)"");
		v11 = *v10;
		v20 = (__int64*)v11;
		if ((*(_DWORD*)(v11 - 16) & 0x30000000) == 0)
			_InterlockedIncrement((volatile signed __int32*)(v11 - 16));
		v12 = (_DWORD*)(*v10 - 16);
		if ((*v12 & 0x30000000) == 0 && _InterlockedDecrement(v12) == -1)
			j_j_free(v12);
		Label::setText(v9, (__int64*)& v20, 0);
		v14 = v20 - 2;
		if ((*(_DWORD*)(v20 - 2) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v14) == -1)
			j_j_free(v14);
		v15 = *(_QWORD*)(a1 + 232);
		String::String_3((__int64)& v19, v13, 1, 0);
		v21 = (__int64*)& v19;
		ImageCache::getFromHashCode(&v19, " dB", (int)"");
		v21 = v19;
		if ((*(_DWORD*)(v19 - 2) & 0x30000000) == 0)
			_InterlockedIncrement((volatile signed __int32*)v19 - 4);
		v16 = v19 - 2;
		if ((*(_DWORD*)(v19 - 2) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v16) == -1)
			j_j_free(v16);
		Label::setText(v15, (__int64*)& v21, 0);
		v17 = v21 - 2;
		if ((*(_DWORD*)(v21 - 2) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v17) == -1)
			j_j_free(v17);
	}*/
}

void FrequencyGraphComponent::paint(Graphics& g)
{
/*
	v3 = a1;
	v4 = a1;
	if (a1)
	{
		while (1)
		{
			v5 = *(_QWORD*)(v4 + 80);
			if (v5)
			{
				v6 = *(_QWORD*)(v5 + 16);
				if (v6)
					break;
			}
			v4 = *(_QWORD*)(v4 + 24);
			if (!v4)
				goto LABEL_5;
		}
	}
	else
	{
	LABEL_5:
		v7 = qword_140EC0000;
		if (!qword_140EC0000)
		{
			v11 = operator new(0x130ui64);
			v7 = Desktop::Desktop((__int64)v11);
			qword_140EC0000 = v7;
		}
		v6 = Desktop::getDefaultLookAndFeel(v7);
	}
	v8 = LookAndFeel::findColour(v6, &v10, 16799488);
	Graphics::fillAll(a2, *v8);
	return sub_1401514D0(v3, a2);*/
}

void FrequencyGraphComponent::resized()
{
/*
	v1 = 0;
	*(_QWORD*)& v5 = 0x1400000014i64;
	v2 = 0;
	if (*(_DWORD*)(a1 + 40) - 40 > 0)
		v2 = *(_DWORD*)(a1 + 40) - 40;
	DWORD2(v5) = v2;
	if (*(_DWORD*)(a1 + 44) - 40 > 0)
		v1 = *(_DWORD*)(a1 + 44) - 40;
	HIDWORD(v5) = v1;
	*(_OWORD*)(a1 + 376) = v5;
	Component::setBounds(*(_QWORD*)(a1 + 224), *(_QWORD*)(a1 + 376) + 8, HIDWORD(*(_QWORD*)(a1 + 376)) + 8, 60, 16);
	return Component::setBounds(
		*(_QWORD*)(a1 + 232),
		*(_QWORD*)(a1 + 376) + 8,
		HIDWORD(*(_QWORD*)(a1 + 376)) + 25,
		60,
		16);*/
}
