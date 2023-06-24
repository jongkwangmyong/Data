#include "AutoCal2ProgressWindow.h"
AutoCal2ProgressWindow::AutoCal2ProgressWindow()
	:ThreadWithProgressWindow("", false, false)
{

}

AutoCal2ProgressWindow::~AutoCal2ProgressWindow()
{

}

void AutoCal2ProgressWindow::paint(Graphics& g)
{
	g.fillAll(getLookAndFeel().findColour(ResizableWindow::backgroundColourId));
}

void AutoCal2ProgressWindow::run()
{
	sub_1400E1090(- 176);
}

void AutoCal2ProgressWindow::sub_1400E1090(__int64 a1)
{
/*
	__int64 v2; // rax
	__int64 v3; // rax
	void* v4; // rcx
	__int64 v5; // rax
	__int64 v6; // rax
	void* v7; // rcx
	__int64 v8; // rsi
	void* v9; // rcx
	void* v10; // rcx
	void* v11; // rcx
	void* v12; // rcx
	__int64 v13; // rcx
	__int64 v14; // rax
	__int64 v15; // rcx
	volatile signed __int32* v16; // rbx
	__int64 v17; // rax
	void* v18; // rcx
	__int64* v19; // rax
	void* v20; // rcx
	void* v21; // rcx
	void* v22; // rcx
	void* v23; // rcx
	_BYTE* v24; // rcx
	int v25; // eax
	void* v26; // rcx
	void* v27; // rcx
	void* v28; // rcx
	void* v29; // rcx
	_BYTE* v30; // rbx
	void* v31; // rcx
	void* v32; // rcx
	__int64 v33; // rax
	__int64 v34; // rcx
	_BYTE** v35; // rax
	_BYTE* v36; // rcx
	void* v37; // rcx
	void* v38; // rcx
	void* v39; // rcx
	int v40; // eax
	void* v41; // rcx
	_BYTE* v42; // rbx
	_BYTE* v43; // rcx
	void* v44; // rcx
	void* v45; // rcx
	__int64 v46; // rcx
	_BYTE** v47; // rax
	void* v48; // rcx
	void* v49; // rcx
	void* v50; // rcx
	_BYTE* v51; // rcx
	_BYTE* v52; // rcx
	volatile signed __int32* v53; // rcx
	_BYTE* v54; // rcx
	_BYTE* v55; // rcx
	_BYTE* v56; // rcx
	_BYTE* v57; // [rsp+20h] [rbp-E0h]
	volatile signed __int32* v58; // [rsp+28h] [rbp-D8h]
	_BYTE* v59; // [rsp+30h] [rbp-D0h]
	__int64 v60; // [rsp+38h] [rbp-C8h] BYREF
	__int64 v61; // [rsp+40h] [rbp-C0h] BYREF
	__int64 v62; // [rsp+48h] [rbp-B8h] BYREF
	__int64 v63; // [rsp+50h] [rbp-B0h] BYREF
	__int64 v64; // [rsp+58h] [rbp-A8h] BYREF
	__int64 v65; // [rsp+60h] [rbp-A0h] BYREF
	__int64 v66; // [rsp+68h] [rbp-98h] BYREF
	__int64 v67; // [rsp+70h] [rbp-90h] BYREF
	__int64 v68; // [rsp+78h] [rbp-88h] BYREF
	__int64 v69; // [rsp+80h] [rbp-80h] BYREF
	__int64 v70; // [rsp+88h] [rbp-78h] BYREF
	__int64 v71; // [rsp+90h] [rbp-70h] BYREF
	__int64 v72; // [rsp+98h] [rbp-68h] BYREF
	__int64 v73; // [rsp+A0h] [rbp-60h] BYREF
	__int64 v74; // [rsp+A8h] [rbp-58h] BYREF
	__int64 v75; // [rsp+B0h] [rbp-50h] BYREF
	__int64 v76; // [rsp+B8h] [rbp-48h] BYREF
	__int64 v77; // [rsp+C0h] [rbp-40h] BYREF
	__int64 v78; // [rsp+C8h] [rbp-38h] BYREF
	__int64 v79; // [rsp+D0h] [rbp-30h] BYREF
	__int64 v80; // [rsp+D8h] [rbp-28h] BYREF
	__int64 v81; // [rsp+E0h] [rbp-20h] BYREF
	volatile signed __int32* v82; // [rsp+E8h] [rbp-18h] BYREF
	__int64 v83; // [rsp+F0h] [rbp-10h] BYREF
	__int64 v84; // [rsp+F8h] [rbp-8h] BYREF
	_BYTE* v85; // [rsp+100h] [rbp+0h] BYREF
	_BYTE* v86; // [rsp+108h] [rbp+8h] BYREF
	_BYTE* v87; // [rsp+110h] [rbp+10h] BYREF
	_BYTE* v88; // [rsp+118h] [rbp+18h] BYREF
	_BYTE* v89; // [rsp+120h] [rbp+20h] BYREF
	void* v90; // [rsp+128h] [rbp+28h] BYREF
	__int64 v91; // [rsp+138h] [rbp+38h] BYREF
	__int64 v92; // [rsp+140h] [rbp+40h] BYREF
	__int64 v93; // [rsp+148h] [rbp+48h] BYREF
	volatile signed __int32* v94; // [rsp+150h] [rbp+50h] BYREF
	__int64 v95; // [rsp+158h] [rbp+58h] BYREF
	volatile signed __int32* v96; // [rsp+160h] [rbp+60h] BYREF
	volatile signed __int32* v97; // [rsp+168h] [rbp+68h] BYREF
	volatile signed __int32* v98; // [rsp+170h] [rbp+70h] BYREF
	__int64 v99; // [rsp+178h] [rbp+78h] BYREF
	__int64 v100[5]; // [rsp+180h] [rbp+80h] BYREF
	char v101; // [rsp+1AFh] [rbp+AFh] BYREF
	char v102[31]; // [rsp+1B0h] [rbp+B0h] BYREF
	char v103; // [rsp+1CFh] [rbp+CFh] BYREF
	__int64 v104; // [rsp+1D0h] [rbp+D0h] BYREF

	v90 = operator new(0x188ui64);
	qword_140EBFF00 = sub_14010B170(v90, a1);
	v2 = sub_1402FCCA0(v102);
	sub_140040360(&v90, v2, &v101 - v2);
	v3 = *(_QWORD*)(qword_140EBFF00 + 208);
	*(_QWORD*)(qword_140EBFF00 + 208) = v90;
	v4 = (void*)(v3 - 16);
	if ((*(_DWORD*)(v3 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v4) == -1)
		j_j_free(v4);
	v5 = sub_1402FCCA0(&v104);
	sub_140040360(v100, v5, &v103 - v5);
	v6 = *(_QWORD*)(qword_140EBFF00 + 216);
	*(_QWORD*)(qword_140EBFF00 + 216) = v100[0];
	v7 = (void*)(v6 - 16);
	if ((*(_DWORD*)(v6 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v7) == -1)
		j_j_free(v7);
	v8 = a1 + 176;
	*(_QWORD*)(v8 + 536) = 0i64;
	sub_140048D00(&v60, "Initializing tasks...");
	sub_14031AF20(&v61, &v60);
	v9 = (void*)(v60 - 16);
	if ((*(_DWORD*)(v60 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v9) == -1)
		j_j_free(v9);
	sub_14040F570(v8, &v61);
	v10 = (void*)(v61 - 16);
	if ((*(_DWORD*)(v61 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v10) == -1)
		j_j_free(v10);
	sub_14010A2A0(v10, &v89);
	if ((unsigned int)String::isNotEmpty(v89, "InitTasksOK"))
	{
		sub_140106D00();
		if (qword_140EBFF00)
			(**(void(__fastcall * **)(__int64, __int64))qword_140EBFF00)(qword_140EBFF00, 1i64);
		qword_140EBFF00 = 0i64;
		goto LABEL_162;
	}
	if (*(_BYTE*)(qword_140EBFF00 + 224))
	{
		v100[1] = (__int64)dword_140DDCDD0;
		sub_140048D00(&v62, "Cloud server is busy, please wait...");
		sub_14031AF20(&v63, &v62);
		v11 = (void*)(v62 - 16);
		if ((*(_DWORD*)(v62 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v11) == -1)
			j_j_free(v11);
		sub_14040F570(v8, &v63);
		v12 = (void*)(v63 - 16);
		if ((*(_DWORD*)(v63 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v12) == -1)
			j_j_free(v12);
		v13 = qword_140EBFF00;
		if (*(_BYTE*)(qword_140EBFF00 + 224))
		{
			while (1)
			{
				v14 = *(_QWORD*)(v13 + 240);
				v64 = v14;
				v15 = *(unsigned int*)(v14 - 16);
				if ((v15 & 0x30000000) == 0)
					_InterlockedIncrement((volatile signed __int32*)(v14 - 16));
				sub_140109800(v15, &v64);
				if (*(_BYTE*)(qword_140EBFF00 + 225))
					break;
				if (*(_BYTE*)(qword_140EBFF00 + 224))
				{
					Sleep(0x1388u);
					v91 = *(_QWORD*)(qword_140EBFF00 + 232);
					v16 = (volatile signed __int32*)(v91 - 16);
					if ((*(_DWORD*)(v91 - 16) & 0x30000000) == 0)
						_InterlockedIncrement(v16);
					sub_140048D00(&v65, "Your place in queue: ");
					v17 = *(_QWORD*)sub_14031B920(&v65, &v91);
					v66 = v17;
					if ((*(_DWORD*)(v17 - 16) & 0x30000000) == 0)
						_InterlockedIncrement((volatile signed __int32*)(v17 - 16));
					v18 = (void*)(v65 - 16);
					if ((*(_DWORD*)(v65 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v18) == -1)
						j_j_free(v18);
					v19 = sub_14031AF20(&v92, &v66);
					sub_14040F570(v8, v19);
					v20 = (void*)(v92 - 16);
					if ((*(_DWORD*)(v92 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v20) == -1)
						j_j_free(v20);
					v21 = (void*)(v66 - 16);
					if ((*(_DWORD*)(v66 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v21) == -1)
						j_j_free(v21);
					if ((*v16 & 0x30000000) == 0 && _InterlockedDecrement(v16) == -1)
						j_j_free((void*)v16);
					v13 = qword_140EBFF00;
					if (*(_BYTE*)(qword_140EBFF00 + 224))
						continue;
				}
				goto LABEL_46;
			}
			(**(void(__fastcall * **)(__int64, __int64))qword_140EBFF00)(qword_140EBFF00, 1i64);
			qword_140EBFF00 = 0i64;
			sub_140048D00(&v93, "WaitingTimeIsUp");
			v24 = (_BYTE*)(v93 - 16);
			v25 = *(_DWORD*)(v93 - 16);
			goto LABEL_159;
		}
	}
LABEL_46:
	sub_140048D00(&v67, "Getting ready for upload...");
	sub_14031AF20(&v68, &v67);
	v22 = (void*)(v67 - 16);
	if ((*(_DWORD*)(v67 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v22) == -1)
		j_j_free(v22);
	sub_14040F570(v8, &v68);
	v23 = (void*)(v68 - 16);
	if ((*(_DWORD*)(v68 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v23) == -1)
		j_j_free(v23);
	sub_140109400(v23, &v88);
	if (!(unsigned int)String::isNotEmpty(v88, "TasksBeforeUploadOK"))
	{
		*(_QWORD*)(v8 + 536) = 0x3FC999999999999Ai64;
		sub_140048D00(&v69, "Uploading measurement data to the Genelec Cloud...");
		sub_14031AF20(&v70, &v69);
		v26 = (void*)(v69 - 16);
		if ((*(_DWORD*)(v69 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v26) == -1)
			j_j_free(v26);
		sub_14040F570(v8, &v70);
		v27 = (void*)(v70 - 16);
		if ((*(_DWORD*)(v70 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v27) == -1)
			j_j_free(v27);
		sub_140108990(v27, &v87);
		if ((unsigned int)String::isNotEmpty(v87, "UploadOK"))
		{
			sub_140106D00();
			if (qword_140EBFF00)
				(**(void(__fastcall * **)(__int64, __int64))qword_140EBFF00)(qword_140EBFF00, 1i64);
			qword_140EBFF00 = 0i64;
		LABEL_155:
			v55 = v87 - 16;
			if ((*((_DWORD*)v87 - 4) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v55) == -1)
				j_j_free(v55);
			goto LABEL_158;
		}
		*(_QWORD*)(v8 + 536) = 0x3FD999999999999Ai64;
		sub_140048D00(&v71, "AutoCal is running in the Genelec Cloud...");
		sub_14031AF20(&v72, &v71);
		v28 = (void*)(v71 - 16);
		if ((*(_DWORD*)(v71 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v28) == -1)
			j_j_free(v28);
		sub_14040F570(v8, &v72);
		v29 = (void*)(v72 - 16);
		if ((*(_DWORD*)(v72 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v29) == -1)
			j_j_free(v29);
		sub_140108000(v29, &v86);
		*(_QWORD*)(v8 + 536) = 0x3FE3333333333333i64;
		v58 = dword_140DDCDD0;
		v30 = v86;
		if (!(unsigned int)String::isNotEmpty(v86, "AutocalDone"))
		{
			sub_140048D00(&v94, "ToDownload.zip");
			v58 = v94;
			goto LABEL_116;
		}
		if ((unsigned int)String::isNotEmpty(v30, "PreCalibrationFailed")
			&& (unsigned int)String::isNotEmpty(v30, "AutocalFailed")
			&& (unsigned int)String::isNotEmpty(v30, "AutocalCrashed"))
		{
			if (!(unsigned int)String::isNotEmpty(v30, "AutocalRunException"))
			{
				*(_BYTE*)(qword_140EBFF00 + 248) = 1;
				v57 = dword_140DDCDD0;
				do
				{
					sub_140048D00(&v73, "Retrieving calibration data from the Cloud");
					sub_14031AF20(&v74, &v73);
					v31 = (void*)(v73 - 16);
					if ((*(_DWORD*)(v73 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v31) == -1)
						j_j_free(v31);
					sub_14040F570(v8, &v74);
					v32 = (void*)(v74 - 16);
					if ((*(_DWORD*)(v74 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v32) == -1)
						j_j_free(v32);
					v33 = *(_QWORD*)(qword_140EBFF00 + 256);
					v75 = v33;
					v34 = *(unsigned int*)(v33 - 16);
					if ((v34 & 0x30000000) == 0)
						_InterlockedIncrement((volatile signed __int32*)(v33 - 16));
					v35 = (_BYTE * *)sub_140105D60(v34, &v95, &v75);
					v36 = v57;
					v57 = *v35;
					*v35 = v36;
					v37 = (void*)(v95 - 16);
					if ((*(_DWORD*)(v95 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v37) == -1)
						j_j_free(v37);
					if (!*(_BYTE*)(qword_140EBFF00 + 248))
						break;
					Sleep(0x1388u);
					if ((unsigned int)String::isNotEmpty(v57, "AutocalRunning"))
					{
						sub_140048D00(&v78, "Cannot connect to the cloud!");
						sub_14031AF20(&v79, &v78);
						v41 = (void*)(v78 - 16);
						if ((*(_DWORD*)(v78 - 16) & 0x30000000) == 0
							&& _InterlockedDecrement((volatile signed __int32*)v41) == -1)
						{
							j_j_free(v41);
						}
						sub_14040F570(v8, &v79);
						v39 = (void*)(v79 - 16);
						v40 = *(_DWORD*)(v79 - 16);
					}
					else
					{
						sub_140048D00(&v76, "Retrieving calibration data from the Cloud...");
						sub_14031AF20(&v77, &v76);
						v38 = (void*)(v76 - 16);
						if ((*(_DWORD*)(v76 - 16) & 0x30000000) == 0
							&& _InterlockedDecrement((volatile signed __int32*)v38) == -1)
						{
							j_j_free(v38);
						}
						sub_14040F570(v8, &v77);
						v39 = (void*)(v77 - 16);
						v40 = *(_DWORD*)(v77 - 16);
					}
					if ((v40 & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v39) == -1)
						j_j_free(v39);
					Sleep(0x1388u);
				} while (*(_BYTE*)(qword_140EBFF00 + 248));
				v42 = v57;
				if ((unsigned int)String::isNotEmpty(v57, "AutocalDone"))
				{
					if ((unsigned int)String::isNotEmpty(v57, "PreCalibrationFailed")
						&& (unsigned int)String::isNotEmpty(v57, "AutocalFailed")
						&& (unsigned int)String::isNotEmpty(v57, "AutocalCrashed"))
					{
					LABEL_112:
						v43 = v42 - 16;
						if ((*((_DWORD*)v42 - 4) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v43) == -1)
							j_j_free(v43);
						goto LABEL_116;
					}
					sub_140048D00(&v97, "error.txt");
					v58 = v97;
				}
				else
				{
					sub_140048D00(&v96, "ToDownload.zip");
					v58 = v96;
				}
				v42 = v57;
				goto LABEL_112;
			}
		}
		else
		{
			sub_140048D00(&v98, "error.txt");
			v58 = v98;
		}
	LABEL_116:
		v59 = dword_140DDCDD0;
		if (!(unsigned int)String::isNotEmpty(v58, "ToDownload.zip") || !(unsigned int)String::isNotEmpty(v58, "error.txt"))
		{
			sub_140048D00(&v80, "Downloading calibration data from Genelec Cloud...");
			sub_14031AF20(&v81, &v80);
			v44 = (void*)(v80 - 16);
			if ((*(_DWORD*)(v80 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v44) == -1)
				j_j_free(v44);
			sub_14040F570(v8, &v81);
			v45 = (void*)(v81 - 16);
			if ((*(_DWORD*)(v81 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v45) == -1)
				j_j_free(v45);
			v82 = v58;
			v46 = *((unsigned int*)v58 - 4);
			if ((v46 & 0x30000000) == 0)
				_InterlockedIncrement(v58 - 4);
			v47 = (_BYTE * *)sub_140107390(v46, &v99, &v82);
			v59 = *v47;
			*v47 = dword_140DDCDD0;
			v48 = (void*)(v99 - 16);
			if ((*(_DWORD*)(v99 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v48) == -1)
				j_j_free(v48);
		}
		if ((unsigned int)String::isNotEmpty(v59, "DownloadOK"))
		{
			sub_140106D00();
			if (qword_140EBFF00)
				(**(void(__fastcall * **)(__int64, __int64))qword_140EBFF00)(qword_140EBFF00, 1i64);
			qword_140EBFF00 = 0i64;
		}
		else
		{
			*(_QWORD*)(v8 + 536) = 0x3FE999999999999Ai64;
			sub_140048D00(&v83, "Extracting files...");
			sub_14031AF20(&v84, &v83);
			v49 = (void*)(v83 - 16);
			if ((*(_DWORD*)(v83 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v49) == -1)
				j_j_free(v49);
			sub_14040F570(v8, &v84);
			v50 = (void*)(v84 - 16);
			if ((*(_DWORD*)(v84 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v50) == -1)
				j_j_free(v50);
			sub_140106DA0(v50, &v85);
			if (!(unsigned int)String::isNotEmpty(v85, "ExtractOK"))
				* (_QWORD*)(v8 + 536) = 0x3FF0000000000000i64;
			sub_140106D00();
			if (qword_140EBFF00)
				(**(void(__fastcall * **)(__int64, __int64))qword_140EBFF00)(qword_140EBFF00, 1i64);
			qword_140EBFF00 = 0i64;
			v51 = v85 - 16;
			if ((*((_DWORD*)v85 - 4) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v51) == -1)
				j_j_free(v51);
		}
		v52 = v59 - 16;
		if ((*((_DWORD*)v59 - 4) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v52) == -1)
			j_j_free(v52);
		v53 = v58 - 4;
		if ((*(v58 - 4) & 0x30000000) == 0 && _InterlockedDecrement(v53) == -1)
			j_j_free((void*)v53);
		v54 = v86 - 16;
		if ((*((_DWORD*)v86 - 4) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v54) == -1)
			j_j_free(v54);
		goto LABEL_155;
	}
	sub_140106D00();
	if (qword_140EBFF00)
		(**(void(__fastcall * **)(__int64, __int64))qword_140EBFF00)(qword_140EBFF00, 1i64);
	qword_140EBFF00 = 0i64;
LABEL_158:
	v24 = v88 - 16;
	v25 = *((_DWORD*)v88 - 4);
LABEL_159:
	if ((v25 & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v24) == -1)
		j_j_free(v24);
LABEL_162:
	v56 = v89 - 16;
	if ((*((_DWORD*)v89 - 4) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v56) == -1)
		j_j_free(v56);
*/
}

void AutoCal2ProgressWindow::threadComplete(bool userPressedCancel)
{
/*
	__int64 v3; // r14
	_DWORD* v4; // rdi
	__int64* v5; // rdx
	void* v6; // rcx
	void* v7; // rcx
	void* v8; // rcx
	void* v9; // rcx
	__int64 v10; // rax
	void* v11; // rcx
	void* v12; // rcx
	LPCWSTR* v13; // rax
	__int64 v14; // rcx
	void* v15; // rcx
	void* v16; // rcx
	void* v17; // rcx
	_BYTE* v18; // rcx
	int v19; // eax
	__int64 v20; // rax
	void* v21; // rcx
	void* v22; // rcx
	LPCWSTR* v23; // rax
	volatile signed __int32* v24; // r12
	char v25; // r13
	__int64 v26; // rax
	void* v27; // rcx
	__int64 v28; // r15
	void* v29; // rcx
	volatile signed __int32* v30; // rbx
	char* v31; // rax
	char v32; // dl
	unsigned __int8 v33; // cl
	_BYTE* v34; // rax
	_BYTE* v35; // rcx
	void* v36; // rcx
	int i; // ebx
	void(__fastcall * **v38)(_QWORD, __int64); // rcx
	__int64 v39; // rax
	__int64 v40; // rcx
	void(__fastcall * **v41)(_QWORD, __int64); // r8
	bool v42; // r14
	__int64 v43; // rbx
	bool v44; // di
	__int64 v45; // rcx
	__int64 v46; // rcx
	int v47; // ebx
	int v48; // eax
	void* v49; // rcx
	void* v50; // rcx
	int v51; // ebx
	void* v52; // rcx
	void* v53; // rcx
	void* v54; // rcx
	void* v55; // rcx
	void* v56; // rcx
	char* v57; // rcx
	char* v58; // rcx
	volatile signed __int32* v59; // rbx
	__int64 v60; // rcx
	_DWORD* v61; // rcx
	_DWORD* v62; // rcx
	_BYTE* v63; // rcx
	void* v64; // rcx
	void* v65; // rcx
	void* v66; // rcx
	void* v67; // rcx
	void* v68; // rcx
	char v69; // bl
	void* v70; // rcx
	void* v71; // rcx
	void* v72; // rcx
	void* v73; // rcx
	__int64 v74; // rcx
	volatile signed __int32* v75; // rcx
	void* v76; // rcx
	void* v77; // rcx
	void* v78; // rcx
	void* v79; // rcx
	void* v80; // rcx
	void(__fastcall * **v81)(_QWORD, __int64); // rcx
	char* v82; // [rsp+40h] [rbp-C0h] BYREF
	_BYTE* v83; // [rsp+48h] [rbp-B8h] BYREF
	__int64 v84; // [rsp+50h] [rbp-B0h] BYREF
	__int64 v85[2]; // [rsp+58h] [rbp-A8h] BYREF
	_DWORD* v86; // [rsp+68h] [rbp-98h] BYREF
	__int64 v87; // [rsp+70h] [rbp-90h] BYREF
	char* v88; // [rsp+78h] [rbp-88h] BYREF
	_DWORD* v89; // [rsp+80h] [rbp-80h] BYREF
	_DWORD* v90; // [rsp+88h] [rbp-78h]
	void* v91; // [rsp+90h] [rbp-70h]
	__int64 v92; // [rsp+98h] [rbp-68h] BYREF
	__int64 v93; // [rsp+A0h] [rbp-60h] BYREF
	__int64 v94; // [rsp+A8h] [rbp-58h] BYREF
	__int64 v95; // [rsp+B0h] [rbp-50h] BYREF
	__int64 v96; // [rsp+B8h] [rbp-48h] BYREF
	__int64 v97; // [rsp+C0h] [rbp-40h] BYREF
	__int64 v98; // [rsp+C8h] [rbp-38h] BYREF
	__int64 v99; // [rsp+D0h] [rbp-30h] BYREF
	__int64 v100; // [rsp+D8h] [rbp-28h] BYREF
	__int64 v101; // [rsp+E0h] [rbp-20h] BYREF
	__int64 v102; // [rsp+E8h] [rbp-18h] BYREF
	__int64 v103; // [rsp+F0h] [rbp-10h] BYREF
	__int64 v104; // [rsp+F8h] [rbp-8h] BYREF
	_BYTE* v105; // [rsp+100h] [rbp+0h] BYREF
	_BYTE* v106; // [rsp+108h] [rbp+8h] BYREF
	__int64 v107; // [rsp+110h] [rbp+10h] BYREF
	__int64 v108; // [rsp+118h] [rbp+18h] BYREF
	__int64 v109; // [rsp+120h] [rbp+20h] BYREF
	__int64 v110; // [rsp+128h] [rbp+28h] BYREF
	__int64 v111; // [rsp+130h] [rbp+30h] BYREF
	__int64 v112; // [rsp+138h] [rbp+38h] BYREF
	__int64 v113; // [rsp+140h] [rbp+40h] BYREF
	__int64 v114; // [rsp+148h] [rbp+48h] BYREF
	_DWORD* v115; // [rsp+150h] [rbp+50h] BYREF
	_BYTE* v116; // [rsp+158h] [rbp+58h] BYREF
	__int64 v117; // [rsp+160h] [rbp+60h] BYREF
	__int64 v118; // [rsp+168h] [rbp+68h] BYREF
	__int64 v119; // [rsp+170h] [rbp+70h] BYREF
	__int64 v120; // [rsp+178h] [rbp+78h] BYREF
	__int64 v121; // [rsp+180h] [rbp+80h] BYREF
	__int64 v122; // [rsp+188h] [rbp+88h] BYREF
	__int64 v123; // [rsp+190h] [rbp+90h] BYREF
	__int64 v124; // [rsp+198h] [rbp+98h] BYREF
	_BYTE* v125; // [rsp+1A0h] [rbp+A0h] BYREF
	__int64 v126; // [rsp+1A8h] [rbp+A8h] BYREF
	__int64 v127; // [rsp+1B0h] [rbp+B0h] BYREF
	__int64 v128; // [rsp+1B8h] [rbp+B8h] BYREF
	__int64 v129; // [rsp+1C0h] [rbp+C0h] BYREF
	__int64 v130; // [rsp+1C8h] [rbp+C8h] BYREF
	__int64 v131; // [rsp+1D0h] [rbp+D0h] BYREF
	__int64 v132; // [rsp+1D8h] [rbp+D8h] BYREF
	__int64 v133; // [rsp+1E0h] [rbp+E0h] BYREF
	_BYTE* v134; // [rsp+1E8h] [rbp+E8h]
	__int64 v135; // [rsp+1F0h] [rbp+F0h] BYREF
	__int64 v136; // [rsp+1F8h] [rbp+F8h] BYREF
	__int64 v137; // [rsp+200h] [rbp+100h] BYREF
	void* v138; // [rsp+208h] [rbp+108h]
	__int64 v139; // [rsp+210h] [rbp+110h] BYREF
	_BYTE* v140; // [rsp+218h] [rbp+118h]
	__int64 v141; // [rsp+220h] [rbp+120h]
	__int64 v142; // [rsp+228h] [rbp+128h]
	void* Block; // [rsp+230h] [rbp+130h]
	__int64 v144; // [rsp+238h] [rbp+138h]
	__int16 v145; // [rsp+240h] [rbp+140h]
	__int64 v146; // [rsp+280h] [rbp+180h]
	void(__fastcall * **v147)(_QWORD, __int64); // [rsp+288h] [rbp+188h]
	void** v148; // [rsp+290h] [rbp+190h]
	__int64 v149; // [rsp+298h] [rbp+198h] BYREF
	char v150; // [rsp+2A0h] [rbp+1A0h]
	char v151[80]; // [rsp+2A8h] [rbp+1A8h] BYREF
	char v152[80]; // [rsp+2F8h] [rbp+1F8h] BYREF
	__int64 v153; // [rsp+348h] [rbp+248h]
	char v154; // [rsp+350h] [rbp+250h]

	v3 = a1;
	v87 = a1;
	v4 = *(_DWORD * *)(a1 + 624);
	v89 = v4;
	v148 = &juce::MessageManagerLock::`vftable';
		v149 = 0i64;
	v150 = 0;
	Mtx_init_in_situ((_Mtx_t)v151, 2);
	Cnd_init_in_situ((_Cnd_t)v152);
	v152[72] = 0;
	v153 = 0i64;
	while (!(unsigned __int8)sub_140324270(&v149))
		;
	v154 = 1;
	if (a2)
	{
		if (qword_140EBFF00)
		{
			if (*(_BYTE*)(qword_140EBFF00 + 224))
			{
				sub_140048D00(&v130, "WaitingCanceled");
				v5 = &v130;
			}
			else
			{
				sub_140048D00(&v131, "CalCanceled");
				v5 = &v131;
			}
			sub_140106680(qword_140EBFF00, v5);
			sub_140106D00();
			if (qword_140EBFF00)
				(**(void(__fastcall * **)(__int64, __int64))qword_140EBFF00)(qword_140EBFF00, 1i64);
			qword_140EBFF00 = 0i64;
		}
		v89 = dword_140DDCDD0;
		sub_140048D00(&v132, "Optimization Aborted!");
		sub_14031AF20(&v93, &v132);
		v6 = (void*)(v132 - 16);
		if ((*(_DWORD*)(v132 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v6) == -1)
			j_j_free(v6);
		sub_140048D00(&v133, "Progress");
		sub_14031AF20(&v92, &v133);
		v7 = (void*)(v133 - 16);
		if ((*(_DWORD*)(v133 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v7) == -1)
			j_j_free(v7);
		sub_14040FE70(2, (unsigned int)& v92, (unsigned int)& v93, (unsigned int)& v89, 0i64);
		v8 = (void*)(v92 - 16);
		if ((*(_DWORD*)(v92 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v8) == -1)
			j_j_free(v8);
		v9 = (void*)(v93 - 16);
		if ((*(_DWORD*)(v93 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v9) == -1)
			j_j_free(v9);
	LABEL_236:
		if (v3 != 176)
			(**(void(__fastcall * **)(__int64, __int64))(v3 - 176))(v3 - 176, 1i64);
		goto LABEL_238;
	}
	v10 = *((_QWORD*)ArgList + 273);
	v95 = v10;
	if ((*(_DWORD*)(v10 - 16) & 0x30000000) == 0)
		_InterlockedIncrement((volatile signed __int32*)(v10 - 16));
	sub_140308BF0(&v94, &v95);
	sub_14031A890(&v94, v85, "error.txt");
	v11 = (void*)(v94 - 16);
	if ((*(_DWORD*)(v94 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v11) == -1)
		j_j_free(v11);
	v12 = (void*)(v95 - 16);
	if ((*(_DWORD*)(v95 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v12) == -1)
		j_j_free(v12);
	if (*(_BYTE*)v85[0])
	{
		v13 = (LPCWSTR*)sub_140046AE0(&v136, v85);
		if (GetFileAttributesW(*v13) != -1)
		{
			sub_1401FD680(v14, &v99, v85);
			sub_140048D00(&v98, byte_14046D517);
			sub_140048D00(&v96, "AutoCal2 cloud calibration failed");
			sub_14031AF20(&v97, &v96);
			v15 = (void*)(v96 - 16);
			if ((*(_DWORD*)(v96 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v15) == -1)
				j_j_free(v15);
			sub_14040EFD0(2, (unsigned int)& v97, (unsigned int)& v99, (unsigned int)& v98, (__int64)v4);
			v16 = (void*)(v97 - 16);
			if ((*(_DWORD*)(v97 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v16) == -1)
				j_j_free(v16);
			v17 = (void*)(v98 - 16);
			if ((*(_DWORD*)(v98 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v17) == -1)
				j_j_free(v17);
			v18 = (_BYTE*)(v99 - 16);
			v19 = *(_DWORD*)(v99 - 16);
			goto LABEL_230;
		}
	}
	v20 = *((_QWORD*)ArgList + 273);
	v101 = v20;
	if ((*(_DWORD*)(v20 - 16) & 0x30000000) == 0)
		_InterlockedIncrement((volatile signed __int32*)(v20 - 16));
	sub_140308BF0(&v100, &v101);
	sub_14031A890(&v100, &v83, "toglm.json");
	v21 = (void*)(v100 - 16);
	if ((*(_DWORD*)(v100 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v21) == -1)
		j_j_free(v21);
	v22 = (void*)(v101 - 16);
	if ((*(_DWORD*)(v101 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v22) == -1)
		j_j_free(v22);
	if (!*v83 || (v23 = (LPCWSTR*)sub_140046AE0(&v137, &v83), GetFileAttributesW(*v23) == -1))
	{
		sub_140048D00(&v87, &unk_14046D52B);
		sub_140048D00(&v126, "Calibration data was not received from the server.");
		sub_14031AF20(&v129, &v126);
		v76 = (void*)(v126 - 16);
		if ((*(_DWORD*)(v126 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v76) == -1)
			j_j_free(v76);
		sub_140048D00(&v127, "Calibration data missing");
		sub_14031AF20(&v128, &v127);
		v77 = (void*)(v127 - 16);
		if ((*(_DWORD*)(v127 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v77) == -1)
			j_j_free(v77);
		sub_14040EFD0(2, (unsigned int)& v128, (unsigned int)& v129, (unsigned int)& v87, (__int64)v4);
		v78 = (void*)(v128 - 16);
		if ((*(_DWORD*)(v128 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v78) == -1)
			j_j_free(v78);
		v79 = (void*)(v129 - 16);
		if ((*(_DWORD*)(v129 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v79) == -1)
			j_j_free(v79);
		v75 = (volatile signed __int32*)(v87 - 16);
		if ((*(_DWORD*)(v87 - 16) & 0x30000000) != 0 || _InterlockedDecrement(v75) != -1)
			goto LABEL_229;
		goto LABEL_228;
	}
	v134 = (_BYTE*) * ((_QWORD*)ArgList + 281);
	v24 = (volatile signed __int32*)(v134 - 16);
	if ((*((_DWORD*)v134 - 4) & 0x30000000) == 0)
		_InterlockedIncrement(v24);
	if ((unsigned int)String::isNotEmpty(v134, byte_14046D523))
	{
		sub_140048D00(&v117, "Cancel");
		sub_14031AF20(&v124, &v117);
		v65 = (void*)(v117 - 16);
		if ((*(_DWORD*)(v117 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v65) == -1)
			j_j_free(v65);
		sub_140048D00(&v118, "Save");
		sub_14031AF20(&v123, &v118);
		v66 = (void*)(v118 - 16);
		if ((*(_DWORD*)(v118 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v66) == -1)
			j_j_free(v66);
		sub_140048D00(&v119, "Save acoustic settings to the Group preset?");
		sub_14031AF20(&v122, &v119);
		v67 = (void*)(v119 - 16);
		if ((*(_DWORD*)(v119 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v67) == -1)
			j_j_free(v67);
		sub_140048D00(&v120, "Calibration Completed");
		sub_14031AF20(&v121, &v120);
		v68 = (void*)(v120 - 16);
		if ((*(_DWORD*)(v120 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v68) == -1)
			j_j_free(v68);
		v69 = sub_14040FB40(
			1,
			(unsigned int)& v121,
			(unsigned int)& v122,
			(unsigned int)& v123,
			(__int64)& v124,
			(__int64)v4,
			0i64);
		v70 = (void*)(v121 - 16);
		if ((*(_DWORD*)(v121 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v70) == -1)
			j_j_free(v70);
		v71 = (void*)(v122 - 16);
		if ((*(_DWORD*)(v122 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v71) == -1)
			j_j_free(v71);
		v72 = (void*)(v123 - 16);
		if ((*(_DWORD*)(v123 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v72) == -1)
			j_j_free(v72);
		v73 = (void*)(v124 - 16);
		if ((*(_DWORD*)(v124 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v73) == -1)
			j_j_free(v73);
		if (v69 == 1)
		{
			v125 = v83;
			v74 = *((unsigned int*)v83 - 4);
			if ((v74 & 0x30000000) == 0)
				_InterlockedIncrement((volatile signed __int32*)v83 - 4);
			sub_1401FC760(v74, &v125);
			sub_1401FBBD0();
			sub_1400F2C00(*(_QWORD*)(v3 + 624));
		}
	LABEL_211:
		if ((*v24 & 0x30000000) != 0 || _InterlockedDecrement(v24) != -1)
			goto LABEL_229;
		v75 = v24;
	LABEL_228:
		j_j_free((void*)v75);
	LABEL_229:
		v18 = v83 - 16;
		v19 = *((_DWORD*)v83 - 4);
	LABEL_230:
		if ((v19 & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v18) == -1)
			j_j_free(v18);
		v80 = (void*)(v85[0] - 16);
		if ((*(_DWORD*)(v85[0] - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v80) == -1)
			j_j_free(v80);
		goto LABEL_236;
	}
	v25 = 0;
	v86 = dword_140DDCDD0;
	v26 = *((_QWORD*)ArgList + 272);
	v102 = v26;
	if ((*(_DWORD*)(v26 - 16) & 0x30000000) == 0)
		_InterlockedIncrement((volatile signed __int32*)(v26 - 16));
	sub_140308BF0(&v104, &v102);
	v27 = (void*)(v102 - 16);
	if ((*(_DWORD*)(v102 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v27) == -1)
		j_j_free(v27);
	v28 = v104;
	while (1)
	{
		sub_140048D00(&v105, "*.sam");
		sub_140048D00(&v103, "GLM4 - Save As...");
		sub_14031AF20(&v107, &v103);
		v29 = (void*)(v103 - 16);
		if ((*(_DWORD*)(v103 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v29) == -1)
			j_j_free(v29);
		v139 = v107;
		if ((*(_DWORD*)(v107 - 16) & 0x30000000) == 0)
			_InterlockedIncrement((volatile signed __int32*)(v107 - 16));
		v140 = v105;
		v30 = (volatile signed __int32*)(v105 - 16);
		if ((*((_DWORD*)v105 - 4) & 0x30000000) == 0)
			_InterlockedIncrement(v30);
		v141 = v104;
		if ((*(_DWORD*)(v28 - 16) & 0x30000000) == 0)
			_InterlockedIncrement((volatile signed __int32*)(v28 - 16));
		v142 = 0i64;
		Block = 0i64;
		v144 = 0i64;
		v145 = 1;
		v146 = 0i64;
		v147 = 0i64;
		v31 = v105;
		if (*v105)
		{
			v32 = *v105;
			while (v32 == 32 || (unsigned __int8)(v32 - 9) <= 4u)
			{
				++v31;
				if (v32 < 0)
				{
					v33 = 64;
					if ((v32 & 0x40) != 0)
					{
						do
						{
							if (v33 <= 8u)
								break;
							++v31;
							v33 >>= 1;
						} while ((v33 & (unsigned __int8)v32) != 0);
					}
				}
				v32 = *v31;
				if (!*v31)
					goto LABEL_81;
			}
		}
		else
		{
		LABEL_81:
			sub_140048D00(&v106, "*");
			v34 = v140;
			v140 = v106;
			v106 = v34;
			v35 = v34 - 16;
			if ((*((_DWORD*)v34 - 4) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v35) == -1)
				j_j_free(v35);
		}
		v36 = (void*)(v107 - 16);
		if ((*(_DWORD*)(v107 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v36) == -1)
			j_j_free(v36);
		if ((*v30 & 0x30000000) == 0 && _InterlockedDecrement(v30) == -1)
			j_j_free((void*)v30);
		Component::BailOutChecker(&v108, qword_140EC0010);
		for (i = 0; i < SHIDWORD(v144); ++i)
			sub_140002BF0((char*)Block + 72 * i);
		HIDWORD(v144) = 0;
		if ((_DWORD)v144)
		{
			free(Block);
			Block = 0i64;
		}
		LODWORD(v144) = 0;
		v38 = v147;
		if (v147)
		{
			v147 = 0i64;
			(**v38)(v38, 1i64);
		}
		if ((_BYTE)v145)
		{
			v138 = operator new(0xC8ui64);
			v39 = sub_1400B76F0(v138, &v139, 134i64);
			if (v39)
				v40 = v39 + 176;
			else
				v40 = 0i64;
		}
		else
		{
			v91 = operator new(0xC08ui64);
			v40 = sub_140091130(v91, &v139, 134i64);
		}
		v41 = v147;
		v147 = (void(__fastcall * **)(_QWORD, __int64))v40;
		if (v41)
		{
			(**v41)(v41, 1i64);
			v40 = (__int64)v147;
		}
		(*(void(__fastcall * *)(__int64))(*(_QWORD*)v40 + 16i64))(v40);
		v42 = SHIDWORD(v144) > 0;
		v43 = v108;
		v44 = v108 != 0;
		if (v108)
		{
			if (*(_QWORD*)(v108 + 16) && Component::isShowing(*(_QWORD*)(v108 + 16)))
			{
				v45 = v44 ? *(_QWORD*)(v43 + 16) : 0i64;
				if (!Component::isCurrentlyBlockedByAnotherModalComponent(v45))
				{
					if (v44)
						v46 = *(_QWORD*)(v43 + 16);
					else
						v46 = 0i64;
					Component::grabKeyboardFocusInternal(v46, 2u, 1);
				}
			}
			if (v43 && !_InterlockedAdd((volatile signed __int32*)(v43 + 8), 0xFFFFFFFF))
				(**(void(__fastcall * **)(__int64, __int64))v108)(v108, 1i64);
		}
		if (!v42)
			break;
		sub_14040F1B0(&v139, &v82);
		v47 = String::lastIndexOfChar(&v82, 92) + 1;
		v48 = String::lastIndexOfChar(&v82, 46);
		if (v48 <= v47)
			sub_14030C470(&v82, &v88, (unsigned int)v47);
		else
			String::substring(&v82, &v88, v47, v48);
		if ((unsigned __int8)sub_14026E2D0(&v88))
		{
			sub_14031A6B0(&v86, &v82);
			v25 = 1;
		}
		else
		{
			sub_140048D00(&v114, &unk_14046D52A);
			sub_140048D00(&v113, "\\ / : * ? | < > \" # % & { } $ ! ' @ + = `");
			sub_140048D00(&v109, "Setup name contains invalid charaters, please type in a name without special characters.");
			sub_14031AF20(&v84, &v109);
			v49 = (void*)(v109 - 16);
			if ((*(_DWORD*)(v109 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v49) == -1)
				j_j_free(v49);
			v85[1] = (__int64)& v84;
			ImageCache::getFromHashCode(&v84, "\n", (int)"");
			v110 = v84;
			if ((*(_DWORD*)(v84 - 16) & 0x30000000) == 0)
				_InterlockedIncrement((volatile signed __int32*)(v84 - 16));
			v50 = (void*)(v84 - 16);
			if ((*(_DWORD*)(v84 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v50) == -1)
				j_j_free(v50);
			v51 = sub_14031B550(&v135, &v110, &v113);
			sub_140048D00(&v111, "Error");
			sub_14031AF20(&v112, &v111);
			v52 = (void*)(v111 - 16);
			if ((*(_DWORD*)(v111 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v52) == -1)
				j_j_free(v52);
			sub_14040FE70(2, (unsigned int)& v112, v51, (unsigned int)& v114, (__int64)v89);
			v53 = (void*)(v112 - 16);
			if ((*(_DWORD*)(v112 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v53) == -1)
				j_j_free(v53);
			v54 = (void*)(v135 - 16);
			if ((*(_DWORD*)(v135 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v54) == -1)
				j_j_free(v54);
			v55 = (void*)(v113 - 16);
			if ((*(_DWORD*)(v113 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v55) == -1)
				j_j_free(v55);
			v56 = (void*)(v114 - 16);
			if ((*(_DWORD*)(v114 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v56) == -1)
				j_j_free(v56);
		}
		v57 = v88 - 16;
		if ((*((_DWORD*)v88 - 4) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v57) == -1)
			j_j_free(v57);
		v58 = v82 - 16;
		if ((*((_DWORD*)v82 - 4) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v58) == -1)
			j_j_free(v58);
		sub_14040F290(&v139);
		if (v25)
		{
			v90 = v86;
			v59 = v86 - 4;
			if ((*(v86 - 4) & 0x30000000) == 0)
				_InterlockedIncrement(v59);
			v115 = v90;
			if ((*v59 & 0x30000000) == 0)
				_InterlockedIncrement(v59);
			sub_140200820(ArgList, &v115, 0i64);
			v116 = v83;
			v60 = *((unsigned int*)v83 - 4);
			if ((v60 & 0x30000000) == 0)
				_InterlockedIncrement((volatile signed __int32*)v83 - 4);
			sub_1401FC760(v60, &v116);
			sub_1401FBBD0();
			v3 = v87;
			sub_1400F2C00(*(_QWORD*)(v87 + 624));
			if ((*v59 & 0x30000000) == 0 && _InterlockedDecrement(v59) == -1)
				j_j_free((void*)v59);
			if ((*(_DWORD*)(v28 - 16) & 0x30000000) == 0
				&& _InterlockedDecrement((volatile signed __int32*)(v28 - 16)) == -1)
			{
				j_j_free((void*)(v28 - 16));
			}
			v61 = v86 - 4;
			if ((*(v86 - 4) & 0x30000000) == 0 && _InterlockedDecrement(v61) == -1)
				j_j_free(v61);
			goto LABEL_211;
		}
	}
	sub_14040F290(&v139);
	if ((*(_DWORD*)(v28 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)(v28 - 16)) == -1)
		j_j_free((void*)(v28 - 16));
	v62 = v86 - 4;
	if ((*(v86 - 4) & 0x30000000) == 0 && _InterlockedDecrement(v62) == -1)
		j_j_free(v62);
	if ((*v24 & 0x30000000) == 0 && _InterlockedDecrement(v24) == -1)
		j_j_free((void*)v24);
	v63 = v83 - 16;
	if ((*((_DWORD*)v83 - 4) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v63) == -1)
		j_j_free(v63);
	v64 = (void*)(v85[0] - 16);
	if ((*(_DWORD*)(v85[0] - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v64) == -1)
		j_j_free(v64);
LABEL_238:
	v148 = &juce::MessageManagerLock::`vftable';
		sub_1403241F0(&v149);
	sub_1403241F0(&v149);
	Cnd_destroy_in_situ((_Cnd_t)v152);
	Mtx_destroy_in_situ((_Mtx_t)v151);
	v81 = (void(__fastcall * **)(_QWORD, __int64))v149;
	if (v149)
	{
		if (_InterlockedExchangeAdd((volatile signed __int32*)(v149 + 8), 0xFFFFFFFF) == 1)
			(**v81)(v81, 1i64);
	}
*/
}