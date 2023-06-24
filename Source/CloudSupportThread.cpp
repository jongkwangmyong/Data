#include "CloudSupportThread.h"
CloudSupportThread::CloudSupportThread()
	:ThreadWithProgressWindow("", false, false)
{

}

CloudSupportThread::~CloudSupportThread()
{

}

void CloudSupportThread::run()
{
	/*v48 = dword_140DDCDD0;
	if ((unsigned int)String::isNotEmpty(*(_BYTE * *)(a1 + 624), "DoNotAttach"))
	{
		if (!(unsigned int)String::isNotEmpty(*(_BYTE * *)(a1 + 624), "AttachSetup")
			|| !(unsigned int)String::isNotEmpty(*(_BYTE * *)(a1 + 624), "AttachSetupAndImage"))
		{
			*(_QWORD*)(a1 + 536) = 0xBFF0000000000000ui64;
			sub_140048D00(&v51, "Compressing setup file, please wait...");
			sub_14031AF20(&v33, &v51);
			v3 = (void*)(v51 - 16);
			if ((*(_DWORD*)(v51 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v3) == -1)
				j_j_free(v3);
			sub_14040F570(a1, &v33);
			v4 = (void*)(v33 - 16);
			if ((*(_DWORD*)(v33 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v4) == -1)
				j_j_free(v4);
			v5 = *((_QWORD*)ArgList + 272);
			v34 = v5;
			if ((*(_DWORD*)(v5 - 16) & 0x30000000) == 0)
				_InterlockedIncrement((volatile signed __int32*)(v5 - 16));
			sub_140308BF0(&v49, &v34);
			v6 = (void*)(v34 - 16);
			if ((*(_DWORD*)(v34 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v6) == -1)
				j_j_free(v6);
			v7 = (_BYTE * *)sub_14031A890(&v49, &v42, "setup.zip");
			v48 = *v7;
			*v7 = dword_140DDCDD0;
			v8 = (void*)(v42 - 16);
			if ((*(_DWORD*)(v42 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v8) == -1)
				j_j_free(v8);
			sub_140048D00(&v35, "SetupDir");
			if (!(unsigned __int8)sub_1401F7810(v9, &v35))
			{
				sub_140048D00(&v43, "CompressFailed");
				v10 = *(_QWORD*)(a1 + 664);
				*(_QWORD*)(a1 + 664) = v43;
				v11 = (void*)(v10 - 16);
				if ((*(_DWORD*)(v10 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v11) == -1)
					j_j_free(v11);
				v12 = v49;
			LABEL_48:
				v22 = v12 - 16;
				if ((*v22 & 0x30000000) == 0 && _InterlockedDecrement(v22) == -1)
					j_j_free(v22);
				goto LABEL_69;
			}
			v13 = v49 - 16;
			if ((*((_DWORD*)v49 - 4) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v13) == -1)
				j_j_free(v13);
		}
		*(_QWORD*)(a1 + 536) = 0xBFF0000000000000ui64;
		sub_140048D00(&v36, "Uploading attachment(s) to Genelec Cloud...");
		sub_14031AF20(&v37, &v36);
		v14 = (void*)(v36 - 16);
		if ((*(_DWORD*)(v36 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v14) == -1)
			j_j_free(v14);
		sub_14040F570(a1, &v37);
		v15 = (void*)(v37 - 16);
		if ((*(_DWORD*)(v37 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v15) == -1)
			j_j_free(v15);
		sub_140118720(a1, &v39);
		v16 = v39;
		if ((unsigned int)String::isNotEmpty(v39, "FileUploaded"))
		{
			sub_140048D00(&v44, "UploadFailed");
			v17 = *(_QWORD*)(a1 + 664);
			*(_QWORD*)(a1 + 664) = v44;
			v18 = (void*)(v17 - 16);
			if ((*(_DWORD*)(v17 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v18) == -1)
				j_j_free(v18);
			sub_140048D00(&v38, "In CloudSupportThread.UploadAttachment(), response from server: ");
			v19 = *(_QWORD*)sub_14031B920(&v38, a1 + 664);
			v50 = v19;
			if ((*(_DWORD*)(v19 - 16) & 0x30000000) == 0)
				_InterlockedIncrement((volatile signed __int32*)(v19 - 16));
			v20 = (void*)(v38 - 16);
			if ((*(_DWORD*)(v38 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v20) == -1)
				j_j_free(v20);
			if (qword_140EBFFB8)
				(*(void(__fastcall * *)(__int64, __int64*))(*(_QWORD*)qword_140EBFFB8 + 8i64))(qword_140EBFFB8, &v50);
			else
				Logger::outputDebugString(&v50);
			v21 = (void*)(v50 - 16);
			if ((*(_DWORD*)(v50 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v21) == -1)
				j_j_free(v21);
			v12 = v39;
			goto LABEL_48;
		}
		v2 = v16 - 16;
		if ((*((_DWORD*)v16 - 4) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v2) == -1)
			j_j_free(v2);
	}
	v23 = (_QWORD*)sub_140119910(v2, &v45);
	v24 = *(_QWORD*)(a1 + 616);
	*(_QWORD*)(a1 + 616) = *v23;
	*v23 = v24;
	v25 = (void*)(v45 - 16);
	if ((*(_DWORD*)(v45 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v25) == -1)
		j_j_free(v25);
	*(_QWORD*)(a1 + 536) = 0xBFF0000000000000ui64;
	sub_140048D00(&v40, "Sending your support request, please wait...");
	sub_14031AF20(&v41, &v40);
	v26 = (void*)(v40 - 16);
	if ((*(_DWORD*)(v40 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v26) == -1)
		j_j_free(v26);
	sub_14040F570(a1, &v41);
	v27 = (void*)(v41 - 16);
	if ((*(_DWORD*)(v41 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v27) == -1)
		j_j_free(v27);
	v28 = (_QWORD*)sub_1401173E0(a1, &v46);
	v29 = *(_QWORD*)(a1 + 664);
	*(_QWORD*)(a1 + 664) = *v28;
	*v28 = v29;
	v30 = (void*)(v46 - 16);
	if ((*(_DWORD*)(v46 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v30) == -1)
		j_j_free(v30);
	if (*v48)
	{
		v31 = (LPCWSTR*)sub_140046AE0(v47, &v48);
		if (GetFileAttributesW(*v31) != -1)
			sub_140317230(&v48);
	}
LABEL_69:
	v32 = v48 - 16;
	if ((*((_DWORD*)v48 - 4) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v32) == -1)
		j_j_free(v32);*/
}

void CloudSupportThread::threadComplete(bool userPressedCancel)
{
	/*if ((unsigned int)String::isNotEmpty(*(_BYTE * *)(a1 + 664), "CompressFailed"))
	{
		if ((unsigned int)String::isNotEmpty(*(_BYTE * *)(a1 + 664), "UploadFailed"))
		{
			if ((unsigned int)String::isNotEmpty(*(_BYTE * *)(a1 + 664), "MessageSent"))
			{
				v44 = dword_140DDCDD0;
				sub_140048D00(&v35, "An exception occurred in server while sending your request to Genelec Support Team!");
				sub_14031AF20(&v38, &v35);
				v20 = (void*)(v35 - 16);
				if ((*(_DWORD*)(v35 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v20) == -1)
					j_j_free(v20);
				sub_140048D00(&v36, "Request Failed");
				sub_14031AF20(&v37, &v36);
				v21 = (void*)(v36 - 16);
				if ((*(_DWORD*)(v36 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v21) == -1)
					j_j_free(v21);
				sub_14040FE70(2, (unsigned int)& v37, (unsigned int)& v38, (unsigned int)& v44, 0i64);
				v22 = (void*)(v37 - 16);
				if ((*(_DWORD*)(v37 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v22) == -1)
					j_j_free(v22);
				v23 = (void*)(v38 - 16);
				if ((*(_DWORD*)(v38 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v23) == -1)
					j_j_free(v23);
			}
			else
			{
				v43 = dword_140DDCDD0;
				v10 = (char*)ArgList;
				sub_140048D00(&v34, byte_140DF5F98);
				sub_140048D00(&v25, "Genelec support team will contact you through this email address:");
				sub_14031AF20(&v31, &v25);
				v11 = (void*)(v25 - 16);
				if ((*(_DWORD*)(v25 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v11) == -1)
					j_j_free(v11);
				v12 = (_QWORD*)sub_14031B550(v39, &v31, &v34);
				v40 = v12;
				v40 = *(_QWORD * *)sub_14031B920(v12, v10 + 640);
				v13 = (volatile signed __int32*)(v40 - 2);
				if ((*(_DWORD*)(v40 - 2) & 0x30000000) == 0)
					_InterlockedIncrement(v13);
				v14 = (_DWORD*)(*v12 - 16i64);
				if ((*v14 & 0x30000000) == 0 && _InterlockedDecrement(v14) == -1)
					j_j_free(v14);
				sub_140048D00(&v32, "Support Request Sent");
				sub_14031AF20(&v33, &v32);
				v15 = (void*)(v32 - 16);
				if ((*(_DWORD*)(v32 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v15) == -1)
					j_j_free(v15);
				sub_14040FE70(3, (unsigned int)& v33, (unsigned int)& v40, (unsigned int)& v43, 0i64);
				v16 = (void*)(v33 - 16);
				if ((*(_DWORD*)(v33 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v16) == -1)
					j_j_free(v16);
				if ((*v13 & 0x30000000) == 0 && _InterlockedDecrement(v13) == -1)
					j_j_free((void*)v13);
				v17 = (void*)(v34 - 16);
				if ((*(_DWORD*)(v34 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v17) == -1)
					j_j_free(v17);
				v18 = qword_140EBFF78;
				v45 = operator new(0x220ui64);
				v19 = sub_140189A70(v45);
				sub_140274EA0(v18, v19);
			}
		}
		else
		{
			v42 = dword_140DDCDD0;
			sub_140048D00(&v27, "An exception occurred while uploading attachment(s) to the Cloud!");
			sub_14031AF20(&v30, &v27);
			v6 = (void*)(v27 - 16);
			if ((*(_DWORD*)(v27 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v6) == -1)
				j_j_free(v6);
			sub_140048D00(&v28, "Request Failed");
			sub_14031AF20(&v29, &v28);
			v7 = (void*)(v28 - 16);
			if ((*(_DWORD*)(v28 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v7) == -1)
				j_j_free(v7);
			sub_14040FE70(2, (unsigned int)& v29, (unsigned int)& v30, (unsigned int)& v42, 0i64);
			v8 = (void*)(v29 - 16);
			if ((*(_DWORD*)(v29 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v8) == -1)
				j_j_free(v8);
			v9 = (void*)(v30 - 16);
			if ((*(_DWORD*)(v30 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v9) == -1)
				j_j_free(v9);
		}
	}
	else
	{
		v41 = dword_140DDCDD0;
		sub_140048D00(&v45, "An error occurred while compressing attachment(s)!");
		sub_14031AF20(&v26, (__int64*)& v45);
		v2 = (char*)(v45 - 4);
		if ((*(v45 - 4) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v2) == -1)
			j_j_free(v2);
		sub_140048D00(&v46, "Request Failed");
		sub_14031AF20(&v47, &v46);
		v3 = (void*)(v46 - 16);
		if ((*(_DWORD*)(v46 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v3) == -1)
			j_j_free(v3);
		sub_14040FE70(2, (unsigned int)& v47, (unsigned int)& v26, (unsigned int)& v41, 0i64);
		v4 = (void*)(v47 - 16);
		if ((*(_DWORD*)(v47 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v4) == -1)
			j_j_free(v4);
		v5 = (void*)(v26 - 16);
		if ((*(_DWORD*)(v26 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v5) == -1)
			j_j_free(v5);
	}
	return (**(__int64(__fastcall * **)(__int64, __int64))a1)(a1, 1i64);*/
}