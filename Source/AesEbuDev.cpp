#include "AesEbuDev.h"


char  sub_140210CA0(__int64 a1, __int64 a2, _QWORD* a3, __int64* a4)//override
{
    /*
    __int64 v7; // rcx
    void* v8; // rcx
    void* v9; // rcx
    _DWORD* v10; // rcx
    _DWORD* v11; // rcx
    __int64 v13; // [rsp+30h] [rbp-38h] BYREF
    __int64 v14[6]; // [rsp+38h] [rbp-30h] BYREF

    v7 = *a4;
    v13 = v7;
    if ((*(_DWORD*)(v7 - 16) & 0x30000000) == 0)
        _InterlockedIncrement((volatile signed __int32*)(v7 - 16));
    v14[1] = (__int64)&v13;
    ImageCache::getFromHashCode(&v13, "\r\n", (int)"");
    v14[0] = v13;
    if ((*(_DWORD*)(v13 - 16) & 0x30000000) == 0)
        _InterlockedIncrement((volatile signed __int32*)(v13 - 16));
    v8 = (void*)(v13 - 16);
    if ((*(_DWORD*)(v13 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v8) == -1)
        j_j_free(v8);
    (*(void(__fastcall**)(__int64, _QWORD*, _QWORD, _QWORD, _QWORD))(*(_QWORD*)a2 + 160i64))(a2, a3, 0i64, 0i64, 0i64);
    (*(void(__fastcall**)(__int64, __int64*, _QWORD, _QWORD, _QWORD))(*(_QWORD*)a2 + 160i64))(
        a2,
        v14,
        0i64,
        0i64,
        0i64);
    v9 = (void*)(v14[0] - 16);
    if ((*(_DWORD*)(v14[0] - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v9) == -1)
        j_j_free(v9);
    v10 = (_DWORD*)(*a3 - 16i64);
    if ((*v10 & 0x30000000) == 0 && _InterlockedDecrement(v10) == -1)
        j_j_free(v10);
    v11 = (_DWORD*)(*a4 - 16);
    if ((*v11 & 0x30000000) == 0 && _InterlockedDecrement(v11) == -1)
        j_j_free(v11);
    return 1;
    */
    return 0;
}

char  sub_140205CE0(_QWORD* a1, __int64 a2)//override
{
    /*
    void(__fastcall * v4)(_QWORD*, __int64, _QWORD*, __int64*, __int64*); // rbx
    __int64 v5; // rcx
    void(__fastcall * v6)(_QWORD*, __int64, __int64*, __int64*); // rbx
    void(__fastcall * v7)(_QWORD*, __int64, __int64*, char*); // rbx
    __int64 v8; // rax
    void(__fastcall * v9)(_QWORD*, __int64, __int64*, char*); // rbx
    __int64 v10; // rax
    void(__fastcall * v11)(_QWORD*, __int64, __int64*, char*); // rbx
    __int64 v12; // rax
    void(__fastcall * v13)(_QWORD*, __int64, __int64*, char*); // rbx
    __int64 v14; // rax
    void(__fastcall * v15)(_QWORD*, __int64, __int64*, char*); // rbx
    __int64 v16; // rax
    void(__fastcall * v17)(_QWORD*, __int64, __int64*, char*); // rbx
    __int64 v18; // rax
    void(__fastcall * v19)(_QWORD*, __int64, __int64*, char*); // rbx
    __int64 v20; // rax
    void(__fastcall * v21)(_QWORD*, __int64, __int64*, char*); // rbx
    __int64 v22; // rax
    void(__fastcall * v23)(_QWORD*, __int64, __int64*, __int64*); // rbx
    void(__fastcall * v24)(_QWORD*, __int64, __int64*, __int64*); // rbx
    __int64 v26; // [rsp+30h] [rbp-D0h] BYREF
    __int64 v27; // [rsp+38h] [rbp-C8h] BYREF
    char v28[8]; // [rsp+40h] [rbp-C0h] BYREF
    __int64 v29; // [rsp+48h] [rbp-B8h] BYREF
    char v30[8]; // [rsp+50h] [rbp-B0h] BYREF
    __int64 v31; // [rsp+58h] [rbp-A8h] BYREF
    char v32[8]; // [rsp+60h] [rbp-A0h] BYREF
    __int64 v33; // [rsp+68h] [rbp-98h] BYREF
    char v34[8]; // [rsp+70h] [rbp-90h] BYREF
    __int64 v35; // [rsp+78h] [rbp-88h] BYREF
    char v36[8]; // [rsp+80h] [rbp-80h] BYREF
    __int64 v37; // [rsp+88h] [rbp-78h] BYREF
    char v38[8]; // [rsp+90h] [rbp-70h] BYREF
    __int64 v39; // [rsp+98h] [rbp-68h] BYREF
    char v40[8]; // [rsp+A0h] [rbp-60h] BYREF
    __int64 v41; // [rsp+A8h] [rbp-58h] BYREF
    char v42[8]; // [rsp+B0h] [rbp-50h] BYREF
    __int64 v43; // [rsp+B8h] [rbp-48h] BYREF
    __int64 v44; // [rsp+C0h] [rbp-40h] BYREF
    __int64 v45; // [rsp+C8h] [rbp-38h] BYREF
    __int64 v46; // [rsp+D0h] [rbp-30h] BYREF
    __int64 v47; // [rsp+D8h] [rbp-28h] BYREF
    __int64 v48; // [rsp+E0h] [rbp-20h] BYREF
    _QWORD v49[4]; // [rsp+E8h] [rbp-18h] BYREF
    char v50; // [rsp+10Fh] [rbp+Fh] BYREF
    char v51[31]; // [rsp+110h] [rbp+10h] BYREF
    char v52; // [rsp+12Fh] [rbp+2Fh] BYREF
    char v53[31]; // [rsp+130h] [rbp+30h] BYREF
    char v54; // [rsp+14Fh] [rbp+4Fh] BYREF
    char v55[31]; // [rsp+150h] [rbp+50h] BYREF
    char v56; // [rsp+16Fh] [rbp+6Fh] BYREF
    char v57[31]; // [rsp+170h] [rbp+70h] BYREF
    char v58; // [rsp+18Fh] [rbp+8Fh] BYREF
    char v59[31]; // [rsp+190h] [rbp+90h] BYREF
    char v60; // [rsp+1AFh] [rbp+AFh] BYREF
    char v61[31]; // [rsp+1B0h] [rbp+B0h] BYREF
    char v62; // [rsp+1CFh] [rbp+CFh] BYREF
    char v63[31]; // [rsp+1D0h] [rbp+D0h] BYREF
    char v64; // [rsp+1EFh] [rbp+EFh] BYREF
    __int64 v65[4]; // [rsp+1F0h] [rbp+F0h] BYREF

    v4 = *(void(__fastcall**)(_QWORD*, __int64, _QWORD*, __int64*, __int64*))(*a1 + 16i64);
    v5 = a1[3];
    v48 = v5;
    if ((*(_DWORD*)(v5 - 16) & 0x30000000) == 0)
        _InterlockedIncrement((volatile signed __int32*)(v5 - 16));
    sub_140048D00(v49, "Class:");
    v4(a1, a2, v49, &v48, &v48);
    v6 = *(void(__fastcall**)(_QWORD*, __int64, __int64*, __int64*))(*a1 + 16i64);
    sub_140048D00(&v26, &unk_14046DC32);
    sub_140048D00(&v27, "----------------------------------------------");
    v6(a1, a2, &v27, &v26);
    v7 = *(void(__fastcall**)(_QWORD*, __int64, __int64*, char*))(*a1 + 16i64);
    v8 = sub_1402FCD90(v51, a1[10]);
    sub_140040360(v28, v8, &v50 - v8);
    sub_140048D00(&v29, "Serial:");
    v7(a1, a2, &v29, v28);
    v9 = *(void(__fastcall**)(_QWORD*, __int64, __int64*, char*))(*a1 + 16i64);
    v10 = sub_1402FCCA0(v53);
    sub_140040360(v30, v10, &v52 - v10);
    sub_140048D00(&v31, "Group_ON:");
    v9(a1, a2, &v31, v30);
    v11 = *(void(__fastcall**)(_QWORD*, __int64, __int64*, char*))(*a1 + 16i64);
    v12 = sub_1402FCCA0(v55);
    sub_140040360(v32, v12, &v54 - v12);
    sub_140048D00(&v33, "Input:");
    v11(a1, a2, &v33, v32);
    v13 = *(void(__fastcall**)(_QWORD*, __int64, __int64*, char*))(*a1 + 16i64);
    v14 = sub_1402FCCA0(v57);
    sub_140040360(v34, v14, &v56 - v14);
    sub_140048D00(&v35, "Input1_AES_EBUChannel:");
    v13(a1, a2, &v35, v34);
    v15 = *(void(__fastcall**)(_QWORD*, __int64, __int64*, char*))(*a1 + 16i64);
    v16 = sub_1402FCCA0(v59);
    sub_140040360(v36, v16, &v58 - v16);
    sub_140048D00(&v37, "Input2_AES_EBUChannel:");
    v15(a1, a2, &v37, v36);
    v17 = *(void(__fastcall**)(_QWORD*, __int64, __int64*, char*))(*a1 + 16i64);
    v18 = sub_1402FCCA0(v61);
    sub_140040360(v38, v18, &v60 - v18);
    sub_140048D00(&v39, "Input3_AES_EBUChannel:");
    v17(a1, a2, &v39, v38);
    v19 = *(void(__fastcall**)(_QWORD*, __int64, __int64*, char*))(*a1 + 16i64);
    v20 = sub_1402FCCA0(v63);
    sub_140040360(v40, v20, &v62 - v20);
    sub_140048D00(&v41, "Input4_AES_EBUChannel:");
    v19(a1, a2, &v41, v40);
    v21 = *(void(__fastcall**)(_QWORD*, __int64, __int64*, char*))(*a1 + 16i64);
    v22 = sub_1402FCCA0(v65);
    sub_140040360(v42, v22, &v64 - v22);
    sub_140048D00(&v43, "LFE_Channel:");
    v21(a1, a2, &v43, v42);
    v23 = *(void(__fastcall**)(_QWORD*, __int64, __int64*, __int64*))(*a1 + 16i64);
    sub_140048D00(&v44, &unk_14046DC33);
    sub_140048D00(&v45, "Data_End:");
    v23(a1, a2, &v45, &v44);
    v24 = *(void(__fastcall**)(_QWORD*, __int64, __int64*, __int64*))(*a1 + 16i64);
    sub_140048D00(&v46, &unk_14046DC03);
    sub_140048D00(&v47, " ");
    v24(a1, a2, &v47, &v46);
    return 1;
    */
    return 0;
}

char  sub_140210830(__int64 a1, __int64 a2, __int64* a3, char** a4)//override
{
    /*
    __int64 v7; // rax
    void* v8; // rcx
    char* v9; // rax
    char* v10; // rcx
    char** v11; // rax
    char* v12; // r8
    char v13; // dl
    char* v14; // rcx
    char* v15; // rax
    unsigned __int8 i; // cl
    void* v17; // rcx
    void** v18; // rcx
    __int64* v19; // rax
    __int64 v20; // rcx
    void* v21; // rcx
    int v22; // ebx
    int v23; // edi
    char* v24; // r12
    void** v25; // rdx
    char v26; // dl
    char* v27; // rcx
    char* v28; // rax
    unsigned __int8 j; // cl
    char* v30; // rax
    char* v31; // rcx
    _QWORD* v32; // rbx
    __int64 v33; // rdi
    _DWORD* v34; // rcx
    char* v35; // rcx
    char* v37; // [rsp+20h] [rbp-68h] BYREF
    char* v38; // [rsp+28h] [rbp-60h] BYREF
    char* v39; // [rsp+30h] [rbp-58h]
    __int64 v40; // [rsp+38h] [rbp-50h] BYREF
    char* v41; // [rsp+40h] [rbp-48h] BYREF
    __int64 v42; // [rsp+48h] [rbp-40h] BYREF
    __int64 v43; // [rsp+50h] [rbp-38h] BYREF
    void* Block; // [rsp+58h] [rbp-30h] BYREF
    __int64 v45; // [rsp+60h] [rbp-28h]

    sub_140048D00(&v40, " ");
    v7 = *a3;
    *a3 = v40;
    v8 = (void*)(v7 - 16);
    if ((*(_DWORD*)(v7 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v8) == -1)
        j_j_free(v8);
    sub_140048D00(&v41, " ");
    v9 = *a4;
    *a4 = v41;
    v10 = v9 - 16;
    if ((*((_DWORD*)v9 - 4) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v10) == -1)
        j_j_free(v10);
    v39 = (char*)dword_140DDCDD0;
    Block = 0i64;
    v45 = 0i64;
    v11 = (char**)(*(__int64(__fastcall**)(__int64, __int64*))(*(_QWORD*)a2 + 136i64))(a2, &v42);
    v12 = *v11;
    v13 = **v11;
    v14 = *v11;
    if (!v13)
        goto LABEL_18;
    v15 = *v11;
    while (v13 == 32 || (unsigned __int8)(v13 - 9) <= 4u)
    {
        ++v15;
        if (v13 < 0)
        {
            for (i = 64; ((unsigned __int8)v13 & i) != 0; i >>= 1)
            {
                if (i <= 8u)
                    break;
                ++v15;
            }
        }
        v13 = *v15;
    }
    v14 = v12;
    if (v15 == v12)
    {
    LABEL_18:
        v37 = v14;
        if ((*((_DWORD*)v14 - 4) & 0x30000000) == 0)
            _InterlockedIncrement((volatile signed __int32*)v14 - 4);
    }
    else
    {
        String::String(&v37, v15);
    }
    v39 = v37;
    v17 = (void*)(v42 - 16);
    if ((*(_DWORD*)(v42 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v17) == -1)
        j_j_free(v17);
    if ((int)StringArray::addTokens((__int64)&Block, v37, ":", (char*)&unk_14046DD7D) >= 2)
    {
        if (HIDWORD(v45))
        {
            v18 = (void**)Block;
        }
        else
        {
            if (dword_140EC06A8 > *(_DWORD*)(*(_QWORD*)NtCurrentTeb()->ThreadLocalStoragePointer + 4i64))
            {
                Init_thread_header(&dword_140EC06A8);
                if (dword_140EC06A8 == -1)
                {
                    off_140EB1E28 = dword_140DDCDD0;
                    atexit(sub_14046AE50);
                    Init_thread_footer(&dword_140EC06A8);
                }
            }
            v18 = &off_140EB1E28;
        }
        v19 = (__int64*)sub_140318C90(v18, &v43, "\t");
        v20 = *a3;
        *a3 = *v19;
        *v19 = v20;
        v21 = (void*)(v43 - 16);
        if ((*(_DWORD*)(v43 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v21) == -1)
            j_j_free(v21);
        v22 = 1;
        v23 = HIDWORD(v45);
        v24 = (char*)Block;
        while (v22 < v23)
        {
            if (v22 >= (unsigned int)v23)
            {
                if (dword_140EC06A8 > *(_DWORD*)(*(_QWORD*)NtCurrentTeb()->ThreadLocalStoragePointer + 4i64))
                {
                    Init_thread_header(&dword_140EC06A8);
                    if (dword_140EC06A8 == -1)
                    {
                        off_140EB1E28 = dword_140DDCDD0;
                        atexit(sub_14046AE50);
                        Init_thread_footer(&dword_140EC06A8);
                    }
                }
                v25 = &off_140EB1E28;
            }
            else
            {
                v25 = (void**)&v24[8 * v22];
            }
            sub_14031B920(a4, v25);
            if (v22 < v23 - 1)
                ImageCache::getFromHashCode(a4, ":", (int)"");
            ++v22;
        }
    }
    v26 = **a4;
    v27 = *a4;
    if (!v26)
        goto LABEL_51;
    v28 = *a4;
    while (v26 == 32 || (unsigned __int8)(v26 - 9) <= 4u)
    {
        ++v28;
        if (v26 < 0)
        {
            for (j = 64; ((unsigned __int8)v26 & j) != 0; j >>= 1)
            {
                if (j <= 8u)
                    break;
                ++v28;
            }
        }
        v26 = *v28;
    }
    v27 = *a4;
    if (v28 == *a4)
    {
    LABEL_51:
        v38 = v27;
        if ((*((_DWORD*)v27 - 4) & 0x30000000) == 0)
            _InterlockedIncrement((volatile signed __int32*)v27 - 4);
    }
    else
    {
        String::String(&v38, v28);
    }
    v30 = *a4;
    *a4 = v38;
    v31 = v30 - 16;
    if ((*((_DWORD*)v30 - 4) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v31) == -1)
        j_j_free(v31);
    if (SHIDWORD(v45) > 0)
    {
        v32 = Block;
        v33 = HIDWORD(v45);
        do
        {
            v34 = (_DWORD*)(*v32 - 16i64);
            if ((*v34 & 0x30000000) == 0 && _InterlockedDecrement(v34) == -1)
                j_j_free(v34);
            ++v32;
            --v33;
        } while (v33);
    }
    free(Block);
    v35 = v39 - 16;
    if ((*((_DWORD*)v39 - 4) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v35) == -1)
        j_j_free(v35);
    return 1;
    */
    return 0;
}

BOOL __fastcall sub_140205A10(__int64 a1, __int64 a2)//override
{
    /*
    bool v4; // si
    __int64 v5; // rbx
    _BYTE* v6; // rbx
    char* v7; // rax
    char* v8; // rcx
    _BYTE* v9; // rax
    _BYTE* v10; // rcx
    char* v11; // rcx
    _BYTE* v12; // rcx
    _BYTE* v14; // [rsp+20h] [rbp-10h] BYREF
    char* String; // [rsp+78h] [rbp+48h] BYREF
    _BYTE* v16; // [rsp+80h] [rbp+50h] BYREF
    char* v17; // [rsp+88h] [rbp+58h] BYREF

    v4 = 0;
    v16 = dword_140DDCDD0;
    String = (char*)dword_140DDCDD0;
    while (1)
    {
        v5 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)a2 + 8i64))(a2);
        if (v5 >= 0)
            v5 -= (*(__int64(__fastcall**)(__int64))(*(_QWORD*)a2 + 168i64))(a2);
        if (v5 <= 0 || v4)
            break;
        (*(void(__fastcall**)(__int64, __int64, _BYTE**, char**))(*(_QWORD*)a1 + 32i64))(a1, a2, &v16, &String);
        v6 = v16;
        if ((unsigned int)String::isNotEmpty(v16, "Serial"))
        {
            if ((unsigned int)String::isNotEmpty(v6, "Input"))
            {
                if ((unsigned int)String::isNotEmpty(v6, "Input1_AES_EBUChannel"))
                {
                    if ((unsigned int)String::isNotEmpty(v6, "Input2_AES_EBUChannel"))
                    {
                        if ((unsigned int)String::isNotEmpty(v6, "Input3_AES_EBUChannel"))
                        {
                            if ((unsigned int)String::isNotEmpty(v6, "Input4_AES_EBUChannel"))
                            {
                                if ((unsigned int)String::isNotEmpty(v6, "Group_ON"))
                                {
                                    if ((unsigned int)String::isNotEmpty(v6, "LFE_Channel"))
                                        v4 = (unsigned int)String::isNotEmpty(v6, "Data_End") == 0;
                                    else
                                        *(_DWORD*)(a1 + 312) = atoi(String);
                                }
                                else
                                {
                                    *(_BYTE*)(a1 + 96) = (unsigned int)String::isNotEmpty(String, "0") != 0;
                                }
                            }
                            else
                            {
                                *(_DWORD*)(a1 + 172) = atoi(String);
                            }
                        }
                        else
                        {
                            *(_DWORD*)(a1 + 168) = atoi(String);
                        }
                    }
                    else
                    {
                        *(_DWORD*)(a1 + 164) = atoi(String);
                    }
                }
                else
                {
                    *(_DWORD*)(a1 + 160) = atoi(String);
                }
            }
            else
            {
                *(_DWORD*)(a1 + 192) = atoi(String);
            }
        }
        else
        {
            *(_QWORD*)(a1 + 80) = atoi(String);
        }
        sub_140048D00(&v17, &unk_14046DC1B);
        v7 = String;
        String = v17;
        v17 = v7;
        v8 = v7 - 16;
        if ((*((_DWORD*)v7 - 4) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v8) == -1)
            j_j_free(v8);
        sub_140048D00(&v14, &unk_14046DC1A);
        v9 = v16;
        v16 = v14;
        v14 = v9;
        v10 = v9 - 16;
        if ((*((_DWORD*)v9 - 4) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v10) == -1)
            j_j_free(v10);
    }
    v11 = String - 16;
    if ((*((_DWORD*)String - 4) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v11) == -1)
        j_j_free(v11);
    v12 = v16 - 16;
    if ((*((_DWORD*)v16 - 4) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v12) == -1)
        j_j_free(v12);
    return v4;

    */
    return 0;
}

__int64  sub_1402107D0(__int64 a1, __int64 a2)//override
{
    /*
    __int64 v3; // rax
    char v5; // [rsp+47h] [rbp-11h] BYREF
    __int64 v6; // [rsp+48h] [rbp-10h] BYREF

    v3 = sub_1402FCD90(&v6, *(_QWORD*)(a1 + 80));
    sub_140040360(a2, v3, &v5 - v3);
    return a2;
    */
    return 0;
}

__int64  sub_1402056D0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, char a5, char a6)//override
{
    /*
    __int64 result; // rax
    int v8; // er9
    char v9; // r10
    int v10; // ebx
    _QWORD* v11; // rdi
    _DWORD* v12; // rax
    _DWORD* v13; // rax
    __int64 v14; // rdx
    __int64 v15; // rdx
    __int64 v16; // rdx
    _QWORD* v17; // rdi
    int v18; // ebx
    _DWORD* v19; // rax
    __int64 v20; // rdx
    _DWORD* v21; // rax
    __int64 v22; // rdx
    __int64 v23; // rdx

    if (!a6)
        *(_DWORD*)(a1 + 192) = a2;
    result = sub_140210740(a1, a2, a3, (unsigned int)a2);
    if ((_BYTE)result && a5 && !v9 && (v8 & 0xFFFFFFFB) == 0)
    {
        v10 = *(_DWORD*)(a1 + 72);
        v11 = *(_QWORD**)(a1 + 56);
        sub_140007A80(v11);
        v12 = (_DWORD*)*v11;
        ++v12[5];
        **(_BYTE**)v12 = v10;
        v13 = (_DWORD*)*v11;
        ++v13[5];
        *(_BYTE*)(*(_QWORD*)v13 + 1i64) = 64;
        sub_140007AF0(*v11, 0i64);
        sub_140007AF0(*v11, v14);
        sub_140007AF0(*v11, v15);
        sub_140007AF0(*v11, v16);
        *(_DWORD*)(*v11 + 12i64) = 9;
        sub_140212F70(*(_QWORD*)(a1 + 64), *(_QWORD*)(a1 + 56));
        v17 = *(_QWORD**)(a1 + 56);
        v18 = *(_DWORD*)(a1 + 72);
        sub_140007A80(v17);
        v19 = (_DWORD*)*v17;
        LOBYTE(v20) = 1;
        ++v19[5];
        **(_BYTE**)v19 = v18;
        v21 = (_DWORD*)*v17;
        ++v21[5];
        *(_BYTE*)(*(_QWORD*)v21 + 1i64) = 64;
        sub_140007AF0(*v17, v20);
        sub_140007AF0(*v17, 0i64);
        sub_140007AF0(*v17, v22);
        sub_140007AF0(*v17, v23);
        *(_DWORD*)(*v17 + 12i64) = 9;
        result = sub_140212F70(*(_QWORD*)(a1 + 64), *(_QWORD*)(a1 + 56));
    }
    return result;
    */
    return 0;
}

__int64  sub_1402056C0(__int64 a1)//override
{
    //return *(unsigned int*)(a1 + 192);
    return 0;
}
char sub_140205260()//override
{
    return 0;
}
char sub_1402107C0()//override
{
    return 0;
}

__int64  sub_140205680(unsigned int* a1, int a2)//override
{
    switch (a2)
    {
    case 1:
        return a1[40];
    case 2:
        return a1[41];
    case 3:
        return a1[42];
    case 4:
        return a1[43];
    }
    return 0i64;
}

__int64  sub_1402053C0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, char a6, char a7)//override
{
    /*
    __int64 result; // rax
    int v9; // eax
    int v10; // er12
    _QWORD* v11; // r14
    int v12; // er15
    int v13; // edi
    int v14; // esi
    int v15; // ebp
    int v16; // ebx
    _DWORD* v17; // rax
    _DWORD* v18; // rax
    __int64 v19; // rdx
    _QWORD* v20; // rdi
    int v21; // ebx
    _DWORD* v22; // rax
    __int64 v23; // rdx
    _DWORD* v24; // rax
    __int64 v25; // rdx
    _QWORD* v26; // rdi
    int v27; // ebx
    _DWORD* v28; // rax
    _DWORD* v29; // rax
    __int64 v30; // rdx
    __int64 v31; // rdx
    __int64 v32; // rdx
    _QWORD* v33; // rdi
    int v34; // ebx
    _DWORD* v35; // rax
    __int64 v36; // rdx
    _DWORD* v37; // rax
    __int64 v38; // rdx
    __int64 v39; // rdx

    if (!a7)
    {
        *(_DWORD*)(a1 + 172) = a5;
        *(_DWORD*)(a1 + 160) = a2;
        *(_DWORD*)(a1 + 164) = a3;
        *(_DWORD*)(a1 + 168) = a4;
    }
    result = sub_140210740(a1, a2, a3, a4);
    if ((_BYTE)result && a6)
    {
        if (*(_DWORD*)(a1 + 192) == 3)
        {
            v9 = *(_DWORD*)(a1 + 312);
            LOBYTE(v10) = 0;
            if (v9 > 0)
                v10 = (int)pow(2.0, (double)(v9 - 1));
            v11 = *(_QWORD**)(a1 + 56);
            v12 = *(_DWORD*)(a1 + 172);
            v13 = *(_DWORD*)(a1 + 168);
            v14 = *(_DWORD*)(a1 + 164);
            v15 = *(_DWORD*)(a1 + 160);
            v16 = *(_DWORD*)(a1 + 72);
            sub_140007A80(v11);
            v17 = (_DWORD*)*v11;
            ++v17[5];
            **(_BYTE**)v17 = v16;
            v18 = (_DWORD*)*v11;
            ++v18[5];
            *(_BYTE*)(*(_QWORD*)v18 + 1i64) = 64;
            sub_140007AF0(*v11, 0i64);
            LOBYTE(v19) = 2;
            sub_140007AF0(*v11, v19);
            sub_140007AF0(*v11, 0i64);
            LOBYTE(v12) = v15 + 4 * (v14 + 4 * (v13 + 4 * v12));
            sub_140007AF0(*v11, (unsigned __int8)(v12 & ~(_BYTE)v10));
            *(_DWORD*)(*v11 + 12i64) = 9;
            sub_140212F70(*(_QWORD*)(a1 + 64), *(_QWORD*)(a1 + 56));
            v20 = *(_QWORD**)(a1 + 56);
            v21 = *(_DWORD*)(a1 + 72);
            sub_140007A80(v20);
            v22 = (_DWORD*)*v20;
            LOBYTE(v23) = 1;
            ++v22[5];
            **(_BYTE**)v22 = v21;
            v24 = (_DWORD*)*v20;
            ++v24[5];
            *(_BYTE*)(*(_QWORD*)v24 + 1i64) = 64;
            sub_140007AF0(*v20, v23);
            LOBYTE(v25) = 2;
            sub_140007AF0(*v20, v25);
            sub_140007AF0(*v20, 0i64);
            sub_140007AF0(*v20, (unsigned __int8)(v10 & v12));
            *(_DWORD*)(*v20 + 12i64) = 9;
            result = sub_140212F70(*(_QWORD*)(a1 + 64), *(_QWORD*)(a1 + 56));
        }
        else
        {
            v26 = *(_QWORD**)(a1 + 56);
            v27 = *(_DWORD*)(a1 + 72);
            sub_140007A80(v26);
            v28 = (_DWORD*)*v26;
            ++v28[5];
            **(_BYTE**)v28 = v27;
            v29 = (_DWORD*)*v26;
            ++v29[5];
            *(_BYTE*)(*(_QWORD*)v29 + 1i64) = 64;
            sub_140007AF0(*v26, 0i64);
            sub_140007AF0(*v26, v30);
            sub_140007AF0(*v26, v31);
            sub_140007AF0(*v26, v32);
            *(_DWORD*)(*v26 + 12i64) = 9;
            sub_140212F70(*(_QWORD*)(a1 + 64), *(_QWORD*)(a1 + 56));
            v33 = *(_QWORD**)(a1 + 56);
            v34 = *(_DWORD*)(a1 + 72);
            sub_140007A80(v33);
            v35 = (_DWORD*)*v33;
            LOBYTE(v36) = 1;
            ++v35[5];
            **(_BYTE**)v35 = v34;
            v37 = (_DWORD*)*v33;
            ++v37[5];
            *(_BYTE*)(*(_QWORD*)v37 + 1i64) = 64;
            sub_140007AF0(*v33, v36);
            sub_140007AF0(*v33, 0i64);
            sub_140007AF0(*v33, v38);
            sub_140007AF0(*v33, v39);
            *(_DWORD*)(*v33 + 12i64) = 9;
            result = sub_140212F70(*(_QWORD*)(a1 + 64), *(_QWORD*)(a1 + 56));
        }
    }
    return result;
    */
    return 0;
}

__int64  sub_140205970(unsigned int* a1)//override
{
    /*
    char v3; // [rsp+28h] [rbp-20h]
    char v4; // [rsp+30h] [rbp-18h]
    int v5; // [rsp+30h] [rbp-18h]

    v4 = 0;
    v3 = 1;
    (*(void(__fastcall**)(unsigned int*, _QWORD, _QWORD, _QWORD, unsigned int, char, char))(*(_QWORD*)a1 + 96i64))(
        a1,
        a1[40],
        a1[41],
        a1[42],
        a1[43],
        v3,
        v4);
    LOBYTE(v5) = 0;
    return (*(__int64(__fastcall**)(unsigned int*, _QWORD, _QWORD, _QWORD, unsigned int, unsigned int, int))(*(_QWORD*)a1 + 400i64))(
        a1,
        a1[78],
        a1[80],
        a1[76],
        a1[77],
        a1[79],
        v5);
        
        */
    return 0;
}

bool  sub_140205860(__int64 a1, __int64 a2, __int64 a3, __int64 a4, char a5, char a6, char a7, char a8, char a9, char a10, int a11, int a12)//override
{
    /*
    int v13; // ecx
    char v14; // r9
    char v15; // r10
    unsigned __int8 v16; // r11
    __int64 v17; // r9
    __int64 v18; // r8
    char v19; // dl
    bool result; // al

    result = 0;
    if ((unsigned __int8)sub_140210740(a1, a2, a3, a4))
    {
        sub_14021C2C0(
            v13,
            *(_QWORD*)(a1 + 56),
            *(_DWORD*)(a1 + 72),
            v16,
            v15,
            v14,
            a5,
            a6,
            a7,
            a8,
            a9,
            a10,
            0,
            0,
            a11,
            a12);
        sub_140212F70(*(_QWORD*)(a1 + 64), *(_QWORD*)(a1 + 56));
        *(_DWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 56) + 8i64) + 20i64) = 1;
        v17 = *(_QWORD*)(*(_QWORD*)(a1 + 56) + 8i64);
        v18 = *(int*)(v17 + 20);
        v19 = *(_BYTE*)(v18 + *(_QWORD*)v17);
        *(_DWORD*)(v17 + 20) = v18 + 1;
        if (v19 == 9)
            result = 1;
    }
    return result;

    */
    return 0;
}

double sub_140205820()//override
{
    return 0.0;
}
double sub_140205800()//override
{
    return 0.0;
}

char sub_140205850()//override
{
    return 1;
}

double sub_140205840()//override
{
    return 0.0;
}
char sub_140205390()//override
{
    return 0;
}

bool  sub_140205310(__int64 a1, __int64 a2, __int64 a3)//override
{
    /*
    __int64* v3; // r9
    __int64 v4; // rax
    bool result; // al
    __int64 v6; // [rsp+20h] [rbp-48h] BYREF
    char v7[40]; // [rsp+28h] [rbp-40h] BYREF

    result = 0;
    if ((unsigned __int8)sub_140210740(a1, a2, a3, a1))
    {
        v4 = *v3;
        v6 = 0i64;
        if ((*(unsigned __int8(__fastcall**)(__int64*, char*, __int64*))(v4 + 200))(v3, v7, &v6))
        {
            if ((v7[0] & 1) != 0)
                result = 1;
        }
    }
    return result;
    */
    return 0;
}

__int64 sub_140205250()//override
{
    return 0i64;
}

__int64 sub_140205230()//override
{
    return 0i64;
}

__int64  sub_140205300(__int64 a1, _DWORD* a2)//override
{
    __int64 result; // rax

    result = *(unsigned int*)(a1 + 288);
    *a2 = result;
    return result;
}

char sub_1402052F0()//override
{
    return 0;
}

__int64  sub_1402107B0(__int64 a1, _DWORD* a2, _DWORD* a3)//override
{
    __int64 result; // rax

    result = 0i64;
    *a2 = 0;
    *a3 = 0;
    return result;
}

char sub_1402107A0()//override
{
    return 0;
}

char sub_140210790()//override
{
    return 0;
}

void  sub_1402052E0(__int64 a1, _DWORD* a2)//override
{
    *a2 = 0;
}

_QWORD*  sub_1402052A0(__int64 a1, _QWORD* a2)//override
{
    //sub_140048D00(a2, "0");
    return a2;
}

void  sub_140205270(__int64 a1, _QWORD* a2)//override
{
    /*
    _DWORD* v2; // rcx

    v2 = (_DWORD*)(*a2 - 16i64);
    if ((*v2 & 0x30000000) == 0 && _InterlockedDecrement(v2) == -1)
        j_j_free(v2);
    */
}

_DWORD*  sub_1402051B0(_DWORD* a1, _DWORD* a2, _DWORD* a3, _DWORD* a4, _DWORD* a5, _DWORD* a6)//override
{
    _DWORD* result; // rax

    *a2 = a1[78];
    *a3 = a1[80];
    *a4 = a1[76];
    *a5 = a1[77];
    result = a6;
    *a6 = a1[79];
    return result;
}

__int64  sub_140205110(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, int a6)//override
{
    /*
    __int64 result; // rax
    int v8; // ecx
    __int64 v9; // rcx

    *(_DWORD*)(a1 + 308) = a5;
    *(_DWORD*)(a1 + 316) = a6;
    *(_DWORD*)(a1 + 312) = a2;
    *(_DWORD*)(a1 + 304) = a4;
    result = sub_140210740(a1, a2, a3, a4);
    if ((_BYTE)result)
    {
        LOBYTE(v8) = *(_DWORD*)(a1 + 308) != 0;
        sub_14021C230(v8, *(_QWORD*)(a1 + 56), *(_DWORD*)(a1 + 72), *(_DWORD*)(a1 + 312), *(_DWORD*)(a1 + 304) != 0, v8);
        sub_140212F70(*(_QWORD*)(a1 + 64), *(_QWORD*)(a1 + 56));
        sub_14021C080(v9, *(_QWORD*)(a1 + 56), *(unsigned int*)(a1 + 72));
        result = sub_140212F70(*(_QWORD*)(a1 + 64), *(_QWORD*)(a1 + 56));
    }
    return result;
    */
    return 0;
}

__int64 sub_140205100()//override
{
    return 0i64;
}

__int64 sub_1402050F0()//override
{
    return 0i64;
}
char sub_1402050B0()//override
{
    return 1;
}
char  sub_140204FF0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)//override
{
    /*
	__int64 v5; // rdx
	__int64 v6; // rax
	_DWORD* v7; // rax
	__int64 v8; // r9
	__int64 v9; // r8
	char v10; // dl
	char result; // al

	if (!(unsigned __int8)sub_140210740(a1, a2, a3, a4))
		goto LABEL_4;
	sub_140007A80(*(_QWORD*)(a1 + 56));
	v5 = *(unsigned __int8*)(a1 + 72);
	v6 = **(_QWORD**)(a1 + 56);
	++* (_DWORD*)(v6 + 20);
	**(_BYTE**)v6 = v5;
	LOBYTE(v5) = 51;
	v7 = **(_DWORD***)(a1 + 56);
	++v7[5];
	*(_BYTE*)(*(_QWORD*)v7 + 1i64) = 21;
	sub_140007AF0(**(_QWORD**)(a1 + 56), v5);
	sub_140007AF0(**(_QWORD**)(a1 + 56), 0i64);
	*(_DWORD*)(**(_QWORD**)(a1 + 56) + 12i64) = 7;
	sub_140212F70(*(_QWORD*)(a1 + 64), *(_QWORD*)(a1 + 56));
	*(_DWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 56) + 8i64) + 20i64) = 1;
	v8 = *(_QWORD*)(*(_QWORD*)(a1 + 56) + 8i64);
	v9 = *(int*)(v8 + 20);
	v10 = *(_BYTE*)(v9 + *(_QWORD*)v8);
	*(_DWORD*)(v8 + 20) = v9 + 1;
	if (v10 == 9)
		result = 1;
	else
		LABEL_4:
	result = 0;
	return result;
    */
    return 0;
}

char  sub_140204F30(__int64 a1, __int64 a2, __int64 a3, __int64 a4)//override
{
    /*
	__int64 v5; // rdx
	__int64 v6; // rax
	_DWORD* v7; // rax
	__int64 v8; // r9
	__int64 v9; // r8
	char v10; // dl
	char result; // al

	if (!(unsigned __int8)sub_140210740(a1, a2, a3, a4))
		goto LABEL_4;
	sub_140007A80(*(_QWORD*)(a1 + 56));
	v5 = *(unsigned __int8*)(a1 + 72);
	v6 = **(_QWORD**)(a1 + 56);
	++* (_DWORD*)(v6 + 20);
	**(_BYTE**)v6 = v5;
	LOBYTE(v5) = 51;
	v7 = **(_DWORD***)(a1 + 56);
	++v7[5];
	*(_BYTE*)(*(_QWORD*)v7 + 1i64) = 21;
	sub_140007AF0(**(_QWORD**)(a1 + 56), v5);
	sub_140007AF0(**(_QWORD**)(a1 + 56), 0i64);
	*(_DWORD*)(**(_QWORD**)(a1 + 56) + 12i64) = 7;
	sub_140212F70(*(_QWORD*)(a1 + 64), *(_QWORD*)(a1 + 56));
	*(_DWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 56) + 8i64) + 20i64) = 1;
	v8 = *(_QWORD*)(*(_QWORD*)(a1 + 56) + 8i64);
	v9 = *(int*)(v8 + 20);
	v10 = *(_BYTE*)(v9 + *(_QWORD*)v8);
	*(_DWORD*)(v8 + 20) = v9 + 1;
	if (v10 == 9)
		result = 1;
	else
		LABEL_4:
	result = 0;
	return result;
    */
    return 0;
}

char  sub_140204E70(__int64 a1, __int64 a2, __int64 a3, __int64 a4)//override
{
    /*
	__int64 v5; // rdx
	__int64 v6; // rax
	_DWORD* v7; // rax
	__int64 v8; // rdx
	__int64 v9; // r9
	__int64 v10; // r8
	char v11; // dl
	char result; // al

	if (!(unsigned __int8)sub_140210740(a1, a2, a3, a4))
		goto LABEL_4;
	sub_140007A80(*(_QWORD*)(a1 + 56));
	v5 = *(unsigned __int8*)(a1 + 72);
	v6 = **(_QWORD**)(a1 + 56);
	++* (_DWORD*)(v6 + 20);
	**(_BYTE**)v6 = v5;
	LOBYTE(v5) = 52;
	v7 = **(_DWORD***)(a1 + 56);
	++v7[5];
	*(_BYTE*)(*(_QWORD*)v7 + 1i64) = 21;
	sub_140007AF0(**(_QWORD**)(a1 + 56), v5);
	LOBYTE(v8) = -1;
	sub_140007AF0(**(_QWORD**)(a1 + 56), v8);
	*(_DWORD*)(**(_QWORD**)(a1 + 56) + 12i64) = 7;
	sub_140212F70(*(_QWORD*)(a1 + 64), *(_QWORD*)(a1 + 56));
	*(_DWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 56) + 8i64) + 20i64) = 1;
	v9 = *(_QWORD*)(*(_QWORD*)(a1 + 56) + 8i64);
	v10 = *(int*)(v9 + 20);
	v11 = *(_BYTE*)(v10 + *(_QWORD*)v9);
	*(_DWORD*)(v9 + 20) = v10 + 1;
	if (v11 == 9)
		result = 1;
	else
		LABEL_4:
	result = 0;
	return result;
    */
    return 0;
}

char sub_140204DD0()//override
{
	return 0;
}

char  sub_140204E10(__int64 a1, __int64 a2, __int64 a3)//override
{
    /*
	__int64 v4; // rcx

	if ((unsigned __int8)sub_140210740(a1, a2, a3, (unsigned int)a2))
	{
		sub_14021BF80(v4, *(_QWORD*)(a1 + 56), *(unsigned int*)(a1 + 72));
		sub_140212F70(*(_QWORD*)(a1 + 64), *(_QWORD*)(a1 + 56));
		*(_DWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 56) + 8i64) + 20i64) = 1;
		++* (_DWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 56) + 8i64) + 20i64);
	}
	return 0;
    */
    return 0;
}

char sub_140204E00()//override
{
	return 0;
}

char sub_140204DF0()//override
{
	return 0;
}

char sub_140204DE0()//override
{
	return 0;
}

char sub_140210730()//override
{
	return 0;
}

char sub_140210720()//override
{
	return 0;
}

char sub_140204D60()//override
{
	return 0;
}

char sub_140204DC0()//override
{
	return 0;
}

char sub_140204DB0()//override
{
	return 0;
}

char sub_140210710()//override
{
	return 0;
}

char sub_140210700()//override
{
	return 0;
}
__int64 sub_1402106E0()//override
{
	return 0i64;
}
char sub_1402106D0()//override
{
	return 0;
}

char sub_1402106C0()//override
{
	return 0;
}

char sub_140204D50()//override
{
	return 0;
}

char sub_1402106B0()//override
{
	return 0;
}

char sub_1402106A0()//override
{
	return 0;
}

_QWORD*  sub_140210680(__int64 a1, _QWORD* a2)//override
{
	*a2 = 0i64;
	a2[1] = 0i64;
	a2[2] = 0i64;
	return a2;
}