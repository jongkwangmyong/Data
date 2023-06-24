#include "WeCalMeasurementProgressWindow.h"

void WeCalMeasurementProgressWindow::run()//void __fastcall sub_1401BED70(__int64 a1)//override
{
    /*
    __int64 v2; // r15
    _QWORD* v3; // rcx
    __int64 v4; // rax
    __int64 v5; // rbx
    __int64 v6; // r10
    __int64 v7; // r10
    __int64 v8; // rax
    __int64 v9; // r9
    __int64 v10; // r10
    _DWORD* v11; // rcx
    int v12; // edi
    struct _RTL_CRITICAL_SECTION* v13; // r12
    __int64 v14; // r14
    int v15; // ecx
    __int64 v16; // r13
    int v17; // er13
    char* v18; // rbx
    int v19; // er14
    int v20; // edi
    __int64 v21; // rax
    __int64 v22; // r12
    __int64 v23; // r14
    _BYTE** v24; // r15
    volatile signed __int32* v25; // rcx
    __int64 v26; // rax
    void* v27; // rcx
    __int64 v28; // rcx
    void* v29; // rcx
    volatile signed __int32* v30; // rbx
    int v31; // er13
    void* v32; // rcx
    void* v33; // rcx
    volatile signed __int32* v34; // rcx
    _DWORD* v35; // rcx
    int v36; // ecx
    __int64 v37; // rdi
    __int64 v38; // r12
    _BYTE* v39; // rcx
    char** v40; // rax
    bool v41; // bl
    void* v42; // rcx
    volatile signed __int32* v43; // r14
    void* v44; // rcx
    __int64 v45; // rbx
    void* v46; // rcx
    __int64 v47; // rbx
    volatile signed __int32* v48; // rdi
    int v49; // er13
    void* v50; // rcx
    _DWORD* v51; // rcx
    char v52; // r14
    __int64 v53; // rbx
    __int64 v54; // rbx
    __int64 v55; // rbx
    _DWORD* v56; // rbx
    _DWORD* v57; // rcx
    __int64 v58; // rax
    _DWORD* v59; // rcx
    _QWORD* v60; // rdi
    _DWORD* v61; // rbx
    _DWORD* v62; // rcx
    int v63; // edx
    int v64; // ecx
    int v65; // er9
    char v66; // di
    __int64 v67; // rbx
    __int64 v68; // rcx
    int v69; // ebx
    float v70; // xmm0_4
    _DWORD* v71; // rcx
    _DWORD* v72; // rcx
    char v73; // r15
    int v74; // er12
    __int64 v75; // r14
    volatile signed __int32* v76; // rbx
    void* v77; // rcx
    int v78; // er13
    void* v79; // rcx
    __int64 v80; // rax
    void* v81; // rcx
    __int64 v82; // rbx
    __int64 v83; // rbx
    _DWORD* v84; // rbx
    _DWORD* v85; // rcx
    _DWORD* v86; // rcx
    _QWORD* v87; // rdi
    _DWORD* v88; // rbx
    _DWORD* v89; // rcx
    int v90; // edx
    int v91; // ecx
    int v92; // er9
    char v93; // di
    __int64 v94; // rbx
    __int64 v95; // rcx
    int v96; // ebx
    float v97; // xmm0_4
    _DWORD* v98; // rcx
    _DWORD* v99; // rcx
    char v100; // r14
    __int64 v101; // rbx
    __int64 v102; // rbx
    __int64 v103; // rax
    _QWORD* v104; // rdi
    _DWORD* v105; // rbx
    _DWORD* v106; // rcx
    void* v107; // rcx
    int v108; // eax
    __int64 v109; // rax
    __int64 v110; // rax
    __int64 v111; // rax
    _QWORD* v112; // rdi
    _DWORD* v113; // rbx
    _DWORD* v114; // rcx
    void* v115; // rcx
    int v116; // edx
    int v117; // ecx
    int v118; // er9
    char v119; // di
    __int64 v120; // rbx
    __int64 v121; // rcx
    int v122; // ebx
    float v123; // xmm0_4
    _DWORD* v124; // rcx
    void* v125; // rcx
    __int64 v126; // rcx
    int v127; // edi
    __int64 v128; // r13
    _BYTE* v129; // rbx
    __int64 v130; // r12
    char v131; // r14
    __int64 v132; // rbx
    __int64 v133; // rbx
    _QWORD* v134; // rdi
    _DWORD* v135; // rbx
    _DWORD* v136; // rcx
    __int64 v137; // rax
    __int64 v138; // rax
    _QWORD* v139; // rdi
    _DWORD* v140; // rbx
    _DWORD* v141; // rcx
    int v142; // edx
    int v143; // ecx
    int v144; // er9
    char v145; // di
    __int64 v146; // rbx
    __int64 v147; // rcx
    float v148; // xmm0_4
    _DWORD* v149; // rcx
    _BYTE* v150; // rcx
    _BYTE* v151; // rcx
    __int64 v152; // rbx
    int v153; // [rsp+28h] [rbp-E0h]
    int v154; // [rsp+30h] [rbp-D8h]
    int v155; // [rsp+58h] [rbp-B0h]
    int v156; // [rsp+58h] [rbp-B0h]
    int v157; // [rsp+60h] [rbp-A8h]
    int v158; // [rsp+60h] [rbp-A8h]
    int v159; // [rsp+68h] [rbp-A0h]
    __int64 v160; // [rsp+70h] [rbp-98h] BYREF
    __int64 v161; // [rsp+78h] [rbp-90h]
    volatile signed __int32* v162; // [rsp+80h] [rbp-88h] BYREF
    _DWORD* v163; // [rsp+88h] [rbp-80h] BYREF
    __int64 v164; // [rsp+90h] [rbp-78h] BYREF
    _DWORD* v165; // [rsp+98h] [rbp-70h] BYREF
    _DWORD* v166; // [rsp+A0h] [rbp-68h] BYREF
    _QWORD* v167; // [rsp+A8h] [rbp-60h]
    _DWORD* v168; // [rsp+B0h] [rbp-58h] BYREF
    _DWORD* v169; // [rsp+B8h] [rbp-50h] BYREF
    _DWORD* v170; // [rsp+C0h] [rbp-48h] BYREF
    _DWORD* v171; // [rsp+C8h] [rbp-40h] BYREF
    _DWORD* v172; // [rsp+D0h] [rbp-38h] BYREF
    volatile signed __int32* v173; // [rsp+D8h] [rbp-30h] BYREF
    __int64 v174; // [rsp+E0h] [rbp-28h] BYREF
    __int64 v175; // [rsp+E8h] [rbp-20h] BYREF
    __int64 v176; // [rsp+F0h] [rbp-18h] BYREF
    __int64 v177; // [rsp+F8h] [rbp-10h] BYREF
    _BYTE* v178; // [rsp+100h] [rbp-8h] BYREF
    __int64 v179; // [rsp+108h] [rbp+0h] BYREF
    __int64 v180; // [rsp+110h] [rbp+8h] BYREF
    _BYTE* v181; // [rsp+118h] [rbp+10h] BYREF
    double v182; // [rsp+120h] [rbp+18h] BYREF
    _DWORD* v183; // [rsp+128h] [rbp+20h] BYREF
    _DWORD* v184; // [rsp+130h] [rbp+28h] BYREF
    __int64 v185; // [rsp+138h] [rbp+30h] BYREF
    __int64 v186; // [rsp+140h] [rbp+38h] BYREF
    _DWORD* v187; // [rsp+148h] [rbp+40h] BYREF
    __int64 v188; // [rsp+150h] [rbp+48h] BYREF
    __int64 v189; // [rsp+158h] [rbp+50h] BYREF
    __int64 v190; // [rsp+160h] [rbp+58h] BYREF
    __int64 v191; // [rsp+168h] [rbp+60h] BYREF
    __int64 v192; // [rsp+170h] [rbp+68h] BYREF
    __int64 v193; // [rsp+178h] [rbp+70h] BYREF
    _DWORD* v194; // [rsp+180h] [rbp+78h] BYREF
    __int64 v195; // [rsp+188h] [rbp+80h] BYREF
    __int64 v196; // [rsp+190h] [rbp+88h] BYREF
    __int64 v197; // [rsp+198h] [rbp+90h] BYREF
    __int64 v198; // [rsp+1A0h] [rbp+98h] BYREF
    __int64 v199; // [rsp+1A8h] [rbp+A0h] BYREF
    __int64 v200; // [rsp+1B0h] [rbp+A8h] BYREF
    __int64 v201; // [rsp+1B8h] [rbp+B0h] BYREF
    __int64 v202; // [rsp+1C0h] [rbp+B8h] BYREF
    __int64 v203; // [rsp+1C8h] [rbp+C0h] BYREF
    __int64 v204; // [rsp+1D0h] [rbp+C8h] BYREF
    __int64 v205; // [rsp+1D8h] [rbp+D0h] BYREF
    __int64 v206; // [rsp+1E0h] [rbp+D8h] BYREF
    _BYTE* v207; // [rsp+1E8h] [rbp+E0h] BYREF
    __int64 v208; // [rsp+1F0h] [rbp+E8h] BYREF
    __int64 v209; // [rsp+1F8h] [rbp+F0h] BYREF
    _BYTE* v210; // [rsp+200h] [rbp+F8h] BYREF
    double v211; // [rsp+208h] [rbp+100h] BYREF
    __int64 v212; // [rsp+210h] [rbp+108h] BYREF
    __int64 v213; // [rsp+218h] [rbp+110h] BYREF
    char v214[8]; // [rsp+220h] [rbp+118h] BYREF
    double v215; // [rsp+228h] [rbp+120h] BYREF
    double v216; // [rsp+230h] [rbp+128h] BYREF
    __int64 v217; // [rsp+238h] [rbp+130h] BYREF
    __int64 v218; // [rsp+240h] [rbp+138h] BYREF
    char v219[8]; // [rsp+248h] [rbp+140h] BYREF
    double v220; // [rsp+250h] [rbp+148h] BYREF
    double v221; // [rsp+258h] [rbp+150h] BYREF
    char v222[8]; // [rsp+260h] [rbp+158h] BYREF
    char v223[8]; // [rsp+268h] [rbp+160h] BYREF
    char v224[8]; // [rsp+270h] [rbp+168h] BYREF
    char v225[8]; // [rsp+278h] [rbp+170h] BYREF
    char v226[8]; // [rsp+280h] [rbp+178h] BYREF
    char v227[8]; // [rsp+288h] [rbp+180h] BYREF
    double v228; // [rsp+290h] [rbp+188h] BYREF
    double v229; // [rsp+298h] [rbp+190h] BYREF
    char v230[8]; // [rsp+2A0h] [rbp+198h] BYREF
    char v231[8]; // [rsp+2A8h] [rbp+1A0h] BYREF
    char v232[8]; // [rsp+2B0h] [rbp+1A8h] BYREF
    char v233[8]; // [rsp+2B8h] [rbp+1B0h] BYREF
    __int64 v234; // [rsp+2C0h] [rbp+1B8h]
    __int64 v235; // [rsp+2C8h] [rbp+1C0h] BYREF
    __int64 v236[2]; // [rsp+2D0h] [rbp+1C8h] BYREF
    char v237[112]; // [rsp+2E0h] [rbp+1D8h] BYREF
    char v238[143]; // [rsp+350h] [rbp+248h] BYREF
    char v239; // [rsp+3DFh] [rbp+2D7h] BYREF
    char v240[31]; // [rsp+3E0h] [rbp+2D8h] BYREF
    char v241; // [rsp+3FFh] [rbp+2F7h] BYREF
    __int64 v242[17]; // [rsp+400h] [rbp+2F8h] BYREF

    v2 = 0i64;
    v155 = 0;
    v3 = ArgList;
    v160 = (__int64)(*(_QWORD*)(*((_QWORD*)ArgList + 66) + 40i64) - *(_QWORD*)(*((_QWORD*)ArgList + 66) + 32i64)) >> 3;
    *(_QWORD*)(a1 + 628) = 0i64;
    *(_BYTE*)(a1 + 652) = 0;
    *(_QWORD*)(a1 + 656) = 0i64;
    if (!*(_DWORD*)(a1 + 636))
    {
        sub_1401FA390();
        sub_1401FA0F0();
        v3 = ArgList;
    }
    v4 = v3[66];
    v5 = *(int*)(v4 + 268);
    v6 = *(_QWORD*)(*(_QWORD*)(v4 + 8) + 8 * v5 - 8);
    *(_DWORD*)(v6 + 548) = 0;
    *(_QWORD*)(v6 + 56) = 0i64;
    *(_QWORD*)(v6 + 168) = 0i64;
    sub_140001DA0(v237, v6 + 136);
    v8 = sub_140001DA0(v238, v7 + 24);
    sub_140218790(v10, v8, v9);
    v11 = *(_DWORD**)(*(_QWORD*)(*((_QWORD*)ArgList + 66) + 8i64) + 8 * v5 - 8);
    *(_DWORD*)(a1 + 644) = v11[162];
    *(_DWORD*)(a1 + 648) = v11[163];
    *(_DWORD*)(a1 + 640) = v11[164];
    v12 = 5;
    v157 = 5;
    v236[1] = (__int64)&dword_140EC00EC;
    v182 = COERCE_DOUBLE(&v175);
    v211 = COERCE_DOUBLE(&v176);
    v13 = (struct _RTL_CRITICAL_SECTION*)(a1 + 560);
    v14 = a1 + 248;
    do
    {
        sub_140048D00(&v162, " Seconds");
        if (_InterlockedCompareExchange(&dword_140EC00EC, 1, 0))
        {
            v15 = 19;
            while (_InterlockedCompareExchange(&dword_140EC00EC, 1, 0))
            {
                if (--v15 < 0)
                {
                    while (_InterlockedCompareExchange(&dword_140EC00EC, 1, 0))
                        Sleep(0);
                    break;
                }
            }
        }
        v16 = qword_140EC03E0;
        if (qword_140EC03E0)
        {
            if (*(_QWORD*)(qword_140EC03E0 + 64)
                && (int)StringArray::indexOf(qword_140EC03E0 + 24, v162, *(_BYTE*)(qword_140EC03E0 + 56), 0) < 0)
            {
                sub_1402FDDE0(*(_QWORD*)(v16 + 64), (__int64)&v173, (_BYTE**)&v162, (__int64)&v162);
                v17 = v155 | 0x18;
            }
            else
            {
                v18 = (char*)v162;
                v19 = *(_DWORD*)(v16 + 36);
                if (v19 <= 0)
                    goto LABEL_19;
                v20 = 0;
                if (*(_BYTE*)(v16 + 56))
                {
                    while ((unsigned int)compareIgnoreCase(*(char**)(*(_QWORD*)(v16 + 24) + 8i64 * v20), v18))
                    {
                        if (++v20 >= v19)
                        {
                            v18 = (char*)v162;
                            goto LABEL_19;
                        }
                    }
                    v18 = (char*)v162;
                }
                else
                {
                    v22 = *(int*)(v16 + 36);
                    v23 = 0i64;
                    v24 = *(_BYTE***)(v16 + 24);
                    while ((unsigned int)String::isNotEmpty(v18, *v24))
                    {
                        ++v20;
                        ++v23;
                        ++v24;
                        if (v23 >= v22)
                            goto LABEL_19;
                    }
                }
                if (v20 < 0)
                {
                LABEL_19:
                    v173 = (volatile signed __int32*)v18;
                    if ((*((_DWORD*)v18 - 4) & 0x30000000) == 0)
                        _InterlockedIncrement((volatile signed __int32*)v18 - 4);
                }
                else
                {
                    v21 = *(_QWORD*)sub_140316E00(v16 + 40, (unsigned int)v20);
                    v173 = (volatile signed __int32*)v21;
                    if ((*(_DWORD*)(v21 - 16) & 0x30000000) == 0)
                        _InterlockedIncrement((volatile signed __int32*)(v21 - 16));
                }
                v12 = v157;
                v14 = a1 + 248;
                v2 = 0i64;
                v13 = (struct _RTL_CRITICAL_SECTION*)(a1 + 560);
                v17 = v155 | 0x18;
            }
        }
        else
        {
            v173 = v162;
            if ((*(v162 - 4) & 0x30000000) == 0)
                _InterlockedIncrement(v162 - 4);
            v17 = v155 | 8;
        }
        _InterlockedExchange(&dword_140EC00EC, 0);
        v25 = v162 - 4;
        if ((*(v162 - 4) & 0x30000000) == 0 && _InterlockedDecrement(v25) == -1)
            j_j_free((void*)v25);
        v26 = sub_1402FCCA0(v240);
        sub_140040360(&v206, v26, &v239 - v26);
        sub_140048D00(&v200, "Measurement starts in ");
        sub_14031AF20(&v175, &v200);
        v27 = (void*)(v200 - 16);
        if ((*(_DWORD*)(v200 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v27) == -1)
            j_j_free(v27);
        v28 = *(_QWORD*)sub_14031B920(&v175, &v206);
        v176 = v28;
        if ((*(_DWORD*)(v28 - 16) & 0x30000000) == 0)
            _InterlockedIncrement((volatile signed __int32*)(v28 - 16));
        v29 = (void*)(v175 - 16);
        if ((*(_DWORD*)(v175 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v29) == -1)
            j_j_free(v29);
        v234 = *(_QWORD*)sub_14031B920(&v176, &v173);
        v30 = (volatile signed __int32*)(v234 - 16);
        if ((*(_DWORD*)(v234 - 16) & 0x30000000) == 0)
            _InterlockedIncrement(v30);
        v31 = v17 | 0xE6;
        v155 = v31;
        v32 = (void*)(v176 - 16);
        if ((*(_DWORD*)(v176 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v32) == -1)
            j_j_free(v32);
        v33 = (void*)(v206 - 16);
        if ((*(_DWORD*)(v206 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v33) == -1)
            j_j_free(v33);
        v34 = v173 - 4;
        if ((*(v173 - 4) & 0x30000000) == 0 && _InterlockedDecrement(v34) == -1)
            j_j_free((void*)v34);
        EnterCriticalSection(v13);
        if ((*v30 & 0x30000000) == 0)
            _InterlockedIncrement(v30);
        v35 = (_DWORD*)(_InterlockedExchange64((volatile __int64*)(a1 + 552), v234) - 16);
        if ((*v35 & 0x30000000) == 0 && _InterlockedDecrement(v35) == -1)
            j_j_free(v35);
        LeaveCriticalSection(v13);
        WaitableEvent::wait(v14, 1000);
        if ((*v30 & 0x30000000) == 0 && _InterlockedDecrement(v30) == -1)
            j_j_free((void*)v30);
        v157 = --v12;
    } while (v12 > 0);
    v36 = 0;
    v159 = 0;
    v37 = (int)v160;
    v161 = (int)v160;
    if ((int)v160 > 0)
    {
        while (1)
        {
            v38 = v36;
            v39 = *(_BYTE**)(*(_QWORD*)(*((_QWORD*)ArgList + 66) + 32i64) + 8i64 * v36);
            v41 = 0;
            if (*(_QWORD*)v39)
            {
                if (*(_BYTE*)(*(_QWORD*)v39 + 96i64))
                {
                    if (v39[108])
                    {
                        v40 = (char**)sub_14020F280(v39, &v235);
                        v31 |= 1u;
                        if (!(unsigned int)compareIgnoreCase(*v40, "WooferExtensionGen2"))
                            v41 = 1;
                    }
                }
            }
            if ((v31 & 1) != 0)
            {
                v31 &= 0xFFFFFFFE;
                v42 = (void*)(v235 - 16);
                if ((*(_DWORD*)(v235 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v42) == -1)
                    j_j_free(v42);
            }
            if (v41)
                break;
        LABEL_331:
            v36 = v159 + 1;
            v159 = v36;
            if (v36 >= (int)v160)
                goto LABEL_332;
        }
        if (!*(_DWORD*)(a1 + 640))
        {
            v236[0] = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(*((_QWORD*)ArgList + 66) + 32i64) + 8 * v38) + 136i64);
            v43 = (volatile signed __int32*)(v236[0] - 16);
            if ((*(_DWORD*)(v236[0] - 16) & 0x30000000) == 0)
                _InterlockedIncrement(v43);
            sub_140048D00(&v212, "Measuring the front woofer...");
            sub_14031AF20(&v164, &v212);
            v44 = (void*)(v212 - 16);
            if ((*(_DWORD*)(v212 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v44) == -1)
                j_j_free(v44);
            v45 = -1i64;
            do
                ++v45;
            while (*(_BYTE*)(v164 + v45));
            sub_1402FD230(&v164, v45 + 2);
            strcpy((char*)(v164 + (int)v45), "\n\r");
            v177 = v164;
            if ((*(_DWORD*)(v164 - 16) & 0x30000000) == 0)
                _InterlockedIncrement((volatile signed __int32*)(v164 - 16));
            v46 = (void*)(v164 - 16);
            if ((*(_DWORD*)(v164 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v46) == -1)
                j_j_free(v46);
            v47 = *(_QWORD*)sub_14031B920(&v177, v236);
            v48 = (volatile signed __int32*)(v47 - 16);
            if ((*(_DWORD*)(v47 - 16) & 0x30000000) == 0)
                _InterlockedIncrement(v48);
            v49 = v31 | 0x700;
            v50 = (void*)(v177 - 16);
            if ((*(_DWORD*)(v177 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v50) == -1)
                j_j_free(v50);
            EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 560));
            if ((*v48 & 0x30000000) == 0)
                _InterlockedIncrement(v48);
            v51 = (_DWORD*)(_InterlockedExchange64((volatile __int64*)(a1 + 552), v47) - 16);
            if ((*v51 & 0x30000000) == 0 && _InterlockedDecrement(v51) == -1)
                j_j_free(v51);
            LeaveCriticalSection((LPCRITICAL_SECTION)(a1 + 560));
            if ((*v48 & 0x30000000) == 0 && _InterlockedDecrement(v48) == -1)
                j_j_free((void*)v48);
            if ((*v43 & 0x30000000) == 0 && _InterlockedDecrement(v43) == -1)
                j_j_free((void*)v43);
            v52 = 1;
            while (!*(_BYTE*)(a1 + 652))
            {
                v53 = *(_QWORD*)(*(_QWORD*)(*((_QWORD*)ArgList + 66) + 32i64) + 8 * v38);
                sub_140048D00(&v213, "layout_flashing");
                sub_14020F010(v53, &v213);
                v54 = *(_QWORD*)(*(_QWORD*)(*((_QWORD*)ArgList + 66) + 32i64) + 8 * v38);
                sub_140048D00(&v186, "layout_flashing");
                sub_14020F010(v54, &v186);
                sub_14020F300(*(_QWORD*)(*(_QWORD*)(*((_QWORD*)ArgList + 66) + 32i64) + 8 * v38), &v183);
                v169 = dword_140DDCDD0;
                if (*(_DWORD*)(a1 + 636))
                {
                    v58 = sub_1402FCCA0(v242);
                    sub_140040360(&v188, v58, &v241 - v58);
                    v165 = v183;
                    if ((*(v183 - 4) & 0x30000000) == 0)
                        _InterlockedIncrement(v183 - 4);
                    ImageCache::getFromHashCode(&v165, "_0F", (int)"");
                    v187 = v165;
                    if ((*(v165 - 4) & 0x30000000) == 0)
                        _InterlockedIncrement(v165 - 4);
                    v59 = v165 - 4;
                    if ((*(v165 - 4) & 0x30000000) == 0 && _InterlockedDecrement(v59) == -1)
                        j_j_free(v59);
                    v60 = (_QWORD*)sub_14031B550(v214, &v187, &v188);
                    ImageCache::getFromHashCode(v60, ".wav", (int)"");
                    v61 = (_DWORD*)*v60;
                    if ((*(_DWORD*)(*v60 - 16i64) & 0x30000000) == 0)
                        _InterlockedIncrement(v61 - 4);
                    v49 |= 0x3000u;
                    v62 = (_DWORD*)(*v60 - 16i64);
                    if ((*v62 & 0x30000000) == 0 && _InterlockedDecrement(v62) == -1)
                        j_j_free(v62);
                    v169 = v61;
                    v57 = (_DWORD*)(v188 - 16);
                    if ((*(_DWORD*)(v188 - 16) & 0x30000000) == 0 && _InterlockedDecrement(v57) == -1)
                        j_j_free(v57);
                }
                else
                {
                    v163 = v183;
                    if ((*(v183 - 4) & 0x30000000) == 0)
                        _InterlockedIncrement(v183 - 4);
                    v55 = -1i64;
                    do
                        ++v55;
                    while (*((_BYTE*)v163 + v55));
                    sub_1402FD230(&v163, v55 + 8);
                    strcpy((char*)v163 + (int)v55, "_0F0.wav");
                    v56 = v163;
                    if ((*(v163 - 4) & 0x30000000) == 0)
                        _InterlockedIncrement(v163 - 4);
                    v49 |= 0x800u;
                    v57 = v163 - 4;
                    if ((*(v163 - 4) & 0x30000000) == 0 && _InterlockedDecrement(v57) == -1)
                        j_j_free(v57);
                    v169 = v56;
                }
                sub_1401F4490(v57, &v169);
                v66 = sub_1401EE730(
                    v64,
                    v63,
                    *(_QWORD*)(*(_QWORD*)(*((_QWORD*)ArgList + 66) + 32i64) + 8 * v38),
                    v65,
                    v153,
                    v154,
                    1,
                    0,
                    1);
                v67 = *(_QWORD*)(*(_QWORD*)(*((_QWORD*)ArgList + 66) + 32i64) + 8 * v38);
                sub_140048D00(&v189, "layout");
                sub_14020F010(v67, &v189);
                sub_14020D720(*(_QWORD*)(*(_QWORD*)(*((_QWORD*)ArgList + 66) + 32i64) + 8 * v38));
                sub_1401FA670(ArgList, -130.0);
                if (!*(_BYTE*)(*(_QWORD*)(*(_QWORD*)(*((_QWORD*)ArgList + 66) + 32i64) + 8 * v38) + 108i64))
                    v66 = 0;
                v68 = *(_QWORD*)(*((_QWORD*)ArgList + 65) + 1088i64);
                v69 = *(_DWORD*)(v68 + 544);
                sub_14025CB30(v68, &v215, &v216);
                if (v69 > 200000 && v66)
                {
                    if (v215 <= -5.0 && v215 > -55.0)
                    {
                        v52 = 0;
                        if (!*(_DWORD*)(a1 + 636))
                            ++* (_DWORD*)(a1 + 628);
                        LOBYTE(v153) = 1;
                        sub_1401EEB50(ArgList, *(_QWORD*)(*(_QWORD*)(*((_QWORD*)ArgList + 66) + 32i64) + 8 * v38));
                        goto LABEL_152;
                    }
                    if (v215 <= -5.0)
                    {
                        if (v216 + 110.0 >= 50.0)
                            v70 = *(float*)(a1 + 656) + 6.0;
                        else
                            v70 = 0.0;
                        *(float*)(a1 + 656) = v70;
                        if (v70 > 0.0)
                            *(_DWORD*)(a1 + 656) = 0;
                    }
                    else
                    {
                        *(float*)(a1 + 656) = *(float*)(a1 + 656) - 5.0;
                    }
                }
                if ((int)v2 > 3)
                {
                    v52 = 0;
                    v159 = v160;
                    v38 = v161;
                    *(_BYTE*)(a1 + 652) = 1;
                }
                else
                {
                    LODWORD(v2) = v2 + 1;
                    Sleep(0x1F4u);
                }
            LABEL_152:
                v71 = v169 - 4;
                if ((*(v169 - 4) & 0x30000000) == 0 && _InterlockedDecrement(v71) == -1)
                    j_j_free(v71);
                v72 = v183 - 4;
                if ((*(v183 - 4) & 0x30000000) == 0 && _InterlockedDecrement(v72) == -1)
                    j_j_free(v72);
                if (!v52)
                    break;
            }
            v73 = 1;
            v74 = 0;
            v75 = v159;
            v217 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(*((_QWORD*)ArgList + 66) + 32i64) + 8i64 * v159) + 136i64);
            v76 = (volatile signed __int32*)(v217 - 16);
            if ((*(_DWORD*)(v217 - 16) & 0x30000000) == 0)
                _InterlockedIncrement(v76);
            sub_140048D00(&v190, "Measuring the back woofer...");
            sub_14031AF20(&v174, &v190);
            v77 = (void*)(v190 - 16);
            if ((*(_DWORD*)(v190 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v77) == -1)
                j_j_free(v77);
            ImageCache::getFromHashCode(&v174, "\n\r ", (int)"");
            v191 = v174;
            if ((*(_DWORD*)(v174 - 16) & 0x30000000) == 0)
                _InterlockedIncrement((volatile signed __int32*)(v174 - 16));
            v78 = v49 | 0x300000;
            v156 = v78;
            v79 = (void*)(v174 - 16);
            if ((*(_DWORD*)(v174 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v79) == -1)
                j_j_free(v79);
            v80 = sub_14031B550(&v218, &v191, &v217);
            sub_14040F570(a1, v80);
            v81 = (void*)(v218 - 16);
            if ((*(_DWORD*)(v218 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v81) == -1)
                j_j_free(v81);
            if ((*v76 & 0x30000000) == 0 && _InterlockedDecrement(v76) == -1)
                j_j_free((void*)v76);
            while (1)
            {
                if (*(_BYTE*)(a1 + 652))
                    goto LABEL_279;
                v82 = *(_QWORD*)(*(_QWORD*)(*((_QWORD*)ArgList + 66) + 32i64) + 8 * v75);
                sub_140048D00(&v192, "layout_flashing");
                sub_14020F010(v82, &v192);
                v83 = *(_QWORD*)(*(_QWORD*)(*((_QWORD*)ArgList + 66) + 32i64) + 8 * v75);
                sub_140048D00(&v193, "layout_flashing");
                sub_14020F010(v83, &v193);
                sub_14020F300(*(_QWORD*)(*(_QWORD*)(*((_QWORD*)ArgList + 66) + 32i64) + 8 * v75), &v184);
                v170 = dword_140DDCDD0;
                if (*(_DWORD*)(a1 + 636))
                {
                    sub_1402DE190(&v195);
                    v166 = v184;
                    if ((*(v184 - 4) & 0x30000000) == 0)
                        _InterlockedIncrement(v184 - 4);
                    ImageCache::getFromHashCode(&v166, "_0B", (int)"");
                    v194 = v166;
                    if ((*(v166 - 4) & 0x30000000) == 0)
                        _InterlockedIncrement(v166 - 4);
                    v86 = v166 - 4;
                    if ((*(v166 - 4) & 0x30000000) == 0 && _InterlockedDecrement(v86) == -1)
                        j_j_free(v86);
                    v87 = (_QWORD*)sub_14031B550(v219, &v194, &v195);
                    ImageCache::getFromHashCode(v87, ".wav", (int)"");
                    v88 = (_DWORD*)*v87;
                    if ((*(_DWORD*)(*v87 - 16i64) & 0x30000000) == 0)
                        _InterlockedIncrement(v88 - 4);
                    v78 |= 0x1800000u;
                    v156 = v78;
                    v89 = (_DWORD*)(*v87 - 16i64);
                    if ((*v89 & 0x30000000) == 0 && _InterlockedDecrement(v89) == -1)
                        j_j_free(v89);
                    v170 = v88;
                    v85 = (_DWORD*)(v195 - 16);
                    if ((*(_DWORD*)(v195 - 16) & 0x30000000) == 0 && _InterlockedDecrement(v85) == -1)
                        j_j_free(v85);
                }
                else
                {
                    v168 = v184;
                    if ((*(v184 - 4) & 0x30000000) == 0)
                        _InterlockedIncrement(v184 - 4);
                    ImageCache::getFromHashCode(&v168, "_0B0.wav", (int)"");
                    v84 = v168;
                    if ((*(v168 - 4) & 0x30000000) == 0)
                        _InterlockedIncrement(v168 - 4);
                    v78 |= 0x400000u;
                    v156 = v78;
                    v85 = v168 - 4;
                    if ((*(v168 - 4) & 0x30000000) == 0 && _InterlockedDecrement(v85) == -1)
                        j_j_free(v85);
                    v170 = v84;
                }
                sub_1401F4490(v85, &v170);
                v93 = sub_1401EE730(
                    v91,
                    v90,
                    *(_QWORD*)(*(_QWORD*)(*((_QWORD*)ArgList + 66) + 32i64) + 8 * v75),
                    v92,
                    v153,
                    v154,
                    0,
                    1,
                    1);
                v94 = *(_QWORD*)(*(_QWORD*)(*((_QWORD*)ArgList + 66) + 32i64) + 8 * v75);
                sub_140048D00(&v196, "layout");
                sub_14020F010(v94, &v196);
                sub_14020D720(*(_QWORD*)(*(_QWORD*)(*((_QWORD*)ArgList + 66) + 32i64) + 8 * v75));
                sub_1401FA670(ArgList, -130.0);
                if (!*(_BYTE*)(*(_QWORD*)(*(_QWORD*)(*((_QWORD*)ArgList + 66) + 32i64) + 8 * v75) + 108i64))
                    v93 = 0;
                v95 = *(_QWORD*)(*((_QWORD*)ArgList + 65) + 1088i64);
                v96 = *(_DWORD*)(v95 + 544);
                sub_14025CB30(v95, &v220, &v221);
                if (v96 > 200000 && v93)
                {
                    if (v220 <= -5.0 && v220 > -55.0)
                    {
                        v73 = 0;
                        if (!*(_DWORD*)(a1 + 636))
                        {
                            ++* (_DWORD*)(a1 + 628);
                            ++* (_DWORD*)(a1 + 632);
                        }
                        LOBYTE(v153) = 1;
                        sub_1401EEB50(ArgList, *(_QWORD*)(*(_QWORD*)(*((_QWORD*)ArgList + 66) + 32i64) + 8 * v75));
                        goto LABEL_219;
                    }
                    if (v220 <= -5.0)
                    {
                        if (v221 + 110.0 >= 50.0)
                            v97 = *(float*)(a1 + 656) + 6.0;
                        else
                            v97 = 0.0;
                        *(float*)(a1 + 656) = v97;
                        if (v97 > 0.0)
                            *(_DWORD*)(a1 + 656) = 0;
                    }
                    else
                    {
                        *(float*)(a1 + 656) = *(float*)(a1 + 656) - 5.0;
                    }
                }
                if (v74 > 3)
                {
                    v73 = 0;
                    v159 = v160;
                    v75 = v161;
                    *(_BYTE*)(a1 + 652) = 1;
                }
                else
                {
                    ++v74;
                    Sleep(0x1F4u);
                }
            LABEL_219:
                v98 = v170 - 4;
                if ((*(v170 - 4) & 0x30000000) == 0 && _InterlockedDecrement(v98) == -1)
                    j_j_free(v98);
                v99 = v184 - 4;
                if ((*(v184 - 4) & 0x30000000) == 0 && _InterlockedDecrement(v99) == -1)
                    j_j_free(v99);
                if (!v73)
                    goto LABEL_279;
            }
        }
        v100 = 1;
        while (1)
        {
            if (*(_BYTE*)(a1 + 652))
            {
            LABEL_278:
                v156 = v31;
            LABEL_279:
                v2 = 0i64;
                *(_DWORD*)(a1 + 656) = 0;
                v126 = **(_QWORD**)(*(_QWORD*)(*((_QWORD*)ArgList + 66) + 32i64) + 8i64 * v159);
                (*(void(__fastcall**)(__int64, _BYTE**))(*(_QWORD*)v126 + 376i64))(v126, &v178);
                v127 = 0;
                v128 = 0i64;
                while (1)
                {
                    sub_14020F300(*(_QWORD*)(*(_QWORD*)(*((_QWORD*)ArgList + 66) + 32i64) + 8 * v128), &v210);
                    v129 = v210;
                    if (v178 == v210 || !(unsigned int)String::isNotEmpty(v178, v210))
                        break;
                LABEL_323:
                    v150 = v129 - 16;
                    if ((*((_DWORD*)v129 - 4) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v150) == -1)
                        j_j_free(v150);
                    ++v127;
                    ++v128;
                    if (v127 >= (int)v160)
                    {
                        Sleep(0x12Cu);
                        sub_1401FA670(ArgList, -130.0);
                        v151 = v178 - 16;
                        if ((*((_DWORD*)v178 - 4) & 0x30000000) == 0
                            && _InterlockedDecrement((volatile signed __int32*)v151) == -1)
                        {
                            j_j_free(v151);
                        }
                        v31 = v156;
                        v37 = v161;
                        goto LABEL_331;
                    }
                }
                v130 = v128;
                v127 = v160;
                v158 = v160;
                v128 = v161;
                v131 = 1;
                while (2)
                {
                    if (*(_BYTE*)(a1 + 652))
                    {
                    LABEL_322:
                        v129 = v210;
                        v2 = 0i64;
                        goto LABEL_323;
                    }
                    v132 = *(_QWORD*)(*(_QWORD*)(*((_QWORD*)ArgList + 66) + 32i64) + 8 * v130);
                    sub_140048D00(&v204, "layout_flashing");
                    sub_14020F010(v132, &v204);
                    v133 = *(_QWORD*)(*(_QWORD*)(*((_QWORD*)ArgList + 66) + 32i64) + 8 * v130);
                    sub_140048D00(&v205, "layout_flashing");
                    sub_14020F010(v133, &v205);
                    v172 = dword_140DDCDD0;
                    if (*(_DWORD*)(a1 + 636))
                    {
                        sub_1402DE190(&v208);
                        v207 = v178;
                        if ((*((_DWORD*)v178 - 4) & 0x30000000) == 0)
                            _InterlockedIncrement((volatile signed __int32*)v178 - 4);
                        v137 = sub_14031B5C0(v231, &v207, "_0");
                        v138 = sub_14031B5C0(v232, v137, "X");
                        v139 = (_QWORD*)sub_14031B550(v233, v138, &v208);
                        v167 = v139;
                        ImageCache::getFromHashCode(v139, ".wav", (int)"");
                        v140 = (_DWORD*)*v139;
                        if ((*(_DWORD*)(*v139 - 16i64) & 0x30000000) == 0)
                            _InterlockedIncrement(v140 - 4);
                        v156 |= 0x10000000u;
                        v141 = (_DWORD*)(*v139 - 16i64);
                        if ((*v141 & 0x30000000) == 0 && _InterlockedDecrement(v141) == -1)
                            j_j_free(v141);
                        v172 = v140;
                        v136 = (_DWORD*)(v208 - 16);
                        if ((*(_DWORD*)(v208 - 16) & 0x30000000) == 0 && _InterlockedDecrement(v136) == -1)
                            j_j_free(v136);
                    }
                    else
                    {
                        v181 = v178;
                        if ((*((_DWORD*)v178 - 4) & 0x30000000) == 0)
                            _InterlockedIncrement((volatile signed __int32*)v178 - 4);
                        v134 = (_QWORD*)sub_14031B5C0(v230, &v181, "_");
                        v167 = v134;
                        ImageCache::getFromHashCode(v134, "0X0.wav", (int)"");
                        v135 = (_DWORD*)*v134;
                        if ((*(_DWORD*)(*v134 - 16i64) & 0x30000000) == 0)
                            _InterlockedIncrement(v135 - 4);
                        v156 |= 0x8000000u;
                        v136 = (_DWORD*)(*v134 - 16i64);
                        if ((*v136 & 0x30000000) == 0 && _InterlockedDecrement(v136) == -1)
                            j_j_free(v136);
                        v172 = v135;
                    }
                    sub_1401F4490(v136, &v172);
                    v145 = sub_1401F3F60(
                        v143,
                        v142,
                        *(_QWORD*)(*(_QWORD*)(*((_QWORD*)ArgList + 66) + 32i64) + 8 * v130),
                        v144,
                        0);
                    v146 = *(_QWORD*)(*(_QWORD*)(*((_QWORD*)ArgList + 66) + 32i64) + 8 * v130);
                    sub_140048D00(&v209, "layout");
                    sub_14020F010(v146, &v209);
                    sub_14020D720(*(_QWORD*)(*(_QWORD*)(*((_QWORD*)ArgList + 66) + 32i64) + 8 * v130));
                    sub_1401FA670(ArgList, -130.0);
                    v147 = *(_QWORD*)(*((_QWORD*)ArgList + 65) + 1088i64);
                    LODWORD(v146) = *(_DWORD*)(v147 + 544);
                    sub_14025CB30(v147, &v211, &v182);
                    if ((int)v146 > 200000 && v145)
                    {
                        if (v211 <= -5.0 && v211 > -55.0)
                        {
                            v131 = 0;
                            ++* (_DWORD*)(a1 + 628);
                            ++* (_DWORD*)(a1 + 632);
                            LOBYTE(v153) = 1;
                            sub_1401EEB50(ArgList, *(_QWORD*)(*(_QWORD*)(*((_QWORD*)ArgList + 66) + 32i64) + 8 * v130));
                            v127 = v158;
                            goto LABEL_318;
                        }
                        if (v211 <= -5.0)
                        {
                            if (v182 + 110.0 >= 50.0)
                                v148 = *(float*)(a1 + 656) + 6.0;
                            else
                                v148 = 0.0;
                            *(float*)(a1 + 656) = v148;
                            if (v148 > 0.0)
                                *(_DWORD*)(a1 + 656) = 0;
                        }
                        else
                        {
                            *(float*)(a1 + 656) = *(float*)(a1 + 656) - 5.0;
                        }
                    }
                    if ((int)v2 > 3)
                    {
                        v131 = 0;
                        v127 = v160;
                        v158 = v160;
                        v128 = v161;
                        *(_BYTE*)(a1 + 652) = 1;
                    }
                    else
                    {
                        LODWORD(v2) = v2 + 1;
                        Sleep(0x1F4u);
                        v127 = v158;
                    }
                LABEL_318:
                    v149 = v172 - 4;
                    if ((*(v172 - 4) & 0x30000000) == 0 && _InterlockedDecrement(v149) == -1)
                        j_j_free(v149);
                    if (!v131)
                        goto LABEL_322;
                    continue;
                }
            }
            v101 = *(_QWORD*)(*(_QWORD*)(*((_QWORD*)ArgList + 66) + 32i64) + 8 * v38);
            sub_140048D00(&v197, "layout_flashing");
            sub_14020F010(v101, &v197);
            v102 = *(_QWORD*)(*(_QWORD*)(*((_QWORD*)ArgList + 66) + 32i64) + 8 * v38);
            sub_140048D00(&v198, "layout_flashing");
            sub_14020F010(v102, &v198);
            sub_14020F300(*(_QWORD*)(*(_QWORD*)(*((_QWORD*)ArgList + 66) + 32i64) + 8 * v38), &v185);
            v171 = dword_140DDCDD0;
            if (*(_DWORD*)(a1 + 636))
            {
                sub_1402DE190(&v202);
                sub_1402DE190(&v201);
                v180 = v185;
                if ((*(_DWORD*)(v185 - 16) & 0x30000000) == 0)
                    _InterlockedIncrement((volatile signed __int32*)(v185 - 16));
                v109 = sub_14031B5C0(v224, &v180, "_");
                v110 = sub_14031B550(v225, v109, &v201);
                v111 = sub_14031B5C0(v226, v110, "W");
                v112 = (_QWORD*)sub_14031B550(v227, v111, &v202);
                ImageCache::getFromHashCode(v112, ".wav", (int)"");
                v113 = (_DWORD*)*v112;
                if ((*(_DWORD*)(*v112 - 16i64) & 0x30000000) == 0)
                    _InterlockedIncrement(v113 - 4);
                v31 |= 0x4000000u;
                v114 = (_DWORD*)(*v112 - 16i64);
                if ((*v114 & 0x30000000) == 0 && _InterlockedDecrement(v114) == -1)
                    j_j_free(v114);
                v171 = v113;
                v115 = (void*)(v201 - 16);
                if ((*(_DWORD*)(v201 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v115) == -1)
                    j_j_free(v115);
                v107 = (void*)(v202 - 16);
                v108 = *(_DWORD*)(v202 - 16);
            }
            else
            {
                sub_1402DE190(&v199);
                v179 = v185;
                if ((*(_DWORD*)(v185 - 16) & 0x30000000) == 0)
                    _InterlockedIncrement((volatile signed __int32*)(v185 - 16));
                v103 = sub_14031B5C0(v222, &v179, "_");
                v104 = (_QWORD*)sub_14031B550(v223, v103, &v199);
                ImageCache::getFromHashCode(v104, "W0.wav", (int)"");
                v105 = (_DWORD*)*v104;
                if ((*(_DWORD*)(*v104 - 16i64) & 0x30000000) == 0)
                    _InterlockedIncrement(v105 - 4);
                v31 |= 0x2000000u;
                v106 = (_DWORD*)(*v104 - 16i64);
                if ((*v106 & 0x30000000) == 0 && _InterlockedDecrement(v106) == -1)
                    j_j_free(v106);
                v171 = v105;
                v107 = (void*)(v199 - 16);
                v108 = *(_DWORD*)(v199 - 16);
            }
            if ((v108 & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v107) == -1)
                j_j_free(v107);
            sub_1401F4490(v107, &v171);
            v119 = sub_1401EE730(
                v117,
                v116,
                *(_QWORD*)(*(_QWORD*)(*((_QWORD*)ArgList + 66) + 32i64) + 8 * v38),
                v118,
                v153,
                v154,
                0,
                0,
                0);
            v120 = *(_QWORD*)(*(_QWORD*)(*((_QWORD*)ArgList + 66) + 32i64) + 8 * v38);
            sub_140048D00(&v203, "layout");
            sub_14020F010(v120, &v203);
            sub_14020D720(*(_QWORD*)(*(_QWORD*)(*((_QWORD*)ArgList + 66) + 32i64) + 8 * v38));
            sub_1401FA670(ArgList, -130.0);
            if (!*(_BYTE*)(*(_QWORD*)(*(_QWORD*)(*((_QWORD*)ArgList + 66) + 32i64) + 8 * v38) + 108i64))
                v119 = 0;
            v121 = *(_QWORD*)(*((_QWORD*)ArgList + 65) + 1088i64);
            v122 = *(_DWORD*)(v121 + 544);
            sub_14025CB30(v121, &v228, &v229);
            if (v122 > 200000 && v119)
            {
                if (v228 <= -5.0 && v228 > -55.0)
                {
                    v100 = 0;
                    if (!*(_DWORD*)(a1 + 636))
                    {
                        ++* (_DWORD*)(a1 + 628);
                        ++* (_DWORD*)(a1 + 632);
                    }
                    LOBYTE(v153) = 1;
                    sub_1401EEB50(ArgList, *(_QWORD*)(*(_QWORD*)(*((_QWORD*)ArgList + 66) + 32i64) + 8 * v38));
                    goto LABEL_271;
                }
                if (v228 <= -5.0)
                {
                    if (v229 + 110.0 >= 50.0)
                        v123 = *(float*)(a1 + 656) + 6.0;
                    else
                        v123 = 0.0;
                    *(float*)(a1 + 656) = v123;
                    if (v123 > 0.0)
                        *(_DWORD*)(a1 + 656) = 0;
                }
                else
                {
                    *(float*)(a1 + 656) = *(float*)(a1 + 656) - 5.0;
                }
            }
            if ((int)v2 > 3)
            {
                v100 = 0;
                v159 = v160;
                v38 = v161;
                *(_BYTE*)(a1 + 652) = 1;
            }
            else
            {
                LODWORD(v2) = v2 + 1;
                Sleep(0x1F4u);
            }
        LABEL_271:
            v124 = v171 - 4;
            if ((*(v171 - 4) & 0x30000000) == 0 && _InterlockedDecrement(v124) == -1)
                j_j_free(v124);
            v125 = (void*)(v185 - 16);
            if ((*(_DWORD*)(v185 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v125) == -1)
                j_j_free(v125);
            if (!v100)
                goto LABEL_278;
        }
    }
LABEL_332:
    sub_1401FA670(ArgList, -130.0);
    if (v37 > 0)
    {
        do
        {
            v152 = *(_QWORD*)(*(_QWORD*)(*((_QWORD*)ArgList + 66) + 32i64) + 8 * v2);
            if (*(_QWORD*)v152)
            {
                if (*(_BYTE*)(*(_QWORD*)v152 + 96i64))
                {
                    sub_140048D00(&v160, "layout");
                    sub_14020F010(v152, &v160);
                    sub_14020D720(*(_QWORD*)(*(_QWORD*)(*((_QWORD*)ArgList + 66) + 32i64) + 8 * v2));
                }
            }
            ++v2;
        } while (v2 < v37);
    }
    */
}

void WeCalMeasurementProgressWindow::threadComplete(bool userPressedCancel)//void  sub_1401BEA00(__int64 a1, char a2)//override
{
    /*
    void* v3; // rcx
    void* v4; // rcx
    void* v5; // rcx
    void* v6; // rcx
    void* v7; // rcx
    void* v8; // rcx
    void* v9; // rcx
    void* v10; // rcx
    void* v11; // rcx
    __int64 v12; // rax
    _DWORD* v13; // rcx
    __int64 v14; // [rsp+30h] [rbp-19h] BYREF
    __int64 v15; // [rsp+38h] [rbp-11h] BYREF
    __int64 v16; // [rsp+40h] [rbp-9h] BYREF
    __int64 v17; // [rsp+48h] [rbp-1h] BYREF
    __int64 v18; // [rsp+50h] [rbp+7h] BYREF
    __int64 v19; // [rsp+58h] [rbp+Fh] BYREF
    _DWORD* v20; // [rsp+60h] [rbp+17h] BYREF
    _DWORD* v21; // [rsp+68h] [rbp+1Fh]
    _DWORD* v22; // [rsp+70h] [rbp+27h] BYREF
    _DWORD* v23; // [rsp+78h] [rbp+2Fh] BYREF
    void* v24; // [rsp+80h] [rbp+37h]
    __int64 v25; // [rsp+B0h] [rbp+67h] BYREF
    __int64 v26; // [rsp+C0h] [rbp+77h] BYREF
    __int64 v27; // [rsp+C8h] [rbp+7Fh] BYREF

    if (a2)
    {
        v22 = dword_140DDCDD0;
        sub_140048D00(&v25, "You pressed cancel!");
        sub_14031AF20(&v14, &v25);
        v3 = (void*)(v25 - 16);
        if ((*(_DWORD*)(v25 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v3) == -1)
            j_j_free(v3);
        sub_140048D00(&v26, "Progress Window");
        sub_14031AF20(&v27, &v26);
        v4 = (void*)(v26 - 16);
        if ((*(_DWORD*)(v26 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v4) == -1)
            j_j_free(v4);
        sub_14040FE70(2, (unsigned int)&v27, (unsigned int)&v14, (unsigned int)&v22, 0i64);
        v5 = (void*)(v27 - 16);
        if ((*(_DWORD*)(v27 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v5) == -1)
            j_j_free(v5);
        v6 = (void*)(v14 - 16);
        if ((*(_DWORD*)(v14 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v6) == -1)
            j_j_free(v6);
    }
    else if (*(_BYTE*)(a1 + 652))
    {
        v23 = dword_140DDCDD0;
        sub_140048D00(&v15, "Failed to measure the system, please try again!");
        sub_14031AF20(&v18, &v15);
        v7 = (void*)(v15 - 16);
        if ((*(_DWORD*)(v15 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v7) == -1)
            j_j_free(v7);
        sub_140048D00(&v16, "Progress window");
        sub_14031AF20(&v17, &v16);
        v8 = (void*)(v16 - 16);
        if ((*(_DWORD*)(v16 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v8) == -1)
            j_j_free(v8);
        sub_14040FE70(2, (unsigned int)&v17, (unsigned int)&v18, (unsigned int)&v23, 0i64);
        v9 = (void*)(v17 - 16);
        if ((*(_DWORD*)(v17 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v9) == -1)
            j_j_free(v9);
        v10 = (void*)(v18 - 16);
        if ((*(_DWORD*)(v18 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v10) == -1)
            j_j_free(v10);
    }
    else
    {
        v21 = dword_140DDCDD0;
        sub_140048D00(&v19, "Woofer system measurement completed.");
        sub_14031AF20((__int64*)&v20, &v19);
        v11 = (void*)(v19 - 16);
        if ((*(_DWORD*)(v19 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v11) == -1)
            j_j_free(v11);
        v21 = v20;
        v20 = dword_140DDCDD0;
        ++* (_DWORD*)(a1 + 636);
        v24 = operator new(0x358ui64);
        v12 = sub_1401C32A0((_DWORD)v24, *(_QWORD*)(a1 + 616), *(_DWORD*)(a1 + 632), *(_DWORD*)(a1 + 640));
        sub_14040F9D0(v12 + 176);
        v13 = v21 - 4;
        if ((*(v21 - 4) & 0x30000000) == 0 && _InterlockedDecrement(v13) == -1)
            j_j_free(v13);
    }
    if (a1 != 176)
        (**(void(__fastcall***)(__int64, __int64))(a1 - 176))(a1 - 176, 1i64);
    */
}