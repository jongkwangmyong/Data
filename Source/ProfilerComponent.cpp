#include "ProfilerComponent.h"
void ProfilerComponent::paint(Graphics& g)
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
void ProfilerComponent::resized()
{
	/* Component::setBounds(a1[36].m128i_i64[1], a1[2].m128i_i32[2] - 150, a1[2].m128i_i32[3] - 40, 150, 32);
	Component::setBounds(a1[37].m128i_i64[0], 0, a1[2].m128i_i32[3] - 40, 150, 32);
	Component::setBounds(a1[37].m128i_i64[1], a1[2].m128i_i32[2] - 155, a1[2].m128i_i32[3] - 229, 150, 24);
	Component::setBounds(a1[38].m128i_i64[0], a1[2].m128i_i32[2] - 155, a1[2].m128i_i32[3] - 250, 150, 24);
	Component::setBounds(a1[38].m128i_i64[1], 2, a1[2].m128i_i32[3] - 154, 616, 48);
	Component::setBounds(a1[39].m128i_i64[0], 2, a1[2].m128i_i32[3] - 95, 616, 40);
	v2 = a1[2].m128i_i32[3] / 2;
	v3 = _mm_srli_si128(a1[2], 8).m128i_u64[0];
	v8 = a1[2].m128i_i64[0];
	if (SHIDWORD(v3) < v2)
		v2 = HIDWORD(v3);
	v4 = HIDWORD(v3) - v2;
	Component::setBounds(a1[33].m128i_i64[1], a1[2].m128i_i64[0], SHIDWORD(v8), v3, v2);
	v5 = 0;
	v6 = 0;
	if ((int)v3 - 16 > 0)
		v6 = v3 - 16;
	if (v4 - 16 > 0)
		v5 = v4 - 16;
	Component::setBounds(a1[34].m128i_i64[0], v8 + 8, v2 + HIDWORD(v8) + 8, v6, v5);
	Component::setBounds(
		a1[34].m128i_i64[0],
		*(_DWORD*)(a1[34].m128i_i64[0] + 32),
		*(_DWORD*)(a1[34].m128i_i64[0] + 36),
		v3 - 16,
		v4 - 80);
	return Component::setBounds(
		a1[31].m128i_i64[1],
		*(_DWORD*)(a1[31].m128i_i64[1] + 32),
		*(_DWORD*)(a1[31].m128i_i64[1] + 36),
		700,
		1200);*/
}
void ProfilerComponent::buttonClicked(Button*)
{
	/*if (a2 == *(_QWORD*)(a1 + 408))
	{
		*(_BYTE*)(a1 + 24) = 1;
	}
	else
	{
		if (a2 != *(_QWORD*)(a1 + 416))
			return result;
		*(_BYTE*)(a1 + 24) = 0;
	}
	v2 = *(__int64(__fastcall * ***)(_QWORD, __int64))(a1 - 152);
	if (v2)
		result = (**v2)(v2, 1i64);
	return result;*/
}
void ProfilerComponent::comboBoxChanged(ComboBox* comboBoxThatHasChanged)
{
	/*v3 = *(_QWORD*)(a1 + 416);
	if (a2 == v3)
	{
		v4 = ComboBox::getSelectedItemIndex(v3);
		v5 = *(_QWORD*)(a1 + 8);
		*(_DWORD*)(a1 + 368) = v4;
		sub_1402183A0(v5, v4);
		sub_140198D50(a1 - 184);
		v6 = ArgList;
		if (*((_BYTE*)ArgList + 1040))
		{
			if (!_InterlockedCompareExchange((volatile signed __int32*)(*((_QWORD*)ArgList + 126) + 24i64), 1, 0)
				&& !MessageManager::MessageBase::post(v6[126]))
			{
				_InterlockedExchange((volatile __int32*)(v6[126] + 24i64), 0);
			}
		}
	}*/
}