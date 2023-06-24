#include "MasterSlider.h"
String MasterSlider::getTextFromValue(double v)
{
	return "OK";
	/*volatile signed __int32* v5; // rbx
	__int64 v6; // rcx
	int v7; // er8
	__int64 v9[4]; // [rsp+28h] [rbp-20h] BYREF
	char v10; // [rsp+50h] [rbp+8h] BYREF
	double v11; // [rsp+68h] [rbp+20h] BYREF

	v9[0] = *(_QWORD*)(*(_QWORD*)(a1 + 512) + 528i64);
	v5 = (volatile signed __int32*)(v9[0] - 16);
	if ((*(_DWORD*)(v9[0] - 16) & 0x30000000) == 0)
		_InterlockedIncrement(v5);
	v6 = *(_QWORD*)(a1 + 504);
	if (v6)
	{
		v11 = a3;
		(*(void(__fastcall**)(__int64, char*, double*))(*(_QWORD*)v6 + 16i64))(v6, &v10, &v11);
	}
	else
	{
		v7 = *(_DWORD*)(*(_QWORD*)(a1 + 512) + 536i64);
		if (v7 <= 0)
			sub_14031BAC0(&v10);
		else
			String::String_3((__int64)&v10, a1, v7, 0);
	}
	sub_14031B550(a2, &v10, v9);
	if ((*v5 & 0x30000000) == 0 && _InterlockedDecrement(v5) == -1)
		j_j_free((void*)v5);
	return a2;*/

}