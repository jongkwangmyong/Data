#include "CloudSupport.h"
CloudSupport::CloudSupport()
{

}

CloudSupport::~CloudSupport()
{

}

void CloudSupport::mouseEnter(const MouseEvent& event)
{
	/*v4 = a1[38];
	if (*(_QWORD*)(a2 + 48) == v4 && a1[25] == a1[26])
	{
		MouseCursor::MouseCursor(&Block, 7);
		sub_14040CF70(v4, (__int64*)& Block);
		if (Block)
			sub_140085A60(Block);
	}
	else
	{
		Block = 0i64;
		sub_14040CF70(v4, (__int64*)& Block);
	}
	v5 = a1[43];
	if (*(_QWORD*)(a2 + 48) == v5)
	{
		MouseCursor::MouseCursor(&Block, 7);
		sub_14040CF70(v5, (__int64*)& Block);
		if (Block)
			sub_140085A60(Block);
	}*/
}

void CloudSupport::mouseExit(const MouseEvent& event)
{
	/*result = *(_QWORD*)(a1 + 304);
	if (*(_QWORD*)(a2 + 48) == result)
	{
		v3 = 0i64;
		result = sub_14040CF70(a1, &v3);
	}
	return result;*/
}

__int64 CloudSupport::sub_14040CF70(__int64 a1, __int64* a2)
{
	return 0;
/*
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

void CloudSupport::mouseUp(const MouseEvent& event)
{
/*
	v4 = *(_QWORD*)(a2 + 48);
	if (v4 == *(_QWORD*)(a1 + 304) && *(_QWORD*)(a1 + 200) == *(_QWORD*)(a1 + 208))
	{
		sub_140048D00(&v29, "*.png; *.jpg; *.jpeg");
		v5 = sub_140316610(&v37, 5i64);
		sub_140048D00(&v27, "Select an Image");
		sub_14031AF20(&v28, &v27);
		v6 = v27;
		if ((*(_DWORD*)(v27 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)(v27 - 16)) == -1)
			j_j_free((void*)(v6 - 16));
		sub_14040F380(v43, &v28, v5, &v29);
		v7 = (void*)(v28 - 16);
		if ((*(_DWORD*)(v28 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v7) == -1)
			j_j_free(v7);
		v8 = (void*)(v37 - 16);
		if ((*(_DWORD*)(v37 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v8) == -1)
			j_j_free(v8);
		v9 = (void*)(v29 - 16);
		if ((*(_DWORD*)(v29 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v9) == -1)
			j_j_free(v9);
		if ((unsigned __int8)sub_1403DB020(v43, 5i64))
		{
			sub_1403DAC80(v43, &Block);
			if (v36 <= 0)
			{
				v26 = dword_140DDCDD0;
				v39[1] = (__int64)(&dword_140DDCDC0 + 4);
			}
			else
			{
				v10 = *(int**)Block;
				v30 = v10;
				if ((*(v10 - 4) & 0x30000000) == 0)
					_InterlockedIncrement(v10 - 4);
				v26 = v30;
				v30 = &dword_140DDCDC0 + 4;
			}
			StringArray::clear((__int64)& Block);
			free(Block);
			v11 = v26;
			if ((*(v26 - 4) & 0x30000000) == 0)
				_InterlockedIncrement(v26 - 4);
			v12 = (_DWORD*)(_InterlockedExchange64((volatile __int64*)(a1 + 248), (__int64)v26) - 16);
			if ((*v12 & 0x30000000) == 0 && _InterlockedDecrement(v12) == -1)
				j_j_free(v12);
			sub_140308BF0(&v25, a1 + 248);
			v13 = (LPCWSTR*)sub_140046AE0(&v40, &v25);
			if (GetFileAttributesExW(*v13, GetFileExInfoStandard, FileInformation))
				v14 = v42;
			else
				v14 = 0;
			if (v14 > 15728640)
			{
				v38 = dword_140DDCDD0;
				sub_140048D00(&v31, "Image size is too large, please select a smaller image!");
				sub_14031AF20(&v34, &v31);
				v15 = (void*)(v31 - 16);
				if ((*(_DWORD*)(v31 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v15) == -1)
					j_j_free(v15);
				sub_140048D00(&v32, "Image Size Error");
				sub_14031AF20(&v33, &v32);
				v16 = (void*)(v32 - 16);
				if ((*(_DWORD*)(v32 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v16) == -1)
					j_j_free(v16);
				sub_14040FE70(2, (unsigned int)& v33, (unsigned int)& v34, (unsigned int)& v38, 0i64);
				v17 = (void*)(v33 - 16);
				if ((*(_DWORD*)(v33 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v17) == -1)
					j_j_free(v17);
				v18 = (void*)(v34 - 16);
				if ((*(_DWORD*)(v34 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v18) == -1)
					j_j_free(v18);
				v19 = (void*)(v25 - 16);
				if ((*(_DWORD*)(v25 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v19) == -1)
					j_j_free(v19);
				if ((*(v11 - 4) & 0x30000000) == 0 && _InterlockedDecrement(v11 - 4) == -1)
					j_j_free(v11 - 4);
				sub_14040F290(v43);
				return;
			}
			v20 = (_QWORD*)sub_140380C10(v39, &v25);
			v21 = *(_QWORD*)(a1 + 216);
			*(_QWORD*)(a1 + 216) = *v20;
			*v20 = v21;
			v22 = (void(__fastcall * **)(_QWORD, __int64))v39[0];
			if (v39[0] && _InterlockedExchangeAdd((volatile signed __int32*)(v39[0] + 8), 0xFFFFFFFF) == 1)
				(**v22)(v22, 1i64);
			sub_140381130(a1 + 200, a1 + 216);
			*(_BYTE*)(a1 + 240) = 1;
			LOBYTE(v23) = 1;
			(*(void(__fastcall * *)(_QWORD, __int64))(**(_QWORD * *)(a1 + 344) + 88i64))(*(_QWORD*)(a1 + 344), v23);
			Component::setEnabled(*(_QWORD*)(a1 + 344), 1);
			Component::repaint(a1);
			v24 = (void*)(v25 - 16);
			if ((*(_DWORD*)(v25 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v24) == -1)
				j_j_free(v24);
			if ((*(v11 - 4) & 0x30000000) == 0 && _InterlockedDecrement(v11 - 4) == -1)
				j_j_free(v11 - 4);
		}
		sub_14040F290(v43);
		v4 = *(_QWORD*)(a2 + 48);
	}
	if (v4 == *(_QWORD*)(a1 + 360))
		Component::grabKeyboardFocusInternal(*(_QWORD*)(a1 + 312), 2u, 1);*/
}

void CloudSupport::paint(Graphics& g)
{
	/*v17 = -3025192;
	Graphics::fillAll(a2, 0xFFD1D6D8);
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
			v18 = operator new(0x130ui64);
			v7 = Desktop::Desktop((__int64)v18);
			qword_140EC0000 = v7;
		}
		v6 = Desktop::getDefaultLookAndFeel(v7);
	}
	v8 = LookAndFeel::findColour(v6, &v17, 16799488);
	Graphics::fillAll(a2, *v8);
	v9 = *(_DWORD * *)(a1 + 304);
	v10 = v9[8];
	v11 = v9[9];
	v12 = v9[10];
	v13 = v9[11];
	Graphics::drawImage(a2, (__int64*)(a1 + 192), v10, v11, v12, v13, 36, v15);
	result = Graphics::drawImage(a2, (__int64*)(a1 + 200), v10, v11, v12, v13, 36, v16);
	if (!*(_BYTE*)(a1 + 280))
	{
		result = Component::grabKeyboardFocusInternal(*(_QWORD*)(a1 + 312), 2u, 1);
		*(_BYTE*)(a1 + 280) = 1;
	}
	return result;*/
}

void CloudSupport::resized()
{
/*
	Component::setBounds(*(_QWORD*)(a1 + 288), *(_DWORD*)(a1 + 40) / 2 + 236, 35, 28, 24);
	Component::setBounds(*(_QWORD*)(a1 + 296), *(_DWORD*)(a1 + 40) / 2 - 249, 64, 408, 24);
	Component::setBounds(*(_QWORD*)(a1 + 304), *(_DWORD*)(a1 + 40) / 2 + 207, 70, 51, 52);
	Component::setBounds(
		*(_QWORD*)(a1 + 312),
		*(_DWORD*)(a1 + 40) / 2 - 246,
		141,
		504,
		COERCE_UNSIGNED_INT64((float)((float) * (int*)(a1 + 44) * 0.61830002) + 6.755399441055744e15));
	Component::setBounds(*(_QWORD*)(a1 + 320), *(_DWORD*)(a1 + 40) / 2 - 254, 115, 64, 24);
	Component::setBounds(*(_QWORD*)(a1 + 328), *(_DWORD*)(a1 + 40) / 2 - 242, *(_DWORD*)(a1 + 44) - 40, 150, 32);
	Component::setBounds(*(_QWORD*)(a1 + 336), *(_DWORD*)(a1 + 40) / 2 + 110, *(_DWORD*)(a1 + 44) - 40, 150, 32);
	Component::setBounds(*(_QWORD*)(a1 + 344), *(_DWORD*)(a1 + 40) / 2 + 243, 71, 15, 15);
	Component::setBounds(*(_QWORD*)(a1 + 352), *(_DWORD*)(a1 + 40) / 2 - 249, 27, 288, 40);
	return Component::setBounds(*(_QWORD*)(a1 + 360), *(_DWORD*)(a1 + 40) / 2 - 240, 142, 136, 24);*/
}

void CloudSupport::buttonClicked(Button*)
{
	/*if (a2 != *(_QWORD*)(a1 + 112))
	{
		if (a2 == *(_QWORD*)(a1 + 152))
		{
			v3 = qword_140EBFF78;
			v29 = operator new(0x220ui64);
			v4 = sub_140189A70(v29);
			sub_140274EA0(v3, v4);
		}
		else if (a2 == *(_QWORD*)(a1 + 160))
		{
			v5 = *(_QWORD*)(a1 + 136);
			v6 = (char**)sub_14040E640(v5, &v32);
			v7 = sub_14031A560(v6, &v31);
			LOBYTE(v8) = 1;
			sub_14040E360(v5, v7, v8);
			v9 = v31 - 16;
			if ((*((_DWORD*)v31 - 4) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v9) == -1)
				j_j_free(v9);
			v10 = (void*)(v32 - 16);
			if ((*(_DWORD*)(v32 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v10) == -1)
				j_j_free(v10);
			if ((unsigned __int8)sub_1401149C0(a1 - 176))
			{
				v11 = Button::getToggleState(*(_QWORD*)(a1 + 112));
				v12 = *(_BYTE*)(a1 + 64);
				if (v11)
				{
					if (v12)
					{
						sub_140048D00(&v22, "AttachSetupAndImage");
						v13 = *(_QWORD*)(a1 + 56);
						*(_QWORD*)(a1 + 56) = v22;
					}
					else
					{
						sub_140048D00(&v23, "AttachSetup");
						v13 = *(_QWORD*)(a1 + 56);
						*(_QWORD*)(a1 + 56) = v23;
					}
					v14 = (void*)(v13 - 16);
					v15 = *(_DWORD*)(v13 - 16);
				}
				else
				{
					if (v12)
					{
						sub_140048D00(&v24, "AttachImage");
						v16 = *(_QWORD*)(a1 + 56);
						*(_QWORD*)(a1 + 56) = v24;
					}
					else
					{
						sub_140048D00(&v25, "DoNotAttach");
						v16 = *(_QWORD*)(a1 + 56);
						*(_QWORD*)(a1 + 56) = v25;
					}
					v14 = (void*)(v16 - 16);
					v15 = *(_DWORD*)(v16 - 16);
				}
				if ((v15 & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v14) == -1)
					j_j_free(v14);
				v17 = operator new(0x2A0ui64);
				v27 = v17;
				v28 = &v29;
				v18 = *(void**)(a1 + 72);
				v29 = v18;
				if ((*((_DWORD*)v18 - 4) & 0x30000000) == 0)
					_InterlockedIncrement((volatile signed __int32*)v18 - 4);
				v19 = sub_14040E640(*(_QWORD*)(a1 + 136), v26);
				v20 = *(_QWORD*)(a1 + 56);
				v30 = v20;
				if ((*(_DWORD*)(v20 - 16) & 0x30000000) == 0)
					_InterlockedIncrement((volatile signed __int32*)(v20 - 16));
				v21 = sub_14011B160(v17, &v30, v19, &v29);
				sub_14040F9D0(v21);
			}
		}
		else if (a2 == *(_QWORD*)(a1 + 168))
		{
			sub_140381130(a1 + 24, a1 + 32);
			*(_BYTE*)(a1 + 64) = 0;
			(*(void(__fastcall * *)(_QWORD, _QWORD))(**(_QWORD * *)(a1 + 168) + 88i64))(*(_QWORD*)(a1 + 168), 0i64);
			Component::setEnabled(*(_QWORD*)(a1 + 168), 0);
			Component::repaint(a1 - 176);
		}
	}*/
}