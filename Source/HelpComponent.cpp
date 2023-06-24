#include "HelpComponent.h"
void HelpComponent::paint(Graphics& g)
{
	/*__int64 v3; // rax
	__int64 v4; // rax
	__int64 v5; // rax
	unsigned int* v6; // rax
	int v8; // [rsp+30h] [rbp+8h] BYREF
	void* v9; // [rsp+40h] [rbp+18h]

	if (a1)
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
void HelpComponent::resized()
{
	/*Component::setBounds(*(_QWORD*)(a1 + 192), *(_DWORD*)(a1 + 40) - 155, *(_DWORD*)(a1 + 44) - 88, 150, 32);
	Component::setBounds(*(_QWORD*)(a1 + 200), 184, *(_DWORD*)(a1 + 44) - 568, 640, 72);
	Component::setBounds(*(_QWORD*)(a1 + 208), *(_DWORD*)(a1 + 40) - 800, *(_DWORD*)(a1 + 44) - 568, 150, 32);
	Component::setBounds(*(_QWORD*)(a1 + 216), *(_DWORD*)(a1 + 40) - 800, *(_DWORD*)(a1 + 44) - 512, 150, 32);
	Component::setBounds(*(_QWORD*)(a1 + 224), *(_DWORD*)(a1 + 40) - 800, *(_DWORD*)(a1 + 44) - 424, 150, 32);
	Component::setBounds(*(_QWORD*)(a1 + 232), *(_DWORD*)(a1 + 40) - 800, *(_DWORD*)(a1 + 44) - 368, 150, 32);
	Component::setBounds(*(_QWORD*)(a1 + 240), *(_DWORD*)(a1 + 40) - 800, *(_DWORD*)(a1 + 44) - 312, 150, 32);
	Component::setBounds(*(_QWORD*)(a1 + 248), *(_DWORD*)(a1 + 40) - 800, *(_DWORD*)(a1 + 44) - 256, 150, 32);
	return Component::setBounds(*(_QWORD*)(a1 + 256), *(_DWORD*)(a1 + 40) - 800, *(_DWORD*)(a1 + 44) - 192, 150, 32);*/
}
void HelpComponent::sub_14015D490(__int64* a1, __int64 a2)
{
	/*__int64 v3; // rdx
	__int64 v4; // rsi
	void(__fastcall * **v5)(_QWORD, __int64); // rcx
	_QWORD* v6; // r14
	void* v7; // rcx
	_QWORD* v8; // rbx
	__int64 v9; // rdx
	void* v10; // rcx
	char* v11; // rcx
	__int64 v12; // rdx
	__int64 v13; // rsi
	void(__fastcall * **v14)(_QWORD, __int64); // rcx
	_QWORD* v15; // r14
	void* v16; // rcx
	_QWORD* v17; // rbx
	__int64 v18; // rdx
	void* v19; // rcx
	__int64 v20; // [rsp+30h] [rbp-99h] BYREF
	__int64 v21; // [rsp+38h] [rbp-91h] BYREF
	__int64 v22; // [rsp+40h] [rbp-89h] BYREF
	char v23[8]; // [rsp+48h] [rbp-81h] BYREF
	__int64 v24; // [rsp+50h] [rbp-79h] BYREF
	char v25[80]; // [rsp+60h] [rbp-69h] BYREF
	char v26[112]; // [rsp+B0h] [rbp-19h] BYREF
	void* v27; // [rsp+138h] [rbp+6Fh] BYREF
	__int64 v28; // [rsp+140h] [rbp+77h] BYREF
	__int64 v29; // [rsp+148h] [rbp+7Fh] BYREF

	if (a2 != a1[2] && a2 != a1[4] && a2 != a1[5])
	{
		if (a2 == a1[6])
		{
			v27 = operator new(0x1D0ui64);
			v4 = sub_1404232A0(v27);
			v5 = (void(__fastcall***)(_QWORD, __int64))a1[1];
			a1[1] = v4;
			if (v5)
			{
				(**v5)(v5, 1i64);
				v4 = a1[1];
			}
			v6 = a1 - 22;
			if (v4)
			{
				LOBYTE(v3) = 1;
				(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)v4 + 88i64))(v4, v3);
				Component::addChildComponent((__int64)(a1 - 22), v4, -1);
				v4 = a1[1];
			}
			Component::setBounds(v4, 200, 104, 528, 360);
			sub_140048D00(&v28, "C:\\Users\\jussi\\Downloads\\GLMv4 Layout.wmv");
			sub_140308BF0(&v27, &v28);
			sub_140315A90(v25, &v27);
			v7 = (void*)(v28 - 16);
			if ((*(_DWORD*)(v28 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v7) == -1)
				j_j_free(v7);
			v8 = (_QWORD*)a1[1];
			sub_1400D2550(v8[57], &v22, v25);
			(*(void(__fastcall**)(_QWORD*))(*v8 + 264i64))(v8);
			v29 = v22;
			v9 = *(unsigned int*)(v22 - 16);
			if ((v9 & 0x30000000) == 0)
				_InterlockedIncrement((volatile signed __int32*)(v22 - 16));
			sub_14015D360(v6, v9, &v29);
			v10 = (void*)(v22 - 16);
			if ((*(_DWORD*)(v22 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v10) == -1)
				j_j_free(v10);
			v11 = v25;
		}
		else
		{
			if (a2 != a1[7])
				return;
			v27 = operator new(0x1D0ui64);
			v13 = sub_1404232A0(v27);
			v14 = (void(__fastcall***)(_QWORD, __int64))a1[1];
			a1[1] = v13;
			if (v14)
			{
				(**v14)(v14, 1i64);
				v13 = a1[1];
			}
			v15 = a1 - 22;
			if (v13)
			{
				LOBYTE(v12) = 1;
				(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)v13 + 88i64))(v13, v12);
				Component::addChildComponent((__int64)(a1 - 22), v13, -1);
				v13 = a1[1];
			}
			Component::setBounds(v13, 200, 104, 528, 360);
			sub_140048D00(&v20, "C:\\Users\\jussi\\Downloads\\GLMv4 Group.wmv");
			sub_140308BF0(v23, &v20);
			sub_140315A90(v26, v23);
			v16 = (void*)(v20 - 16);
			if ((*(_DWORD*)(v20 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v16) == -1)
				j_j_free(v16);
			v17 = (_QWORD*)a1[1];
			sub_1400D2550(v17[57], &v24, v26);
			(*(void(__fastcall**)(_QWORD*))(*v17 + 264i64))(v17);
			v21 = v24;
			v18 = *(unsigned int*)(v24 - 16);
			if ((v18 & 0x30000000) == 0)
				_InterlockedIncrement((volatile signed __int32*)(v24 - 16));
			sub_14015D360(v15, v18, &v21);
			v19 = (void*)(v24 - 16);
			if ((*(_DWORD*)(v24 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v19) == -1)
				j_j_free(v19);
			v11 = v26;
		}
		sub_140002BF0(v11);
	}*/
}