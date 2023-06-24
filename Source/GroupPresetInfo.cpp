#include "GroupPresetInfo.h"
void GroupPresetInfo::mouseUp(const MouseEvent&)
{
	/*__int64 v2; // rax
	__int64 v4; // rcx

	v2 = *(_QWORD*)(a1 + 232);
	if (*(_QWORD*)(a2 + 48) == v2)
	{
		v4 = *(_QWORD*)(a1 + 208);
		v2 = qword_140EC0010;
		if (qword_140EC0010 != v4)
		{
			if (qword_140EC0010)
			{
				while (1)
				{
					v2 = *(_QWORD*)(v2 + 24);
					if (v2 == v4)
						break;
					if (!v2)
						goto LABEL_6;
				}
			}
			else
			{
			LABEL_6:
				sub_14040E240(v4);
				LOBYTE(v2) = Component::grabKeyboardFocusInternal(*(_QWORD*)(a1 + 208), 2u, 1);
			}
		}
	}
	return v2;*/

}
void GroupPresetInfo::paint(Graphics& g)
{
	/*__int64 v4; // rax
	__int64 v5; // rax
	__int64 v6; // rax
	unsigned int* v7; // rax
	int v8; // [rsp+30h] [rbp+8h] BYREF
	void* v9; // [rsp+40h] [rbp+18h]

	v8 = -13484476;
	Graphics::fillAll(a2, 0xFF323E44);
	if (a1)
	{
		while (1)
		{
			v4 = *(_QWORD*)(a1 + 80);
			if (v4)
			{
				v5 = *(_QWORD*)(v4 + 16);
				if (v5)
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
		v6 = qword_140EC0000;
		if (!qword_140EC0000)
		{
			v9 = operator new(0x130ui64);
			v6 = Desktop::Desktop((__int64)v9);
			qword_140EC0000 = v6;
		}
		v5 = Desktop::getDefaultLookAndFeel(v6);
	}
	v7 = LookAndFeel::findColour(v5, &v8, 16799488);
	Graphics::fillAll(a2, *v7);
	Graphics::setColour(a2, -16777216);*/
}
void GroupPresetInfo::resized()
{
	/*Component::setBounds(*(_QWORD*)(a1 + 208), 5, *(_DWORD*)(a1 + 44) - 610, *(_DWORD*)(a1 + 40) - 16, 440);
	Component::setBounds(*(_QWORD*)(a1 + 216), *(_DWORD*)(a1 + 40) - 150, *(_DWORD*)(a1 + 44) - 42, 150, 32);
	Component::setBounds(*(_QWORD*)(a1 + 224), *(_DWORD*)(a1 + 40) - 627, *(_DWORD*)(a1 + 44) - 98, 588, 40);
	Component::setBounds(*(_QWORD*)(a1 + 232), 5, *(_DWORD*)(a1 + 44) - 642, 611, 26);
	Component::setBounds(*(_QWORD*)(a1 + 240), *(_DWORD*)(a1 + 40) - 35, *(_DWORD*)(a1 + 44) - 90, 24, 24);
	Component::setBounds(*(_QWORD*)(a1 + 248), 5, *(_DWORD*)(a1 + 44) - 610, *(_DWORD*)(a1 + 40) - 22, 440);
	Component::setBounds(*(_QWORD*)(a1 + 256), *(_DWORD*)(a1 + 40) - 165, *(_DWORD*)(a1 + 44) - 639, 150, 24);
	return Component::setBounds(*(_QWORD*)(a1 + 264), 0, *(_DWORD*)(a1 + 44) - 42, 150, 32);*/
}
void GroupPresetInfo::buttonClicked(Button*)
{
	/*_BYTE* v3; // rcx
	__int64 v4; // rbx
	__int64 v5; // rax
	__int64 v6; // rsi
	void* v7; // rcx
	void* v8; // rcx
	__int64 v9; // rcx
	__int64 v10; // rdi
	void* v11; // rcx
	__int64 v12; // rcx
	__int64 v13; // r8
	__int64 v14; // rcx
	__int64 v15; // rax
	void* v16; // rcx
	__int64 v17; // rsi
	void* v18; // rcx
	void* v19; // rcx
	__int64 v20; // rdi
	void* v21; // rcx
	__int64 v22; // rsi
	void* v23; // rcx
	void* v24; // rcx
	__int64 v25; // rdi
	void* v26; // rcx
	_DWORD* v27; // rcx
	void(__fastcall * **v28)(_QWORD, __int64); // rcx
	__int64 v29; // [rsp+20h] [rbp-29h] BYREF
	__int64 v30; // [rsp+28h] [rbp-21h] BYREF
	__int64 v31; // [rsp+30h] [rbp-19h] BYREF
	__int64 v32; // [rsp+38h] [rbp-11h] BYREF
	__int64 v33; // [rsp+40h] [rbp-9h] BYREF
	__int64 v34; // [rsp+48h] [rbp-1h] BYREF
	__int64 v35; // [rsp+50h] [rbp+7h] BYREF
	__int64 v36; // [rsp+58h] [rbp+Fh] BYREF
	__int64 v37; // [rsp+60h] [rbp+17h] BYREF
	__int64 v38; // [rsp+68h] [rbp+1Fh] BYREF
	char v39[48]; // [rsp+70h] [rbp+27h] BYREF
	__int64 v40; // [rsp+B0h] [rbp+67h] BYREF
	__int64 v41; // [rsp+B8h] [rbp+6Fh] BYREF
	__int64 v42; // [rsp+C0h] [rbp+77h] BYREF
	__int64 v43; // [rsp+C8h] [rbp+7Fh] BYREF

	if (a2 != a1[5])
	{
		if (a2 == a1[8])
			return;
		if (a2 == a1[10])
		{
			v3 = (_BYTE*)a1[9];
			if ((v3[168] & 2) != 0)
			{
				v4 = *(_QWORD*)(*(_QWORD*)(*((_QWORD*)ArgList + 66) + 8i64)
					+ 8i64 * *(int*)(*((_QWORD*)ArgList + 66) + 268i64)
					- 8);
				v5 = sub_14040E640(v3, v39);
				sub_140002470(v4, v5);
				sub_140158D70(a1 - 22);
				v6 = a1[10];
				sub_140048D00(&v40, "Edit");
				sub_14031AF20(&v41, &v40);
				v7 = (void*)(v40 - 16);
				if ((*(_DWORD*)(v40 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v7) == -1)
					j_j_free(v7);
				sub_140410150(v6, &v41);
				v8 = (void*)(v41 - 16);
				if ((*(_DWORD*)(v41 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v8) == -1)
					j_j_free(v8);
				(*(void(__fastcall**)(_QWORD, _QWORD))(*(_QWORD*)a1[9] + 88i64))(a1[9], 0i64);
				v9 = *((_QWORD*)ArgList + 281);
				v42 = v9;
				if ((*(_DWORD*)(v9 - 16) & 0x30000000) == 0)
					_InterlockedIncrement((volatile signed __int32*)(v9 - 16));
				sub_140200820(ArgList, &v42, 0i64);
				v10 = a1[7];
				sub_140048D00(&v43, "Summary of the group preset:");
				sub_14031AF20(&v29, &v43);
				v11 = (void*)(v43 - 16);
				if ((*(_DWORD*)(v43 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v11) == -1)
					j_j_free(v11);
				Label::setText(v10, &v29, 0);
				v12 = v29;
			}
			else
			{
				LOBYTE(a2) = 1;
				(*(void(__fastcall**)(_BYTE*, __int64))(*(_QWORD*)v3 + 88i64))(v3, a2);
				v14 = a1[9];
				v15 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(*((_QWORD*)ArgList + 66) + 8i64)
					+ 8i64 * *(int*)(*((_QWORD*)ArgList + 66) + 268i64)
					- 8)
					+ 584i64);
				v30 = v15;
				if ((*(_DWORD*)(v15 - 16) & 0x30000000) == 0)
					_InterlockedIncrement((volatile signed __int32*)(v15 - 16));
				LOBYTE(v13) = 1;
				sub_14040E360(v14, &v30, v13);
				v16 = (void*)(v30 - 16);
				if ((*(_DWORD*)(v30 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v16) == -1)
					j_j_free(v16);
				v17 = a1[10];
				sub_140048D00(&v31, "Save");
				sub_14031AF20(&v32, &v31);
				v18 = (void*)(v31 - 16);
				if ((*(_DWORD*)(v31 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v18) == -1)
					j_j_free(v18);
				sub_140410150(v17, &v32);
				v19 = (void*)(v32 - 16);
				if ((*(_DWORD*)(v32 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v19) == -1)
					j_j_free(v19);
				v20 = a1[7];
				sub_140048D00(&v33, "Edit the group preset description");
				sub_14031AF20(&v34, &v33);
				v21 = (void*)(v33 - 16);
				if ((*(_DWORD*)(v33 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v21) == -1)
					j_j_free(v21);
				Label::setText(v20, &v34, 0);
				v12 = v34;
			}
		LABEL_44:
			v27 = (_DWORD*)(v12 - 16);
			if ((*v27 & 0x30000000) == 0 && _InterlockedDecrement(v27) == -1)
				j_j_free(v27);
			return;
		}
		if (a2 != a1[11])
			return;
		if ((*(_BYTE*)(a1[9] + 168i64) & 2) != 0)
		{
			sub_140158D70(a1 - 22);
			v22 = a1[10];
			sub_140048D00(&v35, "Edit");
			sub_14031AF20(&v36, &v35);
			v23 = (void*)(v35 - 16);
			if ((*(_DWORD*)(v35 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v23) == -1)
				j_j_free(v23);
			sub_140410150(v22, &v36);
			v24 = (void*)(v36 - 16);
			if ((*(_DWORD*)(v36 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v24) == -1)
				j_j_free(v24);
			(*(void(__fastcall**)(_QWORD, _QWORD))(*(_QWORD*)a1[9] + 88i64))(a1[9], 0i64);
			v25 = a1[7];
			sub_140048D00(&v37, "Summary of the group preset:");
			sub_14031AF20(&v38, &v37);
			v26 = (void*)(v37 - 16);
			if ((*(_DWORD*)(v37 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v26) == -1)
				j_j_free(v26);
			Label::setText(v25, &v38, 0);
			v12 = v38;
			goto LABEL_44;
		}
	}
	v28 = (void(__fastcall***)(_QWORD, __int64)) * (a1 - 19);
	if (v28)
		(**v28)(v28, 1i64);*/
}