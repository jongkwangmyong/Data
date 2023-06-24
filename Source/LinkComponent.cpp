#include "LinkComponent.h"
void LinkComponent::paint(Graphics& g)
{
	/*__int64 v3; // rbx
	__int64 v4; // rax
	__int64 v5; // rcx
	__int64 v6; // rcx
	__int64 v7; // rax
	unsigned int* v8; // rax
	int v9; // edi
	__int64 v10; // rax
	__int64 v11; // rcx
	__int64 v12; // rcx
	__int64 v13; // rax
	__int64 v14; // rax
	__int64 v15; // rax
	__int64 v16; // rax
	__int64* v17; // rcx
	__int64 v18; // rax
	int v20[6]; // [rsp+30h] [rbp-18h] BYREF
	int v21; // [rsp+50h] [rbp+8h] BYREF
	void* v22; // [rsp+58h] [rbp+10h] BYREF

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
			v22 = operator new(0x130ui64);
			v7 = Desktop::Desktop((__int64)v22);
			qword_140EC0000 = v7;
		}
		v6 = Desktop::getDefaultLookAndFeel(v7);
	}
	v8 = LookAndFeel::findColour(v6, &v21, 16799488);
	Graphics::fillAll(a2, *v8);
	v9 = *(_DWORD*)(v3 + 44) - 24;
	v10 = v3;
	while (1)
	{
		v11 = *(_QWORD*)(v10 + 80);
		if (v11)
		{
			v12 = *(_QWORD*)(v11 + 16);
			if (v12)
				break;
		}
		v10 = *(_QWORD*)(v10 + 24);
		if (!v10)
		{
			v13 = qword_140EC0000;
			if (!qword_140EC0000)
			{
				v22 = operator new(0x130ui64);
				v13 = Desktop::Desktop((__int64)v22);
				qword_140EC0000 = v13;
			}
			v12 = Desktop::getDefaultLookAndFeel(v13);
			break;
		}
	}
	LookAndFeel::findColour(v12, &v21, 16799488);
	while (1)
	{
		v14 = *(_QWORD*)(v3 + 80);
		if (v14)
		{
			v15 = *(_QWORD*)(v14 + 16);
			if (v15)
				break;
		}
		v3 = *(_QWORD*)(v3 + 24);
		if (!v3)
		{
			v16 = qword_140EC0000;
			if (!qword_140EC0000)
			{
				v22 = operator new(0x130ui64);
				v16 = Desktop::Desktop((__int64)v22);
				qword_140EC0000 = v16;
			}
			v15 = Desktop::getDefaultLookAndFeel(v16);
			break;
		}
	}
	LookAndFeel::findColour(v15, &v22, 16777857);
	Graphics::setColour(a2, v21);
	v17 = *(__int64**)(a2 + 8);
	v18 = *v17;
	v20[0] = -18;
	v20[1] = 13;
	v20[2] = 32;
	v20[3] = v9;
	(*(void(__fastcall**)(__int64*, int*, _QWORD))(v18 + 168))(v17, v20, 0i64);
	Graphics::setColour(a2, (int)v22);
	return Graphics::drawRect_(a2, -18, 13, 32, v9);*/

}