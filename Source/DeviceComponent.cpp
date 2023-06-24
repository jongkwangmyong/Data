#include "DeviceComponent.h"
DeviceComponent::DeviceComponent()
{

}

DeviceComponent::~DeviceComponent()
{

}
void DeviceComponent::mouseUp(const MouseEvent& event)
{
	/*if (a1)
	{
		v2 = a1[3];
		if (v2)
		{
			while (1)
			{
				v3 = _RTDynamicCast(
					v2,
					0i64,
					&juce::Component `RTTI Type Descriptor',
					& juce::DragAndDropContainer `RTTI Type Descriptor',
					0);
				if (v3)
					break;
				v2 = *(_QWORD*)(v2 + 24);
				if (!v2)
					goto LABEL_5;
			}
		}
		else
		{
		LABEL_5:
			v3 = 0i64;
		}
		if (v3 && a1[24] && *(int*)(v3 + 20) <= 0)
		{
			v4 = a1[22];
			v5 = *(_DWORD*)(v4 + 44);
			v6 = *(_DWORD*)(v4 + 40);
			*(_QWORD*)& v14 = 0i64;
			*((_QWORD*)& v14 + 1) = __PAIR64__(v5, v6);
			v16 = v14;
			sub_14040C8B0(v4, (unsigned int)& v13, (unsigned int)& v16, 1, 1065353216);
			v8 = sub_140380530(v7, v15, 2i64);
			v9 = *(_DWORD * *)(a1[24] + 216i64);
			v12 = v9;
			if ((*(v9 - 4) & 0x30000000) == 0)
				_InterlockedIncrement(v9 - 4);
			v17 = off_140EB1BD0;
			v18[0] = (__int64)v12;
			v12 = dword_140DDCDD0;
			sub_14040BE30(v3, (unsigned int)& v17, (_DWORD)a1, v8, v11[8], 0i64, 0i64);
			((void(__fastcall*)(__int64(__fastcall * **)(), __int64*))(*v17)[22])(v17, v18);
			v10 = (void(__fastcall * **)(_QWORD, __int64))v13;
			if (v13)
			{
				if (_InterlockedExchangeAdd((volatile signed __int32*)(v13 + 8), 0xFFFFFFFF) == 1)
					(**v10)(v10, 1i64);
			}
		}
		sub_1400D43D0((unsigned __int64)v11 ^ v18[1]);
	}*/
}

void DeviceComponent::resized()
{
/*
	v1 = 0;
	v2 = *(_DWORD*)(a1 + 40);
	v3 = *(_DWORD*)(a1 + 44) - 8;
	v4 = *(_QWORD*)(a1 + 200);
	v5 = v2 - 8;
	v6 = 0;
	if (v5 > 0)
		v6 = v5;
	if (v3 > 0)
		v1 = v3;
	return Component::setBounds(v4, 4, 4, v6, v1);
*/
}
