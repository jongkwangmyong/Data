/*
  ==============================================================================

    This file contains the basic startup code for a JUCE application.

  ==============================================================================
*/

#include <JuceHeader.h>
#include "MainComponent.h"

//==============================================================================
class AudioSampleApplication  : public juce::JUCEApplication,public Timer
{
public:
    //==============================================================================
    AudioSampleApplication() {}

    const juce::String getApplicationName() override       { return ProjectInfo::projectName; }
    const juce::String getApplicationVersion() override    { return ProjectInfo::versionString; }
    bool moreThanOneInstanceAllowed() override             { return true; }
    void timerCallback() override {} //New Add
    void resumed() override
    {
		/*__int64 v1; // rcx
		__int64 v2; // rbx
		__m128i v4; // [rsp+20h] [rbp-18h] BYREF

		v1 = *(_QWORD*)(a1 + 80);
		if (v1)
		{
			v4.m128i_i64[0] = 0i64;
			v4.m128i_i64[1] = *(_QWORD*)(v1 + 40);
			Component::internalRepaintUnchecked(v1, &v4, 1);
		}
		v2 = qword_140EBFFA0;
		sub_1401C9420(qword_140EBFFA0);
		sub_1401C9C70(v2);
		sub_1401C9BA0(v2);
		sub_1401C99F0(v2);
		return sub_1401C9FD0(v2);*/
    }
    //==============================================================================
    void initialise (const juce::String& commandLine) override
    {
        // This method is where you should put your application's initialisation code..

        mainWindow.reset (new MainWindow (getApplicationName()));
		/*char* v2; // rsi
		__int64 v3; // rcx
		volatile signed __int32* v4; // r14
		__int64 v5; // rax
		__int64 v6; // rax
		int v7; // eax
		__int64 v8; // rdx
		__int64 v9; // r8
		__int64 v10; // rax
		int(**v11)[2]; // rax
		int(*v12)[2]; // rcx
		void* v13; // rcx
		void* v14; // rcx
		void* v15; // rcx
		int v16; // er8
		char* v17; // rdx
		char v18; // cl
		unsigned __int8 i; // al
		__int64 v20; // rax
		void* v21; // rcx
		char* v22; // rcx
		void* v23; // rcx
		__int64* v24; // rax
		_DWORD* v25; // rcx
		void* v26; // rcx
		_DWORD* v27; // rax
		_DWORD* v28; // rcx
		_DWORD* v29; // rax
		_DWORD* v30; // rcx
		_DWORD* v31; // rax
		_DWORD* v32; // rcx
		_QWORD* v33; // rax
		_QWORD* v34; // rbx
		__int64 v35; // rsi
		_DWORD* v36; // rcx
		__int64 v37; // r8
		_BYTE* v38; // rcx
		_BYTE* v39; // rcx
		__int64 v40; // rbx
		__int64 v41; // rax
		void* v42; // rcx
		void* v43; // rcx
		void* v44; // rcx
		LPCWSTR* v45; // rax
		__int64* v46; // rax
		void* v47; // rcx
		void* v48; // rcx
		void* v49; // rcx
		__int64 v50; // rcx
		volatile signed __int32* v51; // rsi
		__int64* v52; // rax
		__int64 v53; // r8
		__int64 v54; // rbx
		_BYTE* v55; // rcx
		__int64 v56; // rcx
		_DWORD* v57; // rcx
		void* v58; // rax
		__int64 v59; // rdx
		__int64 v60; // rax
		void(__fastcall * **v61)(_QWORD, __int64); // rcx
		__int64 v62; // rbx
		void(__fastcall * **v63)(_QWORD, __int64); // rcx
		__int64 v64; // rbx
		void* v65; // rcx
		__int64 v66; // rcx
		void(__fastcall * **v67)(_QWORD, __int64); // rcx
		_BYTE* v68; // [rsp+30h] [rbp-D0h] BYREF
		_BYTE* v69; // [rsp+38h] [rbp-C8h] BYREF
		_BYTE* v70; // [rsp+40h] [rbp-C0h] BYREF
		_BYTE* v71; // [rsp+48h] [rbp-B8h] BYREF
		void* v72; // [rsp+50h] [rbp-B0h]
		int(*v73)[2]; // [rsp+58h] [rbp-A8h] BYREF
		int v74; // [rsp+60h] [rbp-A0h]
		_BYTE* v75; // [rsp+68h] [rbp-98h] BYREF
		__int64 v76; // [rsp+70h] [rbp-90h] BYREF
		__int64 v77; // [rsp+78h] [rbp-88h] BYREF
		__int64 v78; // [rsp+80h] [rbp-80h] BYREF
		_DWORD* v79; // [rsp+88h] [rbp-78h] BYREF
		_DWORD* v80; // [rsp+90h] [rbp-70h]
		_DWORD* v81; // [rsp+98h] [rbp-68h]
		_DWORD* v82; // [rsp+A0h] [rbp-60h]
		__int16 v83; // [rsp+A8h] [rbp-58h]
		char v84; // [rsp+AAh] [rbp-56h]
		int v85; // [rsp+ACh] [rbp-54h]
		int v86; // [rsp+B0h] [rbp-50h]
		__int64 v87; // [rsp+B8h] [rbp-48h]
		__int64 v88; // [rsp+C0h] [rbp-40h] BYREF
		__int64 v89; // [rsp+C8h] [rbp-38h] BYREF
		__int64 v90; // [rsp+D0h] [rbp-30h] BYREF
		__int64 v91; // [rsp+D8h] [rbp-28h] BYREF
		__int64 v92; // [rsp+E0h] [rbp-20h] BYREF
		__int64 v93; // [rsp+E8h] [rbp-18h] BYREF
		__int64 v94; // [rsp+F0h] [rbp-10h] BYREF
		__int64 v95; // [rsp+F8h] [rbp-8h] BYREF
		__int64 v96; // [rsp+100h] [rbp+0h] BYREF
		__int64 v97; // [rsp+108h] [rbp+8h] BYREF
		__int64 v98; // [rsp+110h] [rbp+10h] BYREF
		_DWORD* v99; // [rsp+118h] [rbp+18h] BYREF
		_DWORD* v100; // [rsp+120h] [rbp+20h] BYREF
		_DWORD* v101; // [rsp+128h] [rbp+28h] BYREF
		__int64 v102; // [rsp+130h] [rbp+30h] BYREF
		__int64 v103; // [rsp+138h] [rbp+38h] BYREF
		__int64 v104; // [rsp+140h] [rbp+40h] BYREF
		__int64 v105; // [rsp+148h] [rbp+48h] BYREF
		__int64(__fastcall * **v106)(); // [rsp+150h] [rbp+50h] BYREF
		__int64 v107; // [rsp+158h] [rbp+58h] BYREF

		v74 = 0;
		sub_140048D00(&v69, "4.2.2");
		sub_1403811F0(&v77, &byte_140B758D0, 347454i64);
		v2 = (char*)operator new(0xF0ui64);
		v72 = v2;
		sub_140048D00(&v94, "Welcome to my app!");
		v74 = 1;
		*(_QWORD*)v2 = &juce::Component::`vftable';
			v3 = v94;
		*((_QWORD*)v2 + 1) = v94;
		v4 = (volatile signed __int32*)(v3 - 16);
		if ((*(_DWORD*)(v3 - 16) & 0x30000000) == 0)
			_InterlockedIncrement(v4);
		*((_QWORD*)v2 + 2) = dword_140DDCDD0;
		*((_QWORD*)v2 + 3) = 0i64;
		*((_QWORD*)v2 + 4) = 0i64;
		*((_QWORD*)v2 + 5) = 0i64;
		*((_QWORD*)v2 + 6) = 0i64;
		*((_QWORD*)v2 + 7) = 0i64;
		*((_QWORD*)v2 + 8) = 0i64;
		*((_QWORD*)v2 + 9) = 0i64;
		*((_QWORD*)v2 + 10) = 0i64;
		*((_QWORD*)v2 + 11) = 0i64;
		*((_QWORD*)v2 + 12) = 0i64;
		*((_QWORD*)v2 + 13) = 0i64;
		*((_QWORD*)v2 + 14) = 0i64;
		*((_QWORD*)v2 + 15) = 0i64;
		*((_QWORD*)v2 + 16) = 0i64;
		*((_QWORD*)v2 + 17) = 0i64;
		*((_QWORD*)v2 + 18) = 0i64;
		*((_QWORD*)v2 + 19) = 0i64;
		*((_QWORD*)v2 + 20) = 0i64;
		*((_DWORD*)v2 + 42) = 0;
		v2[172] = 0;
		*((_QWORD*)v2 + 22) = &juce::Timer::`vftable';
			* ((_QWORD*)v2 + 23) = -1i64;
		*((_DWORD*)v2 + 48) = 0;
		sub_140325840(v2 + 200);
		*(_QWORD*)v2 = &juce::SplashScreen::`vftable';
			* ((_QWORD*)v2 + 22) = &juce::SplashScreen::`vftable';
			* ((_QWORD*)v2 + 25) = &juce::SplashScreen::`vftable';
			v5 = v77;
		*((_QWORD*)v2 + 26) = v77;
		if (v5)
			_InterlockedIncrement((volatile signed __int32*)(v5 + 8));
		*((_QWORD*)v2 + 27) = 0i64;
		*((_QWORD*)v2 + 28) = 0i64;
		*((_DWORD*)v2 + 58) = 0;
		v6 = *((_QWORD*)v2 + 26);
		if (v6)
			v7 = *(_DWORD*)(v6 + 16);
		else
			v7 = 0;
		Component::setOpaque((__int64)v2, v7 == 1);
		if (v77)
		{
			v8 = *(unsigned int*)(v77 + 20);
			v9 = *(unsigned int*)(v77 + 24);
		}
		else
		{
			v8 = 0i64;
			v9 = 0i64;
		}
		sub_140413B00(v2, v8, v9);
		qword_140EBFF80 = (__int64)v2;
		if ((*v4 & 0x30000000) == 0 && _InterlockedDecrement(v4) == -1)
			j_j_free((void*)v4);
		v79 = dword_140DDCDD0;
		v80 = dword_140DDCDD0;
		v81 = dword_140DDCDD0;
		v82 = dword_140DDCDD0;
		v83 = 0;
		v84 = 0;
		v85 = 3000;
		v86 = 2;
		v87 = 0i64;
		sub_140316610(&v88, 6i64);
		v10 = sub_14031A890(&v88, &v96, "Genelec");
		v11 = (int(**)[2])sub_14031A890(v10, &v95, "glm4.log");
		v12 = off_140EB16F8;
		off_140EB16F8 = *v11;
		*v11 = v12;
		v13 = (void*)(v95 - 16);
		if ((*(_DWORD*)(v95 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v13) == -1)
			j_j_free(v13);
		v14 = (void*)(v96 - 16);
		if ((*(_DWORD*)(v96 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v14) == -1)
			j_j_free(v14);
		v15 = (void*)(v88 - 16);
		if ((*(_DWORD*)(v88 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v15) == -1)
			j_j_free(v15);
		sub_140048D00(&v89, "GLM4 starting...");
		v16 = String::lastIndexOfChar((char**)&off_140EB16F8, 92);
		if (v16 >= 0)
		{
			v17 = (char*)off_140EB16F8;
			while (1)
			{
				v18 = *v17;
				if (!*v17)
					break;
				++v17;
				if (v18 < 0)
				{
					for (i = 64; ((unsigned __int8)v18 & i) != 0; i >>= 1)
					{
						if (i <= 8u)
							break;
						++v17;
					}
				}
				if (--v16 < 0)
				{
					String::String((char**)&v73, v17);
					goto LABEL_35;
				}
			}
			v73 = (int(*)[2])dword_140DDCDD0;
		}
		else
		{
			v73 = off_140EB16F8;
			if (((*off_140EB16F8)[-4] & 0x30000000) == 0)
				_InterlockedIncrement(&(*off_140EB16F8)[-4]);
		}
	LABEL_35:
		v20 = sub_140312FD0(&off_140EB16F8, &v97);
		qword_140EBFF90 = sub_1403118F0(v20, &v73, &v89);
		v21 = (void*)(v97 - 16);
		if ((*(_DWORD*)(v97 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v21) == -1)
			j_j_free(v21);
		v22 = (char*)&(*v73)[-4];
		if (((*v73)[-4] & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v22) == -1)
			j_j_free(v22);
		v23 = (void*)(v89 - 16);
		if ((*(_DWORD*)(v89 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v23) == -1)
			j_j_free(v23);
		qword_140EBFFB8 = qword_140EBFF90;
		v24 = (__int64*)(*(__int64(__fastcall**)(_QWORD*, __int64*))(*a1 + 8i64))(a1, &v98);
		if ((*(_DWORD*)(*v24 - 16) & 0x30000000) == 0)
			_InterlockedIncrement((volatile signed __int32*)(*v24 - 16));
		v25 = (_DWORD*)(_InterlockedExchange64((volatile __int64*)&v79, *v24) - 16);
		if ((*v25 & 0x30000000) == 0 && _InterlockedDecrement(v25) == -1)
			j_j_free(v25);
		v26 = (void*)(v98 - 16);
		if ((*(_DWORD*)(v98 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v26) == -1)
			j_j_free(v26);
		sub_140048D00(&v99, "Application Support");
		v27 = v82;
		v82 = v99;
		v28 = v27 - 4;
		if ((*(v27 - 4) & 0x30000000) == 0 && _InterlockedDecrement(v28) == -1)
			j_j_free(v28);
		sub_140048D00(&v100, "cfg");
		v29 = v80;
		v80 = v100;
		v30 = v29 - 4;
		if ((*(v29 - 4) & 0x30000000) == 0 && _InterlockedDecrement(v30) == -1)
			j_j_free(v30);
		sub_140048D00(&v101, "Genelec");
		v31 = v81;
		v81 = v101;
		v32 = v31 - 4;
		if ((*(v31 - 4) & 0x30000000) == 0 && _InterlockedDecrement(v32) == -1)
			j_j_free(v32);
		v84 = 0;
		LOBYTE(v83) = 1;
		v33 = operator new(0x50ui64);
		v72 = v33;
		*v33 = dword_140DDCDD0;
		v33[1] = dword_140DDCDD0;
		v33[2] = dword_140DDCDD0;
		v33[3] = dword_140DDCDD0;
		*((_WORD*)v33 + 16) = 0;
		*((_BYTE*)v33 + 34) = 0;
		*((_DWORD*)v33 + 9) = 3000;
		*((_DWORD*)v33 + 10) = 2;
		v33[6] = 0i64;
		v33[7] = 0i64;
		v33[8] = 0i64;
		*((_DWORD*)v33 + 18) = 0;
		qword_140EBFF98 = v33;
		sub_14004C3D0(v33, &v79);
		v34 = qword_140EBFF98;
		v35 = *((_QWORD*)qword_140EBFF98 + 7);
		if (!v35)
		{
			sub_14031E290(qword_140EBFF98);
			v35 = v34[7];
		}
		sub_140048D00(&v68, "Using GLM version: ");
		if (*v68)
		{
			v37 = -1i64;
			do
				++v37;
			while (v69[v37]);
			ImageCache::getFromHashCode(&v68, v69, (_DWORD)v69 + v37);
		}
		else
		{
			if ((*((_DWORD*)v69 - 4) & 0x30000000) == 0)
				_InterlockedIncrement((volatile signed __int32*)v69 - 4);
			v36 = (_DWORD*)(_InterlockedExchange64((volatile __int64*)&v68, (__int64)v69) - 16);
			if ((*v36 & 0x30000000) == 0 && _InterlockedDecrement(v36) == -1)
				j_j_free(v36);
		}
		v75 = v68;
		if ((*((_DWORD*)v68 - 4) & 0x30000000) == 0)
			_InterlockedIncrement((volatile signed __int32*)v68 - 4);
		v38 = v68 - 16;
		if ((*((_DWORD*)v68 - 4) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v38) == -1)
			j_j_free(v38);
		if (qword_140EBFFB8)
			(*(void(__fastcall**)(__int64, _BYTE**))(*(_QWORD*)qword_140EBFFB8 + 8i64))(qword_140EBFFB8, &v75);
		else
			Logger::outputDebugString((__int64*)&v75);
		v39 = v75 - 16;
		if ((*((_DWORD*)v75 - 4) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v39) == -1)
			j_j_free(v39);
		v40 = sub_140321080(&v79, &v102);
		sub_140048D00(&v90, "Using config file: ");
		v41 = *(_QWORD*)sub_14031B920(&v90, v40);
		v76 = v41;
		if ((*(_DWORD*)(v41 - 16) & 0x30000000) == 0)
			_InterlockedIncrement((volatile signed __int32*)(v41 - 16));
		v42 = (void*)(v90 - 16);
		if ((*(_DWORD*)(v90 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v42) == -1)
			j_j_free(v42);
		if (qword_140EBFFB8)
			(*(void(__fastcall**)(__int64, __int64*))(*(_QWORD*)qword_140EBFFB8 + 8i64))(qword_140EBFFB8, &v76);
		else
			Logger::outputDebugString(&v76);
		v43 = (void*)(v76 - 16);
		if ((*(_DWORD*)(v76 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v43) == -1)
			j_j_free(v43);
		v44 = (void*)(v102 - 16);
		if ((*(_DWORD*)(v102 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v44) == -1)
			j_j_free(v44);
		if (!**(_BYTE**)(v35 + 184)
			|| (v45 = (LPCWSTR*)sub_140046AE0(&v105, (_QWORD*)(v35 + 184)), GetFileAttributesW(*v45) == -1))
		{
			v103 = sub_1402F5350();
			sub_140048D00(&v92, "dd.mm.yy hh:MM:ss");
			v46 = (__int64*)sub_140311810(&v103, &v104, &v92);
			v106 = off_140EB1BD0;
			v107 = *v46;
			*v46 = (__int64)dword_140DDCDD0;
			sub_140048D00(&v91, "created");
			sub_140317E00(v35, &v91, &v106);
			v47 = (void*)(v91 - 16);
			if ((*(_DWORD*)(v91 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v47) == -1)
				j_j_free(v47);
			((void(__fastcall*)(__int64(__fastcall***)(), __int64*))(*v106)[22])(v106, &v107);
			v48 = (void*)(v104 - 16);
			if ((*(_DWORD*)(v104 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v48) == -1)
				j_j_free(v48);
			v49 = (void*)(v92 - 16);
			if ((*(_DWORD*)(v92 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v49) == -1)
				j_j_free(v49);
		}
		sub_140267CC0();
		v71 = operator new(0x8E8ui64);
		ArgList = (void*)sub_1401ED6C0(v71);
		v71 = operator new(0x5D8ui64);
		qword_140EBFFA0 = sub_1401CD480(v71);
		v71 = v69;
		v51 = (volatile signed __int32*)(v69 - 16);
		if ((*((_DWORD*)v69 - 4) & 0x30000000) == 0)
			_InterlockedIncrement(v51);
		sub_1401ED1C0(v50, &v71);
		sub_140048D00(&v70, "GLM4  ");
		if (*v70)
		{
			v53 = -1i64;
			do
				++v53;
			while (v69[v53]);
			ImageCache::getFromHashCode(&v70, v69, (_DWORD)v69 + v53);
			v52 = (__int64*)&v70;
		}
		else
		{
			v52 = (__int64*)sub_14031A6B0(&v70, &v69);
		}
		v54 = *v52;
		if ((*(_DWORD*)(*v52 - 16) & 0x30000000) == 0)
			_InterlockedIncrement((volatile signed __int32*)(v54 - 16));
		v55 = v70 - 16;
		if ((*((_DWORD*)v70 - 4) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v55) == -1)
			j_j_free(v55);
		v56 = a1[9];
		a1[9] = v54;
		v57 = (_DWORD*)(v56 - 16);
		if ((*v57 & 0x30000000) == 0 && _InterlockedDecrement(v57) == -1)
			j_j_free(v57);
		v58 = operator new(0x188ui64);
		v72 = v58;
		v59 = a1[9];
		v78 = v59;
		if ((*(_DWORD*)(v59 - 16) & 0x30000000) == 0)
			_InterlockedIncrement((volatile signed __int32*)(v59 - 16));
		v60 = sub_14000C7B0(v58, &v78);
		v61 = (void(__fastcall***)(_QWORD, __int64))a1[10];
		a1[10] = v60;
		if (v61)
			(**v61)(v61, 1i64);
		v72 = operator new(0xE8ui64);
		v62 = sub_1401B2750(v72);
		v63 = (void(__fastcall***)(_QWORD, __int64))a1[8];
		a1[8] = v62;
		if (v63)
		{
			(**v63)(v63, 1i64);
			v62 = a1[8];
		}
		sub_140048D00(&v93, "GLM4 running!");
		v64 = *(_QWORD*)(v62 + 176);
		if (v64)
		{
			*(_DWORD*)(v64 + 28) = 4;
			sub_1402F9EC0(&v93, v64 + 48, 255i64);
			Shell_NotifyIconW(1u, (PNOTIFYICONDATAW)(v64 + 8));
		}
		v65 = (void*)(v93 - 16);
		if ((*(_DWORD*)(v93 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v65) == -1)
			j_j_free(v65);
		Timer::startTimer((__int64)(a1 + 5), 3000);
		sub_1403F7550(v66, a1 + 3);
		sub_1401C93D0();
		sub_14000D490(&v79);
		v67 = (void(__fastcall***)(_QWORD, __int64))v77;
		if (v77 && _InterlockedExchangeAdd((volatile signed __int32*)(v77 + 8), 0xFFFFFFFF) == 1)
			(**v67)(v67, 1i64);
		if ((*v51 & 0x30000000) == 0 && _InterlockedDecrement(v51) == -1)
			j_j_free((void*)v51);*/
    }

    void shutdown() override
    {
        // Add your application's shutdown code here..

        mainWindow = nullptr; // (deletes our window)
		/*__int64 v2; // rdx
		__int64 v3; // rax
		_QWORD* v4; // r14
		__int64 v5; // rbx
		int v6; // eax
		void* v7; // rcx
		int v8; // ecx
		void* v9; // rcx
		int v10; // ecx
		void* v11; // rcx
		int v12; // edx
		void* v13; // rcx
		_BYTE* v14; // rbx
		__int64 v15; // rdx
		void(__fastcall * **v16)(_QWORD, __int64); // rcx
		_QWORD* v17; // rbx
		void(__fastcall * **v18)(_QWORD, __int64); // rcx
		void(__fastcall * **v19)(_QWORD, __int64); // rcx
		void(__fastcall * **v20)(_QWORD, __int64); // rcx
		void(__fastcall * **v21)(_QWORD, __int64); // rcx
		int v22; // er9
		int v23; // er8
		__int64 v24; // rbx
		__int64 v25; // rax
		void* v26; // rcx
		void* v27; // rcx
		void* v28; // rcx
		__int64 v29; // [rsp+30h] [rbp-59h] BYREF
		__int64 v30; // [rsp+38h] [rbp-51h] BYREF
		__int64 v31; // [rsp+40h] [rbp-49h] BYREF
		__int64 v32; // [rsp+48h] [rbp-41h] BYREF
		__int64 v33; // [rsp+50h] [rbp-39h] BYREF
		__int64 v34; // [rsp+58h] [rbp-31h] BYREF
		__int64 v35; // [rsp+60h] [rbp-29h] BYREF
		__time64_t v36; // [rsp+68h] [rbp-21h] BYREF
		__int64 v37; // [rsp+70h] [rbp-19h] BYREF
		__int64(__fastcall * **v38)(); // [rsp+78h] [rbp-11h] BYREF
		int v39; // [rsp+80h] [rbp-9h] BYREF
		__int64(__fastcall * **v40)(); // [rsp+88h] [rbp-1h] BYREF
		int v41; // [rsp+90h] [rbp+7h] BYREF
		__int64(__fastcall * **v42)(); // [rsp+98h] [rbp+Fh] BYREF
		int v43; // [rsp+A0h] [rbp+17h] BYREF
		__int64(__fastcall * **v44)(); // [rsp+A8h] [rbp+1Fh] BYREF
		int v45; // [rsp+B0h] [rbp+27h] BYREF
		struct __timeb64 Time; // [rsp+B8h] [rbp+2Fh] BYREF

		v2 = *((_QWORD*)ArgList + 281);
		v30 = v2;
		if ((*(_DWORD*)(v2 - 16) & 0x30000000) == 0)
			_InterlockedIncrement((volatile signed __int32*)(v2 - 16));
		sub_140200820(ArgList, &v30, 0i64);
		v3 = *(_QWORD*)(a1 + 80);
		if (v3 && (*(_BYTE*)(v3 + 168) & 2) != 0)
		{
			v4 = qword_140EBFF98;
			v5 = *((_QWORD*)qword_140EBFF98 + 7);
			if (!v5)
			{
				sub_14031E290(qword_140EBFF98);
				v5 = v4[7];
				v3 = *(_QWORD*)(a1 + 80);
			}
			v6 = *(_DWORD*)(v3 + 40);
			v38 = off_140EB1BE0;
			v39 = v6;
			sub_140048D00(&v31, "Window_Width");
			sub_140317E00(v5, &v31, &v38);
			v7 = (void*)(v31 - 16);
			if ((*(_DWORD*)(v31 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v7) == -1)
				j_j_free(v7);
			((void(__fastcall*)(__int64(__fastcall***)(), int*))(*v38)[22])(v38, &v39);
			v8 = *(_DWORD*)(*(_QWORD*)(a1 + 80) + 44i64);
			v40 = off_140EB1BE0;
			v41 = v8;
			sub_140048D00(&v32, "Window_Height");
			sub_140317E00(v5, &v32, &v40);
			v9 = (void*)(v32 - 16);
			if ((*(_DWORD*)(v32 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v9) == -1)
				j_j_free(v9);
			((void(__fastcall*)(__int64(__fastcall***)(), int*))(*v40)[22])(v40, &v41);
			v10 = *(_DWORD*)(*(_QWORD*)(a1 + 80) + 32i64);
			v42 = off_140EB1BE0;
			v43 = v10;
			sub_140048D00(&v33, "Window_X");
			sub_140317E00(v5, &v33, &v42);
			v11 = (void*)(v33 - 16);
			if ((*(_DWORD*)(v33 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v11) == -1)
				j_j_free(v11);
			((void(__fastcall*)(__int64(__fastcall***)(), int*))(*v42)[22])(v42, &v43);
			v12 = *(_DWORD*)(*(_QWORD*)(a1 + 80) + 36i64);
			v44 = off_140EB1BE0;
			v45 = v12;
			sub_140048D00(&v34, "Window_Y");
			sub_140317E00(v5, &v34, &v44);
			v13 = (void*)(v34 - 16);
			if ((*(_DWORD*)(v34 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v13) == -1)
				j_j_free(v13);
			((void(__fastcall*)(__int64(__fastcall***)(), int*))(*v44)[22])(v44, &v45);
		}
		v14 = ArgList;
		if (ArgList)
		{
			if (!(unsigned int)String::isNotEmpty(*((_BYTE**)ArgList + 83), "loggedin") && !v14[752])
			{
				sub_14026A5C0();
				v14 = ArgList;
			}
			if (v14 && *(_BYTE*)(*((_QWORD*)v14 + 66) + 224i64))
			{
				LOBYTE(v15) = 1;
				sub_1401E9F40(v14, v15);
			}
		}
		sub_1402699F0();
		v16 = *(void(__fastcall****)(_QWORD, __int64))(a1 + 80);
		*(_QWORD*)(a1 + 80) = 0i64;
		if (v16)
			(**v16)(v16, 1i64);
		if (qword_140EBFFA0)
			(**(void(__fastcall***)(__int64, __int64))qword_140EBFFA0)(qword_140EBFFA0, 1i64);
		v17 = qword_140EBFF98;
		if (qword_140EBFF98)
		{
			v18 = (void(__fastcall***)(_QWORD, __int64)) * ((_QWORD*)qword_140EBFF98 + 7);
			*((_QWORD*)qword_140EBFF98 + 7) = 0i64;
			if (v18)
				(**v18)(v18, 1i64);
			v19 = (void(__fastcall***)(_QWORD, __int64))v17[8];
			v17[8] = 0i64;
			if (v19)
				(**v19)(v19, 1i64);
			v20 = (void(__fastcall***)(_QWORD, __int64))v17[8];
			if (v20)
				(**v20)(v20, 1i64);
			v21 = (void(__fastcall***)(_QWORD, __int64))v17[7];
			if (v21)
				(**v21)(v21, 1i64);
			sub_14000D490(v17);
			j_j_free(v17);
		}
		if (ArgList)
			(**(void(__fastcall***)(void*, __int64))ArgList)(ArgList, 1i64);
		ftime64_s(&Time);
		v36 = Time.millitm + 1000 * Time.time;
		LOBYTE(v22) = 1;
		v24 = sub_140313140((unsigned int)&v36, (unsigned int)&v37, v23, v22, 1);
		sub_140048D00(&v35, "shutdown at: ");
		v25 = *(_QWORD*)sub_14031B920(&v35, v24);
		v29 = v25;
		if ((*(_DWORD*)(v25 - 16) & 0x30000000) == 0)
			_InterlockedIncrement((volatile signed __int32*)(v25 - 16));
		v26 = (void*)(v35 - 16);
		if ((*(_DWORD*)(v35 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v26) == -1)
			j_j_free(v26);
		if (qword_140EBFFB8)
			(*(void(__fastcall**)(__int64, __int64*))(*(_QWORD*)qword_140EBFFB8 + 8i64))(qword_140EBFFB8, &v29);
		else
			Logger::outputDebugString(&v29);
		v27 = (void*)(v29 - 16);
		if ((*(_DWORD*)(v29 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v27) == -1)
			j_j_free(v27);
		v28 = (void*)(v37 - 16);
		if ((*(_DWORD*)(v37 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v28) == -1)
			j_j_free(v28);
		qword_140EBFFB8 = 0i64;
		if (qword_140EBFF90)
			(**(void(__fastcall***)(__int64, __int64))qword_140EBFF90)(qword_140EBFF90, 1i64);*/
    }

    //==============================================================================
    void systemRequestedQuit() override
    {
        // This is called when the app is being asked to quit: you can ignore this
        // request and let the app carry on running, or call quit() to allow the app to close.
        quit();
    }

    void anotherInstanceStarted (const juce::String& commandLine) override
    {
        // When another instance of the app is launched while this one is running,
        // this method is invoked, and the commandLine parameter tells you what
        // the other instance's command-line arguments were.
		/*__int64* v0; // rcx
		__int64 v1; // rax
		__int64 v3; // [rsp+30h] [rbp-38h] BYREF
		int v4; // [rsp+38h] [rbp-30h]
		__int64 v5; // [rsp+40h] [rbp-28h]
		__int64 v6; // [rsp+48h] [rbp-20h]
		int v7; // [rsp+50h] [rbp-18h]
		char v8; // [rsp+54h] [rbp-14h]
		int v9; // [rsp+58h] [rbp-10h]

		v0 = (__int64*)(_RTDynamicCast(
			qword_140EBFFD8,
			0i64,
			&juce::JUCEApplicationBase `RTTI Type Descriptor',
			& juce::JUCEApplication `RTTI Type Descriptor',
			0)
			+ 24);
		v1 = *v0;
		v3 = 21i64;
		v4 = 0;
		v5 = 0i64;
		v6 = 0i64;
		v7 = 0;
		v8 = 0;
		v9 = 0;
		return (*(__int64(__fastcall**)(__int64*, __int64*))(v1 + 32))(v0, &v3);*/
    }

    //==============================================================================
    /*
        This class implements the desktop window that contains an instance of
        our MainComponent class.
    */
    class MainWindow    : public juce::DocumentWindow
    {
    public:
        MainWindow (juce::String name)
            : DocumentWindow (name,
                              juce::Desktop::getInstance().getDefaultLookAndFeel()
                                                          .findColour (juce::ResizableWindow::backgroundColourId),
                              DocumentWindow::allButtons)
        {
            //setUsingNativeTitleBar (true);
            setContentOwned (new MainComponent(), true);

           #if JUCE_IOS || JUCE_ANDROID
            setFullScreen (true);
           #else
            setResizable (true, true);
            centreWithSize (getWidth(), getHeight());
           #endif

            setVisible (true);
        }

        void closeButtonPressed() override
        {
            // This is called when the user tries to close this window. Here, we'll just
            // ask the app to quit when this happens, but you can change this to do
            // whatever you need.
            JUCEApplication::getInstance()->systemRequestedQuit();
        }

        /* Note: Be careful if you override any DocumentWindow methods - the base
           class uses a lot of them, so by overriding you might break its functionality.
           It's best to do all your work in your content component instead, but if
           you really have to override any DocumentWindow methods, make sure your
           subclass also calls the superclass's method.
        */

    private:
        JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (MainWindow)
    };

private:
    std::unique_ptr<MainWindow> mainWindow;
};

//==============================================================================
// This macro generates the main() routine that launches the app.
START_JUCE_APPLICATION (AudioSampleApplication)
