#pragma once
#include "defs.h"
class DeviceModel
{
public:
	virtual ~DeviceModel();

	virtual void Function1() = 0;
	virtual char sub_140210CA0(__int64 a1, __int64 a2, _QWORD* a3, __int64* a4);
	virtual char sub_140210130(_QWORD* a1, __int64 a2);
	virtual char sub_140210830(__int64 a1, __int64 a2, __int64* a3, char** a4);
	virtual __int64 sub_14020F940(__int64 a1, __int64 a2);
	virtual __int64 sub_1402107D0(__int64 a1, __int64 a2);
	virtual void Function2(__int64 a1, __int64 a2, __int64 a3, __int64 a4, char a5, char a6) = 0;
	virtual void Function3(__int64 a1) = 0;
	virtual void Function4(__int64 a1, __int64 a2, __int64 a3, __int64 a4, char a5) = 0;
	virtual char sub_1402107C0();
	virtual void Function5(__int64 a1, int a2) = 0;
	virtual void Function6(__int64 a1, int a2) = 0;
	virtual void Function7() = 0;
	virtual void Function8(__int64 a1) = 0;
	virtual void Function9(__int64 a1) = 0;
	virtual void Function10(__int64 a1, __int64 a2, __int64 a3, __int64 a4) = 0;
	virtual void Function11(_BYTE* a1, __int64 a2, __int64 a3) = 0;
	virtual void Function12(__int64 a1, __int64 a2, __int64 a3, __int64 a4, char a5, char a6, char a7, char a8, char a9, char a10, int a11, int a12) = 0;
	virtual void Function13(__int64 a1, __int64 a2, __int64 a3, __int64 a4) = 0;
	virtual void Function14(__int64 a1) = 0;
	virtual void Function15(__int64 a1, double a2) = 0;
	virtual void Function16(__int64 a1) = 0;
	virtual void Function17(__int64 a1, __int64 a2, __int64 a3) = 0;
	virtual void Function18(__int64 a1) = 0;
	virtual void Function19(__int64 a1, _DWORD* a2, double* a3, __int64 a4) = 0;
	virtual void Function20(__int64 a1, __int64 a2, __int64 a3) = 0;
	virtual void Function21() = 0;
	virtual void Function22() = 0;
	virtual void Function23() = 0;
	virtual void Function24() = 0;
	virtual void Function25(__int64 a1, __int64 a2, _DWORD* a3, _DWORD* a4, _DWORD* a5) = 0;
	virtual void Function26(__int64 a1, __int64 a2, _DWORD* a3, _DWORD* a4, float* a5, char a6) = 0;
	virtual void Function27(__int64 a1) = 0;
	virtual void Function28(double* a1, int a2, char a3) = 0;
	virtual void Function29(__int64 a1) = 0;

	virtual void Function30() {};
	virtual void Function31() {};
	virtual void Function32() {};
	virtual void Function33() {};

	virtual void Function34(__int64 a1, _DWORD* a2) = 0;
	virtual void Function35(__int64 a1, __int64 a2, __int64 a3, __int64 a4) = 0;
	virtual __int64 sub_1402107B0(__int64 a1, _DWORD* a2, _DWORD* a3);
	virtual char sub_1402107A0();
	virtual char sub_140210790();

	virtual void Function36(__int64 a1, _DWORD* a2) {} ;
	virtual void Function37(__int64 a1, __int64 a2, __int64 a3) {} ;
	virtual _QWORD* sub_14020F670(__int64 a1, _QWORD* a2);
	virtual void sub_14020F640(__int64 a1, _QWORD* a2);
	virtual void Function38(unsigned int* a1, _DWORD* a2, _DWORD* a3, _DWORD* a4) {};
	virtual void Function39(__int64 a1, __int64 a2, __int64 a3, __int64 a4) {};

	virtual void Function40(__int64 a1, __int64 a2) = 0;
	virtual void Function41() = 0;
	virtual void Function42(__int64 a1, _QWORD* a2) = 0;
	virtual void Function43(__int64 a1, _QWORD* a2) = 0;
	virtual void Function44(__int64 a1, __int64 a2, __int64 a3, __int64 a4) = 0;
	virtual void Function45(__int64 a1, __int64 a2, __int64 a3, __int64 a4) = 0;
	virtual void Function46(__int64 a1, __int64 a2, __int64 a3, __int64 a4) = 0;
	virtual void Function47() = 0;
	virtual void Function48(__int64 a1, __int64 a2, __int64 a3) = 0;
	virtual void Function49() = 0;
	virtual void Function50(__int64 a1, __int64 a2, __int64 a3, __int64 a4) = 0;
	virtual void Function51() = 0;

	virtual char sub_140210730();
	virtual char sub_140210720();

	virtual void Function52(__int64 a1, __int64 a2, __int64 a3, __int64 a4) = 0;
	virtual void Function53(__int64 a1, __int64 a2, __int64 a3, __int64 a4) = 0;
	virtual void Function54(__int64 a1, float* a2) = 0;

	virtual char sub_140210710();
	virtual char sub_140210700();

	virtual void Function55() {};
	virtual __int64 sub_1402106E0();
	virtual char sub_1402106D0();
	virtual char sub_1402106C0();
	virtual char sub_14020F610();
	virtual char sub_1402106B0();
	virtual char sub_1402106A0();
	virtual _QWORD* sub_140210680(__int64 a1, _QWORD* a2);
private:
};

