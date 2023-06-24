#include "LayerSelectComponent.h"
void LayerSelectComponent::mouseDrag(const MouseEvent&)
{
	/*_int64 v2; // rbx
	__int64 v3; // rdi
	unsigned int v4; // ecx
	unsigned int v5; // eax
	__int64 v6; // rax
	int v7; // ebx
	__int64 v8; // rax
	void(__fastcall * **v9)(_QWORD, __int64); // rcx
	_DWORD v10[10]; // [rsp+0h] [rbp-D8h] BYREF
	_DWORD* v11; // [rsp+40h] [rbp-98h] BYREF
	__int128 v12; // [rsp+50h] [rbp-88h]
	char v13[8]; // [rsp+60h] [rbp-78h] BYREF
	__int64 v14[3]; // [rsp+68h] [rbp-70h] BYREF
	__int128 v15; // [rsp+80h] [rbp-58h] BYREF
	__int64(__fastcall * **v16)(); // [rsp+90h] [rbp-48h] BYREF
	__int64 v17[4]; // [rsp+98h] [rbp-40h] BYREF
	char v18; // [rsp+BFh] [rbp-19h] BYREF
	__int64 v19; // [rsp+C0h] [rbp-18h] BYREF

	if (a1)
	{
		v2 = *(_QWORD*)(a1 + 24);
		if (v2)
		{
			while (1)
			{
				v3 = _RTDynamicCast(
					v2,
					0i64,
					&juce::Component `RTTI Type Descriptor',
					& juce::DragAndDropContainer `RTTI Type Descriptor',
					0);
				if (v3)
					break;
				v2 = *(_QWORD*)(v2 + 24);
				if (!v2)
					goto LABEL_5;
			}
		}
		else
		{
		LABEL_5:
			v3 = 0i64;
		}
		if (v3)
		{
			if (*(int*)(v3 + 20) <= 0)
			{
				v14[1] = (__int64)v13;
				v4 = *(_DWORD*)(a1 + 44);
				v5 = *(_DWORD*)(a1 + 40);
				*(_QWORD*)&v12 = 0i64;
				*((_QWORD*)&v12 + 1) = __PAIR64__(v4, v5);
				v15 = v12;
				sub_14040C8B0(a1, (unsigned int)v14, (unsigned int)&v15, 1, 1065353216);
				v7 = sub_140380530(v6, v13, 2i64);
				v8 = sub_1402FCCA0(&v19);
				sub_140040360(&v11, v8, &v18 - v8);
				v16 = off_140EB1BD0;
				v17[0] = (__int64)v11;
				v11 = dword_140DDCDD0;
				sub_14040BE30(v3, (unsigned int)&v16, a1, v7, v10[8], 0i64, 0i64);
				((void(__fastcall*)(__int64(__fastcall***)(), __int64*))(*v16)[22])(v16, v17);
				v9 = (void(__fastcall***)(_QWORD, __int64))v14[0];
				if (v14[0])
				{
					if (_InterlockedExchangeAdd((volatile signed __int32*)(v14[0] + 8), 0xFFFFFFFF) == 1)
						(**v9)(v9, 1i64);
				}
			}
		}
		sub_1400D43D0((unsigned __int64)v10 ^ v19);
	}*/

}
void LayerSelectComponent::resized() 
{
	//Component::setBounds(*(_QWORD*)(a1 + 184), 0, 0, *(_DWORD*)(a1 + 40), *(_DWORD*)(a1 + 44));
}