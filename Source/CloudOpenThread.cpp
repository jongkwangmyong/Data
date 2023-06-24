#include "CloudOpenThread.h"

CloudOpenThread::CloudOpenThread()
	:ThreadWithProgressWindow("", false, false)
{

}

CloudOpenThread::~CloudOpenThread()
{

}

void CloudOpenThread::run()
{
/*
	a1[67] = 0xBFF0000000000000ui64;
	sub_140048D00(&v77, "Getting ready to start...");
	sub_14031AF20(&v63, &v77);
	v2 = (void*)(v77 - 16);
	if ((*(_DWORD*)(v77 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v2) == -1)
		j_j_free(v2);
	sub_14040F570(a1, &v63);
	v3 = (void*)(v63 - 16);
	if ((*(_DWORD*)(v63 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v3) == -1)
		j_j_free(v3);
	v4 = *((_QWORD*)ArgList + 272);
	v64 = v4;
	if ((*(_DWORD*)(v4 - 16) & 0x30000000) == 0)
		_InterlockedIncrement((volatile signed __int32*)(v4 - 16));
	sub_140308BF0(&v57, &v64);
	v5 = (void*)(v64 - 16);
	if ((*(_DWORD*)(v64 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v5) == -1)
		j_j_free(v5);
	v6 = a1[77];
	v54 = (__int64*)v6;
	if ((*(_DWORD*)(v6 - 16) & 0x30000000) == 0)
		_InterlockedIncrement((volatile signed __int32*)(v6 - 16));
	v75 = (__int64*)& v54;
	ImageCache::getFromHashCode(&v54, ".zip", (int)"");
	v75 = v54;
	v7 = (volatile signed __int32*)(v54 - 2);
	if ((*(_DWORD*)(v54 - 2) & 0x30000000) == 0)
		_InterlockedIncrement(v7);
	v8 = v54 - 2;
	if ((*(_DWORD*)(v54 - 2) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v8) == -1)
		j_j_free(v8);
	sub_14031A890(&v57, &v53, v75);
	if ((*v7 & 0x30000000) == 0 && _InterlockedDecrement(v7) == -1)
		j_j_free((void*)v7);
	v9 = a1[77];
	v55 = (__int64*)v9;
	if ((*(_DWORD*)(v9 - 16) & 0x30000000) == 0)
		_InterlockedIncrement((volatile signed __int32*)(v9 - 16));
	v76 = (__int64*)& v55;
	ImageCache::getFromHashCode(&v55, ".sam", (int)"");
	v76 = v55;
	v10 = (volatile signed __int32*)(v55 - 2);
	if ((*(_DWORD*)(v55 - 2) & 0x30000000) == 0)
		_InterlockedIncrement(v10);
	v11 = v55 - 2;
	if ((*(_DWORD*)(v55 - 2) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v11) == -1)
		j_j_free(v11);
	sub_14031A890(&v57, &v60, v76);
	if ((*v10 & 0x30000000) == 0 && _InterlockedDecrement(v10) == -1)
		j_j_free((void*)v10);
	sub_140048D00(&v65, "_");
	v84 = *(_QWORD*)sub_14031B920(&v65, a1 + 77);
	v12 = (volatile signed __int32*)(v84 - 16);
	if ((*(_DWORD*)(v84 - 16) & 0x30000000) == 0)
		_InterlockedIncrement(v12);
	v13 = (void*)(v65 - 16);
	if ((*(_DWORD*)(v65 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v13) == -1)
		j_j_free(v13);
	sub_14031A890(&v57, &v59, v84);
	if ((*v12 & 0x30000000) == 0 && _InterlockedDecrement(v12) == -1)
		j_j_free((void*)v12);
	if (*(_BYTE*)v53)
	{
		v14 = (LPCWSTR*)sub_140046AE0(&v85, &v53);
		if (GetFileAttributesW(*v14) != -1)
			sub_140317230(&v53);
	}
	a1[67] = 0xBFF0000000000000ui64;
	sub_140048D00(&v66, " from Cloud...");
	sub_14031AF20(&v69, &v66);
	v15 = (void*)(v66 - 16);
	if ((*(_DWORD*)(v66 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v15) == -1)
		j_j_free(v15);
	sub_140048D00(&v67, "Downloading ");
	sub_14031AF20(&v68, &v67);
	v16 = (void*)(v67 - 16);
	if ((*(_DWORD*)(v67 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v16) == -1)
		j_j_free(v16);
	v17 = (__int64*)sub_14031B550(v78, &v68, a1 + 77);
	v56 = v17;
	ImageCache::getFromHashCode(v17, ".sam", (int)"");
	v18 = *v17;
	v58 = v18;
	if ((*(_DWORD*)(v18 - 16) & 0x30000000) == 0)
		_InterlockedIncrement((volatile signed __int32*)(v18 - 16));
	v19 = (_DWORD*)(*v17 - 16);
	if ((*v19 & 0x30000000) == 0 && _InterlockedDecrement(v19) == -1)
		j_j_free(v19);
	v56 = &v58;
	v79 = *(_QWORD*)sub_14031B920(&v58, &v69);
	v20 = (volatile signed __int32*)(v79 - 16);
	if ((*(_DWORD*)(v79 - 16) & 0x30000000) == 0)
		_InterlockedIncrement(v20);
	v21 = (void*)(v58 - 16);
	if ((*(_DWORD*)(v58 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v21) == -1)
		j_j_free(v21);
	sub_14040F570(a1, &v79);
	if ((*v20 & 0x30000000) == 0 && _InterlockedDecrement(v20) == -1)
		j_j_free((void*)v20);
	v22 = (void*)(v69 - 16);
	if ((*(_DWORD*)(v69 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v22) == -1)
		j_j_free(v22);
	v23 = a1[77];
	v70 = v23;
	if ((*(_DWORD*)(v23 - 16) & 0x30000000) == 0)
		_InterlockedIncrement((volatile signed __int32*)(v23 - 16));
	if ((unsigned __int8)sub_14026B360(&v70))
	{
		if (*v60)
		{
			v24 = (LPCWSTR*)sub_140046AE0(&v86, &v60);
			if (GetFileAttributesW(*v24) != -1)
				sub_140317230(&v60);
		}
		if (*v59)
		{
			v25 = (LPCWSTR*)sub_140046AE0(&v87, &v59);
			if (GetFileAttributesW(*v25) != -1)
				sub_1403168A0(&v59);
		}
		a1[67] = 0xBFF0000000000000ui64;
		sub_140048D00(&v71, "Extracting files...");
		sub_14031AF20(&v72, &v71);
		v26 = (void*)(v71 - 16);
		if ((*(_DWORD*)(v71 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v26) == -1)
			j_j_free(v26);
		sub_14040F570(a1, &v72);
		v27 = (void*)(v72 - 16);
		if ((*(_DWORD*)(v72 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v27) == -1)
			j_j_free(v27);
		if (*(_BYTE*)v53)
		{
			v28 = (LPCWSTR*)sub_140046AE0(&v88, &v53);
			if (GetFileAttributesW(*v28) != -1)
			{
				Block = 0i64;
				v91 = 0i64;
				InitializeCriticalSection(&CriticalSection);
				v93 = 0i64;
				v29 = (__int64*)operator new(0x18ui64);
				v56 = v29;
				*v29 = (__int64)& juce::FileInputSource::`vftable';
					v30 = v53;
				v29[1] = (__int64)v53;
				if ((*(v30 - 4) & 0x30000000) == 0)
					_InterlockedIncrement(v30 - 4);
				*((_BYTE*)v29 + 16) = 0;
				v94 = v29;
				sub_1402E51B0(&Block);
				v31 = 0;
				if (SHIDWORD(v91) <= 0)
				{
				LABEL_90:
					v32 = dword_140DDCDD0;
				}
				else
				{
					while (1)
					{
						sub_1402E49A0(&Block, &v80, v31, &v57);
						v32 = v80;
						if (*v80)
							break;
						v33 = v80 - 16;
						if ((*((_DWORD*)v80 - 4) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v33) == -1)
							j_j_free(v33);
						if ((int)++v31 >= SHIDWORD(v91))
							goto LABEL_90;
					}
				}
				v34 = *v32;
				v35 = v32 - 16;
				if ((*((_DWORD*)v32 - 4) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v35) == -1)
					j_j_free(v35);
				if (v34)
				{
					sub_140048D00(&v82, "UnzipFailed");
					v39 = a1[78];
					a1[78] = v82;
					v40 = (void*)(v39 - 16);
					if ((*(_DWORD*)(v39 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v40) == -1)
						j_j_free(v40);
					sub_140048D00(&v73, "In CloudOpenThread.run(), ");
					v41 = *(_QWORD*)sub_14031B920(&v73, a1 + 78);
					v61 = v41;
					if ((*(_DWORD*)(v41 - 16) & 0x30000000) == 0)
						_InterlockedIncrement((volatile signed __int32*)(v41 - 16));
					v42 = (void*)(v73 - 16);
					if ((*(_DWORD*)(v73 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v42) == -1)
						j_j_free(v42);
					if (qword_140EBFFB8)
						(*(void(__fastcall * *)(__int64, __int64*))(*(_QWORD*)qword_140EBFFB8 + 8i64))(qword_140EBFFB8, &v61);
					else
						Logger::outputDebugString(&v61);
					v37 = (void*)(v61 - 16);
					v38 = *(_DWORD*)(v61 - 16);
				}
				else
				{
					sub_140048D00(&v81, "Success");
					v36 = a1[78];
					a1[78] = v81;
					v37 = (void*)(v36 - 16);
					v38 = *(_DWORD*)(v36 - 16);
				}
				if ((v38 & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v37) == -1)
					j_j_free(v37);
				sub_140047A30(&Block);
				if ((_DWORD)v91)
				{
					free(Block);
					Block = 0i64;
				}
				LODWORD(v91) = 0;
				if (v94)
					(*(void(__fastcall * *)(__int64*, __int64)) * v94)(v94, 1i64);
				if (*((_QWORD*)& v93 + 1))
					(***((void(__fastcall * ***)(_QWORD, __int64)) & v93 + 1))(*((_QWORD*)& v93 + 1), 1i64);
				DeleteCriticalSection(&CriticalSection);
				sub_140047A30(&Block);
				HIDWORD(v91) = 0;
				free(Block);
			}
		}
	}
	else
	{
		sub_140048D00(&v83, "DownloadFailed");
		v43 = a1[78];
		a1[78] = v83;
		v44 = (void*)(v43 - 16);
		if ((*(_DWORD*)(v43 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v44) == -1)
			j_j_free(v44);
		sub_140048D00(&v74, "In CloudOpenThread.run(), ");
		v45 = *(_QWORD*)sub_14031B920(&v74, a1 + 78);
		v62 = v45;
		if ((*(_DWORD*)(v45 - 16) & 0x30000000) == 0)
			_InterlockedIncrement((volatile signed __int32*)(v45 - 16));
		v46 = (void*)(v74 - 16);
		if ((*(_DWORD*)(v74 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v46) == -1)
			j_j_free(v46);
		if (qword_140EBFFB8)
			(*(void(__fastcall * *)(__int64, __int64*))(*(_QWORD*)qword_140EBFFB8 + 8i64))(qword_140EBFFB8, &v62);
		else
			Logger::outputDebugString(&v62);
		v47 = (void*)(v62 - 16);
		if ((*(_DWORD*)(v62 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v47) == -1)
			j_j_free(v47);
	}
	if (*(_BYTE*)v53)
	{
		v48 = (LPCWSTR*)sub_140046AE0(&v89, &v53);
		if (GetFileAttributesW(*v48) != -1)
			sub_140317230(&v53);
	}
	v49 = v59 - 16;
	if ((*((_DWORD*)v59 - 4) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v49) == -1)
		j_j_free(v49);
	v50 = v60 - 16;
	if ((*((_DWORD*)v60 - 4) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v50) == -1)
		j_j_free(v50);
	v51 = v53 - 4;
	if ((*(v53 - 4) & 0x30000000) == 0 && _InterlockedDecrement(v51) == -1)
		j_j_free((void*)v51);
	v52 = (void*)(v57 - 16);
	if ((*(_DWORD*)(v57 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v52) == -1)
		j_j_free(v52);*/
}

void CloudOpenThread::threadComplete(bool userPressedCancel)
{
/*
	if ((unsigned int)String::isNotEmpty(*(_BYTE * *)(a1 + 624), "Success"))
	{
		if ((unsigned int)String::isNotEmpty(*(_BYTE * *)(a1 + 624), &unk_14046D79B)
			&& (unsigned int)String::isNotEmpty(*(_BYTE * *)(a1 + 624), "DownloadFailed"))
		{
			if (!(unsigned int)String::isNotEmpty(*(_BYTE * *)(a1 + 624), "UnzipFailed"))
			{
				v33 = dword_140DDCDD0;
				sub_140048D00(&v22, "Could not extract setup.zip downloaded from Cloud!");
				sub_14031AF20(&v25, &v22);
				v12 = (void*)(v22 - 16);
				if ((*(_DWORD*)(v22 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v12) == -1)
					j_j_free(v12);
				sub_140048D00(&v23, "Open from Cloud error");
				sub_14031AF20(&v24, &v23);
				v13 = (void*)(v23 - 16);
				if ((*(_DWORD*)(v23 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v13) == -1)
					j_j_free(v13);
				sub_14040FE70(2, (unsigned int)& v24, (unsigned int)& v25, (unsigned int)& v33, 0i64);
				v14 = (void*)(v24 - 16);
				if ((*(_DWORD*)(v24 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v14) == -1)
					j_j_free(v14);
				v15 = (void*)(v25 - 16);
				if ((*(_DWORD*)(v25 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v15) == -1)
					j_j_free(v15);
			}
		}
		else
		{
			v34[0] = (__int64)dword_140DDCDD0;
			sub_140048D00(&v26, "Could not download the setup file from Cloud!");
			sub_14031AF20(&v29, &v26);
			v16 = (void*)(v26 - 16);
			if ((*(_DWORD*)(v26 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v16) == -1)
				j_j_free(v16);
			sub_140048D00(&v27, "Open from Cloud error");
			sub_14031AF20(&v28, &v27);
			v17 = (void*)(v27 - 16);
			if ((*(_DWORD*)(v27 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v17) == -1)
				j_j_free(v17);
			sub_14040FE70(2, (unsigned int)& v28, (unsigned int)& v29, (unsigned int)v34, 0i64);
			v18 = (void*)(v28 - 16);
			if ((*(_DWORD*)(v28 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v18) == -1)
				j_j_free(v18);
			v19 = (void*)(v29 - 16);
			if ((*(_DWORD*)(v29 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v19) == -1)
				j_j_free(v19);
		}
	}
	else
	{
		v30 = dword_140DDCDD0;
		sub_140048D00(&v35, "Setup file downloaded from Genelec Cloud.");
		sub_14031AF20(&v37, (__int64*)& v35);
		v2 = (char*)(v35 - 4);
		if ((*(v35 - 4) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v2) == -1)
			j_j_free(v2);
		sub_140048D00(&v36, &unk_14046D79F);
		sub_14040FE70(3, (unsigned int)& v36, (unsigned int)& v37, (unsigned int)& v30, 0i64);
		v3 = (void*)(v36 - 16);
		if ((*(_DWORD*)(v36 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v3) == -1)
			j_j_free(v3);
		v4 = (void*)(v37 - 16);
		if ((*(_DWORD*)(v37 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v4) == -1)
			j_j_free(v4);
		v5 = *((_QWORD*)ArgList + 272);
		v21[0] = v5;
		if ((*(_DWORD*)(v5 - 16) & 0x30000000) == 0)
			_InterlockedIncrement((volatile signed __int32*)(v5 - 16));
		v6 = sub_140001C30(v31, v21, "\\");
		v7 = (__int64*)sub_14031B550(v32, v6, a1 + 616);
		v34[1] = (__int64)v7;
		ImageCache::getFromHashCode(v7, ".sam", (int)"");
		v8 = *v7;
		v21[1] = v8;
		if ((*(_DWORD*)(v8 - 16) & 0x30000000) == 0)
			_InterlockedIncrement((volatile signed __int32*)(v8 - 16));
		v9 = (_DWORD*)(*v7 - 16);
		if ((*v9 & 0x30000000) == 0 && _InterlockedDecrement(v9) == -1)
			j_j_free(v9);
		sub_1401F87B0(ArgList);
		v10 = qword_140EBFF78;
		v35 = operator new(0x220ui64);
		v11 = sub_140189A70(v35);
		sub_140274EA0(v10, v11);
	}
	return (**(__int64(__fastcall * **)(__int64, __int64))a1)(a1, 1i64);*/
}