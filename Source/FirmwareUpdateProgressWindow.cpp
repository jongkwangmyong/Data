#include "FirmwareUpdateProgressWindow.h"
FirmwareUpdateProgressWindow::FirmwareUpdateProgressWindow()
	:ThreadWithProgressWindow("", false, false)
{

}

FirmwareUpdateProgressWindow::~FirmwareUpdateProgressWindow()
{

}

void FirmwareUpdateProgressWindow::run()
{
/*
	sub_140048D00(&v16, "Updating firmware!");
	EnterCriticalSection(a1 + 14);
	v2 = v16;
	if ((*(_DWORD*)(v16 - 16) & 0x30000000) == 0)
		_InterlockedIncrement((volatile signed __int32*)(v16 - 16));
	v3 = _InterlockedExchange64((volatile __int64*)& a1[13].SpinCount, v16);
	v4 = *(_DWORD*)(v3 - 16);
	v5 = (void*)(v3 - 16);
	if ((v4 & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v5) == -1)
		j_j_free(v5);
	LeaveCriticalSection(a1 + 14);
	if ((*(_DWORD*)(v2 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)(v2 - 16)) == -1)
		j_j_free((void*)(v2 - 16));
	v6 = (_BYTE * *)ArgList;
	a1[13].OwningThread = (HANDLE)0xBFF0000000000000i64;
	*v6[174] = 1;
	v7 = a1[15].OwningThread;
	if (v7)
	{
		v8 = a1;
		if (a1 == (struct _RTL_CRITICAL_SECTION*)176)
			v8 = 0i64;
		sub_14020DD20(v7, v8);
	}
	else
	{
		v9 = a1[15].LockSemaphore;
		if (v9)
		{
			v10 = a1;
			if (a1 == (struct _RTL_CRITICAL_SECTION*)176)
				v10 = 0i64;
			sub_1402042A0(v9, v10);
		}
	}
	WaitableEvent::wait((__int64)& a1[6].LockCount, 3000);
	sub_140048D00(&v17, "Almost done...");
	EnterCriticalSection(a1 + 14);
	v11 = v17;
	if ((*(_DWORD*)(v17 - 16) & 0x30000000) == 0)
		_InterlockedIncrement((volatile signed __int32*)(v17 - 16));
	v12 = _InterlockedExchange64((volatile __int64*)& a1[13].SpinCount, v17);
	v13 = *(_DWORD*)(v12 - 16);
	v14 = (void*)(v12 - 16);
	if ((v13 & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v14) == -1)
		j_j_free(v14);
	LeaveCriticalSection(a1 + 14);
	if ((*(_DWORD*)(v11 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)(v11 - 16)) == -1)
		j_j_free((void*)(v11 - 16));
	**((_BYTE * *)ArgList + 174) = 0;
	a1[13].OwningThread = (HANDLE)0xBFF0000000000000i64;
	WaitableEvent::wait((__int64)& a1[6].LockCount, 1000);
	result = 0x3FF0000000000000i64;
	a1[13].OwningThread = (HANDLE)0x3FF0000000000000i64;
	return result;*/
}

void FirmwareUpdateProgressWindow::threadComplete(bool userPressedCancel)
{
/*
	if (a2)
	{
		v17 = dword_140DDCDD0;
		sub_140048D00(&v19, "Firmware update aborted!");
		sub_14031AF20(&v12, &v19);
		v3 = (void*)(v19 - 16);
		if ((*(_DWORD*)(v19 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v3) == -1)
			j_j_free(v3);
		sub_140048D00(&v20, "Progress Window");
		sub_14031AF20(&v21, &v20);
		v4 = (void*)(v20 - 16);
		if ((*(_DWORD*)(v20 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v4) == -1)
			j_j_free(v4);
		sub_14040FE70(2, (unsigned int)& v21, (unsigned int)& v12, (unsigned int)& v17, 0i64);
		v5 = (void*)(v21 - 16);
		if ((*(_DWORD*)(v21 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v5) == -1)
			j_j_free(v5);
		v6 = (void*)(v12 - 16);
		if ((*(_DWORD*)(v12 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v6) == -1)
			j_j_free(v6);
		result = 0x3FFFFFFFi64;
	}
	else
	{
		v18 = dword_140DDCDD0;
		sub_140048D00(&v13, "Firmware update completed.");
		sub_14031AF20(&v16, &v13);
		v8 = (void*)(v13 - 16);
		if ((*(_DWORD*)(v13 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v8) == -1)
			j_j_free(v8);
		sub_140048D00(&v14, "Firmware Update");
		sub_14031AF20(&v15, &v14);
		v9 = (void*)(v14 - 16);
		if ((*(_DWORD*)(v14 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v9) == -1)
			j_j_free(v9);
		sub_14040FE70(3, (unsigned int)& v15, (unsigned int)& v16, (unsigned int)& v18, 0i64);
		v10 = (void*)(v15 - 16);
		if ((*(_DWORD*)(v15 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v10) == -1)
			j_j_free(v10);
		v11 = (void*)(v16 - 16);
		if ((*(_DWORD*)(v16 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v11) == -1)
			j_j_free(v11);
		result = 0x3FFFFFFFi64;
	}
	if (a1 != 176)
		result = (**(__int64(__fastcall * **)(__int64, __int64))(a1 - 176))(a1 - 176, 1i64);
	return result;*/
}

