#include "CalibrateComponent.h"

CalibrateComponent::CalibrateComponent()
	: Thread("", 0)
{

}

CalibrateComponent::~CalibrateComponent()
{

}

void CalibrateComponent::changeListenerCallback(ChangeBroadcaster* source)
{
/*
	result = (char*)ArgList + 880;
	if (a2 == (char*)ArgList + 880)
		result = (char*)sub_140133CE0(*(_QWORD*)(a1 + 64));
	return result;
*/
}

void CalibrateComponent::buttonClicked(Button*)
{
/*
	if (a2 == *(_QWORD*)(a1 + 64))
	{
		sub_140048D00(&v188, "Cancel");
		sub_14031AF20(&v140, &v188);
		v3 = (void*)(v188 - 16);
		if ((*(_DWORD*)(v188 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v3) == -1)
			j_j_free(v3);
		sub_140048D00(&v189, "Start");
		sub_14031AF20(&v139, &v189);
		v4 = (void*)(v189 - 16);
		if ((*(_DWORD*)(v189 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v4) == -1)
			j_j_free(v4);
		sub_140048D00(&v190, "System will measure and calculate correct reference listening levels.");
		sub_14031AF20(&v138, &v190);
		v5 = (void*)(v190 - 16);
		if ((*(_DWORD*)(v190 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v5) == -1)
			j_j_free(v5);
		sub_140048D00(&v136, "Start reference level calibration");
		sub_14031AF20(&v137, &v136);
		v6 = (void*)(v136 - 16);
		if ((*(_DWORD*)(v136 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v6) == -1)
			j_j_free(v6);
		sub_14040FB40(1, (unsigned int)& v137, (unsigned int)& v138, (unsigned int)& v139, (__int64)& v140, 0i64, 0i64);
		v7 = (void*)(v137 - 16);
		if ((*(_DWORD*)(v137 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v7) == -1)
			j_j_free(v7);
		v8 = (void*)(v138 - 16);
		if ((*(_DWORD*)(v138 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v8) == -1)
			j_j_free(v8);
		v9 = (void*)(v139 - 16);
		if ((*(_DWORD*)(v139 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v9) == -1)
			j_j_free(v9);
		v10 = (void*)(v140 - 16);
		if ((*(_DWORD*)(v140 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v10) == -1)
			j_j_free(v10);
		return;
	}
	if (a2 == *(_QWORD*)(a1 + 72))
	{
		if ((unsigned __int8)sub_14022D460(*((_QWORD*)ArgList + 66)))
		{
			v11 = qword_140EBFF78;
			v134 = operator new(0x348ui64);
			v12 = sub_1400E8FA0(v134);
			sub_140274EA0(v11, v12);
			return;
		}
		if ((unsigned __int8)sub_14022EBB0(*((_QWORD*)ArgList + 66)))
		{
			v13 = qword_140EBFF78;
			v134 = operator new(0x3D0ui64);
			v14 = sub_1401BB7E0(v134);
			sub_140274EA0(v13, v14);
			return;
		}
		v121 = *(_BYTE*)(a1 + 32);
		v191 = (_BYTE*) * ((_QWORD*)ArgList + 281);
		v15 = (volatile signed __int32*)(v191 - 16);
		if ((*((_DWORD*)v191 - 4) & 0x30000000) == 0)
			_InterlockedIncrement(v15);
		v16 = 0i64;
		if ((unsigned int)String::isNotEmpty(v191, &unk_14046D577))
		{
			v57 = *((_QWORD*)ArgList + 281);
			v132 = v57;
			if ((*(_DWORD*)(v57 - 16) & 0x30000000) == 0)
				_InterlockedIncrement((volatile signed __int32*)(v57 - 16));
			sub_140200820(ArgList, &v132, 0i64);
			v58 = qword_140EBFF78;
			v125 = operator new(0x220ui64);
			v59 = sub_140189A70(v125);
			sub_140274EA0(v58, v59);
		}
		else
		{
			v17 = *((_QWORD*)ArgList + 272);
			v141 = v17;
			if ((*(_DWORD*)(v17 - 16) & 0x30000000) == 0)
				_InterlockedIncrement((volatile signed __int32*)(v17 - 16));
			sub_140308BF0(&v201, &v141);
			v18 = (void*)(v141 - 16);
			if ((*(_DWORD*)(v141 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v18) == -1)
				j_j_free(v18);
			sub_140048D00(&v143, "*.sam");
			sub_140048D00(&v142, "GLM4 - Save As...");
			sub_14031AF20(&v144, &v142);
			v19 = (void*)(v142 - 16);
			if ((*(_DWORD*)(v142 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v19) == -1)
				j_j_free(v19);
			v205 = v144;
			if ((*(_DWORD*)(v144 - 16) & 0x30000000) == 0)
				_InterlockedIncrement((volatile signed __int32*)(v144 - 16));
			v206 = v143;
			v20 = (volatile signed __int32*)(v143 - 16);
			if ((*((_DWORD*)v143 - 4) & 0x30000000) == 0)
				_InterlockedIncrement(v20);
			v207 = v201;
			v21 = (volatile signed __int32*)(v201 - 16);
			if ((*(_DWORD*)(v201 - 16) & 0x30000000) == 0)
				_InterlockedIncrement(v21);
			v208 = 0i64;
			Block = 0i64;
			v210 = 0i64;
			v211 = 1;
			v212 = 0i64;
			v213 = 0i64;
			v22 = v143;
			if (*v143)
			{
				v23 = *v143;
				while (v23 == 32 || (unsigned __int8)(v23 - 9) <= 4u)
				{
					++v22;
					if (v23 < 0)
					{
						v24 = 64;
						if ((v23 & 0x40) != 0)
						{
							do
							{
								if (v24 <= 8u)
									break;
								++v22;
								v24 >>= 1;
							} while ((v24 & (unsigned __int8)v23) != 0);
						}
					}
					v23 = *v22;
					if (!*v22)
						goto LABEL_57;
				}
			}
			else
			{
			LABEL_57:
				sub_140048D00(&v202, "*");
				v25 = v206;
				v206 = v202;
				v26 = v25 - 16;
				if ((*((_DWORD*)v25 - 4) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v26) == -1)
					j_j_free(v26);
			}
			v27 = (void*)(v144 - 16);
			if ((*(_DWORD*)(v144 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v27) == -1)
				j_j_free(v27);
			if ((*v20 & 0x30000000) == 0 && _InterlockedDecrement(v20) == -1)
				j_j_free((void*)v20);
			Component::BailOutChecker(&v145, qword_140EC0010);
			for (i = 0; i < SHIDWORD(v210); ++i)
				sub_140002BF0((char*)Block + 72 * i);
			HIDWORD(v210) = 0;
			if ((_DWORD)v210)
			{
				free(Block);
				Block = 0i64;
			}
			LODWORD(v210) = 0;
			v29 = v213;
			if (v213)
			{
				v213 = 0i64;
				(**v29)(v29, 1i64);
			}
			if ((_BYTE)v211)
			{
				v122 = operator new(0xC8ui64);
				v30 = sub_1400B76F0(v122, &v205, 134i64);
				if (v30)
					v31 = v30 + 176;
				else
					v31 = 0i64;
			}
			else
			{
				v123 = operator new(0xC08ui64);
				v31 = sub_140091130(v123, &v205, 134i64);
			}
			v32 = v213;
			v213 = (void(__fastcall * **)(_QWORD, __int64))v31;
			if (v32)
			{
				(**v32)(v32, 1i64);
				v31 = (__int64)v213;
			}
			(*(void(__fastcall * *)(__int64))(*(_QWORD*)v31 + 16i64))(v31);
			v33 = SHIDWORD(v210) > 0;
			v34 = v145;
			v35 = v145 != 0;
			if (v145)
			{
				if (*(_QWORD*)(v145 + 16) && Component::isShowing(*(_QWORD*)(v145 + 16)))
				{
					v36 = v35 ? *(_QWORD*)(v34 + 16) : 0i64;
					if (!Component::isCurrentlyBlockedByAnotherModalComponent(v36))
					{
						if (v35)
							v37 = *(_QWORD*)(v34 + 16);
						else
							v37 = 0i64;
						Component::grabKeyboardFocusInternal(v37, 2u, 1);
					}
				}
				if (v34 && !_InterlockedAdd((volatile signed __int32*)(v34 + 8), 0xFFFFFFFF))
					(**(void(__fastcall * **)(__int64, __int64))v145)(v145, 1i64);
			}
			if (!v33)
				goto LABEL_140;
			sub_14040F1B0(&v205, &v126);
			v38 = String::lastIndexOfChar(&v126, 92);
			v39 = v38 + 1;
			v40 = String::lastIndexOfChar(&v126, 46);
			if (v40 <= v38 + 1)
			{
				if (v39 > 0)
				{
					v41 = v126;
					while (1)
					{
						v42 = *v41;
						if (!*v41)
							break;
						++v41;
						if (v42 < 0)
						{
							for (j = 64; ((unsigned __int8)v42 & j) != 0; j >>= 1)
							{
								if (j <= 8u)
									break;
								++v41;
							}
						}
						if (--v38 < 0)
						{
							String::String(&v127, v41);
							goto LABEL_108;
						}
					}
					v127 = (char*)dword_140DDCDD0;
				}
				else
				{
					v127 = v126;
					if ((*((_DWORD*)v126 - 4) & 0x30000000) == 0)
						_InterlockedIncrement((volatile signed __int32*)v126 - 4);
				}
			}
			else
			{
				String::substring(&v126, &v127, v39, v40);
			}
		LABEL_108:
			if (!(unsigned __int8)sub_14026E2D0(&v127))
			{
				v203 = dword_140DDCDD0;
				sub_140048D00(&v149, "\\ / : * ? | < > \" # % & { } $ ! ' @ + = `");
				sub_140048D00(&v146, "Setup name contains invalid charaters, please type in a name without special characters.");
				sub_14031AF20(&v128, &v146);
				v44 = (void*)(v146 - 16);
				if ((*(_DWORD*)(v146 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v44) == -1)
					j_j_free(v44);
				ImageCache::getFromHashCode(&v128, "\n", (int)"");
				v129 = v128;
				if ((*(_DWORD*)(v128 - 16) & 0x30000000) == 0)
					_InterlockedIncrement((volatile signed __int32*)(v128 - 16));
				v45 = (void*)(v128 - 16);
				if ((*(_DWORD*)(v128 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v45) == -1)
					j_j_free(v45);
				v187 = &v129;
				v187 = *(__int64**)sub_14031B920(&v129, &v149);
				v46 = (volatile signed __int32*)(v187 - 2);
				if ((*(_DWORD*)(v187 - 2) & 0x30000000) == 0)
					_InterlockedIncrement(v46);
				v47 = (void*)(v129 - 16);
				if ((*(_DWORD*)(v129 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v47) == -1)
					j_j_free(v47);
				sub_140048D00(&v147, "Error");
				sub_14031AF20(&v148, &v147);
				v48 = (void*)(v147 - 16);
				if ((*(_DWORD*)(v147 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v48) == -1)
					j_j_free(v48);
				sub_14040FE70(2, (unsigned int)& v148, (unsigned int)& v187, (unsigned int)& v203, 0i64);
				v49 = (void*)(v148 - 16);
				if ((*(_DWORD*)(v148 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v49) == -1)
					j_j_free(v49);
				if ((*v46 & 0x30000000) == 0 && _InterlockedDecrement(v46) == -1)
					j_j_free((void*)v46);
				v50 = (void*)(v149 - 16);
				if ((*(_DWORD*)(v149 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v50) == -1)
					j_j_free(v50);
				v51 = v127 - 16;
				if ((*((_DWORD*)v127 - 4) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v51) == -1)
					j_j_free(v51);
				v52 = v126 - 16;
				if ((*((_DWORD*)v126 - 4) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v52) == -1)
					j_j_free(v52);
			LABEL_140:
				sub_14040F290(&v205);
				if ((*v21 & 0x30000000) == 0 && _InterlockedDecrement(v21) == -1)
					j_j_free((void*)v21);
			LABEL_167:
				if ((*v15 & 0x30000000) == 0 && _InterlockedDecrement(v15) == -1)
					j_j_free((void*)v15);
				return;
			}
			v135 = v126;
			v53 = (volatile signed __int32*)(v126 - 16);
			if ((*((_DWORD*)v126 - 4) & 0x30000000) == 0)
				_InterlockedIncrement(v53);
			v133 = v126;
			if ((*v53 & 0x30000000) == 0)
				_InterlockedIncrement(v53);
			sub_140200820(ArgList, &v133, 0i64);
			v54 = qword_140EBFF78;
			v124 = operator new(0x220ui64);
			v55 = sub_140189A70(v124);
			sub_140274EA0(v54, v55);
			if ((*v53 & 0x30000000) == 0 && _InterlockedDecrement(v53) == -1)
				j_j_free((void*)v53);
			v56 = v127 - 16;
			if ((*((_DWORD*)v127 - 4) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v56) == -1)
				j_j_free(v56);
			if ((*v53 & 0x30000000) == 0 && _InterlockedDecrement(v53) == -1)
				j_j_free((void*)v53);
			sub_14040F290(&v205);
			if ((*v21 & 0x30000000) == 0 && _InterlockedDecrement(v21) == -1)
				j_j_free((void*)v21);
		}
		if (v121)
			sub_1401FBBD0();
		if (*(_DWORD*)(qword_140EBFF78 + 76) > 1u)
			v16 = *(_QWORD*)(*(_QWORD*)(qword_140EBFF78 + 64) + 8i64);
		sub_1401898D0(v16);
		goto LABEL_167;
	}
	if (a2 == *(_QWORD*)(a1 + 96))
	{
		v60 = qword_140EBFF78;
		v135 = (char*)operator new(0x188ui64);
		v61 = sub_140144C00(v135);
		sub_140274EA0(v60, v61);
		return;
	}
	if (a2 != *(_QWORD*)(a1 + 104))
	{
		if (a2 == *(_QWORD*)(a1 + 112))
		{
			v62 = *((_QWORD*)ArgList + 174);
			if (*(_BYTE*)(v62 + 456))
			{
				sub_1401FD8D0(v62, v204);
				v63 = 0;
				v64 = (__int64**)v204[0];
				v65 = (v204[1] - v204[0]) >> 3;
				if (v65)
				{
					while (1)
					{
						v66 = *v64;
						v67 = **v64;
						if (v67 && *(_BYTE*)(v67 + 96))
						{
							sub_140048D00(&v130, "layout");
							sub_14020F010(v66, &v130);
							v66 = *v64;
						}
						if (*v66 && *(_BYTE*)(*v66 + 96) && !*((_BYTE*)v66 + 108))
							break;
						++v63;
						++v64;
						if (v63 >= v65)
							goto LABEL_183;
					}
					v192 = dword_140DDCDD0;
					sub_140048D00(
						&v150,
						"One(or more) loudspeakers are offline and calibration cannot be started, please check the connections, power and re - try.");
					sub_14031AF20(&v153, &v150);
					v74 = (void*)(v150 - 16);
					if ((*(_DWORD*)(v150 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v74) == -1)
						j_j_free(v74);
					sub_140048D00(&v151, "Loudspeakers Offline");
					sub_14031AF20(&v152, &v151);
					v75 = (void*)(v151 - 16);
					if ((*(_DWORD*)(v151 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v75) == -1)
						j_j_free(v75);
					sub_14040FE70(3, (unsigned int)& v152, (unsigned int)& v153, (unsigned int)& v192, 0i64);
					v76 = (void*)(v152 - 16);
					if ((*(_DWORD*)(v152 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v76) == -1)
						j_j_free(v76);
					v77 = (void*)(v153 - 16);
					if ((*(_DWORD*)(v153 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v77) == -1)
						j_j_free(v77);
					goto LABEL_295;
				}
			LABEL_183:
				v68 = *((_QWORD*)ArgList + 174);
				if (!*(_DWORD*)(v68 + 196))
				{
					v200 = dword_140DDCDD0;
					sub_140048D00(&v179, "The calibration microphone is not connected, please check the connection and re-try.");
					sub_14031AF20(&v182, &v179);
					v111 = (void*)(v179 - 16);
					if ((*(_DWORD*)(v179 - 16) & 0x30000000) == 0
						&& _InterlockedDecrement((volatile signed __int32*)v111) == -1)
					{
						j_j_free(v111);
					}
					sub_140048D00(&v180, "Microphone not connected");
					sub_14031AF20(&v181, &v180);
					v112 = (void*)(v180 - 16);
					if ((*(_DWORD*)(v180 - 16) & 0x30000000) == 0
						&& _InterlockedDecrement((volatile signed __int32*)v112) == -1)
					{
						j_j_free(v112);
					}
					sub_14040FE70(3, (unsigned int)& v181, (unsigned int)& v182, (unsigned int)& v200, 0i64);
					v113 = (void*)(v181 - 16);
					if ((*(_DWORD*)(v181 - 16) & 0x30000000) == 0
						&& _InterlockedDecrement((volatile signed __int32*)v113) == -1)
					{
						j_j_free(v113);
					}
					v114 = (void*)(v182 - 16);
					if ((*(_DWORD*)(v182 - 16) & 0x30000000) == 0
						&& _InterlockedDecrement((volatile signed __int32*)v114) == -1)
					{
						j_j_free(v114);
					}
					goto LABEL_295;
				}
				v69 = sub_1401FA890(v68);
				if (v69 == -1)
				{
					v193 = dword_140DDCDD0;
					sub_140048D00(
						&v154,
						"The microphone level is too low! There may be a connection issue, or the microphone may be faulty.");
					sub_14031AF20(&v157, &v154);
					v70 = (void*)(v154 - 16);
					if ((*(_DWORD*)(v154 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v70) == -1)
						j_j_free(v70);
					sub_140048D00(&v155, "Microphone level problem");
					sub_14031AF20(&v156, &v155);
					v71 = (void*)(v155 - 16);
					if ((*(_DWORD*)(v155 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v71) == -1)
						j_j_free(v71);
					sub_14040FE70(3, (unsigned int)& v156, (unsigned int)& v157, (unsigned int)& v193, 0i64);
					v72 = (void*)(v156 - 16);
					if ((*(_DWORD*)(v156 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v72) == -1)
						j_j_free(v72);
					v73 = (void*)(v157 - 16);
					if ((*(_DWORD*)(v157 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v73) == -1)
						j_j_free(v73);
				LABEL_295:
					sub_140001FE0(v204);
					return;
				}
				if (v69 == 1)
				{
					sub_140048D00(&v158, "No");
					sub_14031AF20(&v165, &v158);
					v78 = (void*)(v158 - 16);
					if ((*(_DWORD*)(v158 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v78) == -1)
						j_j_free(v78);
					sub_140048D00(&v159, "Yes");
					sub_14031AF20(&v164, &v159);
					v79 = (void*)(v159 - 16);
					if ((*(_DWORD*)(v159 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v79) == -1)
						j_j_free(v79);
					sub_140048D00(&v160, "The background noise measured by the microphone is high. Continue anyway?");
					sub_14031AF20(&v163, &v160);
					v80 = (void*)(v160 - 16);
					if ((*(_DWORD*)(v160 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v80) == -1)
						j_j_free(v80);
					sub_140048D00(&v161, "High background noise level");
					sub_14031AF20(&v162, &v161);
					v81 = (void*)(v161 - 16);
					if ((*(_DWORD*)(v161 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v81) == -1)
						j_j_free(v81);
					v82 = sub_14040FB40(
						1,
						(unsigned int)& v162,
						(unsigned int)& v163,
						(unsigned int)& v164,
						(__int64)& v165,
						0i64,
						0i64);
					v83 = (void*)(v162 - 16);
					if ((*(_DWORD*)(v162 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v83) == -1)
						j_j_free(v83);
					v84 = (void*)(v163 - 16);
					if ((*(_DWORD*)(v163 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v84) == -1)
						j_j_free(v84);
					v85 = (void*)(v164 - 16);
					if ((*(_DWORD*)(v164 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v85) == -1)
						j_j_free(v85);
					v86 = (void*)(v165 - 16);
					if ((*(_DWORD*)(v165 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v86) == -1)
						j_j_free(v86);
					if (!v82)
						goto LABEL_295;
				}
				sub_140001FE0(v204);
				v87 = sub_1401FB760();
				v88 = ComboBox::getSelectedItemIndex(*(_QWORD*)(a1 + 184));
				*(_DWORD*)(a1 + 40) = v88;
				if (v88 == 1)
				{
					*(_BYTE*)(*(_QWORD*)(*(_QWORD*)(*((_QWORD*)ArgList + 66) + 8i64)
						+ 8i64 * *(int*)(*((_QWORD*)ArgList + 66) + 268i64)
						- 8)
						+ 592i64) = 0;
					v89 = sub_14040E640(*(_QWORD*)(a1 + 128), v194);
					sub_140048D00(&v166, "local");
					v90 = sub_1401FA950(ArgList, &v195, &v166, v89);
					v91 = sub_14031B6E0(v90, "MicFoundLocally");
					v92 = (void*)(v195 - 16);
					if ((*(_DWORD*)(v195 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v92) == -1)
						j_j_free(v92);
					if (!v91)
					{
						v93 = sub_14040E640(*(_QWORD*)(a1 + 128), v196);
						if (!(unsigned __int8)sub_14026D8A0(v93))
						{
							v197 = dword_140DDCDD0;
							sub_140048D00(
								&v167,
								"Microphone correction file could not be downloaded. Please connect to internet or contact Genelec to get"
								" missing file. You can also use default correction file (serial 000001) as a workaround.");
							sub_14031AF20(&v170, &v167);
							v94 = (void*)(v167 - 16);
							if ((*(_DWORD*)(v167 - 16) & 0x30000000) == 0
								&& _InterlockedDecrement((volatile signed __int32*)v94) == -1)
							{
								j_j_free(v94);
							}
							sub_140048D00(&v168, "Error");
							sub_14031AF20(&v169, &v168);
							v95 = (void*)(v168 - 16);
							if ((*(_DWORD*)(v168 - 16) & 0x30000000) == 0
								&& _InterlockedDecrement((volatile signed __int32*)v95) == -1)
							{
								j_j_free(v95);
							}
							sub_14040FE70(2, (unsigned int)& v169, (unsigned int)& v170, (unsigned int)& v197, 0i64);
							v96 = (void*)(v169 - 16);
							if ((*(_DWORD*)(v169 - 16) & 0x30000000) == 0
								&& _InterlockedDecrement((volatile signed __int32*)v96) == -1)
							{
								j_j_free(v96);
							}
							v97 = (void*)(v170 - 16);
							if ((*(_DWORD*)(v170 - 16) & 0x30000000) == 0
								&& _InterlockedDecrement((volatile signed __int32*)v97) == -1)
							{
								j_j_free(v97);
							}
							return;
						}
					}
				LABEL_264:
					v131 = &v130;
					v103 = sub_14031B460(&v130, "Preparations for Measurements");
					v135 = (char*)operator new(0x1D8ui64);
					v104 = sub_1400E33D0((__int64)v135);
					sub_14026D6D0(v104, v103, 600i64);
					return;
				}
				if ((v88 & 0xFFFFFFFD) != 0)
					goto LABEL_264;
				*(_BYTE*)(*(_QWORD*)(*(_QWORD*)(*((_QWORD*)ArgList + 66) + 8i64)
					+ 8i64 * *(int*)(*((_QWORD*)ArgList + 66) + 268i64)
					- 8)
					+ 592i64) = 1;
				if (v87)
				{
					v131 = (__int64*)v198;
					v98 = sub_14040E640(*(_QWORD*)(a1 + 128), v198);
					sub_140048D00(&v171, "cloud");
					sub_1401FA950(ArgList, &v172, &v171, v98);
					v99 = v172;
					if (!(unsigned int)String::isNotEmpty(v172, "MicFoundLocally")
						|| !(unsigned int)String::isNotEmpty(v99, "MicFoundInCloud"))
					{
						v100 = *((_QWORD*)ArgList + 174);
						v101 = sub_14040E640(*(_QWORD*)(a1 + 128), v199);
						sub_1402043F0(v100, v101);
						v99 = v172;
					}
					v102 = v99 - 16;
					if ((*((_DWORD*)v99 - 4) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v102) == -1)
						j_j_free(v102);
					goto LABEL_264;
				}
				sub_140048D00(&v173, "OK");
				sub_14031AF20(&v178, &v173);
				v105 = (void*)(v173 - 16);
				if ((*(_DWORD*)(v173 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v105) == -1)
					j_j_free(v105);
				sub_140048D00(&v174, "Please check your Internet connection and then press Start Calibration!");
				sub_14031AF20(&v177, &v174);
				v106 = (void*)(v174 - 16);
				if ((*(_DWORD*)(v174 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v106) == -1)
					j_j_free(v106);
				sub_140048D00(&v175, "Cloud connection error");
				sub_14031AF20(&v176, &v175);
				v107 = (void*)(v175 - 16);
				if ((*(_DWORD*)(v175 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v107) == -1)
					j_j_free(v107);
				sub_14040EFD0(2, (unsigned int)& v176, (unsigned int)& v177, (unsigned int)& v178, 0i64);
				v108 = (void*)(v176 - 16);
				if ((*(_DWORD*)(v176 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v108) == -1)
					j_j_free(v108);
				v109 = (void*)(v177 - 16);
				if ((*(_DWORD*)(v177 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v109) == -1)
					j_j_free(v109);
				v110 = (void*)(v178 - 16);
				if ((*(_DWORD*)(v178 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v110) == -1)
					j_j_free(v110);
			}
			else
			{
				v134 = dword_140DDCDD0;
				sub_140048D00(&v183, "The GNet adapter is offline, please check the USB connection and re-try.");
				sub_14031AF20(&v186, &v183);
				v115 = (void*)(v183 - 16);
				if ((*(_DWORD*)(v183 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v115) == -1)
					j_j_free(v115);
				sub_140048D00(&v184, "GNet adapter offline");
				sub_14031AF20(&v185, &v184);
				v116 = (void*)(v184 - 16);
				if ((*(_DWORD*)(v184 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v116) == -1)
					j_j_free(v116);
				sub_14040FE70(3, (unsigned int)& v185, (unsigned int)& v186, (unsigned int)& v134, 0i64);
				v117 = (void*)(v185 - 16);
				if ((*(_DWORD*)(v185 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v117) == -1)
					j_j_free(v117);
				v118 = (void*)(v186 - 16);
				if ((*(_DWORD*)(v186 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v118) == -1)
					j_j_free(v118);
			}
		}
		else if (a2 == *(_QWORD*)(a1 + 168))
		{
			v119 = qword_140EBFF78;
			sub_140274D60(qword_140EBFF78);
			if (*(_DWORD*)(v119 + 76) <= 1u)
				v120 = 0i64;
			else
				v120 = *(_QWORD*)(*(_QWORD*)(v119 + 64) + 8i64);
			sub_1401898D0(v120);
		}
	}*/
}


void CalibrateComponent::comboBoxChanged(ComboBox* comboBoxThatHasChanged)
{
/*
	v3 = *(_QWORD*)(a1 + 136);
	if (a2 == v3)
	{
		*(_DWORD*)(a1 + 28) = ComboBox::getSelectedItemIndex(v3);
	}
	else
	{
		v4 = *(_QWORD*)(a1 + 168);
		if (a2 == v4)
		{
			v5 = *(_QWORD*)(*(_QWORD*)(*((_QWORD*)ArgList + 66) + 8i64)
				+ 8i64 * *(int*)(*((_QWORD*)ArgList + 66) + 268i64)
				- 8);
			*(_DWORD*)(v5 + 552) = ComboBox::getSelectedItemIndex(v4);
		}
	}
*/
}

void CalibrateComponent::paint(Graphics& g)
{
	g.fillAll(getLookAndFeel().findColour(ResizableWindow::backgroundColourId));
}

void CalibrateComponent::resized()
{
/*
	Component::setBounds(*(_QWORD*)(a1 + 760), *(_DWORD*)(a1 + 40) / 2 - 250, *(_DWORD*)(a1 + 44) / 2 - 250, 500, 500);
	v2 = 40;
	Component::setBounds(*(_QWORD*)(a1 + 768), *(_DWORD*)(a1 + 40) - 108, *(_DWORD*)(a1 + 44) - 96, 100, 40);
	v3 = 150;
	v4 = 32;
	Component::setBounds(*(_QWORD*)(a1 + 776), *(_DWORD*)(a1 + 40) - 150, *(_DWORD*)(a1 + 44) - 40, 150, 32);
	Component::setBounds(*(_QWORD*)(a1 + 784), *(_DWORD*)(a1 + 40) / 2 - 100, 8, 200, 40);
	Component::setBounds(*(_QWORD*)(a1 + 800), 0, *(_DWORD*)(a1 + 44) - 40, 150, 32);
	Component::setBounds(*(_QWORD*)(a1 + 808), *(_DWORD*)(a1 + 40) - 108, *(_DWORD*)(a1 + 44) - 144, 100, 40);
	Component::setBounds(*(_QWORD*)(a1 + 840), *(_DWORD*)(a1 + 40) / 2 - 225, 0, 450, 50);
	Component::setBounds(*(_QWORD*)(a1 + 864), *(_DWORD*)(a1 + 40) - 150, 264, 150, 130);
	Component::setBounds(*(_QWORD*)(a1 + 872), 0, *(_DWORD*)(a1 + 44) - 87, 150, 32);
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
		v2 = *(_DWORD*)(a1 + 44);
	v10 = *(_DWORD*)(a1 + 44) - v2;
	v11 = v10;
	if (v9 <= v10)
		v11 = v9;
	Component::setBounds(*(_QWORD*)(a1 + 760), v6 + (v9 - v11) / 2, v2 + (v10 - v11) / 2, v11, v11);
	v12 = 53;
	v13 = 24;
	if (v7 < 53)
		v12 = v7;
	v14 = 24;
	v15 = v7 - v12;
	if (v15 < 24)
		v14 = v15;
	Component::setBounds(*(_QWORD*)(a1 + 896), 0, v12, v6, v14);
	v16 = v15 - v14;
	v17 = 7;
	v18 = 7;
	if (v16 < 7)
		v18 = v16;
	v19 = v16 - v18;
	v20 = v14 + v12 + v18;
	v21 = 24;
	if (v19 < 24)
		v21 = v19;
	v22 = v21 + v20;
	Component::setBounds(*(_QWORD*)(a1 + 824), 0, v20, v6, v21);
	v23 = v19 - v21;
	v24 = 24;
	if (v23 < 24)
		v24 = v23;
	Component::setBounds(*(_QWORD*)(a1 + 832), 0, v22, v6, v24);
	v25 = v23 - v24;
	v26 = 24;
	if (v25 < 24)
		v26 = v25;
	v27 = v25 - v26;
	v28 = v22 + v26 + v24;
	v29 = 24;
	if (v27 < 24)
		v29 = v27;
	v30 = v29 + v28;
	Component::setBounds(*(_QWORD*)(a1 + 856), 0, v28, v6, v29);
	v31 = v27 - v29;
	v32 = 24;
	if (v31 < 24)
		v32 = v31;
	Component::setBounds(*(_QWORD*)(a1 + 848), 0, v30, v6, v32);
	v33 = v31 - v32;
	v34 = 7;
	if (v33 < 7)
		v34 = v33;
	v35 = v33 - v34;
	v36 = v34 + v32;
	v37 = 24;
	v38 = v36 + v30;
	if (v35 < 24)
		v37 = v35;
	Component::setBounds(*(_QWORD*)(a1 + 880), 0, v38, v6, v37);
	v39 = v35 - v37;
	if (v39 < 7)
		v17 = v39;
	v40 = v39 - v17;
	v41 = v17 + v37 + v38;
	v42 = 24;
	if (v40 < 24)
		v42 = v40;
	Component::setBounds(*(_QWORD*)(a1 + 888), 0, v41, v6, v42);
	v43 = v40 - v42;
	v44 = 24;
	if (v43 < 24)
		v44 = v43;
	v45 = v43 - v44;
	v46 = v44 + v42 + v41;
	v47 = 48;
	if (v45 < 48)
		v47 = v45;
	Component::setBounds(*(_QWORD*)(a1 + 792), 0, v46, v6, v47);
	v48 = v45 - v47;
	if (v48 < 24)
		v13 = v48;
	v49 = v48 - v13;
	if (v49 < 32)
		v4 = v49;
	return Component::setBounds(*(_QWORD*)(a1 + 816), 0, v46 + v13 + v47, v6, v4);
*/
}

void CalibrateComponent::run()
{
/*
	_QWORD* v0; // rdi
	struct _Mtx_internal_imp_t* v1; // rbx
	int v2; // eax
	int v3; // ebx
	unsigned __int64 v4; // rdi
	int v5; // ecx
	__int64 v6; // r15
	char* v7; // rbx
	int v8; // esi
	int v9; // edi
	char* v10; // rcx
	int v11; // ecx
	char* v12; // rax
	int v13; // ecx
	__int64 v14; // r12
	__int64 v15; // rsi
	_BYTE** v16; // r14
	__int64 v17; // r15
	char* v18; // rbx
	int v19; // esi
	int v20; // edi
	char* v21; // rax
	int v22; // ecx
	__int64 v23; // r12
	__int64 v24; // rsi
	_BYTE** v25; // r14
	char* v26; // rcx
	int v27; // ecx
	__int64 v28; // r15
	char* v29; // rbx
	int v30; // esi
	int v31; // edi
	char* v32; // rcx
	char* v33; // rax
	int v34; // ecx
	__int64 v35; // r12
	__int64 v36; // rsi
	_BYTE** v37; // r14
	__int64 v38; // rbx
	int v39; // eax
	_BYTE* v40; // rax
	int v41; // ecx
	_BYTE* v42; // rcx
	_BYTE* v43; // rcx
	char* v44; // rcx
	char* v45; // rcx
	char* v46; // rcx
	char* v48; // [rsp+40h] [rbp-59h] BYREF
	char* v49; // [rsp+48h] [rbp-51h] BYREF
	_BYTE* v50; // [rsp+50h] [rbp-49h] BYREF
	_BYTE* v51; // [rsp+58h] [rbp-41h] BYREF
	char* v52; // [rsp+60h] [rbp-39h] BYREF
	char* v53; // [rsp+68h] [rbp-31h] BYREF
	char* v54; // [rsp+70h] [rbp-29h] BYREF
	_DWORD* v55; // [rsp+78h] [rbp-21h] BYREF
	__int64 v56[14]; // [rsp+80h] [rbp-19h] BYREF
	int v57; // [rsp+108h] [rbp+6Fh]
	char* v58; // [rsp+118h] [rbp+7Fh] BYREF

	v0 = ArgList;
	v1 = (struct _Mtx_internal_imp_t*) * ((_QWORD*)ArgList + 231);
	v56[3] = (__int64)v1;
	v2 = Mtx_lock(v1);
	if (v2)
		std::_Throw_C_error(v2);
	sub_140001EE0(v56, v0[66] + 32i64);
	Mtx_unlock(v1);
	v3 = 0;
	v4 = (v56[1] - v56[0]) >> 3;
	if (v4)
	{
		do
		{
			Sleep(0x3E8u);
			++v3;
		} while (v3 < v4);
	}
	v55 = dword_140DDCDD0;
	sub_140048D00(&v58, "No");
	v56[4] = (__int64)& dword_140EC00EC;
	v57 = 19;
	if (_InterlockedCompareExchange(&dword_140EC00EC, 1, 0))
	{
		v5 = 19;
		while (_InterlockedCompareExchange(&dword_140EC00EC, 1, 0))
		{
			if (--v5 < 0)
			{
				while (_InterlockedCompareExchange(&dword_140EC00EC, 1, 0))
					Sleep(0);
				break;
			}
		}
	}
	v6 = qword_140EC03E0;
	if (qword_140EC03E0)
	{
		if (*(_QWORD*)(qword_140EC03E0 + 64)
			&& (int)StringArray::indexOf(qword_140EC03E0 + 24, v58, *(_BYTE*)(qword_140EC03E0 + 56), 0) < 0)
		{
			sub_1402FDDE0(*(_QWORD*)(v6 + 64), &v54, &v58, &v58);
			goto LABEL_22;
		}
		v7 = v58;
		v8 = *(_DWORD*)(v6 + 36);
		if (v8 <= 0)
			goto LABEL_20;
		v9 = 0;
		if (*(_BYTE*)(v6 + 56))
		{
			while ((unsigned int)compareIgnoreCase(*(char**)(*(_QWORD*)(v6 + 24) + 8i64 * v9), v7))
			{
				if (++v9 >= v8)
				{
					v7 = v58;
					goto LABEL_20;
				}
			}
			v7 = v58;
		}
		else
		{
			v14 = *(int*)(v6 + 36);
			v15 = 0i64;
			v16 = *(_BYTE * **)(v6 + 24);
			while ((unsigned int)String::isNotEmpty(v7, *v16))
			{
				++v9;
				++v15;
				++v16;
				if (v15 >= v14)
					goto LABEL_20;
			}
		}
		if (v9 < 0)
		{
		LABEL_20:
			v54 = v7;
			if ((*((_DWORD*)v7 - 4) & 0x30000000) == 0)
				_InterlockedIncrement((volatile signed __int32*)v7 - 4);
			goto LABEL_22;
		}
		v12 = *(char**)sub_140316E00(v6 + 40, (unsigned int)v9);
		v54 = v12;
		v13 = *((_DWORD*)v12 - 4);
	}
	else
	{
		v12 = v58;
		v54 = v58;
		v13 = *((_DWORD*)v58 - 4);
	}
	if ((v13 & 0x30000000) == 0)
		_InterlockedIncrement((volatile signed __int32*)v12 - 4);
LABEL_22:
	_InterlockedExchange(&dword_140EC00EC, 0);
	v10 = v58 - 16;
	if ((*((_DWORD*)v58 - 4) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v10) == -1)
		j_j_free(v10);
	sub_140048D00(&v48, "Yes");
	v56[5] = (__int64)& dword_140EC00EC;
	if (_InterlockedCompareExchange(&dword_140EC00EC, 1, 0))
	{
		v11 = 19;
		while (_InterlockedCompareExchange(&dword_140EC00EC, 1, 0))
		{
			if (--v11 < 0)
			{
				while (_InterlockedCompareExchange(&dword_140EC00EC, 1, 0))
					Sleep(0);
				break;
			}
		}
	}
	v17 = qword_140EC03E0;
	if (qword_140EC03E0)
	{
		if (*(_QWORD*)(qword_140EC03E0 + 64)
			&& (int)StringArray::indexOf(qword_140EC03E0 + 24, v48, *(_BYTE*)(qword_140EC03E0 + 56), 0) < 0)
		{
			sub_1402FDDE0(*(_QWORD*)(v17 + 64), &v53, &v48, &v48);
			goto LABEL_62;
		}
		v18 = v48;
		v19 = *(_DWORD*)(v17 + 36);
		if (v19 <= 0)
			goto LABEL_50;
		v20 = 0;
		if (*(_BYTE*)(v17 + 56))
		{
			while ((unsigned int)compareIgnoreCase(*(char**)(*(_QWORD*)(v17 + 24) + 8i64 * v20), v18))
			{
				if (++v20 >= v19)
				{
					v18 = v48;
					goto LABEL_50;
				}
			}
			v18 = v48;
		}
		else
		{
			v23 = *(int*)(v17 + 36);
			v24 = 0i64;
			v25 = *(_BYTE * **)(v17 + 24);
			while ((unsigned int)String::isNotEmpty(v18, *v25))
			{
				++v20;
				++v24;
				++v25;
				if (v24 >= v23)
					goto LABEL_50;
			}
		}
		if (v20 < 0)
		{
		LABEL_50:
			v53 = v18;
			if ((*((_DWORD*)v18 - 4) & 0x30000000) == 0)
				_InterlockedIncrement((volatile signed __int32*)v18 - 4);
			goto LABEL_62;
		}
		v21 = *(char**)sub_140316E00(v17 + 40, (unsigned int)v20);
		v53 = v21;
		v22 = *((_DWORD*)v21 - 4);
	}
	else
	{
		v21 = v48;
		v53 = v48;
		v22 = *((_DWORD*)v48 - 4);
	}
	if ((v22 & 0x30000000) == 0)
		_InterlockedIncrement((volatile signed __int32*)v21 - 4);
LABEL_62:
	_InterlockedExchange(&dword_140EC00EC, 0);
	v26 = v48 - 16;
	if ((*((_DWORD*)v48 - 4) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v26) == -1)
		j_j_free(v26);
	sub_140048D00(&v49, "Do you want to measure from extra positions?");
	v56[6] = (__int64)& dword_140EC00EC;
	if (_InterlockedCompareExchange(&dword_140EC00EC, 1, 0))
	{
		v27 = 19;
		while (_InterlockedCompareExchange(&dword_140EC00EC, 1, 0))
		{
			if (--v27 < 0)
			{
				while (_InterlockedCompareExchange(&dword_140EC00EC, 1, 0))
					Sleep(0);
				break;
			}
		}
	}
	v28 = qword_140EC03E0;
	if (qword_140EC03E0)
	{
		if (*(_QWORD*)(qword_140EC03E0 + 64)
			&& (int)StringArray::indexOf(qword_140EC03E0 + 24, v49, *(_BYTE*)(qword_140EC03E0 + 56), 0) < 0)
		{
			sub_1402FDDE0(*(_QWORD*)(v28 + 64), &v52, &v49, &v49);
			goto LABEL_82;
		}
		v29 = v49;
		v30 = *(_DWORD*)(v28 + 36);
		if (v30 <= 0)
			goto LABEL_80;
		v31 = 0;
		if (*(_BYTE*)(v28 + 56))
		{
			while ((unsigned int)compareIgnoreCase(*(char**)(*(_QWORD*)(v28 + 24) + 8i64 * v31), v29))
			{
				if (++v31 >= v30)
				{
					v29 = v49;
					goto LABEL_80;
				}
			}
			v29 = v49;
		}
		else
		{
			v35 = *(int*)(v28 + 36);
			v36 = 0i64;
			v37 = *(_BYTE * **)(v28 + 24);
			while ((unsigned int)String::isNotEmpty(v29, *v37))
			{
				++v31;
				++v36;
				++v37;
				if (v36 >= v35)
					goto LABEL_80;
			}
		}
		if (v31 < 0)
		{
		LABEL_80:
			v52 = v29;
			if ((*((_DWORD*)v29 - 4) & 0x30000000) == 0)
				_InterlockedIncrement((volatile signed __int32*)v29 - 4);
			goto LABEL_82;
		}
		v33 = *(char**)sub_140316E00(v28 + 40, (unsigned int)v31);
		v52 = v33;
		v34 = *((_DWORD*)v33 - 4);
	}
	else
	{
		v33 = v49;
		v52 = v49;
		v34 = *((_DWORD*)v49 - 4);
	}
	if ((v34 & 0x30000000) == 0)
		_InterlockedIncrement((volatile signed __int32*)v33 - 4);
LABEL_82:
	_InterlockedExchange(&dword_140EC00EC, 0);
	v32 = v49 - 16;
	if ((*((_DWORD*)v49 - 4) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v32) == -1)
		j_j_free(v32);
	sub_140048D00(&v50, "Measurement completed");
	v56[7] = (__int64)& dword_140EC00EC;
	if (_InterlockedCompareExchange(&dword_140EC00EC, 1, 0))
	{
		while (_InterlockedCompareExchange(&dword_140EC00EC, 1, 0))
		{
			if (--v57 < 0)
			{
				while (_InterlockedCompareExchange(&dword_140EC00EC, 1, 0))
					Sleep(0);
				break;
			}
		}
	}
	v38 = qword_140EC03E0;
	if (qword_140EC03E0)
	{
		if (*(_QWORD*)(qword_140EC03E0 + 64)
			&& (int)StringArray::indexOf(qword_140EC03E0 + 24, v50, *(_BYTE*)(qword_140EC03E0 + 56), 0) < 0)
		{
			sub_1402FDDE0(*(_QWORD*)(v38 + 64), &v51, &v50, &v50);
			goto LABEL_110;
		}
		v39 = StringArray::indexOf(v38 + 24, v50, *(_BYTE*)(v38 + 56), 0);
		if (v39 < 0)
		{
			v40 = v50;
			v51 = v50;
			v41 = *((_DWORD*)v50 - 4);
		}
		else
		{
			v40 = *(_BYTE * *)sub_140316E00(v38 + 40, (unsigned int)v39);
			v51 = v40;
			v41 = *((_DWORD*)v40 - 4);
		}
	}
	else
	{
		v40 = v50;
		v51 = v50;
		v41 = *((_DWORD*)v50 - 4);
	}
	if ((v41 & 0x30000000) == 0)
		_InterlockedIncrement((volatile signed __int32*)v40 - 4);
LABEL_110:
	_InterlockedExchange(&dword_140EC00EC, 0);
	v42 = v50 - 16;
	if ((*((_DWORD*)v50 - 4) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v42) == -1)
		j_j_free(v42);
	sub_14040D100((_DWORD)v42, (unsigned int)& v51, (unsigned int)& v52, (unsigned int)& v53, (__int64)& v54, (__int64)& v55);
	v43 = v51 - 16;
	if ((*((_DWORD*)v51 - 4) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v43) == -1)
		j_j_free(v43);
	v44 = v52 - 16;
	if ((*((_DWORD*)v52 - 4) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v44) == -1)
		j_j_free(v44);
	v45 = v53 - 16;
	if ((*((_DWORD*)v53 - 4) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v45) == -1)
		j_j_free(v45);
	v46 = v54 - 16;
	if ((*((_DWORD*)v54 - 4) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v46) == -1)
		j_j_free(v46);
	return sub_140001FE0(v56);*/
}