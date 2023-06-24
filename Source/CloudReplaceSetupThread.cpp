#include "CloudReplaceSetupThread.h"

CloudReplaceSetupThread::CloudReplaceSetupThread()
	:ThreadWithProgressWindow("", false, false)
{

}

CloudReplaceSetupThread::~CloudReplaceSetupThread()
{

}

void CloudReplaceSetupThread::run()
{
	/*if (!*(_BYTE*)(a1 + 624))
	{
	LABEL_119:
		*(_QWORD*)(a1 + 536) = 0xBFF0000000000000ui64;
		sub_140048D00(&v94, "Deleting old setup from Cloud...");
		sub_14031AF20(&v95, &v94);
		v38 = (void*)(v94 - 16);
		if ((*(_DWORD*)(v94 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v38) == -1)
			j_j_free(v38);
		sub_14040F570(a1, &v95);
		v39 = (void*)(v95 - 16);
		if ((*(_DWORD*)(v95 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v39) == -1)
			j_j_free(v39);
		v40 = *(_QWORD*)(a1 + 616);
		v96 = v40;
		if ((*(_DWORD*)(v40 - 16) & 0x30000000) == 0)
			_InterlockedIncrement((volatile signed __int32*)(v40 - 16));
		sub_1401120D0(v40, &v113, &v96);
		if (!(unsigned int)String::isNotEmpty(v113, "SetupDeleted"))
		{
			*(_QWORD*)(a1 + 536) = 0xBFF0000000000000ui64;
			sub_140048D00(&v97, "Compressing setup file...");
			sub_14031AF20(&v98, &v97);
			v41 = (void*)(v97 - 16);
			if ((*(_DWORD*)(v97 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v41) == -1)
				j_j_free(v41);
			sub_14040F570(a1, &v98);
			v42 = (void*)(v98 - 16);
			if ((*(_DWORD*)(v98 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v42) == -1)
				j_j_free(v42);
			sub_140048D00(&v99, "SetupDir");
			if ((unsigned __int8)sub_1401F7810(v43, &v99))
			{
				*(_QWORD*)(a1 + 536) = 0xBFF0000000000000ui64;
				sub_140048D00(&v100, "Uploading setup file to Cloud...");
				sub_14031AF20(&v101, &v100);
				v44 = (void*)(v100 - 16);
				if ((*(_DWORD*)(v100 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v44) == -1)
					j_j_free(v44);
				sub_14040F570(a1, &v101);
				v45 = (void*)(v101 - 16);
				if ((*(_DWORD*)(v101 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v45) == -1)
					j_j_free(v45);
				v46 = *((_QWORD*)ArgList + 281);
				v105 = v46;
				if ((*(_DWORD*)(v46 - 16) & 0x30000000) == 0)
					_InterlockedIncrement((volatile signed __int32*)(v46 - 16));
				sub_140308BF0(&v104, &v105);
				v47 = sub_14031AE20(&v104, v123);
				v48 = *((_QWORD*)ArgList + 81);
				v102 = v48;
				if ((*(_DWORD*)(v48 - 16) & 0x30000000) == 0)
					_InterlockedIncrement((volatile signed __int32*)(v48 - 16));
				v49 = *((_QWORD*)ArgList + 82);
				v103 = v49;
				if ((*(_DWORD*)(v49 - 16) & 0x30000000) == 0)
					_InterlockedIncrement((volatile signed __int32*)(v49 - 16));
				sub_14026A870(&v112, &v103, &v102, v47);
				v50 = (void*)(v104 - 16);
				if ((*(_DWORD*)(v104 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v50) == -1)
					j_j_free(v50);
				v51 = (void*)(v105 - 16);
				if ((*(_DWORD*)(v105 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v51) == -1)
					j_j_free(v51);
				*(_QWORD*)(a1 + 536) = 0xBFF0000000000000ui64;
				sub_140048D00(&v106, "Finalizing...");
				sub_14031AF20(&v107, &v106);
				v52 = (void*)(v106 - 16);
				if ((*(_DWORD*)(v106 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v52) == -1)
					j_j_free(v52);
				sub_14040F570(a1, &v107);
				v53 = (void*)(v107 - 16);
				if ((*(_DWORD*)(v107 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v53) == -1)
					j_j_free(v53);
				v54 = *((_QWORD*)ArgList + 272);
				v109 = v54;
				if ((*(_DWORD*)(v54 - 16) & 0x30000000) == 0)
					_InterlockedIncrement((volatile signed __int32*)(v54 - 16));
				sub_140308BF0(&v108, &v109);
				v55 = sub_14031A890(&v108, &v124, "setup.zip");
				v56 = sub_14031B400(v55);
				v57 = (void*)(v124 - 16);
				if ((*(_DWORD*)(v124 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v57) == -1)
					j_j_free(v57);
				v58 = (void*)(v108 - 16);
				if ((*(_DWORD*)(v108 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v58) == -1)
					j_j_free(v58);
				v59 = (void*)(v109 - 16);
				if ((*(_DWORD*)(v109 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v59) == -1)
					j_j_free(v59);
				if (v56)
				{
					v60 = *((_QWORD*)ArgList + 272);
					v111 = v60;
					if ((*(_DWORD*)(v60 - 16) & 0x30000000) == 0)
						_InterlockedIncrement((volatile signed __int32*)(v60 - 16));
					sub_140308BF0(&v110, &v111);
					v61 = sub_14031A890(&v110, &v125, "setup.zip");
					sub_140317230(v61);
					v62 = (void*)(v125 - 16);
					if ((*(_DWORD*)(v125 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v62) == -1)
						j_j_free(v62);
					v63 = (void*)(v110 - 16);
					if ((*(_DWORD*)(v110 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v63) == -1)
						j_j_free(v63);
					v64 = (void*)(v111 - 16);
					if ((*(_DWORD*)(v111 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v64) == -1)
						j_j_free(v64);
				}
				if (!(unsigned int)String::isNotEmpty(v112, "FileUploaded"))
				{
					sub_140048D00(&v126, "success");
					v65 = *(_QWORD*)(a1 + 632);
					*(_QWORD*)(a1 + 632) = v126;
					v66 = (void*)(v65 - 16);
					if ((*(_DWORD*)(v65 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v66) == -1)
						j_j_free(v66);
				}
				v67 = v112 - 16;
				if ((*((_DWORD*)v112 - 4) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v67) == -1)
					j_j_free(v67);
			}
		}
		v68 = v113 - 16;
		v69 = *((_DWORD*)v113 - 4);
		goto LABEL_190;
	}
	*(_QWORD*)(a1 + 536) = 0xBFF0000000000000ui64;
	sub_140048D00(&v114, " from the Cloud...");
	sub_14031AF20(&v89, &v114);
	v2 = (void*)(v114 - 16);
	if ((*(_DWORD*)(v114 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v2) == -1)
		j_j_free(v2);
	sub_140048D00(&v87, "Copying ");
	sub_14031AF20(&v88, &v87);
	v3 = (void*)(v87 - 16);
	if ((*(_DWORD*)(v87 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v3) == -1)
		j_j_free(v3);
	v4 = (_QWORD*)sub_14031B550(v127, &v88, a1 + 616);
	v115 = *(_QWORD*)sub_14031B920(v4, &v89);
	v5 = (volatile signed __int32*)(v115 - 16);
	if ((*(_DWORD*)(v115 - 16) & 0x30000000) == 0)
		_InterlockedIncrement(v5);
	v6 = (_DWORD*)(*v4 - 16i64);
	if ((*v6 & 0x30000000) == 0 && _InterlockedDecrement(v6) == -1)
		j_j_free(v6);
	sub_14040F570(a1, &v115);
	if ((*v5 & 0x30000000) == 0 && _InterlockedDecrement(v5) == -1)
		j_j_free((void*)v5);
	v7 = (void*)(v89 - 16);
	if ((*(_DWORD*)(v89 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v7) == -1)
		j_j_free(v7);
	String::replace((char**)(a1 + 616), &v80, ".sam", (const char*)& unk_14046D7BF, 1);
	v8 = *((_QWORD*)ArgList + 272);
	v90 = v8;
	if ((*(_DWORD*)(v8 - 16) & 0x30000000) == 0)
		_InterlockedIncrement((volatile signed __int32*)(v8 - 16));
	sub_140308BF0(&v82, &v90);
	v9 = (void*)(v90 - 16);
	if ((*(_DWORD*)(v90 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v9) == -1)
		j_j_free(v9);
	v83 = v80;
	if ((*((_DWORD*)v80 - 4) & 0x30000000) == 0)
		_InterlockedIncrement((volatile signed __int32*)v80 - 4);
	ImageCache::getFromHashCode(&v83, ".zip", (int)"");
	v116 = v83;
	v10 = (volatile signed __int32*)(v83 - 16);
	if ((*((_DWORD*)v83 - 4) & 0x30000000) == 0)
		_InterlockedIncrement(v10);
	v11 = v83 - 16;
	if ((*((_DWORD*)v83 - 4) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v11) == -1)
		j_j_free(v11);
	sub_14031A890(&v82, &v79, v116);
	if ((*v10 & 0x30000000) == 0 && _InterlockedDecrement(v10) == -1)
		j_j_free((void*)v10);
	v84 = v80;
	if ((*((_DWORD*)v80 - 4) & 0x30000000) == 0)
		_InterlockedIncrement((volatile signed __int32*)v80 - 4);
	ImageCache::getFromHashCode(&v84, ".sam", (int)"");
	v117 = v84;
	v12 = (volatile signed __int32*)(v84 - 16);
	if ((*((_DWORD*)v84 - 4) & 0x30000000) == 0)
		_InterlockedIncrement(v12);
	v13 = v84 - 16;
	if ((*((_DWORD*)v84 - 4) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v13) == -1)
		j_j_free(v13);
	sub_14031A890(&v82, &v86, v117);
	if ((*v12 & 0x30000000) == 0 && _InterlockedDecrement(v12) == -1)
		j_j_free((void*)v12);
	sub_140048D00(&v81, "_");
	if (*v81)
	{
		v15 = -1i64;
		do
			++v15;
		while (v80[v15]);
		ImageCache::getFromHashCode(&v81, v80, (_DWORD)v80 + v15);
	}
	else
	{
		if ((*((_DWORD*)v80 - 4) & 0x30000000) == 0)
			_InterlockedIncrement((volatile signed __int32*)v80 - 4);
		v14 = (_DWORD*)(_InterlockedExchange64((volatile __int64*)& v81, (__int64)v80) - 16);
		if ((*v14 & 0x30000000) == 0 && _InterlockedDecrement(v14) == -1)
			j_j_free(v14);
	}
	v118 = v81;
	v16 = (volatile signed __int32*)(v81 - 16);
	if ((*((_DWORD*)v81 - 4) & 0x30000000) == 0)
		_InterlockedIncrement(v16);
	v17 = v81 - 16;
	if ((*((_DWORD*)v81 - 4) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v17) == -1)
		j_j_free(v17);
	sub_14031A890(&v82, &v85, v118);
	if ((*v16 & 0x30000000) == 0 && _InterlockedDecrement(v16) == -1)
		j_j_free((void*)v16);
	v91 = v80;
	if ((*((_DWORD*)v80 - 4) & 0x30000000) == 0)
		_InterlockedIncrement((volatile signed __int32*)v80 - 4);
	if ((unsigned __int8)sub_14026B360(&v91))
	{
		if (*v86)
		{
			v18 = (LPCWSTR*)sub_140046AE0(&v128, &v86);
			if (GetFileAttributesW(*v18) != -1)
				sub_140317230(&v86);
		}
		if (*v85)
		{
			v19 = (LPCWSTR*)sub_140046AE0(&v129, &v85);
			if (GetFileAttributesW(*v19) != -1)
				sub_1403168A0(&v85);
		}
		*(_QWORD*)(a1 + 536) = 0xBFF0000000000000ui64;
		sub_140048D00(&v92, "Extracting files...");
		sub_14031AF20(&v93, &v92);
		v20 = (void*)(v92 - 16);
		if ((*(_DWORD*)(v92 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v20) == -1)
			j_j_free(v20);
		sub_14040F570(a1, &v93);
		v21 = (void*)(v93 - 16);
		if ((*(_DWORD*)(v93 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v21) == -1)
			j_j_free(v21);
		if (!*(_BYTE*)v79)
			goto LABEL_101;
		v22 = (LPCWSTR*)sub_140046AE0(&v130, &v79);
		if (GetFileAttributesW(*v22) == -1)
			goto LABEL_101;
		Block = 0i64;
		v134 = 0i64;
		InitializeCriticalSection(&CriticalSection);
		v136 = 0i64;
		v23 = operator new(0x18ui64);
		*v23 = &juce::FileInputSource::`vftable';
			v24 = v79;
		v23[1] = v79;
		if ((*(v24 - 4) & 0x30000000) == 0)
			_InterlockedIncrement(v24 - 4);
		*((_BYTE*)v23 + 16) = 0;
		v137 = (void(__fastcall * **)(_QWORD, __int64))v23;
		sub_1402E51B0(&Block);
		v25 = 0;
		if (SHIDWORD(v134) <= 0)
		{
		LABEL_86:
			v26 = dword_140DDCDD0;
		}
		else
		{
			while (1)
			{
				sub_1402E49A0(&Block, &v119, v25, &v82);
				v26 = v119;
				if (*v119)
					break;
				v27 = v119 - 16;
				if ((*((_DWORD*)v119 - 4) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v27) == -1)
					j_j_free(v27);
				if ((int)++v25 >= SHIDWORD(v134))
					goto LABEL_86;
			}
		}
		v28 = *v26;
		v29 = v26 - 16;
		if ((*((_DWORD*)v26 - 4) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v29) == -1)
			j_j_free(v29);
		if (!v28)
		{
			sub_140048D00(&v120, "Success");
			v30 = *(_QWORD*)(a1 + 632);
			*(_QWORD*)(a1 + 632) = v120;
			v31 = (void*)(v30 - 16);
			if ((*(_DWORD*)(v30 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v31) == -1)
				j_j_free(v31);
			sub_140047A30(&Block);
			if ((_DWORD)v134)
			{
				free(Block);
				Block = 0i64;
			}
			LODWORD(v134) = 0;
			if (v137)
				(**v137)(v137, 1i64);
			if (*((_QWORD*)& v136 + 1))
				(***((void(__fastcall * ***)(_QWORD, __int64)) & v136 + 1))(*((_QWORD*)& v136 + 1), 1i64);
			DeleteCriticalSection(&CriticalSection);
			sub_140047A30(&Block);
			HIDWORD(v134) = 0;
			free(Block);
		LABEL_101:
			if (*(_BYTE*)v79)
			{
				v32 = (LPCWSTR*)sub_140046AE0(&v132, &v79);
				if (GetFileAttributesW(*v32) != -1)
					sub_140317230(&v79);
			}
			v33 = v85 - 16;
			if ((*((_DWORD*)v85 - 4) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v33) == -1)
				j_j_free(v33);
			v34 = v86 - 16;
			if ((*((_DWORD*)v86 - 4) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v34) == -1)
				j_j_free(v34);
			v35 = v79 - 4;
			if ((*(v79 - 4) & 0x30000000) == 0 && _InterlockedDecrement(v35) == -1)
				j_j_free((void*)v35);
			v36 = (void*)(v82 - 16);
			if ((*(_DWORD*)(v82 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v36) == -1)
				j_j_free(v36);
			v37 = v80 - 16;
			if ((*((_DWORD*)v80 - 4) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v37) == -1)
				j_j_free(v37);
			goto LABEL_119;
		}
		sub_140048D00(&v121, "UnzipFailed");
		v70 = *(_QWORD*)(a1 + 632);
		*(_QWORD*)(a1 + 632) = v121;
		v71 = (void*)(v70 - 16);
		if ((*(_DWORD*)(v70 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v71) == -1)
			j_j_free(v71);
		if (*(_BYTE*)v79)
		{
			v72 = (LPCWSTR*)sub_140046AE0(&v131, &v79);
			if (GetFileAttributesW(*v72) != -1)
				sub_140317230(&v79);
		}
		sub_140047A30(&Block);
		if ((_DWORD)v134)
		{
			free(Block);
			Block = 0i64;
		}
		LODWORD(v134) = 0;
		if (v137)
			(**v137)(v137, 1i64);
		if (*((_QWORD*)& v136 + 1))
			(***((void(__fastcall * ***)(_QWORD, __int64)) & v136 + 1))(*((_QWORD*)& v136 + 1), 1i64);
		DeleteCriticalSection(&CriticalSection);
		sub_140047A30(&Block);
		HIDWORD(v134) = 0;
		free(Block);
	}
	else
	{
		sub_140048D00(&v122, "DownloadFailed");
		v73 = *(_QWORD*)(a1 + 632);
		*(_QWORD*)(a1 + 632) = v122;
		v74 = (void*)(v73 - 16);
		if ((*(_DWORD*)(v73 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v74) == -1)
			j_j_free(v74);
	}
	v75 = v85 - 16;
	if ((*((_DWORD*)v85 - 4) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v75) == -1)
		j_j_free(v75);
	v76 = v86 - 16;
	if ((*((_DWORD*)v86 - 4) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v76) == -1)
		j_j_free(v76);
	v77 = v79 - 4;
	if ((*(v79 - 4) & 0x30000000) == 0 && _InterlockedDecrement(v77) == -1)
		j_j_free((void*)v77);
	v78 = (void*)(v82 - 16);
	if ((*(_DWORD*)(v82 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v78) == -1)
		j_j_free(v78);
	v68 = v80 - 16;
	v69 = *((_DWORD*)v80 - 4);
LABEL_190:
	if ((v69 & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v68) == -1)
		j_j_free(v68);*/
}

void CloudReplaceSetupThread::threadComplete(bool userPressedCancel)
{
	/*if ((unsigned int)String::isNotEmpty(*(_BYTE * *)(a1 + 632), "success"))
	{
		v17 = dword_140DDCDD0;
		sub_140048D00(&v12, "Could not replace the setup file in the Cloud!");
		sub_14031AF20(&v15, &v12);
		v7 = (void*)(v12 - 16);
		if ((*(_DWORD*)(v12 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v7) == -1)
			j_j_free(v7);
		sub_140048D00(&v13, "Error");
		sub_14031AF20(&v14, &v13);
		v8 = (void*)(v13 - 16);
		if ((*(_DWORD*)(v13 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v8) == -1)
			j_j_free(v8);
		sub_14040FE70(2, (unsigned int)& v14, (unsigned int)& v15, (unsigned int)& v17, 0i64);
		v9 = (void*)(v14 - 16);
		if ((*(_DWORD*)(v14 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v9) == -1)
			j_j_free(v9);
		v10 = (void*)(v15 - 16);
		if ((*(_DWORD*)(v15 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v10) == -1)
			j_j_free(v10);
	}
	else
	{
		v16 = dword_140DDCDD0;
		sub_140048D00(&v18, "Setup file saved to the Genelec Cloud.");
		sub_14031AF20(&v20, (__int64*)& v18);
		v2 = (char*)(v18 - 4);
		if ((*(v18 - 4) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v2) == -1)
			j_j_free(v2);
		sub_140048D00(&v19, &unk_14046D7CE);
		sub_14040FE70(3, (unsigned int)& v19, (unsigned int)& v20, (unsigned int)& v16, 0i64);
		v3 = (void*)(v19 - 16);
		if ((*(_DWORD*)(v19 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v3) == -1)
			j_j_free(v3);
		v4 = (void*)(v20 - 16);
		if ((*(_DWORD*)(v20 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v4) == -1)
			j_j_free(v4);
		v5 = qword_140EBFF78;
		v18 = operator new(0x220ui64);
		v6 = sub_140189A70(v18);
		sub_140274EA0(v5, v6);
	}
	return (**(__int64(__fastcall * **)(__int64, __int64))a1)(a1, 1i64);*/
}