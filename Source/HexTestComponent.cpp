#include "HexTestComponent.h"
void HexTestComponent::setTooltip(const String& newTooltip)
{
	/*_DWORD* v2; // rcx

	if ((*(_DWORD*)(*a2 - 16) & 0x30000000) == 0)
		_InterlockedIncrement((volatile signed __int32*)(*a2 - 16));
	v2 = (_DWORD*)(_InterlockedExchange64((volatile __int64*)(a1 + 8), *a2) - 16);
	if ((*v2 & 0x30000000) == 0 && _InterlockedDecrement(v2) == -1)
		j_j_free(v2);*/

}
bool HexTestComponent::isInterestedInDragSource(const SourceDetails& /*dragSourceDetails*/)
{
	/*__int64 v2; // rcx
	__int64 v3; // rcx
	void* v4; // rcx
	__int64 v6; // [rsp+30h] [rbp+8h] BYREF
	__int64 v7; // [rsp+40h] [rbp+18h] BYREF

	if ((*(_BYTE*)(a1 - 7) & 0x10) != 0)
		return 0;
	v2 = *(_QWORD*)(a1 - 152);
	if (v2)
	{
		if (!Component::isEnabled(v2))
			return 0;
	}
	(*(void(__fastcall**)(_QWORD, __int64*, _QWORD*))(*(_QWORD*)*a2 + 32i64))(*a2, &v7, a2 + 1);
	v6 = v7;
	v3 = *(unsigned int*)(v7 - 16);
	if ((v3 & 0x30000000) == 0)
		_InterlockedIncrement((volatile signed __int32*)(v7 - 16));
	sub_1401F5A80(v3, &v6);
	v4 = (void*)(v7 - 16);
	if ((*(_DWORD*)(v7 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v4) == -1)
		j_j_free(v4);*/
	return 1;
}
void HexTestComponent::itemDragEnter(const SourceDetails& dragSourceDetails)
{
	//itemDragMove(dragSourceDetails);//Original
	/*__int64 v1; // rcx
	__m128i v2; // [rsp+20h] [rbp-18h] BYREF

	*(_BYTE*)(a1 + 129) = 1;
	v1 = a1 - 176;
	v2.m128i_i64[0] = 0i64;
	v2.m128i_i64[1] = *(_QWORD*)(v1 + 40);
	Component::internalRepaintUnchecked(v1, &v2, 1);*/
}
void HexTestComponent::itemDragExit(const SourceDetails& /*dragSourceDetails*/)
{
	//hideDragHighlight();//Original
	/*__int64 v1; // rcx
	__m128i v2; // [rsp+20h] [rbp-18h] BYREF

	*(_BYTE*)(a1 + 129) = 0;
	v1 = a1 - 176;
	v2.m128i_i64[0] = 0i64;
	v2.m128i_i64[1] = *(_QWORD*)(v1 + 40);
	Component::internalRepaintUnchecked(v1, &v2, 1);*/
}

void HexTestComponent::itemDropped(const SourceDetails& dragSourceDetails)
{
	//handleDrop(StringArray(), dragSourceDetails);//Original
	/*__int64* v4; // rax
	__int64 v5; // rcx
	__int64 v6; // rax
	__int64* v7; // rcx
	__int64** v8; // r8
	__int64 v9; // r9
	unsigned int v10; // eax
	char* v11; // rcx
	__int64 v12; // r14
	__int64 v13; // rcx
	__int64 i; // rbx
	__int64 v15; // rbx
	__int64 v16; // rax
	char v17; // dl
	__int64 v18; // rcx
	__int64 v19; // rcx
	int v20; // er9
	int v21; // er8
	__int64 v22; // rbx
	unsigned int v23; // eax
	__int64 v24; // r8
	__int64 v25; // rbx
	__int64* v26; // rdx
	volatile signed __int32* v27; // rbx
	__int64 v28; // rcx
	__int64 v29; // rdx
	__int64 v30; // rbx
	_QWORD* v31; // rax
	unsigned int v32; // edx
	unsigned int v33; // eax
	int v34; // [rsp+20h] [rbp-79h]
	int v35; // [rsp+28h] [rbp-71h]
	__int64 v36; // [rsp+60h] [rbp-39h] BYREF
	__int64 v37; // [rsp+68h] [rbp-31h] BYREF
	_BYTE* v38; // [rsp+70h] [rbp-29h]
	__int64 v39; // [rsp+78h] [rbp-21h]
	__int64 v40; // [rsp+88h] [rbp-11h]
	__m128i v41; // [rsp+A0h] [rbp+7h]
	__m128i v42[4]; // [rsp+B0h] [rbp+17h] BYREF
	char* String; // [rsp+100h] [rbp+67h] BYREF
	__int64 v44; // [rsp+108h] [rbp+6Fh] BYREF
	__int64 v45; // [rsp+110h] [rbp+77h] BYREF
	__int64 v46; // [rsp+118h] [rbp+7Fh] BYREF

	*(_BYTE*)(a1 + 129) = 0;
	v4 = a2[2];
	if (v4)
		v5 = v4[2];
	else
		v5 = 0i64;
	v6 = _RTDynamicCast(
		v5,
		0i64,
		&juce::Component `RTTI Type Descriptor',
		& LayerSelectComponent `RTTI Type Descriptor',
		0);
	v7 = *a2;
	v8 = a2 + 1;
	v9 = **a2;
	if (!v6)
	{
		(*(void(__fastcall**)(__int64*, __int64*, __int64**))(v9 + 32))(v7, &v37, v8);
		v12 = 0i64;
		if (*(_QWORD*)(a1 + 152))
			v12 = *(_QWORD*)(a1 + 152);
		v44 = v37;
		v13 = *(unsigned int*)(v37 - 16);
		if ((v13 & 0x30000000) == 0)
			_InterlockedIncrement((volatile signed __int32*)(v37 - 16));
		*(_QWORD*)(a1 + 152) = sub_1401F5A80(v13, &v44);
		for (i = *(_QWORD*)(a1 - 152); i; i = *(_QWORD*)(i + 24))
		{
			if (_RTDynamicCast(
				i,
				0i64,
				&juce::Component `RTTI Type Descriptor',
				& CreateLayoutComponent `RTTI Type Descriptor',
				0))
			{
				break;
			}
		}
		v15 = *(_QWORD*)(a1 - 152);
		if (v15)
		{
			while (1)
			{
				v16 = _RTDynamicCast(
					v15,
					0i64,
					&juce::Component `RTTI Type Descriptor',
					& CreateLayoutComponent `RTTI Type Descriptor',
					0);
				if (v16)
					break;
				v15 = *(_QWORD*)(v15 + 24);
				if (!v15)
					goto LABEL_17;
			}
		}
		else
		{
		LABEL_17:
			v16 = 0i64;
		}
		v17 = *(_BYTE*)(v16 + 224);
		v18 = *(_QWORD*)(a1 + 152);
		if (!v18)
			goto LABEL_49;
		v39 = *(_QWORD*)(v18 + 92);
		if (v12)
		{
			v40 = *(_QWORD*)(v12 + 92);
			if ((_DWORD)v40 != -10 && (_DWORD)v40 != -1)
			{
				if (v17 == 1)
				{
					if (!*(_BYTE*)(v12 + 108) && (unsigned __int8)sub_14022B680(v18, v12, v18))
					{
						sub_1401F5BB0(v19, v12, *(_QWORD*)(a1 + 152));
						*((_BYTE*)ArgList + 2114) = 1;
						goto LABEL_55;
					}
				}
				else
				{
					*(_QWORD*)(a1 + 448) = v40;
					sub_14020C700(v12, 7, v39, HIDWORD(v39), 0, 0);
					sub_14020C700(*(_QWORD*)(a1 + 152), 7, *(_DWORD*)(a1 + 448), *(_DWORD*)(a1 + 452), 0, 0);
				}
				goto LABEL_37;
			}
			sub_14020C700(v18, 7, v40, HIDWORD(v40), *(_DWORD*)(v12 + 100), 0);
		}
		else
		{
			v20 = *(_DWORD*)(a1 + 452);
			v21 = *(_DWORD*)(a1 + 448);
			if (!v17)
			{
				sub_14020C700(v18, 7, v21, v20, 0, 0);
				if (!(unsigned __int8)sub_14022D2F0(*((_QWORD*)ArgList + 66))
					&& !(unsigned __int8)sub_14022D460(*((_QWORD*)ArgList + 66)))
				{
					LOBYTE(v24) = 1;
					sub_140218C10(
						*(_QWORD*)(*(_QWORD*)(*((_QWORD*)ArgList + 66) + 8i64)
							+ 8i64 * *(int*)(*((_QWORD*)ArgList + 66) + 268i64)
							- 8),
						85i64,
						v24);
				}
				goto LABEL_37;
			}
			sub_14020C700(v18, 7, v21, v20, 0, v17);
			v22 = *((_QWORD*)ArgList + 66);
			if (*(_DWORD*)(v22 + 264))
				v23 = sub_140218690(*(_QWORD*)(*(_QWORD*)(v22 + 8) + 8i64 * *(int*)(v22 + 268) - 8));
			else
				v23 = 0;
			sub_14022BDE0(v22, v23);
		}
		sub_14022E9E0(*((_QWORD*)ArgList + 66));
	LABEL_37:
		v25 = *(_QWORD*)(a1 + 152);
		if (*(int*)(a1 + 448) < 0)
		{
			sub_140048D00(&v46, "notplaced");
			v26 = &v46;
		}
		else
		{
			sub_140048D00(&v45, "layout");
			v26 = &v45;
		}
		sub_14020F010(v25, v26);
		Sleep(0xC8u);
		LOBYTE(v35) = 0;
		LOBYTE(v34) = 0;
		(*(void(__fastcall**)(_QWORD, _QWORD, _QWORD, _QWORD, int, int, char, _BYTE, _BYTE, _BYTE, _DWORD, _DWORD))(***(_QWORD***)(a1 + 152) + 144i64))(
			**(_QWORD**)(a1 + 152),
			0i64,
			0i64,
			0i64,
			v34,
			v35,
			1,
			0,
			0,
			0,
			0,
			0);
		sub_14020D720(*(_QWORD*)(a1 + 152));
		v38 = *(_BYTE**)(a1 - 168);
		v27 = (volatile signed __int32*)(v38 - 16);
		if ((*((_DWORD*)v38 - 4) & 0x30000000) == 0)
			_InterlockedIncrement(v27);
		if ((unsigned int)String::isNotEmpty(v38, &unk_14046D9E2))
		{
			v28 = *(_QWORD*)(a1 + 152);
			v29 = *(_QWORD*)(a1 - 168);
			v36 = v29;
			if ((*(_DWORD*)(v29 - 16) & 0x30000000) == 0)
				_InterlockedIncrement((volatile signed __int32*)(v29 - 16));
			sub_14020EF10(v28, &v36);
		}
		sub_140165D20(a1 - 176, *(_QWORD*)(a1 + 152));
		if ((*v27 & 0x30000000) == 0 && _InterlockedDecrement(v27) == -1)
			j_j_free((void*)v27);
	LABEL_49:
		v30 = *(_QWORD*)(a1 - 152);
		if (v30)
		{
			while (1)
			{
				v31 = (_QWORD*)_RTDynamicCast(
					v30,
					0i64,
					&juce::Component `RTTI Type Descriptor',
					& CreateLayoutComponent `RTTI Type Descriptor',
					0);
				if (v31)
					break;
				v30 = *(_QWORD*)(v30 + 24);
				if (!v30)
					goto LABEL_54;
			}
			sub_14012B240(v31);
		}
	LABEL_54:
		v32 = *(_DWORD*)(a1 - 176 + 44);
		v33 = *(_DWORD*)(a1 - 176 + 40);
		v41.m128i_i64[0] = 0i64;
		v41.m128i_i64[1] = __PAIR64__(v32, v33);
		v42[0] = v41;
		Component::internalRepaintUnchecked(a1 - 176, v42, 1);
	LABEL_55:
		v11 = (char*)(v37 - 16);
		if ((*(_DWORD*)(v37 - 16) & 0x30000000) != 0)
			return;
		goto LABEL_56;
	}
	(*(void(__fastcall**)(__int64*, char**, __int64**))(v9 + 32))(v7, &String, v8);
	v10 = atoi(String);
	sub_140165900(a1 - 176, v10);
	v11 = String - 16;
	if ((*((_DWORD*)String - 4) & 0x30000000) != 0)
		return;
LABEL_56:
	if (_InterlockedDecrement((volatile signed __int32*)v11) == -1)
		j_j_free(v11);*/
}
void HexTestComponent::mouseEnter(const MouseEvent&) 
{
	/*__int64 i; // rbx

	for (i = *(_QWORD*)(a1 + 24); i; i = *(_QWORD*)(i + 24))
	{
		if (_RTDynamicCast(
			i,
			0i64,
			&juce::Component `RTTI Type Descriptor',
			& MonitorControllerComponent `RTTI Type Descriptor',
			0))
		{
			break;
		}
	}*/

}
void HexTestComponent::mouseExit(const MouseEvent&) 
{
	/*__int64 v2; // rbx
	__m128i v5; // [rsp+30h] [rbp-18h] BYREF

	v2 = *(_QWORD*)(a1 + 24);
	if (v2)
	{
		while (!_RTDynamicCast(
			v2,
			0i64,
			&juce::Component `RTTI Type Descriptor',
			& MonitorControllerComponent `RTTI Type Descriptor',
			0))
		{
			v2 = *(_QWORD*)(v2 + 24);
			if (!v2)
				return;
		}
		if (!Component::reallyContains(a1, *(void**)(a2 + 8), 1))
		{
			v5.m128i_i64[1] = *(_QWORD*)(a1 + 40);
			v5.m128i_i64[0] = 0i64;
			Component::internalRepaintUnchecked(a1, &v5, 1);
		}
	}*/

}
void HexTestComponent::mouseDown(const MouseEvent&) 
{
	/*__int64 v4; // rcx
	__int64 v5; // rbx
	__int64 v6; // r14
	__int64 v7; // rcx
	_QWORD* v8; // r15
	char* v9; // rbx
	__int64 v10; // rax
	volatile signed __int32* v11; // r14
	volatile signed __int32* v12; // rdi
	void* v13; // rcx
	void* v14; // rcx
	__int64* v15; // rbx
	__int64 v16; // rdx
	_DWORD* v17; // rcx
	__int64* v18; // rbx
	__int64 v19; // rdx
	_DWORD* v20; // rcx
	int v21; // ebx
	int v22; // eax
	int v23; // er8
	void* v24; // rcx
	char* v25; // rcx
	int v26; // eax
	__int64 v27; // rcx
	char v28; // bl
	void* v29; // rcx
	void* v30; // rcx
	void* v31; // rcx
	void* v32; // rcx
	bool v33; // r15
	__int64 v34; // rbx
	__int64 v35; // rsi
	_BYTE* v36; // rcx
	volatile signed __int32* v37; // rbx
	__int64 v38; // r8
	int v39; // er14
	__int64 v40; // rdx
	__int64 v41; // rax
	__int64 v42; // rbx
	__int64 v43; // rbx
	_BYTE* v44; // rbx
	__int64 v45; // rax
	_BYTE* v46; // rcx
	char* v47; // rbx
	__int64 v48; // r8
	__int64 v49; // r15
	__int64 v50; // rax
	char* v51; // rbx
	volatile signed __int32 v52; // eax
	__int64 v53; // r15
	__int64 v54; // rax
	char* v55; // rbx
	void* v56; // rcx
	void* v57; // rcx
	void* v58; // rcx
	void* v59; // rcx
	void* v60; // rcx
	__int64 v61; // rax
	void* v62; // [rsp+38h] [rbp-C8h]
	void* v63; // [rsp+38h] [rbp-C8h]
	void* v64; // [rsp+38h] [rbp-C8h]
	void* v65; // [rsp+38h] [rbp-C8h]
	void* v66; // [rsp+38h] [rbp-C8h]
	void* v67; // [rsp+38h] [rbp-C8h]
	void* v68; // [rsp+38h] [rbp-C8h]
	void* v69; // [rsp+38h] [rbp-C8h]
	void* v70; // [rsp+38h] [rbp-C8h]
	char* v71; // [rsp+40h] [rbp-C0h] BYREF
	__int64 v72; // [rsp+48h] [rbp-B8h] BYREF
	__int64 v73; // [rsp+50h] [rbp-B0h] BYREF
	__int64 v74; // [rsp+58h] [rbp-A8h] BYREF
	__int64 v75; // [rsp+60h] [rbp-A0h] BYREF
	__int64 v76; // [rsp+68h] [rbp-98h] BYREF
	__int64 v77; // [rsp+70h] [rbp-90h] BYREF
	__int64 v78; // [rsp+78h] [rbp-88h] BYREF
	__int64 v79; // [rsp+80h] [rbp-80h] BYREF
	__int64 v80; // [rsp+88h] [rbp-78h] BYREF
	__int64 v81; // [rsp+90h] [rbp-70h] BYREF
	__int64 v82; // [rsp+98h] [rbp-68h] BYREF
	__int64 v83; // [rsp+A0h] [rbp-60h] BYREF
	__int64 v84; // [rsp+A8h] [rbp-58h] BYREF
	__int64 v85; // [rsp+B0h] [rbp-50h] BYREF
	__int64 v86; // [rsp+B8h] [rbp-48h] BYREF
	__int64 v87; // [rsp+C0h] [rbp-40h] BYREF
	__int64 v88; // [rsp+C8h] [rbp-38h] BYREF
	__int64 v89; // [rsp+D0h] [rbp-30h] BYREF
	char v90[8]; // [rsp+D8h] [rbp-28h] BYREF
	char v91[8]; // [rsp+E0h] [rbp-20h] BYREF
	char v92[8]; // [rsp+E8h] [rbp-18h] BYREF
	_BYTE* v93; // [rsp+F0h] [rbp-10h] BYREF
	char* v94; // [rsp+F8h] [rbp-8h]
	char* v95; // [rsp+100h] [rbp+0h]
	char* v96; // [rsp+108h] [rbp+8h]
	char v97; // [rsp+12Fh] [rbp+2Fh] BYREF
	__int64 v98; // [rsp+130h] [rbp+30h] BYREF

	if (!*(_QWORD*)(a1 + 328))
	{
		v4 = *((_QWORD*)ArgList + 66);
		goto LABEL_3;
	}
	v5 = *(_QWORD*)(a1 + 24);
	v6 = 0i64;
	if (v5)
	{
		while (!_RTDynamicCast(
			v5,
			0i64,
			&juce::Component `RTTI Type Descriptor',
			& CalibrateComponent `RTTI Type Descriptor',
			0))
		{
			v5 = *(_QWORD*)(v5 + 24);
			if (!v5)
				goto LABEL_7;
		}
		v8 = *(_QWORD**)(a1 + 328);
		sub_14020F280(v8, &v71);
		v9 = v71;
		if ((unsigned int)compareIgnoreCase(v71, "AesEbuDev") && (unsigned int)compareIgnoreCase(v9, "AesEbuDevGen2"))
		{
			v96 = v92;
			v10 = sub_1402FCD90(&v98, v8[15]);
			sub_140040360(&v79, v10, &v97 - v10);
			v74 = v8[27];
			v11 = (volatile signed __int32*)(v74 - 16);
			if ((*(_DWORD*)(v74 - 16) & 0x30000000) == 0)
				_InterlockedIncrement(v11);
			v73 = v8[17];
			v12 = (volatile signed __int32*)(v73 - 16);
			if ((*(_DWORD*)(v73 - 16) & 0x30000000) == 0)
				_InterlockedIncrement(v12);
			sub_140048D00(&v75, "Acoustic Editor");
			sub_14031AF20(&v72, &v75);
			v13 = (void*)(v75 - 16);
			if ((*(_DWORD*)(v75 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v13) == -1)
				j_j_free(v13);
			ImageCache::getFromHashCode(&v72, " - ", (int)"");
			v76 = v72;
			if ((*(_DWORD*)(v72 - 16) & 0x30000000) == 0)
				_InterlockedIncrement((volatile signed __int32*)(v72 - 16));
			v14 = (void*)(v72 - 16);
			if ((*(_DWORD*)(v72 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v14) == -1)
				j_j_free(v14);
			v15 = (__int64*)sub_14031B550(v90, &v76, &v73);
			ImageCache::getFromHashCode(v15, " - ", (int)"");
			v16 = *v15;
			v77 = v16;
			if ((*(_DWORD*)(v16 - 16) & 0x30000000) == 0)
				_InterlockedIncrement((volatile signed __int32*)(v16 - 16));
			v17 = (_DWORD*)(*v15 - 16);
			if ((*v17 & 0x30000000) == 0 && _InterlockedDecrement(v17) == -1)
				j_j_free(v17);
			v18 = (__int64*)sub_14031B550(v91, &v77, &v74);
			ImageCache::getFromHashCode(v18, "/", (int)"");
			v19 = *v18;
			v78 = v19;
			if ((*(_DWORD*)(v19 - 16) & 0x30000000) == 0)
				_InterlockedIncrement((volatile signed __int32*)(v19 - 16));
			v20 = (_DWORD*)(*v18 - 16);
			if ((*v20 & 0x30000000) == 0 && _InterlockedDecrement(v20) == -1)
				j_j_free(v20);
			v21 = sub_14031B550(v92, &v78, &v79);
			v62 = operator new(0x198ui64);
			v22 = sub_1400D7810(v62, v8);
			sub_14026A0D0(v22, v21, v23, 900, 600);
			if ((*v12 & 0x30000000) == 0 && _InterlockedDecrement(v12) == -1)
				j_j_free((void*)v12);
			if ((*v11 & 0x30000000) == 0 && _InterlockedDecrement(v11) == -1)
				j_j_free((void*)v11);
			v24 = (void*)(v79 - 16);
			if ((*(_DWORD*)(v79 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v24) == -1)
				j_j_free(v24);
			v25 = v71 - 16;
			v26 = *((_DWORD*)v71 - 4);
			goto LABEL_191;
		}
		v25 = v9 - 16;
		if ((*((_DWORD*)v9 - 4) & 0x30000000) == 0)
		{
		LABEL_192:
			if (_InterlockedDecrement((volatile signed __int32*)v25) == -1)
				j_j_free(v25);
		}
		return;
	}
LABEL_7:
	if (sub_1400057E0(a1))
	{
		sub_1401F5370(v7, *(_QWORD*)(a1 + 328));
		return;
	}
	if (sub_140005830(a1))
	{
		if (!*(_DWORD*)(sub_140005830(a1) + 808))
		{
			v28 = sub_1401F4C70(v27, *(_QWORD*)(a1 + 328));
			sub_140048D00(&v80, "Please select a valid monitor/W371 pair to calibrate the woofer system.");
			sub_14031AF20(&v84, &v80);
			v29 = (void*)(v80 - 16);
			if ((*(_DWORD*)(v80 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v29) == -1)
				j_j_free(v29);
			if (!v28)
			{
				sub_140048D00(&v83, "OK");
				sub_140048D00(&v81, "Invalid loudspeaker type selected for the calibration");
				sub_14031AF20(&v82, &v81);
				v30 = (void*)(v81 - 16);
				if ((*(_DWORD*)(v81 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v30) == -1)
					j_j_free(v30);
				sub_14040EFD0(3, (unsigned int)&v82, (unsigned int)&v84, (unsigned int)&v83, 0i64);
				v31 = (void*)(v82 - 16);
				if ((*(_DWORD*)(v82 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v31) == -1)
					j_j_free(v31);
				v32 = (void*)(v83 - 16);
				if ((*(_DWORD*)(v83 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v32) == -1)
					j_j_free(v32);
			}
			v25 = (char*)(v84 - 16);
			v26 = *(_DWORD*)(v84 - 16);
			goto LABEL_191;
		}
		goto LABEL_86;
	}
	if (!sub_140005790(a1))
	{
		v42 = *(_QWORD*)(a1 + 24);
		if (!v42)
			return;
		while (!_RTDynamicCast(
			v42,
			0i64,
			&juce::Component `RTTI Type Descriptor',
			& EditGroupComponent `RTTI Type Descriptor',
			0))
		{
			v42 = *(_QWORD*)(v42 + 24);
			if (!v42)
			{
				v43 = *(_QWORD*)(a1 + 24);
				if (!v43)
					return;
				while (!_RTDynamicCast(
					v43,
					0i64,
					&juce::Component `RTTI Type Descriptor',
					& RefCalComponent `RTTI Type Descriptor',
					0))
				{
					v43 = *(_QWORD*)(v43 + 24);
					if (!v43)
						return;
				}
				sub_14022E650(*((_QWORD*)ArgList + 66));
				sub_14020F280(*(_QWORD*)(a1 + 328), &v71);
				v55 = v71;
				if ((unsigned int)compareIgnoreCase(v71, "SubwooferGen1")
					&& (unsigned int)compareIgnoreCase(v55, "SubwooferGen2")
					&& (unsigned int)compareIgnoreCase(v55, "SESubwooferGen1")
					&& (unsigned int)compareIgnoreCase(v55, "WooferExtensionGen2"))
				{
					sub_140160EF0(a1);
				}
				else
				{
					sub_140048D00(
						&v85,
						"Please select a monitor to calibrate the standard reference level, subwoofers not allowed.");
					sub_14031AF20(&v89, &v85);
					v56 = (void*)(v85 - 16);
					if ((*(_DWORD*)(v85 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v56) == -1)
						j_j_free(v56);
					sub_140048D00(&v88, "OK");
					sub_140048D00(&v86, "Invalid loudspeaker type selected for the calibration");
					sub_14031AF20(&v87, &v86);
					v57 = (void*)(v86 - 16);
					if ((*(_DWORD*)(v86 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v57) == -1)
						j_j_free(v57);
					sub_14040EFD0(3, (unsigned int)&v87, (unsigned int)&v89, (unsigned int)&v88, 0i64);
					v58 = (void*)(v87 - 16);
					if ((*(_DWORD*)(v87 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v58) == -1)
						j_j_free(v58);
					v59 = (void*)(v88 - 16);
					if ((*(_DWORD*)(v88 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v59) == -1)
						j_j_free(v59);
					v60 = (void*)(v89 - 16);
					if ((*(_DWORD*)(v89 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v60) == -1)
						j_j_free(v60);
					v55 = v71;
				}
				v61 = sub_140005880(a1);
				if (v61)
					sub_140133CE0(v61);
				v25 = v55 - 16;
				v26 = *((_DWORD*)v55 - 4);
			LABEL_191:
				if ((v26 & 0x30000000) == 0)
					goto LABEL_192;
				return;
			}
		}
		sub_14020F280(*(_QWORD*)(a1 + 328), &v71);
		if ((dword_140EC000C & 2) == 0 && (*(_DWORD*)(a2 + 16) & 2) == 0)
		{
			sub_14020F280(*(_QWORD*)(a1 + 328), &v93);
			v44 = v93;
			if ((unsigned int)String::isNotEmpty(v93, "SubwooferGen1")
				&& (unsigned int)String::isNotEmpty(v44, "SESubwooferGen1"))
			{
				if ((unsigned int)String::isNotEmpty(v44, "SubwooferGen2"))
				{
					if ((unsigned int)String::isNotEmpty(v44, "TwowayGen1")
						&& (unsigned int)String::isNotEmpty(v44, "ThreewayGen1")
						&& (unsigned int)String::isNotEmpty(v44, "ThreewayGen1_1"))
					{
						if ((unsigned int)String::isNotEmpty(v44, "SEMonitorGen1"))
						{
							if ((unsigned int)String::isNotEmpty(v44, "TwowayGen2")
								&& (unsigned int)String::isNotEmpty(v44, "ThreewayGen2"))
							{
								if ((unsigned int)String::isNotEmpty(v44, "WooferExtensionGen2"))
								{
									if ((unsigned int)String::isNotEmpty(v44, "AesEbuDev")
										&& (unsigned int)String::isNotEmpty(v44, "AesEbuDevGen2"))
									{
										goto LABEL_117;
									}
									v67 = operator new(0x1A0ui64);
									v45 = sub_140135270(v67, *(_QWORD*)(a1 + 328), a1);
								}
								else
								{
									v66 = operator new(0x188ui64);
									v45 = sub_1401C5000(v66, *(_QWORD*)(a1 + 328), a1);
								}
							}
							else
							{
								v68 = operator new(0x170ui64);
								v45 = sub_14018DA50(v68, *(_QWORD*)(a1 + 328), a1);
							}
						}
						else
						{
							v65 = operator new(0x130ui64);
							v45 = sub_140191AC0(v65, *(_QWORD*)(a1 + 328), a1);
						}
					}
					else
					{
						v69 = operator new(0x168ui64);
						v45 = sub_14017F060(v69, *(_QWORD*)(a1 + 328), a1);
					}
				}
				else
				{
					v64 = operator new(0x1D0ui64);
					v45 = sub_1401AD630(v64, *(_QWORD*)(a1 + 328), a1);
				}
			}
			else
			{
				v70 = operator new(0x1C8ui64);
				v45 = sub_1401A6850(v70, *(_QWORD*)(a1 + 328), a1);
			}
			sub_14015F900(a1, v45);
		LABEL_117:
			v46 = v44 - 16;
			if ((*((_DWORD*)v44 - 4) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v46) == -1)
				j_j_free(v46);
			v47 = v71;
			goto LABEL_166;
		}
		v47 = v71;
		if ((unsigned int)String::isNotEmpty(v71, "SubwooferGen1")
			&& (unsigned int)String::isNotEmpty(v47, "SESubwooferGen1")
			&& (unsigned int)String::isNotEmpty(v47, "SubwooferGen2"))
		{
			if ((unsigned int)String::isNotEmpty(v47, "TwowayGen1")
				&& (unsigned int)String::isNotEmpty(v47, "ThreewayGen1")
				&& (unsigned int)String::isNotEmpty(v47, "ThreewayGen1_1")
				&& (unsigned int)String::isNotEmpty(v47, "SEMonitorGen1")
				&& (unsigned int)String::isNotEmpty(v47, "TwowayGen2")
				&& (unsigned int)String::isNotEmpty(v47, "ThreewayGen2")
				&& (unsigned int)String::isNotEmpty(v47, "WooferExtensionGen2"))
			{
				if (!(unsigned int)String::isNotEmpty(v47, "AesEbuDev")
					|| !(unsigned int)String::isNotEmpty(v47, "AesEbuDevGen2"))
				{
					sub_14022C310(*((_QWORD*)ArgList + 66), *(_QWORD*)(a1 + 328));
					sub_14022C7A0(*((_QWORD*)ArgList + 66));
				}
			}
			else
			{
				sub_14022C310(*((_QWORD*)ArgList + 66), *(_QWORD*)(a1 + 328));
			}
			goto LABEL_165;
		}
		if (!(unsigned __int8)sub_14022D2F0(*((_QWORD*)ArgList + 66))
			&& !(unsigned __int8)sub_14022D460(*((_QWORD*)ArgList + 66)))
		{
			LOBYTE(v48) = 1;
			sub_140218C10(
				*(_QWORD*)(*(_QWORD*)(*((_QWORD*)ArgList + 66) + 8i64)
					+ 8i64 * *(int*)(*((_QWORD*)ArgList + 66) + 268i64)
					- 8),
				85i64,
				v48);
		}
		if ((unsigned int)String::isNotEmpty(v47, "SubwooferGen1")
			&& (unsigned int)String::isNotEmpty(v47, "SESubwooferGen1"))
		{
			if ((unsigned int)String::isNotEmpty(v47, "SubwooferGen2"))
			{
			LABEL_165:
				Component::repaint(a1);
			LABEL_166:
				v25 = v47 - 16;
				v26 = *((_DWORD*)v47 - 4);
				goto LABEL_191;
			}
			sub_14022C310(*((_QWORD*)ArgList + 66), *(_QWORD*)(a1 + 328));
			v49 = qword_140EBFF78;
			if (*(_DWORD*)(qword_140EBFF78 + 76) <= 1u)
				v50 = 0i64;
			else
				v50 = *(_QWORD*)(*(_QWORD*)(qword_140EBFF78 + 64) + 8i64);
			v94 = *(char**)(v50 + 16);
			v51 = v94 - 16;
			if ((*((_DWORD*)v94 - 4) & 0x30000000) == 0)
				_InterlockedIncrement((volatile signed __int32*)v51);
			if (!(unsigned int)compareIgnoreCase(v94, "EditGroup"))
			{
				if (*(_DWORD*)(v49 + 76) > 1u)
					v6 = *(_QWORD*)(*(_QWORD*)(v49 + 64) + 8i64);
				sub_1401429A0(v6);
			}
			v52 = *(_DWORD*)v51;
		}
		else
		{
			sub_14022C310(*((_QWORD*)ArgList + 66), *(_QWORD*)(a1 + 328));
			v53 = qword_140EBFF78;
			if (*(_DWORD*)(qword_140EBFF78 + 76) <= 1u)
				v54 = 0i64;
			else
				v54 = *(_QWORD*)(*(_QWORD*)(qword_140EBFF78 + 64) + 8i64);
			v95 = *(char**)(v54 + 16);
			v51 = v95 - 16;
			if ((*((_DWORD*)v95 - 4) & 0x30000000) == 0)
				_InterlockedIncrement((volatile signed __int32*)v51);
			if (!(unsigned int)compareIgnoreCase(v95, "EditGroup"))
			{
				if (*(_DWORD*)(v53 + 76) > 1u)
					v6 = *(_QWORD*)(*(_QWORD*)(v53 + 64) + 8i64);
				sub_1401429A0(v6);
			}
			v52 = *(_DWORD*)v51;
		}
		if ((v52 & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v51) == -1)
			j_j_free(v51);
		v47 = v71;
		goto LABEL_165;
	}
	if ((*(_DWORD*)(a2 + 16) & 0x20) != 0)
	{
		sub_140161BC0(a1);
		return;
	}
	if (!(unsigned int)compareIgnoreCase(*(char**)(a1 + 664), "select"))
	{
		*(_BYTE*)(a1 + 320) = *(_BYTE*)(a1 + 320) == 0;
		Component::repaint(a1);
		return;
	}
	if (!(unsigned int)compareIgnoreCase(*(char**)(a1 + 664), "mute"))
	{
		v33 = (dword_140EC000C & 2) != 0;
		v34 = *(_QWORD*)(a1 + 24);
		if (v34)
		{
			while (1)
			{
				v35 = _RTDynamicCast(
					v34,
					0i64,
					&juce::Component `RTTI Type Descriptor',
					& MonitorControllerComponent `RTTI Type Descriptor',
					0);
				if (v35)
					break;
				v34 = *(_QWORD*)(v34 + 24);
				if (!v34)
					goto LABEL_73;
			}
			if (byte_140EBFF44)
			{
				sub_1401F65E0(ArgList, 0i64, 0i64);
				sub_1401894C0(v35);
			}
		}
	LABEL_73:
		v36 = *(_BYTE**)(*(_QWORD*)(a1 + 328) + 184i64);
		v37 = (volatile signed __int32*)(v36 - 16);
		if ((*((_DWORD*)v36 - 4) & 0x30000000) == 0)
			_InterlockedIncrement(v37);
		v39 = String::isNotEmpty(v36, "muted");
		if ((*v37 & 0x30000000) == 0 && _InterlockedDecrement(v37) == -1)
			j_j_free((void*)v37);
		v4 = *((_QWORD*)ArgList + 66);
		if (v39)
		{
			LOBYTE(v38) = 1;
			sub_14022BF30(v4, *(_QWORD*)(a1 + 328), v38, !v33);
			return;
		}
	LABEL_3:
		sub_14022E650(v4);
		return;
	}
	if (!(unsigned int)compareIgnoreCase(*(char**)(a1 + 664), "solo")
		|| !(unsigned int)compareIgnoreCase(*(char**)(a1 + 664), "solo-x"))
	{
		v40 = (unsigned int)dword_140EC000C >> 1;
		LOBYTE(v40) = (dword_140EC000C & 2) == 0;
		sub_140160DC0(a1, v40);
		return;
	}
	if (!(unsigned int)compareIgnoreCase(*(char**)(a1 + 664), "info"))
	{
		v63 = operator new(0x250ui64);
		v41 = sub_14013B360(v63, *(_QWORD*)(a1 + 328), a1);
		sub_14015F900(a1, v41);
		return;
	}
	if (!(unsigned int)compareIgnoreCase(*(char**)(a1 + 664), "edit"))
		LABEL_86:
	sub_14015F380(a1);*/

}
void HexTestComponent::mouseDrag(const MouseEvent&)
{
	/*__int64 v2; // rbx
	__int64 v3; // rdi
	__int64 v4; // r10
	unsigned int v5; // ecx
	unsigned int v6; // eax
	__int64 v7; // rax
	int v8; // er9
	_DWORD* v9; // rcx
	void(__fastcall * **v10)(_QWORD, __int64); // rcx
	__int64* v11; // rcx
	__int64 v12; // rax
	__int64 v13; // rdx
	__int64 v14; // rbx
	_BYTE* v15; // rbx
	int v16; // xmm1_4
	_BYTE* v17; // rcx
	__int64 v18; // [rsp+0h] [rbp-E8h] BYREF
	int v19; // [rsp+20h] [rbp-C8h]
	__int64 v20; // [rsp+28h] [rbp-C0h]
	__int64 v21; // [rsp+30h] [rbp-B8h]
	int v22; // [rsp+38h] [rbp-B0h]
	int v23; // [rsp+40h] [rbp-A8h]
	int v24; // [rsp+48h] [rbp-A0h]
	_DWORD* v25; // [rsp+60h] [rbp-88h]
	__int64 v26; // [rsp+68h] [rbp-80h] BYREF
	__int64 v27; // [rsp+70h] [rbp-78h] BYREF
	__int128 v28; // [rsp+80h] [rbp-68h]
	char v29[8]; // [rsp+98h] [rbp-50h] BYREF
	_BYTE* v30; // [rsp+A0h] [rbp-48h] BYREF
	__int128 v31; // [rsp+B0h] [rbp-38h] BYREF
	__int64(__fastcall * **v32)(); // [rsp+C0h] [rbp-28h] BYREF
	__int64 v33[3]; // [rsp+C8h] [rbp-20h] BYREF

	if (a1)
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
		if (!v3 || !a1[41] || *(int*)(v3 + 20) > 0)
			goto LABEL_33;
		v4 = a1[76];
		v5 = *(_DWORD*)(v4 + 44);
		v6 = *(_DWORD*)(v4 + 40);
		*(_QWORD*)&v28 = 0i64;
		*((_QWORD*)&v28 + 1) = __PAIR64__(v5, v6);
		v31 = v28;
		sub_14040C8B0(v4, (unsigned int)&v27, (unsigned int)&v31, 1, 1065353216);
		v8 = sub_140380530(v7, v29, 2i64);
		v9 = *(_DWORD**)(a1[41] + 216i64);
		v25 = v9;
		if ((*(v9 - 4) & 0x30000000) == 0)
			_InterlockedIncrement(v9 - 4);
		v32 = off_140EB1BD0;
		v33[0] = (__int64)v25;
		v25 = dword_140DDCDD0;
		sub_14040BE30(v3, (unsigned int)&v32, (_DWORD)a1, v8, v19, 0i64, 0i64);
		((void(__fastcall*)(__int64(__fastcall***)(), __int64*))(*v32)[22])(v32, v33);
		v10 = (void(__fastcall***)(_QWORD, __int64))v27;
		if (v27 && _InterlockedExchangeAdd((volatile signed __int32*)(v27 + 8), 0xFFFFFFFF) == 1)
			(**v10)(v10, 1i64);
		sub_1401FA670(ArgList, -130.0);
		v11 = *(__int64**)a1[41];
		v12 = *v11;
		LOBYTE(v24) = 0;
		LOBYTE(v23) = 0;
		LOBYTE(v22) = 0;
		LOBYTE(v21) = 0;
		LOBYTE(v20) = 0;
		LOBYTE(v19) = 0;
		LOBYTE(v13) = 1;
		(*(void(__fastcall**)(__int64*, __int64, _QWORD, _QWORD, int, _DWORD, _DWORD, int, int, int, _DWORD, _DWORD, _DWORD*))(v12 + 144))(
			v11,
			v13,
			0i64,
			0i64,
			v19,
			v20,
			v21,
			v22,
			v23,
			v24,
			0,
			0,
			v25);
		v14 = a1[41];
		sub_140048D00(&v26, "layout_flashing");
		sub_14020F010(v14, &v26);
		sub_14020D720(a1[41]);
		sub_14020F280(a1[41], &v30);
		v15 = v30;
		if ((unsigned int)String::isNotEmpty(v30, "SubwooferGen1")
			&& (unsigned int)String::isNotEmpty(v15, "SESubwooferGen1"))
		{
			if ((unsigned int)String::isNotEmpty(v15, "SubwooferGen2"))
			{
				if ((unsigned int)String::isNotEmpty(v15, "TwowayGen1")
					&& (unsigned int)String::isNotEmpty(v15, "ThreewayGen1")
					&& (unsigned int)String::isNotEmpty(v15, "ThreewayGen1_1"))
				{
					if ((unsigned int)String::isNotEmpty(v15, "SEMonitorGen1"))
					{
						if ((unsigned int)String::isNotEmpty(v15, "TwowayGen2")
							&& (unsigned int)String::isNotEmpty(v15, "ThreewayGen2")
							&& (unsigned int)String::isNotEmpty(v15, "WooferExtensionGen2"))
						{
						LABEL_30:
							v17 = v15 - 16;
							if ((*((_DWORD*)v15 - 4) & 0x30000000) == 0
								&& _InterlockedDecrement((volatile signed __int32*)v17) == -1)
							{
								j_j_free(v17);
							}
						LABEL_33:
							sub_1400D43D0((unsigned __int64)&v18 ^ v33[1]);
							return;
						}
						v16 = -1047527424;
					}
					else
					{
						v16 = -1041235968;
					}
				}
				else
				{
					v16 = -1035468800;
				}
			}
			else
			{
				v16 = -1054867456;
			}
		}
		else
		{
			v16 = -1046478848;
		}
		sub_1401FA670(ArgList, *(float*)&v16);
		goto LABEL_30;
	}*/

}
void HexTestComponent::parentHierarchyChanged()
{
	/*__int64 v1; // rbx
	__int64 v3; // rax
	__int64 v4; // rbx
	_QWORD* v5; // rbx
	__int64 v6; // rcx
	__int64 v7; // rbx
	__int64 v8; // rbx
	__int64 v9; // rbx

	v1 = *(_QWORD*)(a1 + 24);
	if (v1)
	{
		while (!_RTDynamicCast(
			v1,
			0i64,
			&juce::Component `RTTI Type Descriptor',
			& MonitorControllerComponent `RTTI Type Descriptor',
			0))
		{
			v1 = *(_QWORD*)(v1 + 24);
			if (!v1)
				goto LABEL_4;
		}
		v5 = qword_140EBFF98;
		v6 = *((_QWORD*)qword_140EBFF98 + 7);
		if (!v6)
		{
			sub_14031E290(qword_140EBFF98);
			v6 = v5[7];
		}
		LOBYTE(v3) = sub_1403161B0(v6, "ShowLevelMeter", 0i64);
	}
	else
	{
	LABEL_4:
		LOBYTE(v3) = 0;
	}
	*(_BYTE*)(a1 + 304) = v3;
	v4 = *(_QWORD*)(a1 + 24);
	if (v4)
	{
		while (1)
		{
			v3 = _RTDynamicCast(
				v4,
				0i64,
				&juce::Component `RTTI Type Descriptor',
				& AutoPhaseComponent `RTTI Type Descriptor',
				0);
			if (v3)
				break;
			v4 = *(_QWORD*)(v4 + 24);
			if (!v4)
				goto LABEL_13;
		}
		*(_BYTE*)(a1 + 704) = 1;
	}
LABEL_13:
	v7 = *(_QWORD*)(a1 + 24);
	if (v7)
	{
		while (1)
		{
			v3 = _RTDynamicCast(v7, 0i64, &juce::Component `RTTI Type Descriptor', &WeCalComponent `RTTI Type Descriptor', 0);
			if (v3)
				break;
			v7 = *(_QWORD*)(v7 + 24);
			if (!v7)
				goto LABEL_18;
		}
		*(_BYTE*)(a1 + 704) = 1;
	}
LABEL_18:
	v8 = *(_QWORD*)(a1 + 24);
	if (v8)
	{
		while (1)
		{
			v3 = _RTDynamicCast(
				v8,
				0i64,
				&juce::Component `RTTI Type Descriptor',
				& StoreSettingsComponent `RTTI Type Descriptor',
				0);
			if (v3)
				break;
			v8 = *(_QWORD*)(v8 + 24);
			if (!v8)
				goto LABEL_23;
		}
		*(_BYTE*)(a1 + 704) = 1;
	}
LABEL_23:
	v9 = *(_QWORD*)(a1 + 24);
	if (v9)
	{
		while (1)
		{
			v3 = _RTDynamicCast(
				v9,
				0i64,
				&juce::Component `RTTI Type Descriptor',
				& CreateLayoutComponent `RTTI Type Descriptor',
				0);
			if (v3)
				break;
			v9 = *(_QWORD*)(v9 + 24);
			if (!v9)
				return v3;
		}
		*(_BYTE*)(a1 + 704) = 0;
	}
	return v3;*/
}
bool HexTestComponent::hitTest(int x, int y)
{
	//return Path::contains(a1 + 336, (float)a2, (float)a3, 1.0);
	return true;
}
void HexTestComponent::lookAndFeelChanged() 
{
	/*_int64 v1; // rbx
	__int64 v2; // rax
	__int64 v3; // rdx
	__int64 v4; // rcx
	__int64 v5; // rax
	void* v6; // rax
	_DWORD* result; // rax
	int v8; // [rsp+30h] [rbp+8h] BYREF

	v1 = a1;
	v2 = a1;
	if (a1)
	{
		while (1)
		{
			v3 = *(_QWORD*)(v2 + 80);
			if (v3)
			{
				v4 = *(_QWORD*)(v3 + 16);
				if (v4)
					break;
			}
			v2 = *(_QWORD*)(v2 + 24);
			if (!v2)
				goto LABEL_5;
		}
	}
	else
	{
	LABEL_5:
		v5 = qword_140EC0000;
		if (!qword_140EC0000)
		{
			v6 = operator new(0x130ui64);
			v5 = Desktop::Desktop((__int64)v6);
			qword_140EC0000 = v5;
		}
		v4 = Desktop::getDefaultLookAndFeel(v5);
	}
	result = LookAndFeel::findColour(v4, &v8, 254);
	*(_DWORD*)(v1 + 705) = *result;
	return result;*/

}
void HexTestComponent::paint(Graphics& g)
{
	/*__int64 v4; // rcx
	int v5; // er13
	int v6; // xmm7_4
	int v7; // edi
	__m128 v8; // xmm8
	float v9; // xmm6_4
	__int64 v10; // rcx
	__int64 v11; // rcx
	void* v12; // rax
	__int64 v13; // rcx
	__int64 v14; // rcx
	__int64 v15; // rcx
	signed int v16; // ebx
	__int64 v17; // rcx
	__int64 v18; // rcx
	float v19; // xmm2_4
	__int64 v20; // rcx
	float v21; // xmm1_4
	float v22; // xmm6_4
	float v23; // xmm7_4
	void* v24; // rax
	__int64 v25; // rcx
	__int64 v26; // rcx
	__int64 v27; // rcx
	signed int v28; // ebx
	__int64 v29; // rcx
	__int64 v30; // rcx
	__int64 v31; // rcx
	float v32; // xmm6_4
	float v33; // xmm7_4
	void* v34; // rax
	__int64 v35; // rcx
	__int64 v36; // rcx
	__int64 v37; // rcx
	signed int v38; // ebx
	__int64 v39; // rcx
	__int64 v40; // rcx
	__int64 v41; // rcx
	float v42; // xmm6_4
	float v43; // xmm7_4
	void* v44; // rax
	__int64 v45; // rcx
	__int64 v46; // rcx
	__int64 v47; // rcx
	signed int v48; // ebx
	__int64 v49; // rcx
	__int64 v50; // rcx
	__int64 v51; // rcx
	float v52; // xmm6_4
	float v53; // xmm7_4
	int v54; // edx
	void* v55; // rax
	__int64 v56; // rcx
	__int64 v57; // rcx
	__int64 v58; // rcx
	int* v59; // rax
	__int64 v60; // rcx
	__int64 v61; // rax
	int* v62; // rax
	void(__fastcall * v63)(__int64, __int64*); // rdi
	void* v64; // rcx
	volatile signed __int32* v65; // rcx
	int v66; // eax
	void(__fastcall * v67)(__int64, __int64*); // rdi
	void* v68; // rcx
	volatile signed __int32* v69; // rdi
	_BYTE* v70; // rbx
	__int64 v71; // rax
	_DWORD* v72; // rax
	int* v73; // rax
	void(__fastcall * v74)(__int64, __int64*); // r13
	void* v75; // rcx
	_DWORD* v76; // rcx
	int v77; // eax
	__int64 v78; // rax
	_DWORD* v79; // rax
	int* v80; // rax
	void(__fastcall * v81)(__int64, __int64*); // r13
	void* v82; // rcx
	int v83; // eax
	__int64 v84; // rcx
	void(__fastcall * v85)(__int64, __int64*); // r13
	void* v86; // rcx
	void* v87; // rcx
	int v88; // eax
	void(__fastcall * v89)(__int64, __int64*); // r13
	void* v90; // rcx
	void(__fastcall * v91)(__int64, __int64*); // rdi
	void* v92; // rcx
	__int64 v93; // rax
	int* v94; // rax
	unsigned int v95; // ecx
	unsigned int v96; // eax
	void(__fastcall * v97)(__int64, __int64*); // rbx
	void* v98; // rcx
	void* v99; // rcx
	void* v100; // [rsp+38h] [rbp-D0h] BYREF
	__int64 v101; // [rsp+40h] [rbp-C8h]
	void* Block[2]; // [rsp+48h] [rbp-C0h]
	__int64 v103; // [rsp+58h] [rbp-B0h]
	__int64 v104; // [rsp+60h] [rbp-A8h] BYREF
	__int64 v105; // [rsp+68h] [rbp-A0h]
	__int64 v106; // [rsp+70h] [rbp-98h] BYREF
	__int64 v107; // [rsp+78h] [rbp-90h] BYREF
	__int64 v108; // [rsp+80h] [rbp-88h] BYREF
	_DWORD* v109; // [rsp+88h] [rbp-80h] BYREF
	__int64 v110; // [rsp+90h] [rbp-78h] BYREF
	__int64 v111; // [rsp+98h] [rbp-70h] BYREF
	__int64 v112; // [rsp+A0h] [rbp-68h] BYREF
	__int64 v113; // [rsp+A8h] [rbp-60h] BYREF
	__int64 v114; // [rsp+B0h] [rbp-58h] BYREF
	__int64 v115; // [rsp+B8h] [rbp-50h] BYREF
	__int64 v116; // [rsp+C0h] [rbp-48h] BYREF
	__int64 v117; // [rsp+C8h] [rbp-40h] BYREF
	__int64 v118; // [rsp+D0h] [rbp-38h] BYREF
	__int64 v119; // [rsp+D8h] [rbp-30h] BYREF
	__int64 v120; // [rsp+E0h] [rbp-28h] BYREF
	__int64 v121; // [rsp+E8h] [rbp-20h] BYREF
	__int64 v122; // [rsp+F0h] [rbp-18h] BYREF
	int v123; // [rsp+F8h] [rbp-10h] BYREF
	__int64 v124; // [rsp+FCh] [rbp-Ch]
	int v125; // [rsp+104h] [rbp-4h] BYREF
	__int64 v126; // [rsp+108h] [rbp+0h]
	int v127[4]; // [rsp+118h] [rbp+10h] BYREF
	int v128[4]; // [rsp+128h] [rbp+20h] BYREF
	__int128 v129; // [rsp+138h] [rbp+30h]
	char v130[4]; // [rsp+148h] [rbp+40h] BYREF
	int v131; // [rsp+14Ch] [rbp+44h] BYREF
	char v132[4]; // [rsp+150h] [rbp+48h] BYREF
	int v133; // [rsp+154h] [rbp+4Ch] BYREF
	int v134; // [rsp+158h] [rbp+50h] BYREF
	int v135; // [rsp+15Ch] [rbp+54h] BYREF
	_BYTE* v136; // [rsp+160h] [rbp+58h]
	__m128 v137; // [rsp+168h] [rbp+60h] BYREF
	int v138; // [rsp+178h] [rbp+70h]
	int v139; // [rsp+17Ch] [rbp+74h]
	__int128 v140; // [rsp+180h] [rbp+78h]
	__int128 v141; // [rsp+190h] [rbp+88h] BYREF
	__int64 v142; // [rsp+1A0h] [rbp+98h]
	__int128 v143; // [rsp+1A8h] [rbp+A0h] BYREF
	__int64 v144; // [rsp+1B8h] [rbp+B0h]
	__int128 v145; // [rsp+1C0h] [rbp+B8h] BYREF
	__int64 v146; // [rsp+1D0h] [rbp+C8h]
	__int128 v147; // [rsp+1D8h] [rbp+D0h] BYREF
	__int64 v148; // [rsp+1E8h] [rbp+E0h]
	__int128 v149; // [rsp+1F0h] [rbp+E8h] BYREF
	__int64 v150; // [rsp+200h] [rbp+F8h]
	__int128 v151; // [rsp+208h] [rbp+100h] BYREF
	__int64 v152; // [rsp+218h] [rbp+110h]
	__int128 v153; // [rsp+228h] [rbp+120h] BYREF
	char v154[16]; // [rsp+238h] [rbp+130h] BYREF
	char v155[80]; // [rsp+248h] [rbp+140h] BYREF
	int v156; // [rsp+2D8h] [rbp+1D0h]
	int v157; // [rsp+2D8h] [rbp+1D0h]
	int v158; // [rsp+2E8h] [rbp+1E0h]
	char v159; // [rsp+2F0h] [rbp+1E8h] BYREF

	if (*(_BYTE*)(a1 + 656))
	{
		v156 = *(_DWORD*)(a1 + 705);
		HIBYTE(v156) = 0;
		ColourGradient::ColourGradient(
			(__int64)&v100,
			*(_DWORD*)(a1 + 705),
			_mm_unpacklo_ps(
				(__m128)COERCE_UNSIGNED_INT((float)*(int*)(a1 + 688)),
				(__m128)COERCE_UNSIGNED_INT((float)*(int*)(a1 + 692))).m128_i64[0],
			v156,
			_mm_unpacklo_ps(
				(__m128)COERCE_UNSIGNED_INT((float)*(int*)(a1 + 696)),
				(__m128)COERCE_UNSIGNED_INT((float)*(int*)(a1 + 700))).m128_i64[0],
			0);
		Graphics::setFillType(a2, (__int64)&v100);
		free(Block[1]);
		v137 = (__m128)xmmword_140E19E60;
		v138 = 1065353216;
		v139 = 0;
		v104 = 1065353216i64;
		LODWORD(v105) = 0;
		Graphics::strokePath(a2, a1 + 336, (__int64)&v104, (__int64)&v137);
		return;
	}
	if (*(_BYTE*)(a1 + 305))
	{
		v157 = dword_140EB1410;
		HIBYTE(v157) = 127;
		Graphics::setColour(a2, v157);
		v141 = xmmword_140E19E60;
		v142 = 1065353216i64;
		sub_14037CE10(a2, a1 + 336, &v141);
	}
	if (*(_BYTE*)(a1 + 304))
	{
		v4 = *(_QWORD*)(a1 + 328);
		if (v4)
		{
			v100 = 0i64;
			v101 = 0i64;
			*(_OWORD*)Block = 0i64;
			LOBYTE(v103) = 1;
			v5 = sub_14020EA00(v4);
			if (v5 > -1)
				v5 = -1;
			*(float*)&v6 = (float)((float)-v5 / 80.0) * (float)*(int*)(a1 + 44);
			v7 = *(_DWORD*)(a1 + 40);
			v127[0] = 0;
			v127[1] = v6;
			*(float*)&v127[2] = (float)(v7 / 2);
			v127[3] = v6;
			v8 = *(__m128*)sub_14037CA70(a1 + 336, v154, v127);
			*(float*)v128 = (float)(v7 / 2);
			v128[1] = v6;
			*(float*)&v128[2] = (float)v7;
			v128[3] = v6;
			v140 = *(_OWORD*)sub_14037CA70(a1 + 336, v155, v128);
			LODWORD(v9) = _mm_shuffle_ps(v8, v8, 85).m128_u32[0];
			v137 = v8;
			if (v8.m128_f32[0] != 0.0 || v9 != 0.0)
			{
				HIDWORD(Block[0]) = v8.m128_i32[0];
				LODWORD(Block[0]) = v8.m128_i32[0];
				*((float*)&Block[1] + 1) = v9;
				*(float*)&Block[1] = v9;
				v100 = malloc(0x20ui64);
				v101 = 0x100000008i64;
				*(_DWORD*)v100 = 1203982592;
				v10 = SHIDWORD(v101);
				++HIDWORD(v101);
				*((_DWORD*)v100 + v10) = v8.m128_i32[0];
				v11 = SHIDWORD(v101);
				++HIDWORD(v101);
				*((float*)v100 + v11) = v9;
				if (!HIDWORD(v101))
				{
					Block[0] = 0i64;
					Block[1] = 0i64;
					if ((int)v101 < 3)
					{
						if (v100)
							v12 = realloc(v100, 0x20ui64);
						else
							v12 = malloc(0x20ui64);
						v100 = v12;
						LODWORD(v101) = 8;
					}
					v13 = SHIDWORD(v101);
					++HIDWORD(v101);
					*((_DWORD*)v100 + v13) = 1203982592;
					v14 = SHIDWORD(v101);
					++HIDWORD(v101);
					*((_DWORD*)v100 + v14) = 0;
					v15 = SHIDWORD(v101);
					++HIDWORD(v101);
					*((_DWORD*)v100 + v15) = 0;
				}
				if (HIDWORD(v101) + 3 > (int)v101)
				{
					v16 = ((HIDWORD(v101) + 3) / 2 + HIDWORD(v101) + 11) & 0xFFFFFFF8;
					if ((_DWORD)v101 != v16)
					{
						if (v16 <= 0)
						{
							free(v100);
							v100 = 0i64;
						}
						else if (v100)
						{
							v100 = realloc(v100, 4i64 * v16);
						}
						else
						{
							v100 = malloc(4i64 * v16);
						}
					}
					LODWORD(v101) = ((HIDWORD(v101) + 3) / 2 + HIDWORD(v101) + 11) & 0xFFFFFFF8;
				}
				v17 = SHIDWORD(v101);
				++HIDWORD(v101);
				*((_DWORD*)v100 + v17) = 1203982464;
				v18 = SHIDWORD(v101);
				++HIDWORD(v101);
				v19 = *((float*)&v140 + 2);
				*((_DWORD*)v100 + v18) = DWORD2(v140);
				v20 = SHIDWORD(v101);
				++HIDWORD(v101);
				v21 = *((float*)&v140 + 3);
				*((_DWORD*)v100 + v20) = HIDWORD(v140);
				if (*(float*)Block <= v19)
				{
					if (v19 > *((float*)Block + 1))
						*((float*)Block + 1) = v19;
				}
				else
				{
					*(float*)Block = v19;
				}
				if (*(float*)&Block[1] <= v21)
				{
					if (v21 > *((float*)&Block[1] + 1))
						*((float*)&Block[1] + 1) = v21;
				}
				else
				{
					*(float*)&Block[1] = v21;
				}
				if ((float)v5 > -40.0)
				{
					v22 = (float)*(int*)(a1 + 236);
					v23 = (float)*(int*)(a1 + 232);
					if (!HIDWORD(v101))
					{
						Block[0] = 0i64;
						Block[1] = 0i64;
						if ((int)v101 < 3)
						{
							if (v100)
								v24 = realloc(v100, 0x20ui64);
							else
								v24 = malloc(0x20ui64);
							v100 = v24;
							LODWORD(v101) = 8;
						}
						v25 = SHIDWORD(v101);
						++HIDWORD(v101);
						*((_DWORD*)v100 + v25) = 1203982592;
						v26 = SHIDWORD(v101);
						++HIDWORD(v101);
						*((_DWORD*)v100 + v26) = 0;
						v27 = SHIDWORD(v101);
						++HIDWORD(v101);
						*((_DWORD*)v100 + v27) = 0;
					}
					if (HIDWORD(v101) + 3 > (int)v101)
					{
						v28 = ((HIDWORD(v101) + 3) / 2 + HIDWORD(v101) + 11) & 0xFFFFFFF8;
						if ((_DWORD)v101 != v28)
						{
							if (v28 <= 0)
							{
								free(v100);
								v100 = 0i64;
							}
							else if (v100)
							{
								v100 = realloc(v100, 4i64 * v28);
							}
							else
							{
								v100 = malloc(4i64 * v28);
							}
						}
						LODWORD(v101) = ((HIDWORD(v101) + 3) / 2 + HIDWORD(v101) + 11) & 0xFFFFFFF8;
					}
					v29 = SHIDWORD(v101);
					++HIDWORD(v101);
					*((_DWORD*)v100 + v29) = 1203982464;
					v30 = SHIDWORD(v101);
					++HIDWORD(v101);
					*((float*)v100 + v30) = v23;
					v31 = SHIDWORD(v101);
					++HIDWORD(v101);
					*((float*)v100 + v31) = v22;
					if (*(float*)Block <= v23)
					{
						if (v23 > *((float*)Block + 1))
							*((float*)Block + 1) = v23;
					}
					else
					{
						*(float*)Block = v23;
					}
					if (*(float*)&Block[1] <= v22)
					{
						if (v22 > *((float*)&Block[1] + 1))
							*((float*)&Block[1] + 1) = v22;
					}
					else
					{
						*(float*)&Block[1] = v22;
					}
				}
				v32 = (float)*(int*)(a1 + 252);
				v33 = (float)*(int*)(a1 + 248);
				if (!HIDWORD(v101))
				{
					Block[0] = 0i64;
					Block[1] = 0i64;
					if ((int)v101 < 3)
					{
						if (v100)
							v34 = realloc(v100, 0x20ui64);
						else
							v34 = malloc(0x20ui64);
						v100 = v34;
						LODWORD(v101) = 8;
					}
					v35 = SHIDWORD(v101);
					++HIDWORD(v101);
					*((_DWORD*)v100 + v35) = 1203982592;
					v36 = SHIDWORD(v101);
					++HIDWORD(v101);
					*((_DWORD*)v100 + v36) = 0;
					v37 = SHIDWORD(v101);
					++HIDWORD(v101);
					*((_DWORD*)v100 + v37) = 0;
				}
				if (HIDWORD(v101) + 3 > (int)v101)
				{
					v38 = ((HIDWORD(v101) + 3) / 2 + HIDWORD(v101) + 11) & 0xFFFFFFF8;
					if ((_DWORD)v101 != v38)
					{
						if (v38 <= 0)
						{
							free(v100);
							v100 = 0i64;
						}
						else if (v100)
						{
							v100 = realloc(v100, 4i64 * v38);
						}
						else
						{
							v100 = malloc(4i64 * v38);
						}
					}
					LODWORD(v101) = ((HIDWORD(v101) + 3) / 2 + HIDWORD(v101) + 11) & 0xFFFFFFF8;
				}
				v39 = SHIDWORD(v101);
				++HIDWORD(v101);
				*((_DWORD*)v100 + v39) = 1203982464;
				v40 = SHIDWORD(v101);
				++HIDWORD(v101);
				*((float*)v100 + v40) = v33;
				v41 = SHIDWORD(v101);
				++HIDWORD(v101);
				*((float*)v100 + v41) = v32;
				if (*(float*)Block <= v33)
				{
					if (v33 > *((float*)Block + 1))
						*((float*)Block + 1) = v33;
				}
				else
				{
					*(float*)Block = v33;
				}
				if (*(float*)&Block[1] <= v32)
				{
					if (v32 > *((float*)&Block[1] + 1))
						*((float*)&Block[1] + 1) = v32;
				}
				else
				{
					*(float*)&Block[1] = v32;
				}
				v42 = (float)*(int*)(a1 + 244);
				v43 = (float)*(int*)(a1 + 240);
				if (!HIDWORD(v101))
				{
					Block[0] = 0i64;
					Block[1] = 0i64;
					if ((int)v101 < 3)
					{
						if (v100)
							v44 = realloc(v100, 0x20ui64);
						else
							v44 = malloc(0x20ui64);
						v100 = v44;
						LODWORD(v101) = 8;
					}
					v45 = SHIDWORD(v101);
					++HIDWORD(v101);
					*((_DWORD*)v100 + v45) = 1203982592;
					v46 = SHIDWORD(v101);
					++HIDWORD(v101);
					*((_DWORD*)v100 + v46) = 0;
					v47 = SHIDWORD(v101);
					++HIDWORD(v101);
					*((_DWORD*)v100 + v47) = 0;
				}
				if (HIDWORD(v101) + 3 > (int)v101)
				{
					v48 = ((HIDWORD(v101) + 3) / 2 + HIDWORD(v101) + 11) & 0xFFFFFFF8;
					if ((_DWORD)v101 != v48)
					{
						if (v48 <= 0)
						{
							free(v100);
							v100 = 0i64;
						}
						else if (v100)
						{
							v100 = realloc(v100, 4i64 * v48);
						}
						else
						{
							v100 = malloc(4i64 * v48);
						}
					}
					LODWORD(v101) = ((HIDWORD(v101) + 3) / 2 + HIDWORD(v101) + 11) & 0xFFFFFFF8;
				}
				v49 = SHIDWORD(v101);
				++HIDWORD(v101);
				*((_DWORD*)v100 + v49) = 1203982464;
				v50 = SHIDWORD(v101);
				++HIDWORD(v101);
				*((float*)v100 + v50) = v43;
				v51 = SHIDWORD(v101);
				++HIDWORD(v101);
				*((float*)v100 + v51) = v42;
				if (*(float*)Block <= v43)
				{
					if (v43 > *((float*)Block + 1))
						*((float*)Block + 1) = v43;
				}
				else
				{
					*(float*)Block = v43;
				}
				if (*(float*)&Block[1] <= v42)
				{
					if (v42 > *((float*)&Block[1] + 1))
						*((float*)&Block[1] + 1) = v42;
				}
				else
				{
					*(float*)&Block[1] = v42;
				}
				if ((float)v5 > -40.0)
				{
					v52 = (float)*(int*)(a1 + 228);
					v53 = (float)*(int*)(a1 + 224);
					v54 = HIDWORD(v101);
					if (!HIDWORD(v101))
					{
						Block[0] = 0i64;
						Block[1] = 0i64;
						if ((int)v101 < 3)
						{
							if (v100)
								v55 = realloc(v100, 0x20ui64);
							else
								v55 = malloc((unsigned int)(HIDWORD(v101) + 32));
							v100 = v55;
							v54 = HIDWORD(v101);
							LODWORD(v101) = 8;
						}
						HIDWORD(v101) = v54 + 1;
						*((_DWORD*)v100 + v54) = 1203982592;
						v56 = SHIDWORD(v101);
						++HIDWORD(v101);
						*((_DWORD*)v100 + v56) = 0;
						v57 = SHIDWORD(v101);
						++HIDWORD(v101);
						*((_DWORD*)v100 + v57) = 0;
					}
					sub_140061E70(&v100, &unk_1404825E4);
					if (*(float*)Block <= v53)
					{
						if (v53 > *((float*)Block + 1))
							*((float*)Block + 1) = v53;
					}
					else
					{
						*(float*)Block = v53;
					}
					if (*(float*)&Block[1] <= v52)
					{
						if (v52 > *((float*)&Block[1] + 1))
							*((float*)&Block[1] + 1) = v52;
					}
					else
					{
						*(float*)&Block[1] = v52;
					}
				}
				if (HIDWORD(v101) && (SHIDWORD(v101) <= 0 || *((float*)v100 + SHIDWORD(v101) - 1) != 100005.0))
				{
					Array::add((__int64)&v100, HIDWORD(v101) + 1);
					v58 = SHIDWORD(v101);
					++HIDWORD(v101);
					*((_DWORD*)v100 + v58) = 1203982976;
				}
				v59 = (int*)sub_1403800A0(a1 + 705, &v159);
				Graphics::setColour(a2, *v59);
				sub_14037CD90(a2, &v100);
			}
			HIDWORD(v101) = 0;
			free(v100);
		}
	}
	Graphics::setColour(a2, *(_DWORD*)(a1 + 705));
	v143 = xmmword_140E19E60;
	v144 = 1065353216i64;
	v104 = 1065353216i64;
	LODWORD(v105) = 0;
	Graphics::strokePath(a2, a1 + 336, (__int64)&v104, (__int64)&v143);
	v60 = *(_QWORD*)(a1 + 328);
	if (v60)
	{
		if (!*(_BYTE*)(v60 + 108) || *(_DWORD*)(v60 + 116) == 2)
		{
			v158 = dword_140EB1414;
			HIBYTE(v158) = 102;
			Graphics::setColour(a2, v158);
			sub_14037CD90(a2, a1 + 336);
			sub_140140EA0(*(_QWORD*)(a1 + 608), 3);
			v91 = *(void(__fastcall**)(__int64, __int64*))(*(_QWORD*)(a1 + 184) + 16i64);
			sub_140048D00(&v110, "Monitor is offline!");
			sub_14031AF20(&v116, &v110);
			v92 = (void*)(v110 - 16);
			if ((*(_DWORD*)(v110 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v92) == -1)
				j_j_free(v92);
			v91(a1 + 184, &v116);
			v65 = (volatile signed __int32*)(v116 - 16);
			v66 = *(_DWORD*)(v116 - 16);
		}
		else if ((unsigned __int8)sub_14020EDA0(v60) == 1)
		{
			v61 = Component::getLookAndFeel(a1);
			v62 = LookAndFeel::findColour(v61, &v134, 261);
			Graphics::setColour(a2, *v62);
			v145 = xmmword_140E19E60;
			v146 = 1065353216i64;
			sub_14037CE10(a2, a1 + 336, &v145);
			sub_140140EA0(*(_QWORD*)(a1 + 608), 4);
			v63 = *(void(__fastcall**)(__int64, __int64*))(*(_QWORD*)(a1 + 184) + 16i64);
			sub_140048D00(&v112, "Monitor has clip ON!");
			sub_14031AF20(&v113, &v112);
			v64 = (void*)(v112 - 16);
			if ((*(_DWORD*)(v112 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v64) == -1)
				j_j_free(v64);
			v63(a1 + 184, &v113);
			v65 = (volatile signed __int32*)(v113 - 16);
			v66 = *(_DWORD*)(v113 - 16);
		}
		else
		{
			if ((unsigned __int8)sub_14020ECC0(*(_QWORD*)(a1 + 328)) != 1)
			{
				v136 = *(_BYTE**)(*(_QWORD*)(a1 + 328) + 184i64);
				v69 = (volatile signed __int32*)(v136 - 16);
				if ((*((_DWORD*)v136 - 4) & 0x30000000) == 0)
					_InterlockedIncrement(v69);
				v70 = v136;
				if ((unsigned int)String::isNotEmpty(v136, "muted"))
				{
					if ((unsigned int)String::isNotEmpty(v70, "soloed"))
					{
						v109 = dword_140DDCDD0;
						v83 = sub_14020E0E0(*(_QWORD*)(a1 + 328), &v109);
						v84 = *(_QWORD*)(a1 + 608);
						if (v83 == 1)
						{
							sub_140140EA0(v84, 7);
							v85 = *(void(__fastcall**)(__int64, __int64*))(*(_QWORD*)(a1 + 184) + 16i64);
							sub_140048D00(
								&v120,
								"Firmware update available. Right click the icon in the main page, select Show Info in the menu and press"
								" Update button to update the firmware.");
							sub_14031AF20(&v121, &v120);
							v86 = (void*)(v120 - 16);
							if ((*(_DWORD*)(v120 - 16) & 0x30000000) == 0
								&& _InterlockedDecrement((volatile signed __int32*)v86) == -1)
							{
								j_j_free(v86);
							}
							v85(a1 + 184, &v121);
							v87 = (void*)(v121 - 16);
							v88 = *(_DWORD*)(v121 - 16);
						}
						else
						{
							sub_140140EA0(v84, 0);
							v89 = *(void(__fastcall**)(__int64, __int64*))(*(_QWORD*)(a1 + 184) + 16i64);
							sub_140048D00(&v107, "Online");
							sub_14031AF20(&v108, &v107);
							v90 = (void*)(v107 - 16);
							if ((*(_DWORD*)(v107 - 16) & 0x30000000) == 0
								&& _InterlockedDecrement((volatile signed __int32*)v90) == -1)
							{
								j_j_free(v90);
							}
							v89(a1 + 184, &v108);
							v87 = (void*)(v108 - 16);
							v88 = *(_DWORD*)(v108 - 16);
						}
						if ((v88 & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v87) == -1)
							j_j_free(v87);
						v76 = v109 - 4;
						v77 = *(v109 - 4);
					}
					else
					{
						v78 = Component::getLookAndFeel(a1);
						v79 = LookAndFeel::findColour(v78, &v131, 262);
						v80 = (int*)sub_1403800A0(v79, v132);
						Graphics::setColour(a2, *v80);
						v151 = xmmword_140E19E60;
						v152 = 1065353216i64;
						v125 = 1084227584;
						v126 = 0i64;
						Graphics::strokePath(a2, a1 + 376, (__int64)&v125, (__int64)&v151);
						sub_140140EA0(*(_QWORD*)(a1 + 608), 1);
						v81 = *(void(__fastcall**)(__int64, __int64*))(*(_QWORD*)(a1 + 184) + 16i64);
						sub_140048D00(&v118, "Monitor is soloed");
						sub_14031AF20(&v119, &v118);
						v82 = (void*)(v118 - 16);
						if ((*(_DWORD*)(v118 - 16) & 0x30000000) == 0
							&& _InterlockedDecrement((volatile signed __int32*)v82) == -1)
						{
							j_j_free(v82);
						}
						v81(a1 + 184, &v119);
						v76 = (_DWORD*)(v119 - 16);
						v77 = *(_DWORD*)(v119 - 16);
					}
				}
				else
				{
					v71 = Component::getLookAndFeel(a1);
					v72 = LookAndFeel::findColour(v71, &v135, 261);
					v73 = (int*)sub_1403800A0(v72, v130);
					Graphics::setColour(a2, *v73);
					v149 = xmmword_140E19E60;
					v150 = 1065353216i64;
					v123 = 1084227584;
					v124 = 0i64;
					Graphics::strokePath(a2, a1 + 376, (__int64)&v123, (__int64)&v149);
					sub_140140EA0(*(_QWORD*)(a1 + 608), 2);
					v74 = *(void(__fastcall**)(__int64, __int64*))(*(_QWORD*)(a1 + 184) + 16i64);
					sub_140048D00(&v106, "Monitor is muted");
					sub_14031AF20(&v117, &v106);
					v75 = (void*)(v106 - 16);
					if ((*(_DWORD*)(v106 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v75) == -1)
						j_j_free(v75);
					v74(a1 + 184, &v117);
					v76 = (_DWORD*)(v117 - 16);
					v77 = *(_DWORD*)(v117 - 16);
				}
				if ((v77 & 0x30000000) == 0 && _InterlockedDecrement(v76) == -1)
					j_j_free(v76);
				if ((*v69 & 0x30000000) != 0 || _InterlockedDecrement(v69) != -1)
					goto LABEL_177;
				v65 = v69;
			LABEL_176:
				j_j_free((void*)v65);
				goto LABEL_177;
			}
			Graphics::setColour(a2, -23296);
			v147 = xmmword_140E19E60;
			v148 = 1065353216i64;
			sub_14037CE10(a2, a1 + 336, &v147);
			sub_140140EA0(*(_QWORD*)(a1 + 608), 5);
			v67 = *(void(__fastcall**)(__int64, __int64*))(*(_QWORD*)(a1 + 184) + 16i64);
			sub_140048D00(&v114, "Monitor has protection ON!");
			sub_14031AF20(&v115, &v114);
			v68 = (void*)(v114 - 16);
			if ((*(_DWORD*)(v114 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v68) == -1)
				j_j_free(v68);
			v67(a1 + 184, &v115);
			v65 = (volatile signed __int32*)(v115 - 16);
			v66 = *(_DWORD*)(v115 - 16);
		}
		if ((v66 & 0x30000000) != 0 || _InterlockedDecrement(v65) != -1)
			goto LABEL_177;
		goto LABEL_176;
	}
LABEL_177:
	if (!*(_QWORD*)(a1 + 328))
	{
		v93 = Component::getLookAndFeel(a1);
		v94 = LookAndFeel::findColour(v93, &v133, 16777857);
		Graphics::setColour(a2, *v94);
		v95 = *(_DWORD*)(a1 + 44);
		v96 = *(_DWORD*)(a1 + 40);
		*(_QWORD*)&v129 = 0i64;
		*((_QWORD*)&v129 + 1) = __PAIR64__(v95, v96);
		v153 = v129;
		sub_14037FDA0(a2, a1 + 8, (unsigned int)&v153, 36, 1);
		v97 = *(void(__fastcall**)(__int64, __int64*))(*(_QWORD*)(a1 + 184) + 16i64);
		sub_140048D00(&v111, &unk_14046D9C6);
		sub_14031AF20(&v122, &v111);
		v98 = (void*)(v111 - 16);
		if ((*(_DWORD*)(v111 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v98) == -1)
			j_j_free(v98);
		v97(a1 + 184, &v122);
		v99 = (void*)(v122 - 16);
		if ((*(_DWORD*)(v122 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v99) == -1)
			j_j_free(v99);
	}
	Graphics::setColour(a2, -1);*/
}
void HexTestComponent::resized()
{
	/*float v2; // xmm8_4
	float v3; // xmm9_4
	int v4; // er8
	int v5; // er9
	int v6; // eax
	int v7; // eax
	int v8; // ecx
	_QWORD* v9; // rdi
	__int64 v10; // rdx
	__int64 v11; // rcx
	void** v12; // rsi
	void* v13; // rcx
	float* v14; // rax
	int v15; // edx
	int v16; // er8
	int v17; // eax
	int v18; // ecx
	int v19; // edx
	int v20; // eax
	int v21; // eax
	__int64* v22; // rsi
	__int64 v23; // rax
	__int64 v24; // rdx
	__int64 v25; // rcx
	__int64 v26; // rcx
	__int64 v27; // kr00_8
	int v28; // edx
	__m128i v29; // xmm2
	__m128i v30; // xmm1
	__int128 v32; // [rsp+48h] [rbp-29h] BYREF
	__int64 v33; // [rsp+58h] [rbp-19h] BYREF
	__int128 v34; // [rsp+70h] [rbp-1h]
	__int64 v35; // [rsp+80h] [rbp+Fh]
	double v36; // [rsp+D8h] [rbp+67h]
	double v37; // [rsp+D8h] [rbp+67h]
	double v38; // [rsp+D8h] [rbp+67h]
	double v39; // [rsp+D8h] [rbp+67h]
	__int64 v40; // [rsp+D8h] [rbp+67h]
	__int64 v41; // [rsp+D8h] [rbp+67h]
	__int64 v42; // [rsp+D8h] [rbp+67h]
	__int64 v43; // [rsp+D8h] [rbp+67h]
	__int64 v44; // [rsp+D8h] [rbp+67h]
	__int64 v45; // [rsp+D8h] [rbp+67h]
	__int64 v46; // [rsp+D8h] [rbp+67h]
	__int64 v47; // [rsp+D8h] [rbp+67h]
	__int64 v48; // [rsp+D8h] [rbp+67h]
	__int64 v49; // [rsp+D8h] [rbp+67h]
	__int64 v50; // [rsp+D8h] [rbp+67h]
	__int64 v51; // [rsp+D8h] [rbp+67h]

	v34 = 0i64;
	v35 = 0i64;
	v2 = (float)(*(_DWORD*)(a1 + 44) / 2);
	v3 = (float)(*(_DWORD*)(a1 + 40) / 2);
	v4 = *(_DWORD*)(a1 + 40) / 4;
	v5 = v4 - 1;
	if (*(_DWORD*)(a1 + 40) % 4 <= 0)
		v5 = *(_DWORD*)(a1 + 40) / 4;
	*(_DWORD*)(a1 + 208) = v5;
	*(_DWORD*)(a1 + 212) = 0;
	*(_DWORD*)(a1 + 216) = *(_DWORD*)(a1 + 40) - v4;
	*(_QWORD*)(a1 + 220) = 0i64;
	*(_DWORD*)(a1 + 228) = *(_DWORD*)(a1 + 44) / 2;
	v6 = *(_DWORD*)(a1 + 44);
	*(_DWORD*)(a1 + 232) = *(_DWORD*)(a1 + 40);
	*(_DWORD*)(a1 + 236) = v6 / 2;
	v7 = *(_DWORD*)(a1 + 44);
	*(_DWORD*)(a1 + 240) = v5;
	*(_DWORD*)(a1 + 244) = v7;
	v8 = *(_DWORD*)(a1 + 44);
	*(_DWORD*)(a1 + 248) = *(_DWORD*)(a1 + 40) - v4;
	*(_DWORD*)(a1 + 252) = v8;
	v9 = (_QWORD*)(a1 + 336);
	*(_QWORD*)(a1 + 348) = 0i64;
	*(_QWORD*)(a1 + 356) = 0i64;
	*(_DWORD*)(a1 + 364) = 0;
	Path::startNewSubPath((float*)(a1 + 336), (float)v5, (float)*(int*)(a1 + 212));
	Path::lineTo(a1 + 336, (float)*(int*)(a1 + 216), (float)*(int*)(a1 + 220));
	Path::lineTo(a1 + 336, (float)*(int*)(a1 + 232), (float)*(int*)(a1 + 236));
	Path::lineTo(a1 + 336, (float)*(int*)(a1 + 248), (float)*(int*)(a1 + 252));
	Path::lineTo(a1 + 336, (float)*(int*)(a1 + 240), (float)*(int*)(a1 + 244));
	Path::lineTo(a1 + 336, (float)*(int*)(a1 + 224), (float)*(int*)(a1 + 228));
	v10 = *(int*)(a1 + 348);
	if ((_DWORD)v10 && ((int)v10 <= 0 || *(float*)(*v9 + 4 * v10 - 4) != 100005.0))
	{
		Array::add(a1 + 336, v10 + 1);
		v11 = *(int*)(a1 + 348);
		*(_DWORD*)(a1 + 348) = v11 + 1;
		*(_DWORD*)(*v9 + 4 * v11) = 1203982976;
	}
	v12 = (void**)(a1 + 376);
	if ((_QWORD*)(a1 + 376) != v9)
	{
		Component::getTransform((__int64)&v32, a1 + 336);
		v13 = *v12;
		*v12 = (void*)v32;
		*(_QWORD*)(a1 + 384) = *((_QWORD*)&v32 + 1);
		free(v13);
		*(_OWORD*)(a1 + 392) = *(_OWORD*)(a1 + 352);
		*(_BYTE*)(a1 + 408) = *(_BYTE*)(a1 + 368);
	}
	v14 = Path::getTransformToScaleToFit(
		(float*)(a1 + 376),
		(float*)&v33,
		3.0,
		3.0,
		(float)(*(_DWORD*)(a1 + 40) - 6),
		(float)(*(_DWORD*)(a1 + 44) - 6),
		1,
		36);
	Path::applyTransform(a1 + 376, v14);
	v15 = *(_DWORD*)(a1 + 244);
	v16 = *(_DWORD*)(a1 + 240);
	v17 = 0;
	if (*(_DWORD*)(a1 + 536) + *(_DWORD*)(a1 + 544) - v16 > 0)
		v17 = *(_DWORD*)(a1 + 536) + *(_DWORD*)(a1 + 544) - v16;
	*(_DWORD*)(a1 + 544) = v17;
	v18 = *(_DWORD*)(a1 + 220);
	v19 = v15 - v18;
	v20 = 0;
	if (v19 > 0)
		v20 = v19;
	*(_DWORD*)(a1 + 548) = v20;
	*(_DWORD*)(a1 + 540) = v18;
	v21 = *(_DWORD*)(a1 + 216);
	if (v21 < v16)
		v16 = *(_DWORD*)(a1 + 216);
	*(_DWORD*)(a1 + 536) = v16;
	*(_DWORD*)(a1 + 544) = v21 - v16;
	v22 = (__int64*)(a1 + 720);
	*(_QWORD*)(a1 + 732) = 0i64;
	*(_QWORD*)(a1 + 740) = 0i64;
	*(_DWORD*)(a1 + 748) = 0;
	v36 = (float)((float)*(int*)(a1 + 40) * 0.75) + 6.755399441055744e15;
	Path::startNewSubPath((float*)(a1 + 720), (float)SLODWORD(v36), 0.0);
	Path::lineTo(a1 + 720, (float)*(int*)(a1 + 40), (float)(*(_DWORD*)(a1 + 44) / 2));
	v37 = (float)((float)*(int*)(a1 + 40) * 0.75999999) + 6.755399441055744e15;
	Path::lineTo(a1 + 720, (float)SLODWORD(v37), (float)*(int*)(a1 + 44));
	v38 = (float)((float)*(int*)(a1 + 40) * 0.23999999) + 6.755399441055744e15;
	Path::lineTo(a1 + 720, (float)SLODWORD(v38), (float)*(int*)(a1 + 44));
	Path::lineTo(a1 + 720, 0.0, (float)(*(_DWORD*)(a1 + 44) / 2));
	v39 = (float)((float)*(int*)(a1 + 40) * 0.23999999) + 6.755399441055744e15;
	LOBYTE(v23) = Path::lineTo(a1 + 720, (float)SLODWORD(v39), 0.0);
	v24 = *(int*)(a1 + 732);
	if ((_DWORD)v24)
	{
		if ((int)v24 <= 0 || (v23 = *v22, *(float*)(*v22 + 4 * v24 - 4) != 100005.0))
		{
			Array::add(a1 + 720, v24 + 1);
			v25 = *(int*)(a1 + 732);
			*(_DWORD*)(a1 + 732) = v25 + 1;
			v23 = *v22;
			*(_DWORD*)(*v22 + 4 * v25) = 1203982976;
		}
	}
	v26 = *(_QWORD*)(a1 + 608);
	if (v26)
	{
		v32 = *(_OWORD*)(a1 + 536);
		v27 = v32;
		if (*(_BYTE*)(a1 + 704))
		{
			v28 = 24;
			if (SHIDWORD(v32) < 24)
				v28 = HIDWORD(v32);
			LODWORD(v33) = v32;
			HIDWORD(v33) = HIDWORD(v32) + DWORD1(v32) - v28;
			HIDWORD(v32) -= v28;
			Component::setBounds(*(_QWORD*)(a1 + 640), v32, SHIDWORD(v33), SDWORD2(v32), v28);
			v26 = *(_QWORD*)(a1 + 608);
		}
		LOBYTE(v23) = Component::setBounds(v26, v27, SHIDWORD(v27), SDWORD2(v32), SHIDWORD(v32));
	}
	if (*(_BYTE*)(a1 + 656))
	{
		*(_QWORD*)(a1 + 688) = 0i64;
		if (!(unsigned int)String::isNotEmpty(*(_BYTE**)(a1 + 8), "top"))
		{
			LODWORD(v40) = (int)v3;
			HIDWORD(v40) = *(_DWORD*)(a1 + 44);
			*(_QWORD*)(a1 + 688) = v40;
			LODWORD(v40) = (int)v3;
			HIDWORD(v40) = (int)(float)((float)((float)SHIDWORD(v40) + v2) * 0.5);
			*(_QWORD*)(a1 + 696) = v40;
			*(_QWORD*)(a1 + 348) = 0i64;
			*(_QWORD*)(a1 + 356) = 0i64;
			*(_DWORD*)(a1 + 364) = 0;
			Path::startNewSubPath((float*)(a1 + 336), (float)*(int*)(a1 + 232), (float)*(int*)(a1 + 236));
		LABEL_55:
			Path::lineTo(a1 + 336, (float)*(int*)(a1 + 248), (float)*(int*)(a1 + 252));
			Path::lineTo(a1 + 336, (float)*(int*)(a1 + 240), (float)*(int*)(a1 + 244));
			v29 = _mm_cvtsi32_si128(*(_DWORD*)(a1 + 228));
			v30 = _mm_cvtsi32_si128(*(_DWORD*)(a1 + 224));
			goto LABEL_56;
		}
		if (!(unsigned int)String::isNotEmpty(*(_BYTE**)(a1 + 8), "1/6"))
		{
			*(_QWORD*)(a1 + 688) = *(_QWORD*)(a1 + 240);
			LODWORD(v41) = (int)v3;
			HIDWORD(v41) = (int)v2;
			*(_QWORD*)(a1 + 696) = v41;
			*(_QWORD*)(a1 + 348) = 0i64;
			*(_QWORD*)(a1 + 356) = 0i64;
			*(_DWORD*)(a1 + 364) = 0;
			Path::startNewSubPath((float*)(a1 + 336), (float)*(int*)(a1 + 232), (float)*(int*)(a1 + 236));
			Path::lineTo(a1 + 336, (float)*(int*)(a1 + 248), (float)*(int*)(a1 + 252));
		LABEL_30:
			Path::lineTo(a1 + 336, (float)*(int*)(a1 + 240), (float)*(int*)(a1 + 244));
			Path::lineTo(a1 + 336, (float)*(int*)(a1 + 224), (float)*(int*)(a1 + 228));
			v29 = _mm_cvtsi32_si128(*(_DWORD*)(a1 + 212));
			v30 = _mm_cvtsi32_si128(*(_DWORD*)(a1 + 208));
		LABEL_56:
			LOBYTE(v23) = Path::lineTo(a1 + 336, _mm_cvtepi32_ps(v30).m128_f32[0], _mm_cvtepi32_ps(v29).m128_f32[0]);
			return v23;
		}
		if (!(unsigned int)String::isNotEmpty(*(_BYTE**)(a1 + 8), "topright"))
		{
			LODWORD(v42) = (*(_DWORD*)(a1 + 224) + *(_DWORD*)(a1 + 240)) / 2;
			HIDWORD(v42) = (*(_DWORD*)(a1 + 228) + *(_DWORD*)(a1 + 244)) / 2;
			*(_QWORD*)(a1 + 688) = v42;
			LODWORD(v42) = (int)(float)((float)((float)*(int*)(a1 + 688) + v3) * 0.5);
			HIDWORD(v42) = (int)(float)((float)((float)*(int*)(a1 + 692) + v2) * 0.5);
			*(_QWORD*)(a1 + 696) = v42;
			*(_QWORD*)(a1 + 348) = 0i64;
			*(_QWORD*)(a1 + 356) = 0i64;
			*(_DWORD*)(a1 + 364) = 0;
			Path::startNewSubPath((float*)(a1 + 336), (float)*(int*)(a1 + 248), (float)*(int*)(a1 + 252));
			goto LABEL_30;
		}
		if (!(unsigned int)String::isNotEmpty(*(_BYTE**)(a1 + 8), "2/6"))
		{
			*(_QWORD*)(a1 + 688) = *(_QWORD*)(a1 + 224);
			LODWORD(v43) = (int)v3;
			HIDWORD(v43) = (int)v2;
			*(_QWORD*)(a1 + 696) = v43;
			*(_QWORD*)(a1 + 348) = 0i64;
			*(_QWORD*)(a1 + 356) = 0i64;
			*(_DWORD*)(a1 + 364) = 0;
			Path::startNewSubPath((float*)(a1 + 336), (float)*(int*)(a1 + 248), (float)*(int*)(a1 + 252));
			Path::lineTo(a1 + 336, (float)*(int*)(a1 + 240), (float)*(int*)(a1 + 244));
		LABEL_35:
			Path::lineTo(a1 + 336, (float)*(int*)(a1 + 224), (float)*(int*)(a1 + 228));
			Path::lineTo(a1 + 336, (float)*(int*)(a1 + 208), (float)*(int*)(a1 + 212));
			v29 = _mm_cvtsi32_si128(*(_DWORD*)(a1 + 220));
			v30 = _mm_cvtsi32_si128(*(_DWORD*)(a1 + 216));
			goto LABEL_56;
		}
		if (!(unsigned int)String::isNotEmpty(*(_BYTE**)(a1 + 8), "bottomright"))
		{
			LODWORD(v44) = (*(_DWORD*)(a1 + 208) + *(_DWORD*)(a1 + 224)) / 2;
			HIDWORD(v44) = (*(_DWORD*)(a1 + 212) + *(_DWORD*)(a1 + 228)) / 2;
			*(_QWORD*)(a1 + 688) = v44;
			LODWORD(v44) = (int)(float)((float)((float)*(int*)(a1 + 688) + v3) * 0.5);
			HIDWORD(v44) = (int)(float)((float)((float)*(int*)(a1 + 692) + v2) * 0.5);
			*(_QWORD*)(a1 + 696) = v44;
			*(_QWORD*)(a1 + 348) = 0i64;
			*(_QWORD*)(a1 + 356) = 0i64;
			*(_DWORD*)(a1 + 364) = 0;
			Path::startNewSubPath((float*)(a1 + 336), (float)*(int*)(a1 + 240), (float)*(int*)(a1 + 244));
			goto LABEL_35;
		}
		if (!(unsigned int)String::isNotEmpty(*(_BYTE**)(a1 + 8), "3/6"))
		{
			*(_QWORD*)(a1 + 688) = *(_QWORD*)(a1 + 208);
			LODWORD(v45) = (int)v3;
			HIDWORD(v45) = (int)v2;
			*(_QWORD*)(a1 + 696) = v45;
			*(_QWORD*)(a1 + 348) = 0i64;
			*(_QWORD*)(a1 + 356) = 0i64;
			*(_DWORD*)(a1 + 364) = 0;
			Path::startNewSubPath((float*)(a1 + 336), (float)*(int*)(a1 + 240), (float)*(int*)(a1 + 244));
			Path::lineTo(a1 + 336, (float)*(int*)(a1 + 224), (float)*(int*)(a1 + 228));
		LABEL_40:
			Path::lineTo(a1 + 336, (float)*(int*)(a1 + 208), (float)*(int*)(a1 + 212));
			Path::lineTo(a1 + 336, (float)*(int*)(a1 + 216), (float)*(int*)(a1 + 220));
			v29 = _mm_cvtsi32_si128(*(_DWORD*)(a1 + 236));
			v30 = _mm_cvtsi32_si128(*(_DWORD*)(a1 + 232));
			goto LABEL_56;
		}
		if (!(unsigned int)String::isNotEmpty(*(_BYTE**)(a1 + 8), "bottom"))
		{
			*(_QWORD*)(a1 + 688) = (unsigned int)(int)v3;
			LODWORD(v46) = (int)v3;
			HIDWORD(v46) = (int)(float)(v2 * 0.5);
			*(_QWORD*)(a1 + 696) = v46;
			*(_QWORD*)(a1 + 348) = 0i64;
			*(_QWORD*)(a1 + 356) = 0i64;
			*(_DWORD*)(a1 + 364) = 0;
			Path::startNewSubPath((float*)(a1 + 336), (float)*(int*)(a1 + 224), (float)*(int*)(a1 + 228));
			goto LABEL_40;
		}
		if (!(unsigned int)String::isNotEmpty(*(_BYTE**)(a1 + 8), "4/6"))
		{
			*(_QWORD*)(a1 + 688) = *(_QWORD*)(a1 + 216);
			LODWORD(v47) = (int)v3;
			HIDWORD(v47) = (int)v2;
			*(_QWORD*)(a1 + 696) = v47;
			*(_QWORD*)(a1 + 348) = 0i64;
			*(_QWORD*)(a1 + 356) = 0i64;
			*(_DWORD*)(a1 + 364) = 0;
			Path::startNewSubPath((float*)(a1 + 336), (float)*(int*)(a1 + 224), (float)*(int*)(a1 + 228));
			Path::lineTo(a1 + 336, (float)*(int*)(a1 + 208), (float)*(int*)(a1 + 212));
		LABEL_45:
			Path::lineTo(a1 + 336, (float)*(int*)(a1 + 216), (float)*(int*)(a1 + 220));
			Path::lineTo(a1 + 336, (float)*(int*)(a1 + 232), (float)*(int*)(a1 + 236));
			v29 = _mm_cvtsi32_si128(*(_DWORD*)(a1 + 252));
			v30 = _mm_cvtsi32_si128(*(_DWORD*)(a1 + 248));
			goto LABEL_56;
		}
		if (!(unsigned int)String::isNotEmpty(*(_BYTE**)(a1 + 8), "bottomleft"))
		{
			LODWORD(v48) = (*(_DWORD*)(a1 + 216) + *(_DWORD*)(a1 + 232)) / 2;
			HIDWORD(v48) = (*(_DWORD*)(a1 + 236) + *(_DWORD*)(a1 + 220)) / 2;
			*(_QWORD*)(a1 + 688) = v48;
			LODWORD(v48) = (int)(float)((float)((float)*(int*)(a1 + 688) + v3) * 0.5);
			HIDWORD(v48) = (int)(float)((float)((float)*(int*)(a1 + 692) + v2) * 0.5);
			*(_QWORD*)(a1 + 696) = v48;
			*(_QWORD*)(a1 + 348) = 0i64;
			*(_QWORD*)(a1 + 356) = 0i64;
			*(_DWORD*)(a1 + 364) = 0;
			Path::startNewSubPath((float*)(a1 + 336), (float)*(int*)(a1 + 208), (float)*(int*)(a1 + 212));
			goto LABEL_45;
		}
		if (!(unsigned int)String::isNotEmpty(*(_BYTE**)(a1 + 8), "5/6"))
		{
			*(_QWORD*)(a1 + 688) = *(_QWORD*)(a1 + 232);
			LODWORD(v49) = (int)v3;
			HIDWORD(v49) = (int)v2;
			*(_QWORD*)(a1 + 696) = v49;
			*(_QWORD*)(a1 + 348) = 0i64;
			*(_QWORD*)(a1 + 356) = 0i64;
			*(_DWORD*)(a1 + 364) = 0;
			Path::startNewSubPath((float*)(a1 + 336), (float)*(int*)(a1 + 208), (float)*(int*)(a1 + 212));
			Path::lineTo(a1 + 336, (float)*(int*)(a1 + 216), (float)*(int*)(a1 + 220));
		LABEL_50:
			Path::lineTo(a1 + 336, (float)*(int*)(a1 + 232), (float)*(int*)(a1 + 236));
			Path::lineTo(a1 + 336, (float)*(int*)(a1 + 248), (float)*(int*)(a1 + 252));
			v29 = _mm_cvtsi32_si128(*(_DWORD*)(a1 + 244));
			v30 = _mm_cvtsi32_si128(*(_DWORD*)(a1 + 240));
			goto LABEL_56;
		}
		if (!(unsigned int)String::isNotEmpty(*(_BYTE**)(a1 + 8), "topleft"))
		{
			LODWORD(v50) = (*(_DWORD*)(a1 + 232) + *(_DWORD*)(a1 + 248)) / 2;
			HIDWORD(v50) = (*(_DWORD*)(a1 + 252) + *(_DWORD*)(a1 + 236)) / 2;
			*(_QWORD*)(a1 + 688) = v50;
			LODWORD(v50) = (int)(float)((float)((float)*(int*)(a1 + 688) + v3) * 0.5);
			HIDWORD(v50) = (int)(float)((float)((float)*(int*)(a1 + 692) + v2) * 0.5);
			*(_QWORD*)(a1 + 696) = v50;
			*(_QWORD*)(a1 + 348) = 0i64;
			*(_QWORD*)(a1 + 356) = 0i64;
			*(_DWORD*)(a1 + 364) = 0;
			Path::startNewSubPath((float*)(a1 + 336), (float)*(int*)(a1 + 216), (float)*(int*)(a1 + 220));
			goto LABEL_50;
		}
		LODWORD(v23) = String::isNotEmpty(*(_BYTE**)(a1 + 8), "6/6");
		if (!(_DWORD)v23)
		{
			*(_QWORD*)(a1 + 688) = *(_QWORD*)(a1 + 248);
			LODWORD(v51) = (int)v3;
			HIDWORD(v51) = (int)v2;
			*(_QWORD*)(a1 + 696) = v51;
			*(_QWORD*)(a1 + 348) = 0i64;
			*(_QWORD*)(a1 + 356) = 0i64;
			*(_DWORD*)(a1 + 364) = 0;
			Path::startNewSubPath((float*)(a1 + 336), (float)*(int*)(a1 + 216), (float)*(int*)(a1 + 220));
			Path::lineTo(a1 + 336, (float)*(int*)(a1 + 232), (float)*(int*)(a1 + 236));
			goto LABEL_55;
		}
	}
	return v23;*/

}