#include "WooferSettingsComponent.h"


void paint(Graphics& g)//override: sub_1401C4AD0
{
    /*
    __int64 v3; // rax
    __int64 v4; // rax
    __int64 v5; // rax
    unsigned int* v6; // rax
    int v8; // [rsp+30h] [rbp+8h] BYREF
    void* v9; // [rsp+40h] [rbp+18h]

    if (a1)
    {
        while (1)
        {
            v3 = *(_QWORD*)(a1 + 80);
            if (v3)
            {
                v4 = *(_QWORD*)(v3 + 16);
                if (v4)
                    break;
            }
            a1 = *(_QWORD*)(a1 + 24);
            if (!a1)
                goto LABEL_5;
        }
    }
    else
    {
    LABEL_5:
        v5 = qword_140EC0000;
        if (!qword_140EC0000)
        {
            v9 = operator new(0x130ui64);
            v5 = Desktop::Desktop((__int64)v9);
            qword_140EC0000 = v5;
        }
        v4 = Desktop::getDefaultLookAndFeel(v5);
    }
    v6 = LookAndFeel::findColour(v4, &v8, 16799488);
    return Graphics::fillAll(a2, *v6);
    */
}

void WooferSettingsComponent::buttonClicked(Button*)//__int64  sub_1401C4620(_QWORD* a1, __int64 a2)//override
{
    /*
    __int64 result; // rax

    if (a2 == a1[5] || a2 == a1[6] || a2 == a1[7])
        result = sub_1401C4500(a1 - 24);
    return result;
    */    
}

__int64  sub_1401C4500(__int64 a1)
{

    /*
    unsigned int v2; // ebx
    __int64 v3; // r9
    __int64 result; // rax
    char v5; // [rsp+20h] [rbp-28h]
    char v6; // [rsp+28h] [rbp-20h]
    int v7; // [rsp+28h] [rbp-20h]
    char v8; // [rsp+30h] [rbp-18h]

    v2 = (unsigned __int8)Button::getToggleState(*(_QWORD*)(a1 + 240)) != 0;
    if ((unsigned __int8)Button::getToggleState(*(_QWORD*)(a1 + 248)))
        v2 += 2;
    if ((unsigned __int8)Button::getToggleState(*(_QWORD*)(a1 + 232)))
        v2 += 4;
    LOBYTE(v3) = 1;
    v6 = 0;
    v5 = 0;
    (*(void(__fastcall**)(_QWORD, _QWORD, _QWORD, __int64, char, char))(***(_QWORD***)(a1 + 208) + 56i64))(
        **(_QWORD**)(a1 + 208),
        v2,
        0i64,
        v3,
        v5,
        v6);
    result = *((_QWORD*)ArgList + 66);
    if (*(_DWORD*)(result + 264))
    {
        result = sub_140218690(*(_QWORD*)(*(_QWORD*)(result + 8) + 8i64 * *(int*)(result + 268) - 8));
        if ((_DWORD)result == 1)
        {
            v8 = 0;
            LOBYTE(v7) = 0;
            result = (*(__int64(__fastcall**)(_QWORD, _QWORD, _QWORD, _QWORD, _DWORD, int, char))(***(_QWORD***)(a1 + 208)
                + 96i64))(
                    **(_QWORD**)(a1 + 208),
                    v2,
                    0i64,
                    0i64,
                    0,
                    v7,
                    v8);
        }
    }
    return result;
    */
    return 0;
}

void WooferSettingsComponent::sliderValueChanged(Slider* slider)//void  sub_1401C45E0(__int64 a1, __int64 a2)//override
{
    /*
    __int64 v2; // r8
    __int64 v3; // rbx

    v2 = *(_QWORD*)(a1 + 184);
    if (a2 == v2)
    {
        v3 = **(_QWORD**)(a1 + 8);
        *(_DWORD*)(v3 + 100) = (int)*(double*)sub_14009F390(*(_QWORD*)(v2 + 512)).m128_u64;
    }
    */
}

__m128  sub_14009F390(__int64 a1)
{
    
    __m128 result; // xmm0
    /*__int64 v2; // [rsp+20h] [rbp-38h] BYREF
    char v3[8]; // [rsp+28h] [rbp-30h] BYREF

    (*(void(__fastcall**)(_QWORD, __int64*))(**(_QWORD**)(a1 + 56) + 8i64))(*(_QWORD*)(a1 + 56), &v2);
    *(double*)result.m128_u64 = (*(double(__fastcall**)(__int64, char*))(*(_QWORD*)v2 + 24i64))(v2, v3);
    (*(void(__fastcall**)(__int64, char*))(*(_QWORD*)v2 + 176i64))(v2, v3);*/
    return result;    
    
}


void WooferSettingsComponent::comboBoxChanged(ComboBox* comboBoxThatHasChanged)//void  sub_1401C4650(_QWORD* a1, __int64 a2)//override
{

    /*
    __int64 v3; // rcx
    __int64 v4; // rcx
    unsigned int v5; // ebx
    __int64 v6; // rbx
    void** v7; // rcx
    __int64 v8; // r14
    __int64 v9; // r12
    _BYTE* v10; // rcx
    __int64 v11; // rcx
    char** v12; // rax
    int v13; // ebx
    void* v14; // rcx
    __int64 v15; // rdi
    void(__fastcall * v16)(__int64, __int64*, _QWORD); // rbx
    char** v17; // rax
    int v18; // ebx
    void* v19; // rcx
    __int64 v20; // rcx
    void(__fastcall * v21)(__int64, char**, _QWORD); // r9
    __int64 v22; // rcx
    void(__fastcall * v23)(__int64, char**, _QWORD); // r9
    void* v24; // rcx
    char* v25; // rcx
    _QWORD* v26; // rbx
    __int64 v27; // rdi
    _DWORD* v28; // rcx
    char* v29; // rcx
    char* v30; // rcx
    char* v31; // [rsp+20h] [rbp-48h] BYREF
    char* v32; // [rsp+28h] [rbp-40h] BYREF
    __int64 v33; // [rsp+30h] [rbp-38h] BYREF
    __int64 v34; // [rsp+38h] [rbp-30h] BYREF
    __int64 v35; // [rsp+40h] [rbp-28h] BYREF
    void* Block[2]; // [rsp+50h] [rbp-18h] BYREF
    char* v37; // [rsp+B0h] [rbp+48h] BYREF
    char* v38; // [rsp+B8h] [rbp+50h] BYREF
    __int64 v39; // [rsp+C0h] [rbp+58h] BYREF
    char* v40; // [rsp+C8h] [rbp+60h] BYREF

    if (a2 == a1[5])
    {
        sub_14022C310(*((_QWORD*)ArgList + 66), a1[3]);
        v3 = a1[4];
        Block[0] = 0i64;
        Block[1] = *(void**)(v3 + 40);
        Component::internalRepaintUnchecked(v3, (__m128i*)Block, 1);
    }
    else
    {
        v4 = a1[9];
        if (a2 == v4)
        {
            v5 = 1;
            if ((unsigned int)ComboBox::getSelectedItemIndex(v4))
                v5 = 5 * (ComboBox::getSelectedItemIndex(a1[9]) + 9);
            (*(void(__fastcall**)(_QWORD, _QWORD, _QWORD))(**(_QWORD**)a1[3] + 328i64))(*(_QWORD*)a1[3], v5, 0i64);
        }
        else if (a2 == a1[22])
        {
            v6 = (__int64)(*(_QWORD*)(*((_QWORD*)ArgList + 66) + 40i64) - *(_QWORD*)(*((_QWORD*)ArgList + 66) + 32i64)) >> 3;
            (*(void(__fastcall**)(_QWORD, char**))(**(_QWORD**)a1[3] + 48i64))(*(_QWORD*)a1[3], &v38);
            sub_14040CD70(*(_QWORD*)(a1[22] + 368i64), &v32);
            Block[0] = 0i64;
            Block[1] = 0i64;
            StringArray::addTokens((__int64)Block, v32, ":", (char*)&unk_14046DA82);
            if (HIDWORD(Block[1]) <= 1)
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
                v7 = &off_140EB1E28;
            }
            else
            {
                v7 = (void**)((char*)Block[0] + 8);
            }
            sub_140315330(v7, &v37);
            if ((_DWORD)v6)
            {
                v8 = 0i64;
                v9 = (unsigned int)v6;
                do
                {
                    v10 = **(_BYTE***)(v8 + *(_QWORD*)(*((_QWORD*)ArgList + 66) + 32i64));
                    if (v10 && v10[96])
                    {
                        (*(void(__fastcall**)(_BYTE*, __int64*))(*(_QWORD*)v10 + 376i64))(v10, &v35);
                        v11 = **(_QWORD**)(v8 + *(_QWORD*)(*((_QWORD*)ArgList + 66) + 32i64));
                        v12 = (char**)(*(__int64(__fastcall**)(__int64, __int64*))(*(_QWORD*)v11 + 376i64))(v11, &v33);
                        if (v38 == *v12)
                            v13 = 0;
                        else
                            v13 = compareIgnoreCase(v38, *v12);
                        v14 = (void*)(v33 - 16);
                        if ((*(_DWORD*)(v33 - 16) & 0x30000000) == 0
                            && _InterlockedDecrement((volatile signed __int32*)v14) == -1)
                        {
                            j_j_free(v14);
                        }
                        if (!v13)
                        {
                            v15 = **(_QWORD**)(v8 + *(_QWORD*)(*((_QWORD*)ArgList + 66) + 32i64));
                            v16 = *(void(__fastcall**)(__int64, __int64*, _QWORD))(*(_QWORD*)v15 + 384i64);
                            sub_140048D00(&v39, "0");
                            v16(v15, &v39, 0i64);
                        }
                        v17 = (char**)sub_14020F300(*(_QWORD*)(v8 + *(_QWORD*)(*((_QWORD*)ArgList + 66) + 32i64)), &v34);
                        if (v37 == *v17)
                            v18 = 0;
                        else
                            v18 = compareIgnoreCase(v37, *v17);
                        v19 = (void*)(v34 - 16);
                        if ((*(_DWORD*)(v34 - 16) & 0x30000000) == 0
                            && _InterlockedDecrement((volatile signed __int32*)v19) == -1)
                        {
                            j_j_free(v19);
                        }
                        if (!v18)
                        {
                            v20 = **(_QWORD**)(v8 + *(_QWORD*)(*((_QWORD*)ArgList + 66) + 32i64));
                            v21 = *(void(__fastcall**)(__int64, char**, _QWORD))(*(_QWORD*)v20 + 384i64);
                            v40 = v38;
                            if ((*((_DWORD*)v38 - 4) & 0x30000000) == 0)
                                _InterlockedIncrement((volatile signed __int32*)v38 - 4);
                            v21(v20, &v40, 0i64);
                            v22 = *(_QWORD*)a1[3];
                            v23 = *(void(__fastcall**)(__int64, char**, _QWORD))(*(_QWORD*)v22 + 384i64);
                            v31 = v37;
                            if ((*((_DWORD*)v37 - 4) & 0x30000000) == 0)
                                _InterlockedIncrement((volatile signed __int32*)v37 - 4);
                            v23(v22, &v31, 0i64);
                        }
                        v24 = (void*)(v35 - 16);
                        if ((*(_DWORD*)(v35 - 16) & 0x30000000) == 0
                            && _InterlockedDecrement((volatile signed __int32*)v24) == -1)
                        {
                            j_j_free(v24);
                        }
                    }
                    v8 += 8i64;
                    --v9;
                } while (v9);
            }
            v25 = v37 - 16;
            if ((*((_DWORD*)v37 - 4) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v25) == -1)
                j_j_free(v25);
            if (SHIDWORD(Block[1]) > 0)
            {
                v26 = Block[0];
                v27 = HIDWORD(Block[1]);
                do
                {
                    v28 = (_DWORD*)(*v26 - 16i64);
                    if ((*v28 & 0x30000000) == 0 && _InterlockedDecrement(v28) == -1)
                        j_j_free(v28);
                    ++v26;
                    --v27;
                } while (v27);
            }
            free(Block[0]);
            v29 = v32 - 16;
            if ((*((_DWORD*)v32 - 4) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v29) == -1)
                j_j_free(v29);
            v30 = v38 - 16;
            if ((*((_DWORD*)v38 - 4) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v30) == -1)
                j_j_free(v30);
        }
    }
    */
}