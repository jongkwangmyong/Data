#include "genPowerMateUSB.h"


void genPowerMateUSB::run()//__int64  sub_14021CF10(__int64 a1)
{
	/*
	__int64 v1; // rdi
	__int64 result; // rax
	DWORD v4; // ecx
	struct _Mtx_internal_imp_t* v5; // rbx
	int v6; // eax
	int v7; // esi
	__int64 v8; // rcx
	int i; // eax
	double v10; // xmm0_8
	double v11; // xmm0_8
	HANDLE* v12; // r14
	__int64 v13; // [rsp+20h] [rbp-68h]
	__int64 v14[4]; // [rsp+38h] [rbp-50h] BYREF

	v1 = a1;
	v13 = a1;
	while (1)
	{
		result = *(unsigned int*)(v1 + 440);
		if ((_DWORD)result)
			break;
		v4 = 200;
		if (!*(_BYTE*)(v1 + 532))
			v4 = 2000;
		Sleep(v4);
		v5 = qword_140EBFF60;
		v6 = Mtx_lock(qword_140EBFF60);
		if (v6)
			std::_Throw_C_error(v6);
		v14[0] = 0i64;
		v7 = 0;
		v8 = *(_QWORD*)(v1 + 512);
		if (v8 && *(_BYTE*)(v1 + 532))
		{
			for (i = hid_read_timeout(v8, v14, *(int*)(v1 + 528), 5i64, v13);
				i > 0;
				i = hid_read_timeout(*(_QWORD*)(v1 + 512), v14, *(int*)(v1 + 528), 5i64, v13))
			{
				if (LOBYTE(v14[0]) == 1)
				{
					++v7;
					*(_BYTE*)(v1 + 524) = 1;
				}
				else if (BYTE1(v14[0]))
				{
					v10 = *(float*)(a1 + 520);
					if ((v14[0] & 0x8000) == 0)
						v11 = v10 + 0.5;
					else
						v11 = v10 - 0.5;
					*(float*)(a1 + 520) = v11;
				}
			}
			if (i == -1)
			{
				v12 = *(HANDLE**)(v1 + 512);
				if (v12)
				{
					CancelIo(*v12);
					sub_1401DA0D0(v12);
					*(_BYTE*)(v1 + 532) = 0;
					*(_QWORD*)(v1 + 512) = 0i64;
				}
			}
			if (v7)
			{
				if (v7 >= 5)
				{
					if (v7 > 5)
						*(_BYTE*)(v1 + 525) = 1;
					*(_BYTE*)(v1 + 524) = 1;
				}
				else
				{
					*(_BYTE*)(v1 + 524) = 1;
					if (v7 > 2)
						*(_BYTE*)(v1 + 524) = 1;
				}
			}
		}
		else
		{
			sub_14021CA10(v1);
		}
		Mtx_unlock(v5);
	}
	return result;
	*/
		return 0;
}
