#include "WeCalOptimizationProgressWindow.h"

__int64  sub_1401C3120(__int64 a1)//override
{
    /*
    __int64 result; // rax
    void* v3; // rcx
    void* v4; // rcx
    __int64 v5; // [rsp+30h] [rbp+8h] BYREF
    __int64 v6; // [rsp+38h] [rbp+10h] BYREF

    if (*(_BYTE*)(a1 + 664))
    {
        sub_140048D00(&v5, "Optimizing... ");
        sub_14031AF20(&v6, &v5);
        v3 = (void*)(v5 - 16);
        if ((*(_DWORD*)(v5 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v3) == -1)
            j_j_free(v3);
        sub_14040F570(a1, &v6);
        v4 = (void*)(v6 - 16);
        if ((*(_DWORD*)(v6 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v4) == -1)
            j_j_free(v4);
        result = sub_1401C1020(a1 - 176);
    }
    else
    {
        result = sub_1401FB760();
        if ((_BYTE)result)
            result = sub_1401C14D0(a1 - 176);
    }
    return result;
    */
    return 0;
}

void  sub_1401C2270(__int64 a1, char a2)//override
{
    /*
    __int64 v2; // r14
    __int64 v3; // rbx
    __int64* v4; // rdx
    void* v5; // rcx
    void* v6; // rcx
    void* v7; // rcx
    void* v8; // rcx
    _BYTE* v9; // rcx
    int v10; // eax
    __int64 v11; // rax
    void* v12; // rcx
    void* v13; // rcx
    LPCWSTR* v14; // rax
    __int64 v15; // rcx
    void* v16; // rcx
    void* v17; // rcx
    void* v18; // rcx
    void* v19; // rcx
    volatile signed __int32* v20; // rcx
    volatile signed __int32* v21; // r13
    __int64 v22; // rax
    void* v23; // rcx
    void* v24; // rcx
    volatile signed __int32* v25; // rbx
    volatile signed __int32* v26; // r12
    __int64 v27; // rsi
    char* v28; // rax
    char v29; // dl
    unsigned __int8 v30; // cl
    _BYTE* v31; // rax
    _BYTE* v32; // rcx
    void* v33; // rcx
    int i; // ebx
    void(__fastcall * **v35)(_QWORD, __int64); // rcx
    __int64 v36; // rax
    __int64 v37; // rcx
    void(__fastcall * **v38)(_QWORD, __int64); // r8
    bool v39; // r15
    __int64 v40; // rbx
    bool v41; // r14
    __int64 v42; // rcx
    int v43; // esi
    int v44; // ebx
    int v45; // eax
    char* v46; // rdx
    char v47; // cl
    unsigned __int8 j; // al
    void* v49; // rcx
    void* v50; // rcx
    volatile signed __int32* v51; // rbx
    void* v52; // rcx
    void* v53; // rcx
    void* v54; // rcx
    void* v55; // rcx
    void* v56; // rcx
    char* v57; // rcx
    char* v58; // rcx
    _BYTE* v59; // rcx
    volatile signed __int32* v60; // rbx
    char* v61; // rcx
    void* v62; // rcx
    void* v63; // rcx
    void* v64; // rcx
    void* v65; // rcx
    char v66; // bl
    void* v67; // rcx
    void* v68; // rcx
    void* v69; // rcx
    void* v70; // rcx
    char* v71; // [rsp+40h] [rbp-C0h] BYREF
    char* v72; // [rsp+48h] [rbp-B8h] BYREF
    __int64* v73; // [rsp+50h] [rbp-B0h] BYREF
    __int64* v74; // [rsp+58h] [rbp-A8h]
    __int64 v75; // [rsp+60h] [rbp-A0h] BYREF
    _BYTE* v76; // [rsp+68h] [rbp-98h] BYREF
    __int64 v77; // [rsp+70h] [rbp-90h] BYREF
    __int64 v78; // [rsp+78h] [rbp-88h] BYREF
    char* v79; // [rsp+80h] [rbp-80h] BYREF
    __int64 v80; // [rsp+88h] [rbp-78h] BYREF
    __int64 v81; // [rsp+90h] [rbp-70h] BYREF
    __int64 v82; // [rsp+98h] [rbp-68h] BYREF
    __int64 v83; // [rsp+A0h] [rbp-60h] BYREF
    __int64 v84; // [rsp+A8h] [rbp-58h] BYREF
    __int64 v85; // [rsp+B0h] [rbp-50h] BYREF
    __int64 v86; // [rsp+B8h] [rbp-48h] BYREF
    __int64 v87; // [rsp+C0h] [rbp-40h] BYREF
    __int64 v88; // [rsp+C8h] [rbp-38h] BYREF
    __int64 v89; // [rsp+D0h] [rbp-30h] BYREF
    __int64 v90; // [rsp+D8h] [rbp-28h] BYREF
    __int64 v91; // [rsp+E0h] [rbp-20h] BYREF
    __int64 v92; // [rsp+E8h] [rbp-18h] BYREF
    _BYTE* v93; // [rsp+F0h] [rbp-10h] BYREF
    __int64 v94; // [rsp+F8h] [rbp-8h] BYREF
    __int64 v95; // [rsp+100h] [rbp+0h] BYREF
    __int64 v96; // [rsp+108h] [rbp+8h] BYREF
    __int64 v97; // [rsp+110h] [rbp+10h] BYREF
    __int64 v98; // [rsp+118h] [rbp+18h] BYREF
    __int64 v99; // [rsp+120h] [rbp+20h] BYREF
    __int64 v100; // [rsp+128h] [rbp+28h] BYREF
    __int64 v101; // [rsp+130h] [rbp+30h] BYREF
    __int64 v102; // [rsp+138h] [rbp+38h] BYREF
    __int64 v103; // [rsp+140h] [rbp+40h] BYREF
    __int64 v104; // [rsp+148h] [rbp+48h] BYREF
    __int64 v105; // [rsp+150h] [rbp+50h] BYREF
    __int64 v106; // [rsp+158h] [rbp+58h] BYREF
    __int64 v107; // [rsp+160h] [rbp+60h] BYREF
    __int64 v108; // [rsp+168h] [rbp+68h] BYREF
    __int64 v109; // [rsp+170h] [rbp+70h] BYREF
    __int64 v110; // [rsp+178h] [rbp+78h] BYREF
    __int64 v111; // [rsp+180h] [rbp+80h] BYREF
    _BYTE* v112; // [rsp+188h] [rbp+88h] BYREF
    _BYTE* v113; // [rsp+190h] [rbp+90h]
    _QWORD v114[3]; // [rsp+198h] [rbp+98h] BYREF
    __int64 v115; // [rsp+1B0h] [rbp+B0h] BYREF
    _BYTE* v116; // [rsp+1B8h] [rbp+B8h]
    __int64 v117; // [rsp+1C0h] [rbp+C0h]
    __int64 v118; // [rsp+1C8h] [rbp+C8h]
    void* Block; // [rsp+1D0h] [rbp+D0h]
    __int64 v120; // [rsp+1D8h] [rbp+D8h]
    __int16 v121; // [rsp+1E0h] [rbp+E0h]
    __int64 v122; // [rsp+220h] [rbp+120h]
    void(__fastcall * **v123)(_QWORD, __int64); // [rsp+228h] [rbp+128h]

    v2 = a1;
    v73 = (__int64*)a1;
    v3 = *(_QWORD*)(a1 + 672);
    v78 = v3;
    if (a2)
    {
        if (qword_140EBFF28)
        {
            if (*(_BYTE*)(qword_140EBFF28 + 224))
            {
                sub_140048D00(&v101, "WaitingCanceled");
                v4 = &v101;
            }
            else
            {
                sub_140048D00(&v109, "CalCanceled");
                v4 = &v109;
            }
            sub_1401221A0(qword_140EBFF28, v4);
            sub_140127370();
            if (qword_140EBFF28)
                (**(void(__fastcall***)(__int64, __int64))qword_140EBFF28)(qword_140EBFF28, 1i64);
            qword_140EBFF28 = 0i64;
        }
        sub_140048D00(&v83, &unk_14046DA3E);
        sub_140048D00(&v110, "You pressed cancel!");
        sub_14031AF20(&v82, &v110);
        v5 = (void*)(v110 - 16);
        if ((*(_DWORD*)(v110 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v5) == -1)
            j_j_free(v5);
        sub_140048D00(&v80, "Progress Window");
        sub_14031AF20(&v81, &v80);
        v6 = (void*)(v80 - 16);
        if ((*(_DWORD*)(v80 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v6) == -1)
            j_j_free(v6);
        sub_14040FE70(2, (unsigned int)&v81, (unsigned int)&v82, (unsigned int)&v83, v3);
        v7 = (void*)(v81 - 16);
        if ((*(_DWORD*)(v81 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v7) == -1)
            j_j_free(v7);
        v8 = (void*)(v82 - 16);
        if ((*(_DWORD*)(v82 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v8) == -1)
            j_j_free(v8);
        v9 = (_BYTE*)(v83 - 16);
        v10 = *(_DWORD*)(v83 - 16);
        goto LABEL_214;
    }
    v11 = *((_QWORD*)ArgList + 273);
    v85 = v11;
    if ((*(_DWORD*)(v11 - 16) & 0x30000000) == 0)
        _InterlockedIncrement((volatile signed __int32*)(v11 - 16));
    sub_140308BF0(&v84, &v85);
    sub_14031A890(&v84, &v76, "error.txt");
    v12 = (void*)(v84 - 16);
    if ((*(_DWORD*)(v84 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v12) == -1)
        j_j_free(v12);
    v13 = (void*)(v85 - 16);
    if ((*(_DWORD*)(v85 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v13) == -1)
        j_j_free(v13);
    if (*v76)
    {
        v14 = (LPCWSTR*)sub_140046AE0(v114, &v76);
        if (GetFileAttributesW(*v14) != -1)
        {
            sub_1401FD680(v15, &v90, &v76);
            sub_140048D00(&v86, "OK");
            sub_14031AF20(&v89, &v86);
            v16 = (void*)(v86 - 16);
            if ((*(_DWORD*)(v86 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v16) == -1)
                j_j_free(v16);
            sub_140048D00(&v87, "Cloud calibration failed");
            sub_14031AF20(&v88, &v87);
            v17 = (void*)(v87 - 16);
            if ((*(_DWORD*)(v87 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v17) == -1)
                j_j_free(v17);
            sub_14040EFD0(2, (unsigned int)&v88, (unsigned int)&v90, (unsigned int)&v89, v3);
            v18 = (void*)(v88 - 16);
            if ((*(_DWORD*)(v88 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v18) == -1)
                j_j_free(v18);
            v19 = (void*)(v89 - 16);
            if ((*(_DWORD*)(v89 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v19) == -1)
                j_j_free(v19);
            v20 = (volatile signed __int32*)(v90 - 16);
            if ((*(_DWORD*)(v90 - 16) & 0x30000000) != 0 || _InterlockedDecrement(v20) != -1)
                goto LABEL_213;
            goto LABEL_212;
        }
    }
    v113 = (_BYTE*)*((_QWORD*)ArgList + 281);
    v21 = (volatile signed __int32*)(v113 - 16);
    if ((*((_DWORD*)v113 - 4) & 0x30000000) == 0)
        _InterlockedIncrement(v21);
    if ((unsigned int)String::isNotEmpty(v113, &unk_14046DA76))
    {
        sub_140048D00(&v102, "Cancel");
        sub_14031AF20(&v78, &v102);
        v62 = (void*)(v102 - 16);
        if ((*(_DWORD*)(v102 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v62) == -1)
            j_j_free(v62);
        sub_140048D00(&v103, "Save");
        sub_14031AF20(&v108, &v103);
        v63 = (void*)(v103 - 16);
        if ((*(_DWORD*)(v103 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v63) == -1)
            j_j_free(v63);
        sub_140048D00(&v104, "Save acoustic settings to the Group preset?");
        sub_14031AF20(&v107, &v104);
        v64 = (void*)(v104 - 16);
        if ((*(_DWORD*)(v104 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v64) == -1)
            j_j_free(v64);
        sub_140048D00(&v105, "Calibration Completed");
        sub_14031AF20(&v106, &v105);
        v65 = (void*)(v105 - 16);
        if ((*(_DWORD*)(v105 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v65) == -1)
            j_j_free(v65);
        v66 = sub_14040FB40(1, (unsigned int)&v106, (unsigned int)&v107, (unsigned int)&v108, (__int64)&v78, v3, 0i64);
        v67 = (void*)(v106 - 16);
        if ((*(_DWORD*)(v106 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v67) == -1)
            j_j_free(v67);
        v68 = (void*)(v107 - 16);
        if ((*(_DWORD*)(v107 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v68) == -1)
            j_j_free(v68);
        v69 = (void*)(v108 - 16);
        if ((*(_DWORD*)(v108 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v69) == -1)
            j_j_free(v69);
        v70 = (void*)(v78 - 16);
        if ((*(_DWORD*)(v78 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v70) == -1)
            j_j_free(v70);
        if (v66 == 1)
        {
            sub_1401EDB50();
            sub_1401FBBD0();
            sub_1401B8890(*(_QWORD*)(v2 + 672));
        }
        goto LABEL_209;
    }
    v22 = *((_QWORD*)ArgList + 272);
    v91 = v22;
    if ((*(_DWORD*)(v22 - 16) & 0x30000000) == 0)
        _InterlockedIncrement((volatile signed __int32*)(v22 - 16));
    sub_140308BF0(&v111, &v91);
    v23 = (void*)(v91 - 16);
    if ((*(_DWORD*)(v91 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v23) == -1)
        j_j_free(v23);
    sub_140048D00(&v93, "*.sam");
    sub_140048D00(&v92, "GLM4 - Save As...");
    sub_14031AF20(&v94, &v92);
    v24 = (void*)(v92 - 16);
    if ((*(_DWORD*)(v92 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v24) == -1)
        j_j_free(v24);
    v115 = v94;
    if ((*(_DWORD*)(v94 - 16) & 0x30000000) == 0)
        _InterlockedIncrement((volatile signed __int32*)(v94 - 16));
    v116 = v93;
    v25 = (volatile signed __int32*)(v93 - 16);
    if ((*((_DWORD*)v93 - 4) & 0x30000000) == 0)
        _InterlockedIncrement(v25);
    v117 = v111;
    v26 = (volatile signed __int32*)(v111 - 16);
    if ((*(_DWORD*)(v111 - 16) & 0x30000000) == 0)
        _InterlockedIncrement(v26);
    v27 = 0i64;
    v118 = 0i64;
    Block = 0i64;
    v120 = 0i64;
    v121 = 1;
    v122 = 0i64;
    v123 = 0i64;
    v28 = v93;
    if (*v93)
    {
        v29 = *v93;
        while (v29 == 32 || (unsigned __int8)(v29 - 9) <= 4u)
        {
            ++v28;
            if (v29 < 0)
            {
                v30 = 64;
                if ((v29 & 0x40) != 0)
                {
                    do
                    {
                        if (v30 <= 8u)
                            break;
                        ++v28;
                        v30 >>= 1;
                    } while ((v30 & (unsigned __int8)v29) != 0);
                }
            }
            v29 = *v28;
            if (!*v28)
                goto LABEL_73;
        }
    }
    else
    {
    LABEL_73:
        sub_140048D00(&v112, "*");
        v31 = v116;
        v116 = v112;
        v32 = v31 - 16;
        if ((*((_DWORD*)v31 - 4) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v32) == -1)
            j_j_free(v32);
    }
    v33 = (void*)(v94 - 16);
    if ((*(_DWORD*)(v94 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v33) == -1)
        j_j_free(v33);
    if ((*v25 & 0x30000000) == 0 && _InterlockedDecrement(v25) == -1)
        j_j_free((void*)v25);
    Component::BailOutChecker(&v95, qword_140EC0010);
    for (i = 0; i < SHIDWORD(v120); ++i)
        sub_140002BF0((char*)Block + 72 * i);
    HIDWORD(v120) = 0;
    if ((_DWORD)v120)
    {
        free(Block);
        Block = 0i64;
    }
    LODWORD(v120) = 0;
    v35 = v123;
    if (v123)
    {
        v123 = 0i64;
        (**v35)(v35, 1i64);
    }
    if ((_BYTE)v121)
    {
        v74 = (__int64*)operator new(0xC8ui64);
        v36 = sub_1400B76F0(v74, &v115, 134i64);
        if (v36)
            v37 = v36 + 176;
        else
            v37 = 0i64;
    }
    else
    {
        v74 = (__int64*)operator new(0xC08ui64);
        v37 = sub_140091130(v74, &v115, 134i64);
    }
    v38 = v123;
    v123 = (void(__fastcall***)(_QWORD, __int64))v37;
    if (v38)
    {
        (**v38)(v38, 1i64);
        v37 = (__int64)v123;
    }
    (*(void(__fastcall**)(__int64))(*(_QWORD*)v37 + 16i64))(v37);
    v39 = SHIDWORD(v120) > 0;
    v40 = v95;
    v41 = v95 != 0;
    if (v95)
    {
        if (*(_QWORD*)(v95 + 16) && Component::isShowing(*(_QWORD*)(v95 + 16)))
        {
            v42 = v41 ? *(_QWORD*)(v40 + 16) : 0i64;
            if (!Component::isCurrentlyBlockedByAnotherModalComponent(v42))
            {
                if (v41)
                    v27 = *(_QWORD*)(v40 + 16);
                Component::grabKeyboardFocusInternal(v27, 2u, 1);
            }
        }
        if (v40 && !_InterlockedAdd((volatile signed __int32*)(v40 + 8), 0xFFFFFFFF))
            (**(void(__fastcall***)(__int64, __int64))v95)(v95, 1i64);
    }
    if (!v39)
        goto LABEL_158;
    sub_14040F1B0(&v115, &v71);
    v43 = String::lastIndexOfChar(&v71, 92);
    v44 = v43 + 1;
    v45 = String::lastIndexOfChar(&v71, 46);
    if (v45 <= v43 + 1)
    {
        if (v44 > 0)
        {
            v46 = v71;
            while (1)
            {
                v47 = *v46;
                if (!*v46)
                    break;
                ++v46;
                if (v47 < 0)
                {
                    for (j = 64; ((unsigned __int8)v47 & j) != 0; j >>= 1)
                    {
                        if (j <= 8u)
                            break;
                        ++v46;
                    }
                }
                if (--v43 < 0)
                {
                    String::String(&v72, v46);
                    goto LABEL_123;
                }
            }
            v72 = (char*)dword_140DDCDD0;
        }
        else
        {
            v72 = v71;
            if ((*((_DWORD*)v71 - 4) & 0x30000000) == 0)
                _InterlockedIncrement((volatile signed __int32*)v71 - 4);
        }
    }
    else
    {
        String::substring(&v71, &v72, v44, v45);
    }
LABEL_123:
    if ((unsigned __int8)sub_14026E2D0(&v72))
    {
        v114[1] = v71;
        v60 = (volatile signed __int32*)(v71 - 16);
        if ((*((_DWORD*)v71 - 4) & 0x30000000) == 0)
            _InterlockedIncrement(v60);
        v79 = v71;
        if ((*v60 & 0x30000000) == 0)
            _InterlockedIncrement(v60);
        sub_140200820(ArgList, &v79, 0i64);
        sub_1401EDB50();
        sub_1401FBBD0();
        v2 = (__int64)v73;
        sub_1401B8890(v73[84]);
        if ((*v60 & 0x30000000) == 0 && _InterlockedDecrement(v60) == -1)
            j_j_free((void*)v60);
        v61 = v72 - 16;
        if ((*((_DWORD*)v72 - 4) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v61) == -1)
            j_j_free(v61);
        if ((*v60 & 0x30000000) == 0 && _InterlockedDecrement(v60) == -1)
            j_j_free((void*)v60);
        sub_14040F290(&v115);
        if ((*v26 & 0x30000000) == 0 && _InterlockedDecrement(v26) == -1)
            j_j_free((void*)v26);
    LABEL_209:
        if ((*v21 & 0x30000000) != 0 || _InterlockedDecrement(v21) != -1)
            goto LABEL_213;
        v20 = v21;
    LABEL_212:
        j_j_free((void*)v20);
    LABEL_213:
        v9 = v76 - 16;
        v10 = *((_DWORD*)v76 - 4);
    LABEL_214:
        if ((v10 & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v9) == -1)
            j_j_free(v9);
        if (v2 != 176)
            (**(void(__fastcall***)(__int64, __int64))(v2 - 176))(v2 - 176, 1i64);
        return;
    }
    sub_140048D00(&v100, &unk_14046DA75);
    sub_140048D00(&v99, "\\ / : * ? | < > \" # % & { } $ ! ' @ + = `");
    sub_140048D00(&v96, "Setup name contains invalid charaters, please type in a name without special characters.");
    sub_14031AF20(&v75, &v96);
    v49 = (void*)(v96 - 16);
    if ((*(_DWORD*)(v96 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v49) == -1)
        j_j_free(v49);
    v74 = &v75;
    ImageCache::getFromHashCode(&v75, "\n", (int)"");
    v77 = v75;
    if ((*(_DWORD*)(v75 - 16) & 0x30000000) == 0)
        _InterlockedIncrement((volatile signed __int32*)(v75 - 16));
    v50 = (void*)(v75 - 16);
    if ((*(_DWORD*)(v75 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v50) == -1)
        j_j_free(v50);
    v73 = &v77;
    v73 = *(__int64**)sub_14031B920(&v77, &v99);
    v51 = (volatile signed __int32*)(v73 - 2);
    if ((*(_DWORD*)(v73 - 2) & 0x30000000) == 0)
        _InterlockedIncrement(v51);
    v52 = (void*)(v77 - 16);
    if ((*(_DWORD*)(v77 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v52) == -1)
        j_j_free(v52);
    sub_140048D00(&v97, "Error");
    sub_14031AF20(&v98, &v97);
    v53 = (void*)(v97 - 16);
    if ((*(_DWORD*)(v97 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v53) == -1)
        j_j_free(v53);
    sub_14040FE70(2, (unsigned int)&v98, (unsigned int)&v73, (unsigned int)&v100, v78);
    v54 = (void*)(v98 - 16);
    if ((*(_DWORD*)(v98 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v54) == -1)
        j_j_free(v54);
    if ((*v51 & 0x30000000) == 0 && _InterlockedDecrement(v51) == -1)
        j_j_free((void*)v51);
    v55 = (void*)(v99 - 16);
    if ((*(_DWORD*)(v99 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v55) == -1)
        j_j_free(v55);
    v56 = (void*)(v100 - 16);
    if ((*(_DWORD*)(v100 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v56) == -1)
        j_j_free(v56);
    v57 = v72 - 16;
    if ((*((_DWORD*)v72 - 4) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v57) == -1)
        j_j_free(v57);
    v58 = v71 - 16;
    if ((*((_DWORD*)v71 - 4) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v58) == -1)
        j_j_free(v58);
LABEL_158:
    sub_14040F290(&v115);
    if ((*v26 & 0x30000000) == 0 && _InterlockedDecrement(v26) == -1)
        j_j_free((void*)v26);
    if ((*v21 & 0x30000000) == 0 && _InterlockedDecrement(v21) == -1)
        j_j_free((void*)v21);
    v59 = v76 - 16;
    if ((*((_DWORD*)v76 - 4) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v59) == -1)
        j_j_free(v59);
    */
}

__int64  sub_1401C1000(__int64 a1)//override
{
    //return sub_1401C3540(a1 - 792);
    return 0;
}

void  sub_1401C3540(__int64 a1)
{
    /*
    void* v2; // rcx
    __int64 v3; // rax
    __int64* v4; // rbx
    __int64 v5; // rcx
    _DWORD* v6; // rcx
    void* v7; // rcx
    volatile signed __int32* v8; // r14
    LPCWSTR* v9; // rax
    HANDLE v10; // rax
    _BYTE** v11; // rax
    _BYTE* v12; // rcx
    void* v13; // rcx
    size_t v14; // r8
    void** v15; // rdx
    _DWORD* v16; // rax
    char* v17; // rcx
    void* v18; // rcx
    __int64 v19; // rbx
    __int64 v20; // rax
    __int64 v21; // rax
    __int64 v22; // rbx
    _QWORD* v23; // rdx
    _QWORD* v24; // rax
    char* v25; // r8
    __int64(__fastcall * **v26)(); // rcx
    void* v27; // rcx
    __int64 v28; // rbx
    __int64 v29; // rax
    __int64 v30; // rax
    _QWORD* v31; // rdx
    _QWORD* v32; // r8
    char* v33; // r8
    __int64(__fastcall * **v34)(); // rcx
    __int64 v35; // rbx
    __int64 v36; // rax
    __int64 v37; // rax
    _QWORD* v38; // rdx
    _QWORD* v39; // r8
    char* v40; // r8
    __int64(__fastcall * **v41)(); // rcx
    __int64 v42; // rbx
    __int64 v43; // rax
    __int64 v44; // rax
    _QWORD* v45; // rdx
    _QWORD* v46; // r8
    char* v47; // r8
    __int64(__fastcall * **v48)(); // rcx
    void* v49; // rcx
    __int64* v50; // rbx
    __int64 v51; // rdx
    _DWORD* v52; // rcx
    __int64* v53; // rbx
    __int64 v54; // rdx
    _DWORD* v55; // rcx
    __int64* v56; // rax
    __int64 v57; // rbx
    void* v58; // rcx
    __int64 v59; // rcx
    _DWORD* v60; // rcx
    void* v61; // rcx
    void* v62; // rcx
    void* v63; // rcx
    void* v64; // rcx
    void* v65; // rcx
    void* v66; // rcx
    __int64 v67; // rbx
    __int64 v68; // rax
    __int64 v69; // rax
    __int64 v70; // rbx
    _QWORD* v71; // rdx
    _QWORD* v72; // rax
    char* v73; // r8
    __int64(__fastcall * **v74)(); // rcx
    float v75; // xmm6_4
    void* v76; // rcx
    char* v77; // rcx
    _BYTE* v78; // rcx
    char* v79; // rcx
    _DWORD* v80; // rcx
    _BYTE* v81; // rcx
    void* v82; // rcx
    __int64* v83; // rcx
    void* v84; // rcx
    void* v85; // rcx
    void* v86; // rcx
    void* v87; // rcx
    void* v88; // rcx
    const char* v89; // [rsp+48h] [rbp-C0h] BYREF
    void* Src; // [rsp+50h] [rbp-B8h] BYREF
    __int64 v91; // [rsp+58h] [rbp-B0h] BYREF
    __int64 v92; // [rsp+60h] [rbp-A8h] BYREF
    __int64* v93; // [rsp+68h] [rbp-A0h]
    __int64 v94; // [rsp+70h] [rbp-98h] BYREF
    __int64 v95; // [rsp+78h] [rbp-90h] BYREF
    __int64 v96; // [rsp+80h] [rbp-88h] BYREF
    __int64 v97; // [rsp+88h] [rbp-80h] BYREF
    __int64* v98; // [rsp+90h] [rbp-78h] BYREF
    __int64 v99; // [rsp+98h] [rbp-70h] BYREF
    __int64 v100; // [rsp+A0h] [rbp-68h] BYREF
    __int64 v101; // [rsp+A8h] [rbp-60h] BYREF
    __int64 v102; // [rsp+B0h] [rbp-58h] BYREF
    __int64 v103; // [rsp+B8h] [rbp-50h] BYREF
    __int64 v104; // [rsp+C0h] [rbp-48h] BYREF
    __int64 v105; // [rsp+C8h] [rbp-40h] BYREF
    __int64 v106; // [rsp+D0h] [rbp-38h] BYREF
    __int64 v107; // [rsp+D8h] [rbp-30h] BYREF
    char* v108; // [rsp+E0h] [rbp-28h] BYREF
    _BYTE* v109; // [rsp+E8h] [rbp-20h] BYREF
    const char* v110; // [rsp+F0h] [rbp-18h] BYREF
    void** v111; // [rsp+F8h] [rbp-10h] BYREF
    __int64 v112; // [rsp+100h] [rbp-8h] BYREF
    HANDLE hObject[2]; // [rsp+108h] [rbp+0h]
    _BYTE* v114; // [rsp+118h] [rbp+10h]
    __int64 v115; // [rsp+120h] [rbp+18h] BYREF
    void* v116; // [rsp+128h] [rbp+20h] BYREF
    const char* v117; // [rsp+130h] [rbp+28h] BYREF
    const char* v118; // [rsp+138h] [rbp+30h] BYREF
    char v119[8]; // [rsp+140h] [rbp+38h] BYREF
    char v120[8]; // [rsp+148h] [rbp+40h] BYREF
    const char* v121; // [rsp+150h] [rbp+48h] BYREF
    __int64 v122; // [rsp+158h] [rbp+50h] BYREF
    __int64 v123; // [rsp+160h] [rbp+58h] BYREF
    __int64 v124; // [rsp+168h] [rbp+60h] BYREF
    __int64 v125; // [rsp+170h] [rbp+68h] BYREF
    char v126[8]; // [rsp+178h] [rbp+70h] BYREF
    __int64 v127[4]; // [rsp+180h] [rbp+78h] BYREF
    _QWORD v128[3]; // [rsp+1A0h] [rbp+98h] BYREF
    __int64(__fastcall * **v129)(); // [rsp+1B8h] [rbp+B0h] BYREF
    char v130[8]; // [rsp+1C0h] [rbp+B8h] BYREF
    __int64(__fastcall * **v131)(); // [rsp+1C8h] [rbp+C0h]
    char v132[8]; // [rsp+1D0h] [rbp+C8h] BYREF
    __int64(__fastcall * **v133)(); // [rsp+1D8h] [rbp+D0h]
    char v134[8]; // [rsp+1E0h] [rbp+D8h] BYREF
    __int64(__fastcall * **v135)(); // [rsp+1E8h] [rbp+E0h]
    char v136[8]; // [rsp+1F0h] [rbp+E8h] BYREF
    __int64(__fastcall * **v137)(); // [rsp+1F8h] [rbp+F0h]
    char v138[8]; // [rsp+200h] [rbp+F8h] BYREF
    __int64(__fastcall * **v139)(); // [rsp+208h] [rbp+100h]
    char v140[8]; // [rsp+210h] [rbp+108h] BYREF
    __int64(__fastcall * **v141)(); // [rsp+218h] [rbp+110h]
    char v142[8]; // [rsp+220h] [rbp+118h] BYREF
    __int64(__fastcall * **v143)(); // [rsp+228h] [rbp+120h]
    char v144[8]; // [rsp+230h] [rbp+128h] BYREF
    __int64(__fastcall * **v145)(); // [rsp+238h] [rbp+130h]
    char v146[8]; // [rsp+240h] [rbp+138h] BYREF
    __int64(__fastcall * **v147)(); // [rsp+248h] [rbp+140h]
    char v148[8]; // [rsp+250h] [rbp+148h] BYREF
    __int64(__fastcall * **v149)(); // [rsp+258h] [rbp+150h]
    char v150[8]; // [rsp+260h] [rbp+158h] BYREF
    void* Block[2]; // [rsp+268h] [rbp+160h] BYREF
    __int64 v152; // [rsp+278h] [rbp+170h]
    unsigned __int64 v153; // [rsp+280h] [rbp+178h]
    __int64(__fastcall * **v154)(); // [rsp+288h] [rbp+180h]
    char v155[8]; // [rsp+290h] [rbp+188h] BYREF

    sub_140048D00(&v99, "Initializing...");
    sub_14031AF20(&v91, &v99);
    v2 = (void*)(v99 - 16);
    if ((*(_DWORD*)(v99 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v2) == -1)
        j_j_free(v2);
    String::String_0(&v125, word_140474FF4);
    String::String_0(&v124, L"ee ");
    String::String_0(&v123, (unsigned __int16*)" ");
    String::String_0(&v122, word_140474F34);
    v3 = *((_QWORD*)ArgList + 273);
    v97 = v3;
    if ((*(_DWORD*)(v3 - 16) & 0x30000000) == 0)
        _InterlockedIncrement((volatile signed __int32*)(v3 - 16));
    v4 = (__int64*)sub_14031A710(v126, &v97);
    v98 = v4;
    ImageCache::getFromHashCode(v4, "we_cal_progress.txt", (int)"");
    v5 = *v4;
    v98 = (__int64*)v5;
    if ((*(_DWORD*)(v5 - 16) & 0x30000000) == 0)
        _InterlockedIncrement((volatile signed __int32*)(v5 - 16));
    v6 = (_DWORD*)(*v4 - 16);
    if ((*v6 & 0x30000000) == 0 && _InterlockedDecrement(v6) == -1)
        j_j_free(v6);
    v7 = (void*)(v97 - 16);
    if ((*(_DWORD*)(v97 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v7) == -1)
        j_j_free(v7);
    sub_140308BF0(v127, &v98);
    v111 = &juce::FileInputStream::`vftable';
        v112 = v127[0];
    v8 = (volatile signed __int32*)(v127[0] - 16);
    if ((*(_DWORD*)(v127[0] - 16) & 0x30000000) == 0)
        _InterlockedIncrement(v8);
    *(_OWORD*)hObject = 0i64;
    v114 = dword_140DDCDD0;
    v9 = (LPCWSTR*)sub_140046AE0(v128, &v112);
    v10 = CreateFileW(*v9, 0x80000000, 7u, 0i64, 3u, 0x8000080u, 0i64);
    if (v10 == (HANDLE)-1i64)
    {
        v11 = (_BYTE**)WindowsFileHelpers::getResultForLastError((__int64)&v115);
        v12 = v114;
        v114 = *v11;
        *v11 = v12;
        v13 = (void*)(v115 - 16);
        if ((*(_DWORD*)(v115 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v13) == -1)
            j_j_free(v13);
    }
    else
    {
        hObject[0] = v10;
    }
    if (!*v114)
    {
        InputStream::readEntireStreamAsString((__int64)&v111, (__int64)&Src);
        Block[0] = 0i64;
        v152 = 0i64;
        v153 = 15i64;
        v14 = -1i64;
        do
            ++v14;
        while (*((_BYTE*)Src + v14));
        sub_140007D60(Block, Src, v14);
        v15 = Block;
        if (v153 >= 0x10)
            v15 = (void**)Block[0];
        sub_140040360(&v116, v15, v152);
        v16 = Src;
        Src = v116;
        v17 = (char*)(v16 - 4);
        if ((*(v16 - 4) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v17) == -1)
            j_j_free(v17);
        if (v153 >= 0x10)
        {
            v18 = Block[0];
            if (v153 + 1 >= 0x1000)
            {
                v18 = (void*)*((_QWORD*)Block[0] - 1);
                if ((unsigned __int64)(Block[0] - v18 - 8) > 0x1F)
                    invalid_parameter_noinfo_noreturn();
            }
            j_j_free(v18);
        }
        v129 = off_140EB1BC8;
        v154 = off_140EB1BC8;
        sub_1403194A0(&v109, &Src, &v129);
        if (!*v109)
        {
            v141 = off_140EB1BC8;
            v19 = sub_1402F7E90();
            v128[2] = v19 + 16;
            EnterCriticalSection((LPCRITICAL_SECTION)(v19 + 16));
            sub_1402F8020(v19);
            v110 = "CurrentStep";
            sub_1402DDCD0(&v100, v19, &v110);
            LeaveCriticalSection((LPCRITICAL_SECTION)(v19 + 16));
            v20 = ((__int64(__fastcall*)(__int64(__fastcall***)(), char*))(*v129)[6])(v129, v130);
            v21 = _RTDynamicCast(
                v20,
                0i64,
                &juce::ReferenceCountedObject `RTTI Type Descriptor',
                & juce::DynamicObject `RTTI Type Descriptor',
                0);
            v22 = v100;
            if (!v21)
                goto LABEL_39;
            v23 = *(_QWORD**)(v21 + 16);
            v24 = &v23[3 * *(int*)(v21 + 28)];
            if (v23 == v24)
                goto LABEL_39;
            while (*v23 != v100)
            {
                v23 += 3;
                if (v23 == v24)
                    goto LABEL_39;
            }
            if (v23 == (_QWORD*)-8i64)
            {
            LABEL_39:
                v25 = v142;
                v26 = v141;
            }
            else
            {
                v26 = (__int64(__fastcall***)())v23[1];
                v25 = (char*)(v23 + 2);
            }
            v139 = v26;
            ((void(__fastcall*)(__int64(__fastcall***)(), char*, char*))(*v26)[23])(v26, v140, v25);
            ((void(__fastcall*)(__int64(__fastcall***)(), char**, char*))(*v139)[4])(v139, &v108, v140);
            ((void(__fastcall*)(__int64(__fastcall***)(), char*))(*v139)[22])(v139, v140);
            v27 = (void*)(v22 - 16);
            if ((*(_DWORD*)(v22 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v27) == -1)
                j_j_free(v27);
            ((void(__fastcall*)(__int64(__fastcall***)(), char*))(*v141)[22])(v141, v142);
            if ((unsigned int)compareIgnoreCase(v108, (char*)&unk_14046DA77))
            {
                v145 = off_140EB1BC8;
                v28 = sub_1402F7E90();
                v127[1] = v28 + 16;
                EnterCriticalSection((LPCRITICAL_SECTION)(v28 + 16));
                sub_1402F8020(v28);
                v117 = "StepString";
                sub_1402DDCD0(&v96, v28, &v117);
                LeaveCriticalSection((LPCRITICAL_SECTION)(v28 + 16));
                v29 = ((__int64(__fastcall*)(__int64(__fastcall***)(), char*))(*v129)[6])(v129, v130);
                v30 = _RTDynamicCast(
                    v29,
                    0i64,
                    &juce::ReferenceCountedObject `RTTI Type Descriptor',
                    & juce::DynamicObject `RTTI Type Descriptor',
                    0);
                if (!v30)
                    goto LABEL_48;
                v31 = *(_QWORD**)(v30 + 16);
                v32 = &v31[3 * *(int*)(v30 + 28)];
                if (v31 == v32)
                    goto LABEL_48;
                while (*v31 != v96)
                {
                    v31 += 3;
                    if (v31 == v32)
                        goto LABEL_48;
                }
                if (v31 == (_QWORD*)-8i64)
                {
                LABEL_48:
                    v33 = v146;
                    v34 = v145;
                }
                else
                {
                    v34 = (__int64(__fastcall***)())v31[1];
                    v33 = (char*)(v31 + 2);
                }
                v135 = v34;
                ((void(__fastcall*)(__int64(__fastcall***)(), char*, char*))(*v34)[23])(v34, v136, v33);
                ((void(__fastcall*)(__int64(__fastcall***)(), __int64*, char*))(*v135)[4])(v135, &v106, v136);
                v143 = off_140EB1BC8;
                v35 = sub_1402F7E90();
                v127[2] = v35 + 16;
                EnterCriticalSection((LPCRITICAL_SECTION)(v35 + 16));
                sub_1402F8020(v35);
                v118 = "TotalSteps";
                sub_1402DDCD0(&v95, v35, &v118);
                LeaveCriticalSection((LPCRITICAL_SECTION)(v35 + 16));
                v36 = ((__int64(__fastcall*)(__int64(__fastcall***)(), char*))(*v129)[6])(v129, v130);
                v37 = _RTDynamicCast(
                    v36,
                    0i64,
                    &juce::ReferenceCountedObject `RTTI Type Descriptor',
                    & juce::DynamicObject `RTTI Type Descriptor',
                    0);
                if (!v37)
                    goto LABEL_53;
                v38 = *(_QWORD**)(v37 + 16);
                v39 = &v38[3 * *(int*)(v37 + 28)];
                if (v38 == v39)
                    goto LABEL_53;
                while (*v38 != v95)
                {
                    v38 += 3;
                    if (v38 == v39)
                        goto LABEL_53;
                }
                if (v38 == (_QWORD*)-8i64)
                {
                LABEL_53:
                    v40 = v144;
                    v41 = v143;
                }
                else
                {
                    v41 = (__int64(__fastcall***)())v38[1];
                    v40 = (char*)(v38 + 2);
                }
                v133 = v41;
                ((void(__fastcall*)(__int64(__fastcall***)(), char*, char*))(*v41)[23])(v41, v134, v40);
                ((void(__fastcall*)(__int64(__fastcall***)(), __int64*, char*))(*v133)[4])(v133, &v105, v134);
                v149 = off_140EB1BC8;
                v42 = sub_1402F7E90();
                v127[3] = v42 + 16;
                EnterCriticalSection((LPCRITICAL_SECTION)(v42 + 16));
                sub_1402F8020(v42);
                v89 = "CurrentStep";
                sub_1402DDCD0(&v94, v42, &v89);
                LeaveCriticalSection((LPCRITICAL_SECTION)(v42 + 16));
                v43 = ((__int64(__fastcall*)(__int64(__fastcall***)(), char*))(*v129)[6])(v129, v130);
                v44 = _RTDynamicCast(
                    v43,
                    0i64,
                    &juce::ReferenceCountedObject `RTTI Type Descriptor',
                    & juce::DynamicObject `RTTI Type Descriptor',
                    0);
                if (!v44)
                    goto LABEL_58;
                v45 = *(_QWORD**)(v44 + 16);
                v46 = &v45[3 * *(int*)(v44 + 28)];
                if (v45 == v46)
                    goto LABEL_58;
                while (*v45 != v94)
                {
                    v45 += 3;
                    if (v45 == v46)
                        goto LABEL_58;
                }
                if (v45 == (_QWORD*)-8i64)
                {
                LABEL_58:
                    v47 = v150;
                    v48 = v149;
                }
                else
                {
                    v48 = (__int64(__fastcall***)())v45[1];
                    v47 = (char*)(v45 + 2);
                }
                v131 = v48;
                ((void(__fastcall*)(__int64(__fastcall***)(), char*, char*))(*v48)[23])(v48, v132, v47);
                ((void(__fastcall*)(__int64(__fastcall***)(), __int64*, char*))(*v131)[4])(v131, &v104, v132);
                sub_140048D00(&v101, "Step  ");
                sub_14031AF20(&v102, &v101);
                v49 = (void*)(v101 - 16);
                if ((*(_DWORD*)(v101 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v49) == -1)
                    j_j_free(v49);
                v50 = (__int64*)sub_14031B550(v119, &v102, &v104);
                v93 = v50;
                ImageCache::getFromHashCode(v50, "/", (int)"");
                v51 = *v50;
                v103 = v51;
                if ((*(_DWORD*)(v51 - 16) & 0x30000000) == 0)
                    _InterlockedIncrement((volatile signed __int32*)(v51 - 16));
                v52 = (_DWORD*)(*v50 - 16);
                if ((*v52 & 0x30000000) == 0 && _InterlockedDecrement(v52) == -1)
                    j_j_free(v52);
                v53 = (__int64*)sub_14031B550(v120, &v103, &v105);
                v93 = v53;
                ImageCache::getFromHashCode(v53, " : ", (int)"");
                v54 = *v53;
                v92 = v54;
                if ((*(_DWORD*)(v54 - 16) & 0x30000000) == 0)
                    _InterlockedIncrement((volatile signed __int32*)(v54 - 16));
                v55 = (_DWORD*)(*v53 - 16);
                if ((*v55 & 0x30000000) == 0 && _InterlockedDecrement(v55) == -1)
                    j_j_free(v55);
                v93 = &v92;
                v56 = (__int64*)sub_14031B920(&v92, &v106);
                v57 = *v56;
                if ((*(_DWORD*)(*v56 - 16) & 0x30000000) == 0)
                    _InterlockedIncrement((volatile signed __int32*)(v57 - 16));
                v58 = (void*)(v92 - 16);
                if ((*(_DWORD*)(v92 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v58) == -1)
                    j_j_free(v58);
                v59 = v91;
                v91 = v57;
                v60 = (_DWORD*)(v59 - 16);
                if ((*v60 & 0x30000000) == 0 && _InterlockedDecrement(v60) == -1)
                    j_j_free(v60);
                v61 = (void*)(v104 - 16);
                if ((*(_DWORD*)(v104 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v61) == -1)
                    j_j_free(v61);
                ((void(__fastcall*)(__int64(__fastcall***)(), char*))(*v131)[22])(v131, v132);
                v62 = (void*)(v94 - 16);
                if ((*(_DWORD*)(v94 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v62) == -1)
                    j_j_free(v62);
                ((void(__fastcall*)(__int64(__fastcall***)(), char*))(*v149)[22])(v149, v150);
                v63 = (void*)(v105 - 16);
                if ((*(_DWORD*)(v105 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v63) == -1)
                    j_j_free(v63);
                ((void(__fastcall*)(__int64(__fastcall***)(), char*))(*v133)[22])(v133, v134);
                v64 = (void*)(v95 - 16);
                if ((*(_DWORD*)(v95 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v64) == -1)
                    j_j_free(v64);
                ((void(__fastcall*)(__int64(__fastcall***)(), char*))(*v143)[22])(v143, v144);
                v65 = (void*)(v106 - 16);
                if ((*(_DWORD*)(v106 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v65) == -1)
                    j_j_free(v65);
                ((void(__fastcall*)(__int64(__fastcall***)(), char*))(*v135)[22])(v135, v136);
                v66 = (void*)(v96 - 16);
                if ((*(_DWORD*)(v96 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v66) == -1)
                    j_j_free(v66);
                ((void(__fastcall*)(__int64(__fastcall***)(), char*))(*v145)[22])(v145, v146);
                v147 = off_140EB1BC8;
                v67 = sub_1402F7E90();
                v128[1] = v67 + 16;
                EnterCriticalSection((LPCRITICAL_SECTION)(v67 + 16));
                sub_1402F8020(v67);
                v121 = "StepPercent";
                sub_1402DDCD0(&v107, v67, &v121);
                LeaveCriticalSection((LPCRITICAL_SECTION)(v67 + 16));
                v68 = ((__int64(__fastcall*)(__int64(__fastcall***)(), char*))(*v129)[6])(v129, v130);
                v69 = _RTDynamicCast(
                    v68,
                    0i64,
                    &juce::ReferenceCountedObject `RTTI Type Descriptor',
                    & juce::DynamicObject `RTTI Type Descriptor',
                    0);
                v70 = v107;
                if (!v69)
                    goto LABEL_102;
                v71 = *(_QWORD**)(v69 + 16);
                v72 = &v71[3 * *(int*)(v69 + 28)];
                if (v71 == v72)
                    goto LABEL_102;
                while (*v71 != v107)
                {
                    v71 += 3;
                    if (v71 == v72)
                        goto LABEL_102;
                }
                if (v71 == (_QWORD*)-8i64)
                {
                LABEL_102:
                    v73 = v148;
                    v74 = v147;
                }
                else
                {
                    v74 = (__int64(__fastcall***)())v71[1];
                    v73 = (char*)(v71 + 2);
                }
                v137 = v74;
                ((void(__fastcall*)(__int64(__fastcall***)(), char*, char*))(*v74)[23])(v74, v138, v73);
                v75 = ((double(__fastcall*)(__int64(__fastcall***)(), char*))(*v137)[3])(v137, v138) / 100.0;
                ((void(__fastcall*)(__int64(__fastcall***)(), char*))(*v137)[22])(v137, v138);
                v76 = (void*)(v70 - 16);
                if ((*(_DWORD*)(v70 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v76) == -1)
                    j_j_free(v76);
                ((void(__fastcall*)(__int64(__fastcall***)(), char*))(*v147)[22])(v147, v148);
                *(double*)(a1 + 712) = v75;
            }
            v77 = v108 - 16;
            if ((*((_DWORD*)v108 - 4) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v77) == -1)
                j_j_free(v77);
        }
        v78 = v109 - 16;
        if ((*((_DWORD*)v109 - 4) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v78) == -1)
            j_j_free(v78);
        ((void(__fastcall*)(__int64(__fastcall***)(), char*))(*v154)[22])(v154, v155);
        ((void(__fastcall*)(__int64(__fastcall***)(), char*))(*v129)[22])(v129, v130);
        v79 = (char*)Src - 16;
        if ((*((_DWORD*)Src - 4) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v79) == -1)
            j_j_free(v79);
    }
    EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 736));
    if ((*(_DWORD*)(v91 - 16) & 0x30000000) == 0)
        _InterlockedIncrement((volatile signed __int32*)(v91 - 16));
    v80 = (_DWORD*)(_InterlockedExchange64((volatile __int64*)(a1 + 728), v91) - 16);
    if ((*v80 & 0x30000000) == 0 && _InterlockedDecrement(v80) == -1)
        j_j_free(v80);
    LeaveCriticalSection((LPCRITICAL_SECTION)(a1 + 736));
    v111 = &juce::FileInputStream::`vftable';
        CloseHandle(hObject[0]);
    v81 = v114 - 16;
    if ((*((_DWORD*)v114 - 4) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v81) == -1)
        j_j_free(v81);
    v82 = (void*)(v112 - 16);
    if ((*(_DWORD*)(v112 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v82) == -1)
        j_j_free(v82);
    if ((*v8 & 0x30000000) == 0 && _InterlockedDecrement(v8) == -1)
        j_j_free((void*)v8);
    v83 = v98 - 2;
    if ((*(_DWORD*)(v98 - 2) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v83) == -1)
        j_j_free(v83);
    v84 = (void*)(v122 - 16);
    if ((*(_DWORD*)(v122 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v84) == -1)
        j_j_free(v84);
    v85 = (void*)(v123 - 16);
    if ((*(_DWORD*)(v123 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v85) == -1)
        j_j_free(v85);
    v86 = (void*)(v124 - 16);
    if ((*(_DWORD*)(v124 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v86) == -1)
        j_j_free(v86);
    v87 = (void*)(v125 - 16);
    if ((*(_DWORD*)(v125 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v87) == -1)
        j_j_free(v87);
    v88 = (void*)(v91 - 16);
    if ((*(_DWORD*)(v91 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v88) == -1)
        j_j_free(v88);
    */
}