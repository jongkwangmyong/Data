#include "CloudLogin.h"

CloudLogin::CloudLogin()
{

}

CloudLogin::~CloudLogin()
{

}

void CloudLogin::buttonClicked(Button*)
{
/*
	if (a2 == a1[5])
	{
		v3 = a1[4];
		v4 = (char**)sub_14040E640(v3, &v51);
		v5 = sub_14031A560(v4, &v50);
		LOBYTE(v6) = 1;
		sub_14040E360(v3, v5, v6);
		v7 = v50 - 16;
		if ((*((_DWORD*)v50 - 4) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v7) == -1)
			j_j_free(v7);
		v8 = (void*)(v51 - 16);
		if ((*(_DWORD*)(v51 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v8) == -1)
			j_j_free(v8);
		v9 = a1[3];
		v10 = (char**)sub_14040E640(v9, &v53);
		v11 = sub_14031A560(v10, &v52);
		LOBYTE(v12) = 1;
		sub_14040E360(v9, v11, v12);
		v13 = v52 - 16;
		if ((*((_DWORD*)v52 - 4) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v13) == -1)
			j_j_free(v13);
		v14 = (void*)(v53 - 16);
		if ((*(_DWORD*)(v53 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v14) == -1)
			j_j_free(v14);
		if ((unsigned __int8)sub_14010B8D0(a1 - 22))
		{
			v61 = v54;
			v15 = sub_14040E640(a1[3], v54);
			v16 = sub_14040E640(a1[4], v55);
			sub_14026BB60(&v62, v16, v15);
			v17 = v62;
			if ((unsigned int)String::isNotEmpty(v62, "LoginOK"))
			{
				if ((unsigned int)String::isNotEmpty(v17, "WrongCredential"))
				{
					v59 = dword_140DDCDD0;
					sub_140048D00(&v48, "Login failed");
					sub_14031AF20(&v49, &v48);
					v34 = (void*)(v48 - 16);
					if ((*(_DWORD*)(v48 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v34) == -1)
						j_j_free(v34);
					sub_14040FE70(2, (unsigned int)& v49, (unsigned int)& v62, (unsigned int)& v59, 0i64);
					v35 = (void*)(v49 - 16);
					if ((*(_DWORD*)(v49 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v35) == -1)
						j_j_free(v35);
				}
				else
				{
					v58 = dword_140DDCDD0;
					sub_140048D00(&v44, "Please check your email address and password and try again.");
					sub_14031AF20(&v47, &v44);
					v30 = (void*)(v44 - 16);
					if ((*(_DWORD*)(v44 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v30) == -1)
						j_j_free(v30);
					sub_140048D00(&v45, "Login failed");
					sub_14031AF20(&v46, &v45);
					v31 = (void*)(v45 - 16);
					if ((*(_DWORD*)(v45 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v31) == -1)
						j_j_free(v31);
					sub_14040FE70(2, (unsigned int)& v46, (unsigned int)& v47, (unsigned int)& v58, 0i64);
					v32 = (void*)(v46 - 16);
					if ((*(_DWORD*)(v46 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v32) == -1)
						j_j_free(v32);
					v33 = (void*)(v47 - 16);
					if ((*(_DWORD*)(v47 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v33) == -1)
						j_j_free(v33);
				}
			}
			else
			{
				v18 = Button::getToggleState(a1[7]);
				v19 = ArgList;
				if (!v18)
					* ((_BYTE*)ArgList + 752) = 0;
				sub_1401F9700(v19);
				if (*((_BYTE*)ArgList + 632))
				{
					v56 = dword_140DDCDD0;
					sub_140048D00(&v63, "You are now logged in to the Genelec Cloud.");
					sub_14031AF20(&v39, &v63);
					v20 = (void*)(v63 - 16);
					if ((*(_DWORD*)(v63 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v20) == -1)
						j_j_free(v20);
					sub_140048D00(&v64, "Logged in");
					sub_14031AF20(&v65, &v64);
					v21 = (void*)(v64 - 16);
					if ((*(_DWORD*)(v64 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v21) == -1)
						j_j_free(v21);
					sub_14040FE70(3, (unsigned int)& v65, (unsigned int)& v39, (unsigned int)& v56, 0i64);
					v22 = (void*)(v65 - 16);
					if ((*(_DWORD*)(v65 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v22) == -1)
						j_j_free(v22);
					v23 = (void*)(v39 - 16);
					if ((*(_DWORD*)(v39 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v23) == -1)
						j_j_free(v23);
					v24 = qword_140EBFF78;
					v60 = operator new(0x220ui64);
					v25 = sub_140189A70(v60);
					sub_140274EA0(v24, v25);
				}
				else
				{
					v57 = dword_140DDCDD0;
					sub_140048D00(&v40, "There was a problem with login ID!");
					sub_14031AF20(&v43, &v40);
					v26 = (void*)(v40 - 16);
					if ((*(_DWORD*)(v40 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v26) == -1)
						j_j_free(v26);
					sub_140048D00(&v41, "Login failed");
					sub_14031AF20(&v42, &v41);
					v27 = (void*)(v41 - 16);
					if ((*(_DWORD*)(v41 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v27) == -1)
						j_j_free(v27);
					sub_14040FE70(2, (unsigned int)& v42, (unsigned int)& v43, (unsigned int)& v57, 0i64);
					v28 = (void*)(v42 - 16);
					if ((*(_DWORD*)(v42 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v28) == -1)
						j_j_free(v28);
					v29 = (void*)(v43 - 16);
					if ((*(_DWORD*)(v43 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v29) == -1)
						j_j_free(v29);
				}
			}
			v36 = v62 - 16;
			if ((*((_DWORD*)v62 - 4) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v36) == -1)
				j_j_free(v36);
		}
	}
	else if (a2 == a1[6])
	{
		v37 = qword_140EBFF78;
		v62 = operator new(0x220ui64);
		v38 = sub_140189A70(v62);
		sub_140274EA0(v37, v38);
	}*/
}

void CloudLogin::mouseEnter(const MouseEvent& event)
{
/*	v3 = *(_QWORD*)(a1 + 272);
	if (*(_QWORD*)(a2 + 48) == v3)
	{
		MouseCursor::MouseCursor(&Block, 7);
		sub_14040CF70(v3, (__int64*)& Block);
		if (Block)
			sub_140085A60(Block);
		SharedFontInternal::SharedFontInternal(&v9);
		Font::dupeInternalIfShared(&v9);
		*(_BYTE*)(v9 + 56) = 1;
		v4 = *(_QWORD*)(v9 + 16);
		if (v4)
		{
			if (!(*(unsigned __int8(__fastcall * *)(__int64, __int64*))(*(_QWORD*)v4 + 8i64))(v4, &v9))
			{
				v5 = *(_QWORD*)(v9 + 16);
				*(_QWORD*)(v9 + 16) = 0i64;
				if (v5)
				{
					if (_InterlockedExchangeAdd((volatile signed __int32*)(v5 + 8), 0xFFFFFFFF) == 1)
						(**(void(__fastcall * **)(__int64, __int64))v5)(v5, 1i64);
				}
			}
		}
		Label::setFont(*(_QWORD*)(a1 + 272), &v9);
		v6 = v9;
	}
	else
	{
		Block = 0i64;
		sub_14040CF70(v3, (__int64*)& Block);
		SharedFontInternal::SharedFontInternal(&v10);
		Font::dupeInternalIfShared(&v10);
		*(_BYTE*)(v10 + 56) = 0;
		v7 = *(_QWORD*)(v10 + 16);
		if (v7)
		{
			if (!(*(unsigned __int8(__fastcall * *)(__int64, __int64*))(*(_QWORD*)v7 + 8i64))(v7, &v10))
			{
				v8 = *(_QWORD*)(v10 + 16);
				*(_QWORD*)(v10 + 16) = 0i64;
				if (v8)
				{
					if (_InterlockedExchangeAdd((volatile signed __int32*)(v8 + 8), 0xFFFFFFFF) == 1)
						(**(void(__fastcall * **)(__int64, __int64))v8)(v8, 1i64);
				}
			}
		}
		Label::setFont(*(_QWORD*)(a1 + 272), &v10);
		v6 = v10;
	}
	if (v6)
	{
		if (_InterlockedExchangeAdd((volatile signed __int32*)(v6 + 8), 0xFFFFFFFF) == 1)
			(**(void(__fastcall * **)(__int64, __int64))v6)(v6, 1i64);
	}*/
}

void CloudLogin::mouseExit(const MouseEvent& event)
{
/*
	result = *(_QWORD*)(a1 + 272);
	if (*(_QWORD*)(a2 + 48) == result)
	{
		v3 = 0i64;
		result = sub_14040CF70(a1, &v3);
	}
	return result;
*/
}

__int64 CloudLogin::sub_14040CF70(__int64 a1, __int64* a2)
{
	return 0;
/*
	__int64* v2; // rdi
	_QWORD* v4; // rcx
	__int64 v5; // r8
	__int64 v6; // r9
	__int64 result; // rax
	__int64 v8; // rax
	void* v9; // [rsp+30h] [rbp+8h]

	v2 = a2;
	v4 = *(_QWORD * *)(a1 + 88);
	v5 = 0i64;
	if (v4)
		v6 = v4[1];
	else
		v6 = 0i64;
	result = *a2;
	if (*a2)
		v5 = *(_QWORD*)(result + 8);
	if (v6 != v5)
	{
		if (result)
		{
			_InterlockedIncrement((volatile signed __int32*)(result + 16));
			v4 = *(_QWORD * *)(a1 + 88);
		}
		if (v4)
			sub_140085A60(v4);
		result = *v2;
		*(_QWORD*)(a1 + 88) = *v2;
		if ((*(_BYTE*)(a1 + 168) & 2) != 0)
		{
			v8 = qword_140EC0000;
			if (!qword_140EC0000)
			{
				v9 = operator new(0x130ui64);
				v8 = Desktop::Desktop((__int64)v9);
				qword_140EC0000 = v8;
			}
			LOBYTE(a2) = 1;
			result = sub_140083890(**(_QWORD * *)(*(_QWORD*)(v8 + 48) + 24i64), a2);
		}
	}
	return result;*/
}

void CloudLogin::mouseUp(const MouseEvent& event)
{
/*
	if (*(_QWORD*)(a2 + 48) == a1[34])
	{
		sub_140048D00(&v22, "http://www.community.genelec.com");
		v14 = v22;
		v4 = (volatile signed __int32*)(v22 - 16);
		if ((*((_DWORD*)v22 - 4) & 0x30000000) == 0)
			_InterlockedIncrement(v4);
		v15 = 0i64;
		v16 = 0i64;
		v17 = 0i64;
		v18 = 0i64;
		v19 = 0i64;
		v20 = 0i64;
		Block[0] = 0i64;
		Block[1] = 0i64;
		sub_1402E1290(&v14);
		if ((*v4 & 0x30000000) == 0 && _InterlockedDecrement(v4) == -1)
			j_j_free((void*)v4);
		URL::launchInDefaultBrowser((__int64*)& v14);
		sub_140002F30(Block);
		free(Block[0]);
		if (SHIDWORD(v20) > 0)
		{
			v5 = v19;
			v6 = HIDWORD(v20);
			do
			{
				v7 = (_DWORD*)(*v5 - 16i64);
				if ((*v7 & 0x30000000) == 0 && _InterlockedDecrement(v7) == -1)
					j_j_free(v7);
				++v5;
				--v6;
			} while (v6);
		}
		free(v19);
		if (SHIDWORD(v18) > 0)
		{
			v8 = v17;
			v9 = HIDWORD(v18);
			do
			{
				v10 = (_DWORD*)(*v8 - 16i64);
				if ((*v10 & 0x30000000) == 0 && _InterlockedDecrement(v10) == -1)
					j_j_free(v10);
				++v8;
				--v9;
			} while (v9);
		}
		free(v17);
		free(v15);
		v11 = v14 - 16;
		if ((*((_DWORD*)v14 - 4) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v11) == -1)
			j_j_free(v11);
	}
	v12 = *(_QWORD*)(a2 + 48);
	if (v12 == a1[32])
	{
		Component::grabKeyboardFocusInternal(a1[26], 2u, 1);
		v12 = *(_QWORD*)(a2 + 48);
	}
	if (v12 == a1[33])
		LOBYTE(v12) = Component::grabKeyboardFocusInternal(a1[25], 2u, 1);
	return v12;*/
}
