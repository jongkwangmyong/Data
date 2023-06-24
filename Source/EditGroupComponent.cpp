#include "EditGroupComponent.h"
EditGroupComponent::EditGroupComponent()
{

}

EditGroupComponent::~EditGroupComponent()
{

}

void EditGroupComponent::paint(Graphics& g)
{
/*
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
	return Graphics::fillAll(a2, *v6);
*/
}

void EditGroupComponent::resized()
{
/*
	v1 = 40;
	Component::setBounds(*(_QWORD*)(a1 + 216), *(_DWORD*)(a1 + 40) / 2 - 100, 8, 200, 40);
	v3 = 150;
	v4 = 32;
	Component::setBounds(*(_QWORD*)(a1 + 224), *(_DWORD*)(a1 + 40) - 150, *(_DWORD*)(a1 + 44) - 40, 150, 32);
	Component::setBounds(*(_QWORD*)(a1 + 280), 0, *(_DWORD*)(a1 + 44) - 40, 150, 32);
	Component::setBounds(*(_QWORD*)(a1 + 304), *(_DWORD*)(a1 + 40) / 2 - 225, 0, 450, 50);
	Component::setBounds(*(_QWORD*)(a1 + 312), 0, *(_DWORD*)(a1 + 44) - 134, 150, 32);
	Component::setBounds(*(_QWORD*)(a1 + 320), 0, *(_DWORD*)(a1 + 44) - 87, 150, 32);
	Component::setBounds(*(_QWORD*)(a1 + 328), *(_DWORD*)(a1 + 40) - 150, 264, 150, 130);
	Component::setBounds(*(_QWORD*)(a1 + 352), *(_DWORD*)(a1 + 40) / 2 - 248, *(_DWORD*)(a1 + 44) / 2 - 250, 500, 500);
	v5 = *(_DWORD*)(a1 + 40);
	v6 = 150;
	v7 = *(_DWORD*)(a1 + 44);
	if (v5 < 150)
		v6 = *(_DWORD*)(a1 + 40);
	v8 = v5 - v6;
	if (v8 < 150)
		v3 = v8;
	v9 = v8 - v3;
	if (v7 < 40)
		v1 = *(_DWORD*)(a1 + 44);
	v10 = v7 - v1;
	if (v9 <= v7 - v1)
		v10 = v9;
	Component::setBounds(*(_QWORD*)(a1 + 352), v6 + (v9 - v10) / 2, v1 + (v7 - v1 - v10) / 2, v10, v10);
	v11 = 24;
	if (v7 < 32)
		v4 = v7;
	v12 = 24;
	v13 = v7 - v4;
	if (v13 < 24)
		v12 = v13;
	v14 = v12 + v4;
	Component::setBounds(*(_QWORD*)(a1 + 232), 0, v4, v6, v12);
	v15 = v13 - v12;
	v16 = 24;
	if (v15 < 24)
		v16 = v15;
	Component::setBounds(*(_QWORD*)(a1 + 240), 0, v14, v6, v16);
	v17 = v15 - v16;
	v18 = 24;
	if (v17 < 24)
		v18 = v17;
	v19 = v14 + v18 + v16;
	v20 = v17 - v18;
	v21 = 24;
	if (v20 < 24)
		v21 = v20;
	v22 = v21 + v19;
	Component::setBounds(*(_QWORD*)(a1 + 248), 0, v19, v6, v21);
	v23 = v20 - v21;
	v24 = 24;
	if (v23 < 24)
		v24 = v23;
	Component::setBounds(*(_QWORD*)(a1 + 256), 0, v22, v6, v24);
	v25 = v23 - v24;
	v26 = 24;
	if (v25 < 24)
		v26 = v25;
	v27 = v25 - v26;
	v28 = v22 + v26 + v24;
	v29 = 24;
	if (v27 < 24)
		v29 = v27;
	v30 = v28 + v29;
	Component::setBounds(*(_QWORD*)(a1 + 264), 0, v28, v6, v29);
	v31 = v27 - v29;
	v32 = 24;
	v33 = v30;
	if (v31 < 24)
		v32 = v31;
	v34 = v32 + v30;
	Component::setBounds(*(_QWORD*)(a1 + 272), 0, v33, v6, v32);
	v35 = v31 - v32;
	v36 = 24;
	if (v35 < 24)
		v36 = v35;
	Component::setBounds(*(_QWORD*)(a1 + 296), 0, v34, v6, v36);
	Component::setBounds(*(_QWORD*)(a1 + 288), 0, v34 + 7, v6, v36);
	v37 = v35 - v36;
	v38 = 24;
	if (v37 < 24)
		v38 = v37;
	v39 = v37 - v38;
	v40 = v34 + v38 + v36;
	v41 = 24;
	if (v39 < 24)
		v41 = v39;
	v42 = v41 + v40;
	Component::setBounds(*(_QWORD*)(a1 + 336), 0, v40, v6, v41);
	v43 = v39 - v41;
	v44 = 24;
	if (v43 < 24)
		v44 = v43;
	Component::setBounds(*(_QWORD*)(a1 + 344), 0, v42, v6, v44);
	v45 = v43 - v44;
	v46 = 24;
	if (v45 < 24)
		v46 = v45;
	v47 = v45 - v46;
	v48 = v42 + v46 + v44;
	v49 = 24;
	if (v47 < 24)
		v49 = v47;
	v50 = v49 + v48;
	Component::setBounds(*(_QWORD*)(a1 + 376), 0, v48, v6, v49);
	v51 = v47 - v49;
	v52 = 24;
	if (v51 < 24)
		v52 = v51;
	Component::setBounds(*(_QWORD*)(a1 + 384), 0, v50, v6, v52);
	v53 = v51 - v52;
	v54 = 24;
	if (v53 < 24)
		v54 = v53;
	v55 = v53 - v54;
	v56 = v54 + v52 + v50;
	v57 = 24;
	if (v55 < 24)
		v57 = v55;
	Component::setBounds(*(_QWORD*)(a1 + 360), 0, v56, v6, v57);
	v58 = v55 - v57;
	if (v58 < 24)
		v11 = v58;
	return Component::setBounds(*(_QWORD*)(a1 + 368), 0, v57 + v56, v6, v11);
*/
}

void EditGroupComponent::buttonClicked(Button*)
{
	/*if (a2 == a1[5])
	{
		if ((unsigned __int8)sub_14022D2F0(*((_QWORD*)ArgList + 66))
			&& !(unsigned __int8)sub_14022D460(*((_QWORD*)ArgList + 66))
			&& (unsigned __int8)sub_14022BB20(*((_QWORD*)ArgList + 66)))
		{
			sub_140048D00(
				&v88,
				"The Bass Management is set to full band.To use Autophase calibration, set bass management crossover frequency.Ot"
				"herwise, external bass management and phase calibration must be available.Are you sure that you want to continue?");
			sub_14031AF20(&v69, &v88);
			v3 = (void*)(v88 - 16);
			if ((*(_DWORD*)(v88 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v3) == -1)
				j_j_free(v3);
			sub_140048D00(&v73, "No");
			sub_14031AF20(&v78, &v73);
			v4 = (void*)(v73 - 16);
			if ((*(_DWORD*)(v73 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v4) == -1)
				j_j_free(v4);
			sub_140048D00(&v74, "Yes");
			sub_14031AF20(&v77, &v74);
			v5 = (void*)(v74 - 16);
			if ((*(_DWORD*)(v74 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v5) == -1)
				j_j_free(v5);
			sub_140048D00(&v75, "Confirm Bass Management");
			sub_14031AF20(&v76, &v75);
			v6 = (void*)(v75 - 16);
			if ((*(_DWORD*)(v75 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v6) == -1)
				j_j_free(v6);
			v7 = (unsigned __int8)sub_14040FB40(
				1,
				(unsigned int)& v76,
				(unsigned int)& v69,
				(unsigned int)& v77,
				(__int64)& v78,
				0i64,
				0i64);
			v8 = (void*)(v76 - 16);
			if ((*(_DWORD*)(v76 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v8) == -1)
				j_j_free(v8);
			v9 = (void*)(v77 - 16);
			if ((*(_DWORD*)(v77 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v9) == -1)
				j_j_free(v9);
			v10 = (void*)(v78 - 16);
			if ((*(_DWORD*)(v78 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v10) == -1)
				j_j_free(v10);
			v11 = (void*)(v69 - 16);
			v12 = *(_DWORD*)(v69 - 16);
			if (v7 != 1)
				goto LABEL_174;
			if ((v12 & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v11) == -1)
				j_j_free(v11);
		}
		sub_14040E640(a1[7], &v70);
		if (!(unsigned __int8)sub_1401425D0(a1 - 23))
		{
		LABEL_173:
			v11 = (void*)(v70 - 16);
			v12 = *(_DWORD*)(v70 - 16);
		LABEL_174:
			if ((v12 & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v11) == -1)
				j_j_free(v11);
			return;
		}
		v13 = *((_QWORD*)ArgList + 66);
		v67 = v70;
		if ((*(_DWORD*)(v70 - 16) & 0x30000000) == 0)
			_InterlockedIncrement((volatile signed __int32*)(v70 - 16));
		v64 = &v67;
		v14 = *(_QWORD*)(*(_QWORD*)(v13 + 8) + 8i64 * *(int*)(v13 + 268) - 8);
		v71 = v67;
		if ((*(_DWORD*)(v67 - 16) & 0x30000000) == 0)
			_InterlockedIncrement((volatile signed __int32*)(v67 - 16));
		sub_140216080(v14, &v71);
		v15 = (void*)(v67 - 16);
		if ((*(_DWORD*)(v67 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v15) == -1)
			j_j_free(v15);
		v16 = ArgList;
		v17 = *((_QWORD*)ArgList + 66);
		if (*(_DWORD*)(v17 + 264))
		{
			*(_BYTE*)(*(_QWORD*)(*(_QWORD*)(v17 + 8) + 8i64 * *(int*)(v17 + 268) - 8) + 664i64) = 1;
			v16 = ArgList;
		}
		v93 = (_BYTE*)v16[281];
		v18 = (volatile signed __int32*)(v93 - 16);
		if ((*((_DWORD*)v93 - 4) & 0x30000000) == 0)
			_InterlockedIncrement(v18);
		if (!(unsigned int)String::isNotEmpty(v93, &unk_14046D9AF))
		{
			v19 = *((_QWORD*)ArgList + 272);
			v79 = v19;
			if ((*(_DWORD*)(v19 - 16) & 0x30000000) == 0)
				_InterlockedIncrement((volatile signed __int32*)(v19 - 16));
			sub_140308BF0(&v90, &v79);
			v20 = (void*)(v79 - 16);
			if ((*(_DWORD*)(v79 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v20) == -1)
				j_j_free(v20);
			sub_140048D00(&v81, "*.sam");
			sub_140048D00(&v80, "GLM4 - Save As...");
			sub_14031AF20(&v82, &v80);
			v21 = (void*)(v80 - 16);
			if ((*(_DWORD*)(v80 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v21) == -1)
				j_j_free(v21);
			v95 = v82;
			if ((*(_DWORD*)(v82 - 16) & 0x30000000) == 0)
				_InterlockedIncrement((volatile signed __int32*)(v82 - 16));
			v96 = v81;
			v22 = (volatile signed __int32*)(v81 - 16);
			if ((*((_DWORD*)v81 - 4) & 0x30000000) == 0)
				_InterlockedIncrement(v22);
			v97 = v90;
			v23 = (volatile signed __int32*)(v90 - 16);
			if ((*(_DWORD*)(v90 - 16) & 0x30000000) == 0)
				_InterlockedIncrement(v23);
			v98 = 0i64;
			Block = 0i64;
			v100 = 0i64;
			v101 = 1;
			v102 = 0i64;
			v103 = 0i64;
			v24 = v81;
			if (*v81)
			{
				v25 = *v81;
				while (v25 == 32 || (unsigned __int8)(v25 - 9) <= 4u)
				{
					++v24;
					if (v25 < 0)
					{
						v26 = 64;
						if ((v25 & 0x40) != 0)
						{
							do
							{
								if (v26 <= 8u)
									break;
								++v24;
								v26 >>= 1;
							} while ((v26 & (unsigned __int8)v25) != 0);
						}
					}
					v25 = *v24;
					if (!*v24)
						goto LABEL_66;
				}
			}
			else
			{
			LABEL_66:
				sub_140048D00(&v91, "*");
				v27 = v96;
				v96 = v91;
				v28 = v27 - 16;
				if ((*((_DWORD*)v27 - 4) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v28) == -1)
					j_j_free(v28);
			}
			v29 = (void*)(v82 - 16);
			if ((*(_DWORD*)(v82 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v29) == -1)
				j_j_free(v29);
			if ((*v22 & 0x30000000) == 0 && _InterlockedDecrement(v22) == -1)
				j_j_free((void*)v22);
			Component::BailOutChecker(&v83, qword_140EC0010);
			for (i = 0; i < SHIDWORD(v100); ++i)
				sub_140002BF0((char*)Block + 72 * i);
			HIDWORD(v100) = 0;
			if ((_DWORD)v100)
			{
				free(Block);
				Block = 0i64;
			}
			LODWORD(v100) = 0;
			v31 = v103;
			if (v103)
			{
				v103 = 0i64;
				(**v31)(v31, 1i64);
			}
			if ((_BYTE)v101)
			{
				v64 = (__int64*)operator new(0xC8ui64);
				v32 = sub_1400B76F0(v64, &v95, 134i64);
				if (v32)
					v33 = v32 + 176;
				else
					v33 = 0i64;
			}
			else
			{
				v64 = (__int64*)operator new(0xC08ui64);
				v33 = sub_140091130(v64, &v95, 134i64);
			}
			v34 = v103;
			v103 = (void(__fastcall * **)(_QWORD, __int64))v33;
			if (v34)
			{
				(**v34)(v34, 1i64);
				v33 = (__int64)v103;
			}
			(*(void(__fastcall * *)(__int64))(*(_QWORD*)v33 + 16i64))(v33);
			v35 = SHIDWORD(v100) > 0;
			v36 = v83;
			v37 = v83 != 0;
			if (v83)
			{
				if (*(_QWORD*)(v83 + 16) && Component::isShowing(*(_QWORD*)(v83 + 16)))
				{
					v38 = v37 ? *(_QWORD*)(v36 + 16) : 0i64;
					if (!Component::isCurrentlyBlockedByAnotherModalComponent(v38))
					{
						if (v37)
							v39 = *(_QWORD*)(v36 + 16);
						else
							v39 = 0i64;
						Component::grabKeyboardFocusInternal(v39, 2u, 1);
					}
				}
				if (v36 && !_InterlockedAdd((volatile signed __int32*)(v36 + 8), 0xFFFFFFFF))
					(**(void(__fastcall * **)(__int64, __int64))v83)(v83, 1i64);
			}
			if (!v35)
				goto LABEL_149;
			sub_14040F1B0(&v95, &v63);
			v40 = String::lastIndexOfChar(&v63, 92);
			v41 = v40 + 1;
			v42 = String::lastIndexOfChar(&v63, 46);
			if (v42 <= v40 + 1)
			{
				if (v41 > 0)
				{
					v43 = v63;
					while (1)
					{
						v44 = *v43;
						if (!*v43)
							break;
						++v43;
						if (v44 < 0)
						{
							for (j = 64; ((unsigned __int8)v44 & j) != 0; j >>= 1)
							{
								if (j <= 8u)
									break;
								++v43;
							}
						}
						if (--v40 < 0)
						{
							String::String(&v65, v43);
							goto LABEL_117;
						}
					}
					v65 = (char*)dword_140DDCDD0;
				}
				else
				{
					v65 = v63;
					if ((*((_DWORD*)v63 - 4) & 0x30000000) == 0)
						_InterlockedIncrement((volatile signed __int32*)v63 - 4);
				}
			}
			else
			{
				String::substring(&v63, &v65, v41, v42);
			}
		LABEL_117:
			if (!(unsigned __int8)sub_14026E2D0(&v65))
			{
				v92 = dword_140DDCDD0;
				sub_140048D00(&v87, "\\ / : * ? | < > \" # % & { } $ ! ' @ + = `");
				sub_140048D00(&v84, "Setup name contains invalid charaters, please type in a name without special characters.");
				sub_14031AF20(&v66, &v84);
				v47 = (void*)(v84 - 16);
				if ((*(_DWORD*)(v84 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v47) == -1)
					j_j_free(v47);
				v64 = &v66;
				ImageCache::getFromHashCode(&v66, "\n", (int)"");
				v68 = v66;
				if ((*(_DWORD*)(v66 - 16) & 0x30000000) == 0)
					_InterlockedIncrement((volatile signed __int32*)(v66 - 16));
				v48 = (void*)(v66 - 16);
				if ((*(_DWORD*)(v66 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v48) == -1)
					j_j_free(v48);
				v89 = &v68;
				v89 = *(__int64**)sub_14031B920(&v68, &v87);
				v49 = (volatile signed __int32*)(v89 - 2);
				if ((*(_DWORD*)(v89 - 2) & 0x30000000) == 0)
					_InterlockedIncrement(v49);
				v50 = (void*)(v68 - 16);
				if ((*(_DWORD*)(v68 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v50) == -1)
					j_j_free(v50);
				sub_140048D00(&v85, "Error");
				sub_14031AF20(&v86, &v85);
				v51 = (void*)(v85 - 16);
				if ((*(_DWORD*)(v85 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v51) == -1)
					j_j_free(v51);
				sub_14040FE70(2, (unsigned int)& v86, (unsigned int)& v89, (unsigned int)& v92, 0i64);
				v52 = (void*)(v86 - 16);
				if ((*(_DWORD*)(v86 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v52) == -1)
					j_j_free(v52);
				if ((*v49 & 0x30000000) == 0 && _InterlockedDecrement(v49) == -1)
					j_j_free((void*)v49);
				v53 = (void*)(v87 - 16);
				if ((*(_DWORD*)(v87 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v53) == -1)
					j_j_free(v53);
				v54 = v65 - 16;
				if ((*((_DWORD*)v65 - 4) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v54) == -1)
					j_j_free(v54);
				v55 = v63 - 16;
				if ((*((_DWORD*)v63 - 4) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v55) == -1)
					j_j_free(v55);
			LABEL_149:
				sub_14040F290(&v95);
				if ((*v23 & 0x30000000) == 0 && _InterlockedDecrement(v23) == -1)
					j_j_free((void*)v23);
				v56 = *v18;
				goto LABEL_170;
			}
			sub_1401F7670(ArgList, v46, 0i64);
			v94 = v63;
			v57 = (volatile signed __int32*)(v63 - 16);
			if ((*((_DWORD*)v63 - 4) & 0x30000000) == 0)
				_InterlockedIncrement(v57);
			v72 = v63;
			if ((*v57 & 0x30000000) == 0)
				_InterlockedIncrement(v57);
			sub_140200820(ArgList, &v72, 0i64);
			if ((*v57 & 0x30000000) == 0 && _InterlockedDecrement(v57) == -1)
				j_j_free((void*)v57);
			v58 = v65 - 16;
			if ((*((_DWORD*)v65 - 4) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v58) == -1)
				j_j_free(v58);
			if ((*v57 & 0x30000000) == 0 && _InterlockedDecrement(v57) == -1)
				j_j_free((void*)v57);
			sub_14040F290(&v95);
			if ((*v23 & 0x30000000) == 0 && _InterlockedDecrement(v23) == -1)
				j_j_free((void*)v23);
		}
		v59 = qword_140EBFF78;
		v64 = (__int64*)operator new(0x390ui64);
		v60 = sub_1400EFC50(v64);
		sub_140274EA0(v59, v60);
		v56 = *v18;
	LABEL_170:
		if ((v56 & 0x30000000) == 0 && _InterlockedDecrement(v18) == -1)
			j_j_free((void*)v18);
		goto LABEL_173;
	}
	if (a2 == a1[12])
	{
		v61 = qword_140EBFF78;
		v94 = (char*)operator new(0x1D0ui64);
		v62 = sub_14012D4C0(v94, 0i64);
		sub_140274EA0(v61, v62);
	}
	else if (a2 != a1[16] && a2 == a1[17])
	{
		sub_140274D60(qword_140EBFF78);
	}*/
}

void EditGroupComponent::comboBoxChanged(ComboBox* comboBoxThatHasChanged)
{
	/*v3 = 0;
	v4 = 0;
	v5 = *(_QWORD*)(a1 + 72);
	if (a2 == v5)
	{
		v6 = ComboBox::getSelectedItemIndex(v5);
		v8 = *(__int64**)(a1 + 96);
		v9 = *v8;
		if (v6)
		{
			LOBYTE(v7) = 1;
			(*(void(__fastcall * *)(__int64*, __int64))(v9 + 88))(v8, v7);
			(*(void(__fastcall * *)(_QWORD, _QWORD))(**(_QWORD * *)(a1 + 88) + 88i64))(*(_QWORD*)(a1 + 88), 0i64);
			if ((unsigned int)ComboBox::getSelectedItemIndex(*(_QWORD*)(a1 + 88)))
				ComboBox::getSelectedItemIndex(*(_QWORD*)(a1 + 88));
			*(_BYTE*)(*(_QWORD*)(*(_QWORD*)(*((_QWORD*)ArgList + 66) + 8i64)
				+ 8i64 * *(int*)(*((_QWORD*)ArgList + 66) + 268i64)
				- 8)
				+ 531i64) = 0;
		}
		else
		{
			(*(void(__fastcall * *)(__int64*, _QWORD))(v9 + 88))(v8, 0i64);
			LOBYTE(v10) = 1;
			(*(void(__fastcall * *)(_QWORD, __int64))(**(_QWORD * *)(a1 + 88) + 88i64))(*(_QWORD*)(a1 + 88), v10);
			v11 = 1;
			if ((unsigned int)ComboBox::getSelectedItemIndex(*(_QWORD*)(a1 + 88)))
				v11 = 5 * (ComboBox::getSelectedItemIndex(*(_QWORD*)(a1 + 88)) + 9);
			LOBYTE(v12) = 1;
			sub_140218C10(
				*(_QWORD*)(*(_QWORD*)(*((_QWORD*)ArgList + 66) + 8i64)
					+ 8i64 * *(int*)(*((_QWORD*)ArgList + 66) + 268i64)
					- 8),
				v11,
				v12);
		}
		return;
	}
	v13 = *(_QWORD*)(a1 + 88);
	if (a2 == v13)
	{
		v14 = 1;
		if ((unsigned int)ComboBox::getSelectedItemIndex(v13))
			v14 = 5 * (ComboBox::getSelectedItemIndex(*(_QWORD*)(a1 + 88)) + 9);
		v15 = *((_QWORD*)ArgList + 66);
		v16 = *(int*)(v15 + 268);
		v17 = *(_QWORD*)(v15 + 8);
		LOBYTE(v15) = 1;
		sub_140218C10(*(_QWORD*)(v17 + 8 * v16 - 8), v14, v15);
		return;
	}
	v18 = *(_QWORD*)(a1 + 144);
	if (a2 == v18)
	{
		v19 = ComboBox::getSelectedItemIndex(v18);
		v20 = *((_QWORD*)ArgList + 66);
		if (v19 == 1)
		{
			if (*(_DWORD*)(v20 + 264))
			{
				*(_DWORD*)(*(_QWORD*)(*(_QWORD*)(v20 + 8) + 8i64 * *(int*)(v20 + 268) - 8) + 640i64) = 1;
				if ((__int64)(*(_QWORD*)(v20 + 40) - *(_QWORD*)(v20 + 32)) >> 3)
				{
					v21 = 0i64;
					do
					{
						sub_1402091C0(*(_QWORD*)(*(_QWORD*)(v20 + 32) + 8 * v21), 1i64);
						v21 = ++v3;
					} while (v3 < (unsigned __int64)((__int64)(*(_QWORD*)(v20 + 40) - *(_QWORD*)(v20 + 32)) >> 3));
				}
				sub_14022C7A0(v20);
			LABEL_24:
				sub_14022E9E0(v20);
				goto LABEL_25;
			}
		}
		else if (*(_DWORD*)(v20 + 264))
		{
			*(_DWORD*)(*(_QWORD*)(*(_QWORD*)(v20 + 8) + 8i64 * *(int*)(v20 + 268) - 8) + 640i64) = 4;
			if ((__int64)(*(_QWORD*)(v20 + 40) - *(_QWORD*)(v20 + 32)) >> 3)
			{
				v22 = 0i64;
				do
				{
					sub_1402091C0(*(_QWORD*)(*(_QWORD*)(v20 + 32) + 8 * v22), 4i64);
					v22 = ++v3;
				} while (v3 < (unsigned __int64)((__int64)(*(_QWORD*)(v20 + 40) - *(_QWORD*)(v20 + 32)) >> 3));
			}
			goto LABEL_24;
		}
	LABEL_25:
		sub_140133CE0(*(_QWORD*)(a1 + 152));
		return;
	}
	v23 = *(_QWORD*)(a1 + 168);
	if (a2 != v23)
		return;
	v24 = *(_QWORD*)(*(_QWORD*)(*((_QWORD*)ArgList + 66) + 8i64)
		+ 8i64 * *(int*)(*((_QWORD*)ArgList + 66) + 268i64)
		- 8);
	v25 = sub_14040BAA0(v23);
	if (v25 == 1)
	{
		v26 = 2i64;
	LABEL_31:
		sub_140218A30(v24, v26);
		goto LABEL_32;
	}
	if (v25 == 2)
	{
		v26 = 1i64;
		goto LABEL_31;
	}
LABEL_32:
	v70 = dword_140DDCDD0;
	v69 = (char*)dword_140DDCDD0;
	v27 = *(_QWORD*)(v24 + 600);
	if ((*(_DWORD*)(v27 - 16) & 0x30000000) == 0)
		_InterlockedIncrement((volatile signed __int32*)(v27 - 16));
	v28 = (_DWORD*)(_InterlockedExchange64((volatile __int64*)& v70, *(_QWORD*)(v24 + 600)) - 16);
	if ((*v28 & 0x30000000) == 0 && _InterlockedDecrement(v28) == -1)
		j_j_free(v28);
	v29 = *(_QWORD*)(v24 + 608);
	if ((*(_DWORD*)(v29 - 16) & 0x30000000) == 0)
		_InterlockedIncrement((volatile signed __int32*)(v29 - 16));
	v30 = (_DWORD*)(_InterlockedExchange64((volatile __int64*)& v69, *(_QWORD*)(v24 + 608)) - 16);
	if ((*v30 & 0x30000000) == 0 && _InterlockedDecrement(v30) == -1)
		j_j_free(v30);
	sub_1401FD8D0(v30, v66);
	v31 = 0;
	v67 = 0;
	v32 = 0;
	v68 = 0;
	v33 = (__int64**)v66[0];
	v56 = (__int64**)v66[0];
	v63 = (v66[1] - v66[0]) >> 3;
	if (!v63)
	{
	LABEL_79:
		v44 = 1;
		goto LABEL_80;
	}
	v34 = v61;
	v35 = v61;
	v36 = v61;
	while (1)
	{
		v37 = **v33;
		if (!v37 || !*(_BYTE*)(v37 + 96))
			goto LABEL_77;
		v38 = (volatile signed __int32*)(*v33)[21];
		Block = (void*)(v38 - 4);
		if ((*(v38 - 4) & 0x30000000) == 0)
			_InterlockedIncrement(v38 - 4);
		v39 = v4 | 1;
		if (!(unsigned int)String::isNotEmpty(v38, "8331A"))
			goto LABEL_59;
		v34 = (volatile signed __int32*)(*v33)[21];
		if ((*(v34 - 4) & 0x30000000) == 0)
			_InterlockedIncrement(v34 - 4);
		v39 |= 2u;
		if (!(unsigned int)String::isNotEmpty(v34, "8341A"))
			goto LABEL_59;
		v35 = (volatile signed __int32*)(*v33)[21];
		if ((*(v35 - 4) & 0x30000000) == 0)
			_InterlockedIncrement(v35 - 4);
		v39 |= 4u;
		if (!(unsigned int)String::isNotEmpty(v35, "8351B"))
			goto LABEL_59;
		v36 = (volatile signed __int32*)(*v33)[21];
		if ((*(v36 - 4) & 0x30000000) == 0)
			_InterlockedIncrement(v36 - 4);
		v39 |= 8u;
		if ((unsigned int)String::isNotEmpty(v36, "8361A"))
			v40 = 0;
		else
			LABEL_59:
		v40 = 1;
		if ((v39 & 8) != 0)
		{
			v39 &= 0xFFFFFFF7;
			v41 = v36 - 4;
			if ((*(v36 - 4) & 0x30000000) == 0 && _InterlockedDecrement(v41) == -1)
				j_j_free((void*)v41);
		}
		if ((v39 & 4) != 0)
		{
			v39 &= 0xFFFFFFFB;
			v42 = v35 - 4;
			if ((*(v35 - 4) & 0x30000000) == 0 && _InterlockedDecrement(v42) == -1)
				j_j_free((void*)v42);
		}
		if ((v39 & 2) != 0)
		{
			v39 &= 0xFFFFFFFD;
			v43 = v34 - 4;
			if ((*(v34 - 4) & 0x30000000) == 0 && _InterlockedDecrement(v43) == -1)
				j_j_free((void*)v43);
		}
		v4 = v39 & 0xFFFFFFFE;
		if ((*(_DWORD*)Block & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)Block) == -1)
			j_j_free(Block);
		if (!v40)
			break;
		++v67;
		v33 = v56;
		v32 = v68;
	LABEL_77:
		v68 = ++v32;
		v56 = ++v33;
		if (v32 >= v63)
		{
			v31 = v67;
			goto LABEL_79;
		}
	}
	v44 = 0;
	v31 = v67;
LABEL_80:
	v45 = 0;
	if (v31 <= 2)
		v45 = v44;
	sub_140048D00(&v64, "Not calibrated!");
	v46 = v64;
	v47 = v69 != v64 && (unsigned int)compareIgnoreCase(v69, v64) && !v45;
	v48 = v46 - 16;
	if ((*((_DWORD*)v46 - 4) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v48) == -1)
		j_j_free(v48);
	if (v47)
	{
		v65 = dword_140DDCDD0;
		sub_140048D00(&v57, "Phase linearity has been changed and calibrations must be run again.");
		sub_14031AF20(&v60, &v57);
		v49 = (void*)(v57 - 16);
		if ((*(_DWORD*)(v57 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v49) == -1)
			j_j_free(v49);
		sub_140048D00(&v58, "Phase linearity changed");
		sub_14031AF20(&v59, &v58);
		v50 = (void*)(v58 - 16);
		if ((*(_DWORD*)(v58 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v50) == -1)
			j_j_free(v50);
		sub_14040FE70(3, (unsigned int)& v59, (unsigned int)& v60, (unsigned int)& v65, 0i64);
		v51 = (void*)(v59 - 16);
		if ((*(_DWORD*)(v59 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v51) == -1)
			j_j_free(v51);
		v52 = (void*)(v60 - 16);
		if ((*(_DWORD*)(v60 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v52) == -1)
			j_j_free(v52);
	}
	v53 = v66[0];
	if (v66[0])
	{
		if ((unsigned __int64)(8 * ((v66[2] - v66[0]) >> 3)) >= 0x1000)
		{
			v53 = (void*) * ((_QWORD*)v66[0] - 1);
			if ((unsigned __int64)(v66[0] - v53 - 8) > 0x1F)
				invalid_parameter_noinfo_noreturn();
		}
		j_j_free(v53);
	}
	v54 = v69 - 16;
	if ((*((_DWORD*)v69 - 4) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v54) == -1)
		j_j_free(v54);
	v55 = v70 - 4;
	if ((*(v70 - 4) & 0x30000000) == 0 && _InterlockedDecrement(v55) == -1)
		j_j_free(v55);*/
}

void EditGroupComponent::changeListenerCallback(ChangeBroadcaster* source)
{
/*
	result = (char*)ArgList + 880;
	if (a2 == (char*)ArgList + 880)
		result = (char*)sub_140133CE0(*(_QWORD*)(a1 + 176));
	return result;
*/
}

void EditGroupComponent::sliderValueChanged(Slider* slider)
{
/*
	result = *(_QWORD*)(a1 + 64);
	if (a2 == result)
	{
		v3 = *(double*)sub_14009F390(*(_QWORD*)(result + 512)).m128_u64;
		result = sub_14022BA80(*((_QWORD*)ArgList + 66), (unsigned int)(int)v3);
	}
	else
	{
		v4 = *(_QWORD*)(a1 + 192);
		if (a2 == v4)
		{
			v5 = *(double*)sub_14009F390(*(_QWORD*)(v4 + 512)).m128_u64;
			v6 = 0;
			v7 = *(_QWORD*)(*(_QWORD*)(*((_QWORD*)ArgList + 66) + 8i64)
				+ 8i64 * *(int*)(*((_QWORD*)ArgList + 66) + 268i64)
				- 8);
			*(float*)(v7 + 536) = v5;
			result = (__int64)(*(_QWORD*)(v7 + 8) - *(_QWORD*)v7) >> 3;
			if (result)
			{
				v8 = 0i64;
				do
				{
					*(float*)(*(_QWORD*)(*(_QWORD*)v7 + 8 * v8) + 16i64) = v5;
					v9 = *(__int64**)(*(_QWORD*)v7 + 8 * v8);
					v10 = *v9;
					(*(void(__fastcall * *)(__int64*))(*v9 + 160))(v9);
					(*(void(__fastcall * *)(__int64*, __int64, _QWORD))(v10 + 152))(v9, v11, 0i64);
					++v6;
					result = (__int64)(*(_QWORD*)(v7 + 8) - *(_QWORD*)v7) >> 3;
					v8 = v6;
				} while (v6 < result);
			}
		}
	}
	return result;*/
}