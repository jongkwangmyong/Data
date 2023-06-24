#include "OptimizationProgressWindow.h"

void OptimizationProgressWindow::threadComplete(bool userPressedCancel)
{

}

void OptimizationProgressWindow::run()
{
	/*v128 = &juce::MessageManagerLock::`vftable';
		v129 = 0i64;
	v130 = 0;
	Mtx_init_in_situ((_Mtx_t)v131, 2);
	Cnd_init_in_situ((_Cnd_t)v132);
	v132[72] = 0;
	v133 = 0i64;
	while (!(unsigned __int8)sub_140324270(&v129))
		;
	v134 = 1;
	if (a2)
	{
		if (qword_140EBFF18)
		{
			if (*(_BYTE*)(qword_140EBFF18 + 224))
			{
				sub_140048D00(&v102, "WaitingCanceled");
				v4 = &v102;
			}
			else
			{
				sub_140048D00(&v111, "CalCanceled");
				v4 = &v111;
			}
			sub_1400F5CA0(qword_140EBFF18, v4);
			sub_1400FAD40();
			if (qword_140EBFF18)
				(**(void(__fastcall * **)(__int64, __int64))qword_140EBFF18)(qword_140EBFF18, 1i64);
			qword_140EBFF18 = 0i64;
		}
		v117 = dword_140DDCDD0;
		sub_140048D00(&v79, "Optimization Aborted!");
		sub_14031AF20(&v82, &v79);
		v5 = (void*)(v79 - 16);
		if ((*(_DWORD*)(v79 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v5) == -1)
			j_j_free(v5);
		sub_140048D00(&v80, "Progress");
		sub_14031AF20(&v81, &v80);
		v6 = (void*)(v80 - 16);
		if ((*(_DWORD*)(v80 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v6) == -1)
			j_j_free(v6);
		sub_14040FE70(2, (unsigned int)& v81, (unsigned int)& v82, (unsigned int)& v117, 0i64);
		v7 = (void*)(v81 - 16);
		if ((*(_DWORD*)(v81 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v7) == -1)
			j_j_free(v7);
		v8 = (void*)(v82 - 16);
		if ((*(_DWORD*)(v82 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v8) == -1)
			j_j_free(v8);
	LABEL_210:
		if (a1 != 176)
			(**(void(__fastcall * **)(__int64, __int64))(a1 - 176))(a1 - 176, 1i64);
		goto LABEL_212;
	}
	v9 = (char*) * ((_QWORD*)ArgList + 273);
	v84 = v9;
	if ((*((_DWORD*)v9 - 4) & 0x30000000) == 0)
		_InterlockedIncrement((volatile signed __int32*)v9 - 4);
	sub_140308BF0(&v83, &v84);
	sub_14031A890(&v83, &v74, "error.txt");
	v10 = v83 - 16;
	if ((*((_DWORD*)v83 - 4) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v10) == -1)
		j_j_free(v10);
	v11 = v84 - 16;
	if ((*((_DWORD*)v84 - 4) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v11) == -1)
		j_j_free(v11);
	if (*v74)
	{
		v12 = (LPCWSTR*)sub_140046AE0(v118, &v74);
		if (GetFileAttributesW(*v12) != -1)
		{
			sub_1401FD680(v13, &v76, &v74);
			v14 = *(_DWORD*)(a1 + 680);
			if (v14 == 1)
			{
				sub_140048D00(&v85, "Ok");
				sub_14031AF20(&v88, &v85);
				v15 = (void*)(v85 - 16);
				if ((*(_DWORD*)(v85 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v15) == -1)
					j_j_free(v15);
				sub_140048D00(&v86, "Local calibration failed");
				sub_14031AF20(&v87, &v86);
				v16 = (void*)(v86 - 16);
				if ((*(_DWORD*)(v86 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v16) == -1)
					j_j_free(v16);
				sub_14040EFD0(2, (unsigned int)& v87, (unsigned int)& v76, (unsigned int)& v88, 0i64);
				v17 = (void*)(v87 - 16);
				if ((*(_DWORD*)(v87 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v17) == -1)
					j_j_free(v17);
				v18 = (void*)(v88 - 16);
				v19 = *(_DWORD*)(v88 - 16);
			}
			else
			{
				if (v14 != 2)
					goto LABEL_59;
				sub_140048D00(&v89, "Ok");
				sub_14031AF20(&v92, &v89);
				v20 = (void*)(v89 - 16);
				if ((*(_DWORD*)(v89 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v20) == -1)
					j_j_free(v20);
				sub_140048D00(&v90, "Cloud calibration failed");
				sub_14031AF20(&v91, &v90);
				v21 = (void*)(v90 - 16);
				if ((*(_DWORD*)(v90 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v21) == -1)
					j_j_free(v21);
				sub_14040EFD0(2, (unsigned int)& v91, (unsigned int)& v76, (unsigned int)& v92, 0i64);
				v22 = (void*)(v91 - 16);
				if ((*(_DWORD*)(v91 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v22) == -1)
					j_j_free(v22);
				v18 = (void*)(v92 - 16);
				v19 = *(_DWORD*)(v92 - 16);
			}
			if ((v19 & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v18) == -1)
				j_j_free(v18);
		LABEL_59:
			v23 = (volatile signed __int32*)(v76 - 16);
			if ((*(_DWORD*)(v76 - 16) & 0x30000000) == 0 && _InterlockedDecrement(v23) == -1)
				goto LABEL_206;
			goto LABEL_207;
		}
	}
	v112 = (_BYTE*) * ((_QWORD*)ArgList + 281);
	v24 = (volatile signed __int32*)(v112 - 16);
	if ((*((_DWORD*)v112 - 4) & 0x30000000) == 0)
		_InterlockedIncrement(v24);
	if ((unsigned int)String::isNotEmpty(v112, byte_14046DA29))
	{
		sub_140048D00(&v103, "Cancel");
		sub_14031AF20(&v110, &v103);
		v61 = (void*)(v103 - 16);
		if ((*(_DWORD*)(v103 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v61) == -1)
			j_j_free(v61);
		sub_140048D00(&v104, "Save");
		sub_14031AF20(&v109, &v104);
		v62 = (void*)(v104 - 16);
		if ((*(_DWORD*)(v104 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v62) == -1)
			j_j_free(v62);
		sub_140048D00(&v105, "Save acoustic settings to the Group preset?");
		sub_14031AF20(&v108, &v105);
		v63 = (void*)(v105 - 16);
		if ((*(_DWORD*)(v105 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v63) == -1)
			j_j_free(v63);
		sub_140048D00(&v106, "Calibration Completed");
		sub_14031AF20(&v107, &v106);
		v64 = (void*)(v106 - 16);
		if ((*(_DWORD*)(v106 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v64) == -1)
			j_j_free(v64);
		v65 = sub_14040FB40(1, (unsigned int)& v107, (unsigned int)& v108, (unsigned int)& v109, (__int64)& v110, 0i64, 0i64);
		v66 = (void*)(v107 - 16);
		if ((*(_DWORD*)(v107 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v66) == -1)
			j_j_free(v66);
		v67 = (void*)(v108 - 16);
		if ((*(_DWORD*)(v108 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v67) == -1)
			j_j_free(v67);
		v68 = (void*)(v109 - 16);
		if ((*(_DWORD*)(v109 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v68) == -1)
			j_j_free(v68);
		v69 = (void*)(v110 - 16);
		if ((*(_DWORD*)(v110 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v69) == -1)
			j_j_free(v69);
		if (v65 == 1)
		{
			sub_1401F2D10();
			sub_1401FBBD0();
			sub_1400F2C00(*(_QWORD*)(a1 + 664));
		}
	LABEL_203:
		if ((*v24 & 0x30000000) == 0 && _InterlockedDecrement(v24) == -1)
		{
			v23 = v24;
		LABEL_206:
			j_j_free((void*)v23);
		}
	LABEL_207:
		v70 = v74 - 16;
		if ((*((_DWORD*)v74 - 4) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v70) == -1)
			j_j_free(v70);
		goto LABEL_210;
	}
	v25 = (char*) * ((_QWORD*)ArgList + 272);
	v93 = v25;
	if ((*((_DWORD*)v25 - 4) & 0x30000000) == 0)
		_InterlockedIncrement((volatile signed __int32*)v25 - 4);
	sub_140308BF0(&v113, &v93);
	v26 = v93 - 16;
	if ((*((_DWORD*)v93 - 4) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v26) == -1)
		j_j_free(v26);
	sub_140048D00(&v95, "*.sam");
	sub_140048D00(&v94, "GLM4 - Save As...");
	sub_14031AF20(&v96, &v94);
	v27 = (void*)(v94 - 16);
	if ((*(_DWORD*)(v94 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v27) == -1)
		j_j_free(v27);
	v119 = v96;
	if ((*(_DWORD*)(v96 - 16) & 0x30000000) == 0)
		_InterlockedIncrement((volatile signed __int32*)(v96 - 16));
	v120 = v95;
	v28 = (volatile signed __int32*)(v95 - 16);
	if ((*((_DWORD*)v95 - 4) & 0x30000000) == 0)
		_InterlockedIncrement(v28);
	v121 = v113;
	v29 = (volatile signed __int32*)(v113 - 16);
	if ((*((_DWORD*)v113 - 4) & 0x30000000) == 0)
		_InterlockedIncrement(v29);
	v122 = 0i64;
	Block = 0i64;
	v124 = 0i64;
	v125 = 1;
	v126 = 0i64;
	v127 = 0i64;
	v30 = v95;
	if (*v95)
	{
		v31 = *v95;
		while (v31 == 32 || (unsigned __int8)(v31 - 9) <= 4u)
		{
			++v30;
			if (v31 < 0)
			{
				v32 = 64;
				if ((v31 & 0x40) != 0)
				{
					do
					{
						if (v32 <= 8u)
							break;
						++v30;
						v32 >>= 1;
					} while ((v32 & (unsigned __int8)v31) != 0);
				}
			}
			v31 = *v30;
			if (!*v30)
				goto LABEL_88;
		}
	}
	else
	{
	LABEL_88:
		sub_140048D00(&v114, "*");
		v33 = v120;
		v120 = v114;
		v34 = v33 - 16;
		if ((*((_DWORD*)v33 - 4) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v34) == -1)
			j_j_free(v34);
	}
	v35 = (void*)(v96 - 16);
	if ((*(_DWORD*)(v96 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v35) == -1)
		j_j_free(v35);
	if ((*v28 & 0x30000000) == 0 && _InterlockedDecrement(v28) == -1)
		j_j_free((void*)v28);
	Component::BailOutChecker(&v97, qword_140EC0010);
	for (i = 0; i < SHIDWORD(v124); ++i)
		sub_140002BF0((char*)Block + 72 * i);
	HIDWORD(v124) = 0;
	if ((_DWORD)v124)
	{
		free(Block);
		Block = 0i64;
	}
	LODWORD(v124) = 0;
	v37 = v127;
	if (v127)
	{
		v127 = 0i64;
		(**v37)(v37, 1i64);
	}
	if ((_BYTE)v125)
	{
		v73 = operator new(0xC8ui64);
		v38 = sub_1400B76F0(v73, &v119, 134i64);
		if (v38)
			v39 = v38 + 176;
		else
			v39 = 0i64;
	}
	else
	{
		v73 = operator new(0xC08ui64);
		v39 = sub_140091130(v73, &v119, 134i64);
	}
	v40 = v127;
	v127 = (void(__fastcall * **)(_QWORD, __int64))v39;
	if (v40)
	{
		(**v40)(v40, 1i64);
		v39 = (__int64)v127;
	}
	(*(void(__fastcall * *)(__int64))(*(_QWORD*)v39 + 16i64))(v39);
	v41 = SHIDWORD(v124) > 0;
	v42 = v97;
	v43 = v97 != 0;
	if (v97)
	{
		if (*(_QWORD*)(v97 + 16) && Component::isShowing(*(_QWORD*)(v97 + 16)))
		{
			v44 = v43 ? *(_QWORD*)(v42 + 16) : 0i64;
			if (!Component::isCurrentlyBlockedByAnotherModalComponent(v44))
			{
				if (v43)
					v45 = *(_QWORD*)(v42 + 16);
				else
					v45 = 0i64;
				Component::grabKeyboardFocusInternal(v45, 2u, 1);
			}
		}
		if (v42 && !_InterlockedAdd((volatile signed __int32*)(v42 + 8), 0xFFFFFFFF))
			(**(void(__fastcall * **)(__int64, __int64))v97)(v97, 1i64);
	}
	if (!v41)
		goto LABEL_152;
	sub_14040F1B0(&v119, &v72);
	v46 = String::lastIndexOfChar(&v72, 92) + 1;
	v47 = String::lastIndexOfChar(&v72, 46);
	if (v47 <= v46)
		sub_14030C470(&v72, &v75, (unsigned int)v46);
	else
		String::substring(&v72, &v75, v46, v47);
	if ((unsigned __int8)sub_14026E2D0(&v75))
	{
		v118[1] = v72;
		v59 = (volatile signed __int32*)(v72 - 16);
		if ((*((_DWORD*)v72 - 4) & 0x30000000) == 0)
			_InterlockedIncrement(v59);
		v77 = v72;
		if ((*v59 & 0x30000000) == 0)
			_InterlockedIncrement(v59);
		sub_140200820((__int64)ArgList, &v77, 0);
		sub_1401F2D10();
		sub_1401FBBD0();
		sub_1400F2C00(*(_QWORD*)(a1 + 664));
		if ((*v59 & 0x30000000) == 0 && _InterlockedDecrement(v59) == -1)
			j_j_free((void*)v59);
		v60 = v75 - 16;
		if ((*((_DWORD*)v75 - 4) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v60) == -1)
			j_j_free(v60);
		if ((*v59 & 0x30000000) == 0 && _InterlockedDecrement(v59) == -1)
			j_j_free((void*)v59);
		sub_14040F290(&v119);
		if ((*v29 & 0x30000000) == 0 && _InterlockedDecrement(v29) == -1)
			j_j_free((void*)v29);
		goto LABEL_203;
	}
	v116 = dword_140DDCDD0;
	sub_140048D00(&v101, "\\ / : * ? | < > \" # % & { } $ ! ' @ + = `");
	v48 = (_QWORD*)sub_14031B460(
		v115,
		"Setup name contains invalid charaters, please type in a name without special characters.");
	v73 = v48;
	ImageCache::getFromHashCode(v48, "\n", (int)"");
	v49 = *v48;
	v98 = v49;
	if ((*(_DWORD*)(v49 - 16) & 0x30000000) == 0)
		_InterlockedIncrement((volatile signed __int32*)(v49 - 16));
	v50 = (_DWORD*)(*v48 - 16i64);
	if ((*v50 & 0x30000000) == 0 && _InterlockedDecrement(v50) == -1)
		j_j_free(v50);
	v51 = sub_14031B550(&v78, &v98, &v101);
	sub_140048D00(&v99, "Error");
	sub_14031AF20(&v100, &v99);
	v52 = (void*)(v99 - 16);
	if ((*(_DWORD*)(v99 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v52) == -1)
		j_j_free(v52);
	sub_14040FE70(2, (unsigned int)& v100, v51, (unsigned int)& v116, 0i64);
	v53 = (void*)(v100 - 16);
	if ((*(_DWORD*)(v100 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v53) == -1)
		j_j_free(v53);
	v54 = (void*)(v78 - 16);
	if ((*(_DWORD*)(v78 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v54) == -1)
		j_j_free(v54);
	v55 = (void*)(v101 - 16);
	if ((*(_DWORD*)(v101 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v55) == -1)
		j_j_free(v55);
	v56 = v75 - 16;
	if ((*((_DWORD*)v75 - 4) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v56) == -1)
		j_j_free(v56);
	v57 = v72 - 16;
	if ((*((_DWORD*)v72 - 4) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v57) == -1)
		j_j_free(v57);
LABEL_152:
	sub_14040F290(&v119);
	if ((*v29 & 0x30000000) == 0 && _InterlockedDecrement(v29) == -1)
		j_j_free((void*)v29);
	if ((*v24 & 0x30000000) == 0 && _InterlockedDecrement(v24) == -1)
		j_j_free((void*)v24);
	v58 = v74 - 16;
	if ((*((_DWORD*)v74 - 4) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v58) == -1)
		j_j_free(v58);
LABEL_212:
	v128 = &juce::MessageManagerLock::`vftable';
		sub_1403241F0(&v129);
	sub_1403241F0(&v129);
	Cnd_destroy_in_situ((_Cnd_t)v132);
	Mtx_destroy_in_situ((_Mtx_t)v131);
	v71 = (void(__fastcall * **)(_QWORD, __int64))v129;
	if (v129)
	{
		if (_InterlockedExchangeAdd((volatile signed __int32*)(v129 + 8), 0xFFFFFFFF) == 1)
			(**v71)(v71, 1i64);
	}*/
}
void OptimizationProgressWindow::timerCallback()
{
	/*sub_140196640(a1 - 792, &v2);
	v1 = (void*)(v2 - 16);
	if ((*(_DWORD*)(v2 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v1) == -1)
		j_j_free(v1);*/
}