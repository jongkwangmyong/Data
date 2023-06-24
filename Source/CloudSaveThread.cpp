#include "CloudSaveThread.h"

CloudSaveThread::CloudSaveThread()
	:ThreadWithProgressWindow("", false, false)
{

}

CloudSaveThread::~CloudSaveThread()
{

}

void CloudSaveThread::run()
{
	/**(_QWORD*)(a1 + 536) = 0xBFF0000000000000ui64;
	sub_140048D00(&v70, "Getting ready to start...");
	sub_14031AF20(&v71, &v70);
	v2 = (void*)(v70 - 16);
	if ((*(_DWORD*)(v70 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v2) == -1)
		j_j_free(v2);
	sub_14040F570(a1, &v71);
	v3 = (void*)(v71 - 16);
	if ((*(_DWORD*)(v71 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v3) == -1)
		j_j_free(v3);
	v4 = *((_QWORD*)ArgList + 272);
	v73 = v4;
	if ((*(_DWORD*)(v4 - 16) & 0x30000000) == 0)
		_InterlockedIncrement((volatile signed __int32*)(v4 - 16));
	sub_140308BF0(&v72, &v73);
	v5 = (_QWORD*)sub_14031A890(&v72, &v62, "setup.zip");
	v7 = 0;
	if (*(_BYTE*)* v5)
	{
		v6 = (LPCWSTR*)sub_140046AE0(&v68, v5);
		if (GetFileAttributesW(*v6) != -1)
			v7 = 1;
	}
	v8 = (void*)(v62 - 16);
	if ((*(_DWORD*)(v62 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v8) == -1)
		j_j_free(v8);
	v9 = (void*)(v72 - 16);
	if ((*(_DWORD*)(v72 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v9) == -1)
		j_j_free(v9);
	v10 = (void*)(v73 - 16);
	if ((*(_DWORD*)(v73 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v10) == -1)
		j_j_free(v10);
	if (v7)
	{
		v11 = *((_QWORD*)ArgList + 272);
		v45 = v11;
		if ((*(_DWORD*)(v11 - 16) & 0x30000000) == 0)
			_InterlockedIncrement((volatile signed __int32*)(v11 - 16));
		sub_140308BF0(&v44, &v45);
		v12 = sub_14031A890(&v44, &v63, "setup.zip");
		sub_140317230(v12);
		v13 = (void*)(v63 - 16);
		if ((*(_DWORD*)(v63 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v13) == -1)
			j_j_free(v13);
		v14 = (void*)(v44 - 16);
		if ((*(_DWORD*)(v44 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v14) == -1)
			j_j_free(v14);
		v15 = (void*)(v45 - 16);
		if ((*(_DWORD*)(v45 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v15) == -1)
			j_j_free(v15);
	}
	*(_QWORD*)(a1 + 536) = 0xBFF0000000000000ui64;
	sub_140048D00(&v46, "Compressing setup file...");
	sub_14031AF20(&v47, &v46);
	v16 = (void*)(v46 - 16);
	if ((*(_DWORD*)(v46 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v16) == -1)
		j_j_free(v16);
	sub_14040F570(a1, &v47);
	v17 = (void*)(v47 - 16);
	if ((*(_DWORD*)(v47 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v17) == -1)
		j_j_free(v17);
	sub_140048D00(&v48, "SetupDir");
	if ((unsigned __int8)sub_1401F7810(v18, &v48))
	{
		*(_QWORD*)(a1 + 536) = 0xBFF0000000000000ui64;
		sub_140048D00(&v49, "Uploading setup file to Cloud...");
		sub_14031AF20(&v50, &v49);
		v19 = (void*)(v49 - 16);
		if ((*(_DWORD*)(v49 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v19) == -1)
			j_j_free(v19);
		sub_14040F570(a1, &v50);
		v20 = (void*)(v50 - 16);
		if ((*(_DWORD*)(v50 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v20) == -1)
			j_j_free(v20);
		v21 = *((_QWORD*)ArgList + 281);
		v54 = v21;
		if ((*(_DWORD*)(v21 - 16) & 0x30000000) == 0)
			_InterlockedIncrement((volatile signed __int32*)(v21 - 16));
		sub_140308BF0(&v53, &v54);
		v22 = sub_14031AE20(&v53, v64);
		v23 = *((_QWORD*)ArgList + 81);
		v51 = v23;
		if ((*(_DWORD*)(v23 - 16) & 0x30000000) == 0)
			_InterlockedIncrement((volatile signed __int32*)(v23 - 16));
		v24 = *((_QWORD*)ArgList + 82);
		v52 = v24;
		if ((*(_DWORD*)(v24 - 16) & 0x30000000) == 0)
			_InterlockedIncrement((volatile signed __int32*)(v24 - 16));
		sub_14026A870(&v61, &v52, &v51, v22);
		v25 = (void*)(v53 - 16);
		if ((*(_DWORD*)(v53 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v25) == -1)
			j_j_free(v25);
		v26 = (void*)(v54 - 16);
		if ((*(_DWORD*)(v54 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v26) == -1)
			j_j_free(v26);
		*(_QWORD*)(a1 + 536) = 0xBFF0000000000000ui64;
		sub_140048D00(&v55, "Finalizing...");
		sub_14031AF20(&v56, &v55);
		v27 = (void*)(v55 - 16);
		if ((*(_DWORD*)(v55 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v27) == -1)
			j_j_free(v27);
		sub_14040F570(a1, &v56);
		v28 = (void*)(v56 - 16);
		if ((*(_DWORD*)(v56 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v28) == -1)
			j_j_free(v28);
		v29 = *((_QWORD*)ArgList + 272);
		v58 = v29;
		if ((*(_DWORD*)(v29 - 16) & 0x30000000) == 0)
			_InterlockedIncrement((volatile signed __int32*)(v29 - 16));
		sub_140308BF0(&v57, &v58);
		v30 = (_QWORD*)sub_14031A890(&v57, &v65, "setup.zip");
		v32 = 0;
		if (*(_BYTE*)* v30)
		{
			v31 = (LPCWSTR*)sub_140046AE0(v69, v30);
			if (GetFileAttributesW(*v31) != -1)
				v32 = 1;
		}
		v33 = (void*)(v65 - 16);
		if ((*(_DWORD*)(v65 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v33) == -1)
			j_j_free(v33);
		v34 = (void*)(v57 - 16);
		if ((*(_DWORD*)(v57 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v34) == -1)
			j_j_free(v34);
		v35 = (void*)(v58 - 16);
		if ((*(_DWORD*)(v58 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v35) == -1)
			j_j_free(v35);
		if (v32)
		{
			v36 = *((_QWORD*)ArgList + 272);
			v60 = v36;
			if ((*(_DWORD*)(v36 - 16) & 0x30000000) == 0)
				_InterlockedIncrement((volatile signed __int32*)(v36 - 16));
			sub_140308BF0(&v59, &v60);
			v37 = sub_14031A890(&v59, &v66, "setup.zip");
			sub_140317230(v37);
			v38 = (void*)(v66 - 16);
			if ((*(_DWORD*)(v66 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v38) == -1)
				j_j_free(v38);
			v39 = (void*)(v59 - 16);
			if ((*(_DWORD*)(v59 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v39) == -1)
				j_j_free(v39);
			v40 = (void*)(v60 - 16);
			if ((*(_DWORD*)(v60 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v40) == -1)
				j_j_free(v40);
		}
		if (!(unsigned int)String::isNotEmpty(v61, "FileUploaded"))
		{
			sub_140048D00(&v67, "success");
			v41 = *(_QWORD*)(a1 + 616);
			*(_QWORD*)(a1 + 616) = v67;
			v42 = (void*)(v41 - 16);
			if ((*(_DWORD*)(v41 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v42) == -1)
				j_j_free(v42);
		}
		v43 = v61 - 16;
		if ((*((_DWORD*)v61 - 4) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v43) == -1)
			j_j_free(v43);
	}*/
}

void CloudSaveThread::threadComplete(bool userPressedCancel)
{
/*
	if ((unsigned int)String::isNotEmpty(*(_BYTE * *)(a1 + 616), "success"))
	{
		v15 = dword_140DDCDD0;
		sub_140048D00(&v10, "Could not upload setup file to the Cloud!");
		sub_14031AF20(&v13, &v10);
		v5 = (void*)(v10 - 16);
		if ((*(_DWORD*)(v10 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v5) == -1)
			j_j_free(v5);
		sub_140048D00(&v11, "Save to Cloud Error");
		sub_14031AF20(&v12, &v11);
		v6 = (void*)(v11 - 16);
		if ((*(_DWORD*)(v11 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v6) == -1)
			j_j_free(v6);
		sub_14040FE70(2, (unsigned int)& v12, (unsigned int)& v13, (unsigned int)& v15, 0i64);
		v7 = (void*)(v12 - 16);
		if ((*(_DWORD*)(v12 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v7) == -1)
			j_j_free(v7);
		v8 = (void*)(v13 - 16);
		if ((*(_DWORD*)(v13 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v8) == -1)
			j_j_free(v8);
	}
	else
	{
		v14 = dword_140DDCDD0;
		sub_140048D00(&v16, "Setup file saved to Genelec Cloud.");
		sub_14031AF20(&v18, &v16);
		v2 = (void*)(v16 - 16);
		if ((*(_DWORD*)(v16 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v2) == -1)
			j_j_free(v2);
		sub_140048D00(&v17, &unk_14046D7EF);
		sub_14040FE70(3, (unsigned int)& v17, (unsigned int)& v18, (unsigned int)& v14, 0i64);
		v3 = (void*)(v17 - 16);
		if ((*(_DWORD*)(v17 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v3) == -1)
			j_j_free(v3);
		v4 = (void*)(v18 - 16);
		if ((*(_DWORD*)(v18 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v4) == -1)
			j_j_free(v4);
	}
	return (**(__int64(__fastcall * **)(__int64, __int64))a1)(a1, 1i64);
*/
}