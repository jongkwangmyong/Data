#include "SystemTrayComponent.h"
void SystemTrayComponent::mouseDown(const MouseEvent& event)
{
	/*v2 = 16i64;
	v3 = 0;
	v4 = 0i64;
	v5 = 0i64;
	v6 = 0;
	v7 = 0;
	v8 = 0;
	v0 = _RTDynamicCast(
		qword_140EBFFD8,
		0i64,
		&juce::JUCEApplicationBase `RTTI Type Descriptor',
		& juce::JUCEApplication `RTTI Type Descriptor',
		0);
	return (*(__int64(__fastcall * *)(__int64, __int64*))(*(_QWORD*)(v0 + 24) + 32i64))(v0 + 24, &v2);*/
}
void SystemTrayComponent::changeListenerCallback(ChangeBroadcaster* source)
{
	/*v4 = qword_140EBFF98;
	v5 = *((_QWORD*)qword_140EBFF98 + 7);
	if (!v5)
	{
		sub_14031E290(qword_140EBFF98);
		v5 = v4[7];
	}
	v6 = sub_140315950(v5, "toastPanelDelay_s", 0xFFFFFFFFi64);
	v7 = qword_140EBFF98;
	v8 = *((_QWORD*)qword_140EBFF98 + 7);
	if (!v8)
	{
		sub_14031E290(qword_140EBFF98);
		v8 = v7[7];
	}
	LOBYTE(v9) = sub_140315950(v8, "toastPanelLocation", 0i64);
	if (v6 != -1)
	{
		if (byte_140EBFF45
			|| (v9 = GetForegroundWindow()) != 0i64
			&& (LODWORD(dwProcessId) = 0,
				GetWindowThreadProcessId(v9, (LPDWORD)& dwProcessId),
				LOBYTE(v9) = (_DWORD)dwProcessId == GetCurrentProcessId(),
				!(_BYTE)v9))
		{
			if (*(float*)& dword_140EBFF3C != *(float*)(a1 + 40)
				|| (LOBYTE(v9) = (_BYTE)ArgList + 80, a2 != (char*)ArgList + 1104))
			{
				*(_DWORD*)(a1 + 40) = dword_140EBFF3C;
				v15[1] = (__int64)v15;
				sub_140048D00(&v17, "GLM");
				sub_14031AF20(v15, &v17);
				v10 = (void*)(v17 - 16);
				if ((*(_DWORD*)(v17 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v10) == -1)
					j_j_free(v10);
				dwProcessId = operator new(0x168ui64);
				v11 = sub_1401689E0(dwProcessId, v6);
				LOBYTE(v9) = sub_140269710(v11, (unsigned int)v15, v12, v13);
			}
		}
	}
	return (char)v9;*/
}