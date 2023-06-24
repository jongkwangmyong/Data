
#include "WeCalComponent.h"


void WeCalComponent::paint(Graphics& g)//__int64 __fastcall sub_1401BB240(__int64 a1, __int64 a2)
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


void WeCalComponent::resized()//char __fastcall sub_1401BB000(__int64 a1)
{
    /*
    int v2; // ebx
    int v3; // edi
    int v4; // eax
    int v5; // ecx
    int v6; // er8
    int v7; // eax
    int v8; // eax
    int v9; // er8
    int v10; // er9

    Component::setBounds(
        *(_QWORD*)(a1 + 824),
        60,
        233,
        24,
        COERCE_UNSIGNED_INT64((float)((float)*(int*)(a1 + 44) * 0.023399999) + 6.755399441055744e15));
    Component::setBounds(*(_QWORD*)(a1 + 832), *(_DWORD*)(a1 + 40) / 2 - 250, *(_DWORD*)(a1 + 44) / 2 - 250, 500, 500);
    v2 = 150;
    Component::setBounds(*(_QWORD*)(a1 + 840), *(_DWORD*)(a1 + 40) - 150, *(_DWORD*)(a1 + 44) - 40, 150, 32);
    v3 = 40;
    Component::setBounds(*(_QWORD*)(a1 + 848), *(_DWORD*)(a1 + 40) / 2 - 100, 8, 200, 40);
    Component::setBounds(*(_QWORD*)(a1 + 864), 0, *(_DWORD*)(a1 + 44) - 40, 150, 32);
    Component::setBounds(*(_QWORD*)(a1 + 880), *(_DWORD*)(a1 + 40) / 2 - 225, 0, 450, 50);
    Component::setBounds(
        *(_QWORD*)(a1 + 920),
        130,
        237,
        24,
        COERCE_UNSIGNED_INT64((float)((float)*(int*)(a1 + 44) * 0.023399999) + 6.755399441055744e15));
    Component::setBounds(*(_QWORD*)(a1 + 928), 0, *(_DWORD*)(a1 + 44) - 87, 150, 32);
    Component::setBounds(*(_QWORD*)(a1 + 952), *(_DWORD*)(a1 + 40) - 150, 270, 150, 130);
    v4 = *(_DWORD*)(a1 + 40);
    v5 = 150;
    v6 = *(_DWORD*)(a1 + 44);
    if (v4 < 150)
        v5 = *(_DWORD*)(a1 + 40);
    v7 = v4 - v5;
    if (v7 < 150)
        v2 = v7;
    v8 = v7 - v2;
    if (v6 < 40)
        v3 = *(_DWORD*)(a1 + 44);
    v9 = v6 - v3;
    v10 = v9;
    if (v8 <= v9)
        v10 = v8;
    return Component::setBounds(*(_QWORD*)(a1 + 832), v5 + (v8 - v10) / 2, v3 + (v9 - v10) / 2, v10, v10);

    */
}

void sliderValueChanged(Slider* slider)//__int64  sub_1401BAFD0(__int64 a1, __int64 a2)//override
{
    /*
    __int64 result; // rax

    if (a2 == *(_QWORD*)(a1 + 112) || a2 == *(_QWORD*)(a1 + 208))
        result = sub_1401B8B90(a1 - 704);
    return result;
    */    
}

double  sub_1401B8B90(__int64 a1)
{
    /*
    __int64 v2; // rbx
    double v3; // xmm0_8
    __int64 v4; // rcx
    double v5; // xmm0_8
    _QWORD* v6; // r10
    int v7; // er11
    int v8; // er8
    _DWORD* v9; // rdx
    int v10; // ecx
    __int64 v11; // rdx

    v2 = *(int*)(*((_QWORD*)ArgList + 66) + 268i64);
    v3 = *(double*)sub_14009F390(*(_QWORD*)(*(_QWORD*)(a1 + 816) + 512i64)).m128_u64;
    v4 = *(_QWORD*)(a1 + 912);
    *(_DWORD*)(a1 + 788) = (int)v3;
    v5 = *(double*)sub_14009F390(*(_QWORD*)(v4 + 512)).m128_u64;
    v6 = ArgList;
    v7 = *(_DWORD*)(a1 + 780);
    v8 = (int)v5;
    *(_DWORD*)(a1 + 784) = (int)v5;
    v9 = *(_DWORD**)(*(_QWORD*)(v6[66] + 8i64) + 8 * v2 - 8);
    v10 = *(_DWORD*)(a1 + 788);
    if (v9[163] != (int)v5)
    {
        if (v8 - v10 >= 50)
            v9[163] = v8;
        else
            v9[163] = v10 + 50;
    }
    if (v9[162] != v10)
    {
        if (v8 - v10 >= 50)
            v9[162] = v10;
        else
            v9[162] = v8 - 50;
    }
    v9[164] = v7;
    sub_14009F400(*(_QWORD*)(*(_QWORD*)(a1 + 816) + 512i64), v9, 0i64);
    sub_14009F400(*(_QWORD*)(*(_QWORD*)(a1 + 912) + 512i64), v11, 0i64);
    sub_14009F250(*(_QWORD*)(*(_QWORD*)(a1 + 816) + 512i64));
    return sub_14009F250(*(_QWORD*)(*(_QWORD*)(a1 + 912) + 512i64));
    */
    return 0;
}

void comboBoxChanged(ComboBox* comboBoxThatHasChanged)//void  sub_1401B9540(__int64 a1, __int64 a2)//override
{
    /*
    __int64 v3; // rcx
    __int64 v4; // rbx
    int v5; // eax
    _QWORD* v6; // rcx
    int v7; // er9
    int v8; // er8
    _DWORD* v9; // rdx

    v3 = *(_QWORD*)(a1 + 168);
    if (a2 == v3)
    {
        v4 = *(int*)(*((_QWORD*)ArgList + 66) + 268i64);
        v5 = ComboBox::getSelectedItemIndex(v3);
        v6 = ArgList;
        v7 = *(_DWORD*)(a1 + 64);
        v8 = *(_DWORD*)(a1 + 68);
        *(_DWORD*)(a1 + 60) = v5;
        v9 = *(_DWORD**)(*(_QWORD*)(v6[66] + 8i64) + 8 * v4 - 8);
        if (v9[163] != v7)
        {
            if (v7 - v8 >= 50)
                v9[163] = v7;
            else
                v9[163] = v8 + 50;
        }
        if (v9[162] != v8)
        {
            if (v7 - v8 >= 50)
                v9[162] = v8;
            else
                v9[162] = v7 - 50;
        }
        v9[164] = v5;
        sub_1401B8A00(a1 - 720);
    }
    */
    
}

void buttonClicked(Button*)//void  sub_1401B9620(_DWORD* a1, __int64 a2)//override
{
    /*
    _DWORD* v2; // r15
    volatile signed __int32* v3; // r13
    __int64 v4; // r14
    __int64 v5; // rax
    void* v6; // rcx
    volatile signed __int32* v7; // rdi
    volatile signed __int32* v8; // rbx
    volatile signed __int32* v9; // r12
    char* v10; // rax
    char v11; // dl
    unsigned __int8 v12; // cl
    _BYTE* v13; // rax
    _BYTE* v14; // rcx
    int i; // ebx
    void(__fastcall * **v16)(_QWORD, __int64); // rcx
    __int64 v17; // rax
    __int64 v18; // rcx
    void(__fastcall * **v19)(_QWORD, __int64); // r8
    bool v20; // r15
    __int64 v21; // rbx
    bool v22; // di
    __int64 v23; // rcx
    __int64 v24; // rcx
    char* v25; // rcx
    int v26; // ebx
    int v27; // er12
    int v28; // eax
    char* v29; // rdx
    char v30; // cl
    unsigned __int8 j; // al
    void* v32; // rcx
    void* v33; // rcx
    volatile signed __int32* v34; // rbx
    void* v35; // rcx
    void* v36; // rcx
    void* v37; // rcx
    void* v38; // rcx
    char* v39; // rcx
    char* v40; // rcx
    volatile signed __int32* v41; // rdi
    __int64 v42; // rbx
    __int64 v43; // rax
    char* v44; // rcx
    void* v45; // rcx
    __int64 v46; // rcx
    __int64 v47; // rbx
    __int64 v48; // rax
    char v49; // al
    __int64 v50; // rbx
    __int64 v51; // rax
    void* v52; // rcx
    void* v53; // rcx
    void* v54; // rcx
    char v55; // r12
    __int64 v56; // rcx
    __int64 v57; // rcx
    int v58; // edi
    __int64 v59; // r13
    unsigned __int64 v60; // rsi
    __int64 v61; // r15
    _BYTE* v62; // rbx
    void* v63; // rcx
    void* v64; // rcx
    void* v65; // rcx
    void* v66; // rcx
    int v67; // eax
    void* v68; // rcx
    void* v69; // rcx
    void* v70; // rcx
    void* v71; // rcx
    void* v72; // rcx
    void* v73; // rcx
    void* v74; // rcx
    void* v75; // rcx
    char v76; // bl
    void* v77; // rcx
    void* v78; // rcx
    void* v79; // rcx
    void* v80; // rcx
    void* v81; // rcx
    void* v82; // rcx
    void* v83; // rcx
    void* v84; // rcx
    char v85; // bl
    void* v86; // rcx
    void* v87; // rcx
    void* v88; // rcx
    void* v89; // rcx
    char v90; // bl
    unsigned __int8 v91; // di
    _QWORD* v92; // rdx
    volatile signed __int32* v93; // rbx
    __int64 v94; // rax
    char v95; // di
    void* v96; // rcx
    void* v97; // rcx
    void* v98; // rcx
    void* v99; // rcx
    void* v100; // rcx
    __int64 v101; // rax
    int v102; // edi
    int v103; // ebx
    int v104; // eax
    void* v105; // rcx
    void* v106; // rcx
    void* v107; // rcx
    void* v108; // rcx
    void* v109; // rcx
    void* v110; // rcx
    void* v111; // rcx
    void* v112; // rcx
    void* v113; // rcx
    void* v114; // rcx
    void* v115; // rcx
    __int64 v116; // rbx
    __int64 v117; // r14
    char* v118; // [rsp+40h] [rbp-C0h] BYREF
    __int64* v119; // [rsp+48h] [rbp-B8h]
    char* v120; // [rsp+50h] [rbp-B0h] BYREF
    void* v121; // [rsp+58h] [rbp-A8h]
    __int64 v122; // [rsp+60h] [rbp-A0h] BYREF
    __int64 v123; // [rsp+68h] [rbp-98h] BYREF
    char* v124; // [rsp+70h] [rbp-90h]
    char* v125; // [rsp+78h] [rbp-88h] BYREF
    __int64 v126; // [rsp+80h] [rbp-80h] BYREF
    __int64 v127; // [rsp+88h] [rbp-78h] BYREF
    _DWORD* v128; // [rsp+90h] [rbp-70h] BYREF
    char* v129; // [rsp+98h] [rbp-68h]
    __int64 v130; // [rsp+A0h] [rbp-60h] BYREF
    __int64 v131; // [rsp+A8h] [rbp-58h] BYREF
    __int64 v132; // [rsp+B0h] [rbp-50h] BYREF
    __int64 v133; // [rsp+B8h] [rbp-48h] BYREF
    __int64 v134; // [rsp+C0h] [rbp-40h] BYREF
    __int64 v135; // [rsp+C8h] [rbp-38h] BYREF
    __int64 v136; // [rsp+D0h] [rbp-30h] BYREF
    __int64 v137; // [rsp+D8h] [rbp-28h] BYREF
    __int64 v138; // [rsp+E0h] [rbp-20h] BYREF
    __int64 v139; // [rsp+E8h] [rbp-18h] BYREF
    __int64 v140; // [rsp+F0h] [rbp-10h] BYREF
    __int64 v141; // [rsp+F8h] [rbp-8h] BYREF
    __int64 v142; // [rsp+100h] [rbp+0h] BYREF
    __int64 v143; // [rsp+108h] [rbp+8h] BYREF
    __int64 v144; // [rsp+110h] [rbp+10h] BYREF
    __int64 v145; // [rsp+118h] [rbp+18h] BYREF
    __int64 v146; // [rsp+120h] [rbp+20h] BYREF
    __int64 v147; // [rsp+128h] [rbp+28h] BYREF
    __int64 v148; // [rsp+130h] [rbp+30h] BYREF
    __int64 v149; // [rsp+138h] [rbp+38h] BYREF
    __int64 v150; // [rsp+140h] [rbp+40h] BYREF
    __int64 v151; // [rsp+148h] [rbp+48h] BYREF
    __int64 v152; // [rsp+150h] [rbp+50h] BYREF
    __int64 v153; // [rsp+158h] [rbp+58h] BYREF
    __int64 v154; // [rsp+160h] [rbp+60h] BYREF
    __int64 v155; // [rsp+168h] [rbp+68h] BYREF
    __int64 v156; // [rsp+170h] [rbp+70h] BYREF
    __int64 v157; // [rsp+178h] [rbp+78h] BYREF
    __int64 v158; // [rsp+180h] [rbp+80h] BYREF
    __int64 v159; // [rsp+188h] [rbp+88h] BYREF
    __int64 v160; // [rsp+190h] [rbp+90h] BYREF
    __int64 v161; // [rsp+198h] [rbp+98h] BYREF
    __int64 v162; // [rsp+1A0h] [rbp+A0h] BYREF
    __int64 v163; // [rsp+1A8h] [rbp+A8h] BYREF
    __int64 v164; // [rsp+1B0h] [rbp+B0h]
    __int64 v165; // [rsp+1B8h] [rbp+B8h] BYREF
    __int64 v166; // [rsp+1C0h] [rbp+C0h] BYREF
    __int64 v167; // [rsp+1C8h] [rbp+C8h] BYREF
    __int64 v168; // [rsp+1D0h] [rbp+D0h] BYREF
    __int64 v169; // [rsp+1D8h] [rbp+D8h] BYREF
    __int64 v170; // [rsp+1E0h] [rbp+E0h] BYREF
    __int64 v171; // [rsp+1E8h] [rbp+E8h] BYREF
    __int64 v172; // [rsp+1F0h] [rbp+F0h] BYREF
    __int64 v173; // [rsp+1F8h] [rbp+F8h] BYREF
    __int64 v174; // [rsp+200h] [rbp+100h] BYREF
    __int64 v175; // [rsp+208h] [rbp+108h] BYREF
    __int64 v176; // [rsp+210h] [rbp+110h] BYREF
    __int64 v177; // [rsp+218h] [rbp+118h] BYREF
    __int64* v178; // [rsp+220h] [rbp+120h] BYREF
    _BYTE* v179; // [rsp+228h] [rbp+128h] BYREF
    __int64 v180; // [rsp+230h] [rbp+130h] BYREF
    void* v181; // [rsp+238h] [rbp+138h] BYREF
    int v182; // [rsp+244h] [rbp+144h]
    _BYTE* v183; // [rsp+248h] [rbp+148h] BYREF
    _DWORD* v184; // [rsp+250h] [rbp+150h] BYREF
    _BYTE* v185; // [rsp+258h] [rbp+158h]
    _DWORD* v186; // [rsp+260h] [rbp+160h] BYREF
    _DWORD* v187; // [rsp+268h] [rbp+168h] BYREF
    __int64 v188; // [rsp+270h] [rbp+170h] BYREF
    _DWORD* v189; // [rsp+278h] [rbp+178h] BYREF
    __int64 v190; // [rsp+280h] [rbp+180h] BYREF
    _DWORD* v191; // [rsp+288h] [rbp+188h] BYREF
    __int64 v192; // [rsp+290h] [rbp+190h] BYREF
    __int64 v193; // [rsp+298h] [rbp+198h] BYREF
    __int64 v194; // [rsp+2A0h] [rbp+1A0h] BYREF
    _DWORD* v195; // [rsp+2A8h] [rbp+1A8h] BYREF
    _DWORD* v196; // [rsp+2B0h] [rbp+1B0h] BYREF
    __int64 v197; // [rsp+2B8h] [rbp+1B8h] BYREF
    __int64 v198[4]; // [rsp+2C0h] [rbp+1C0h] BYREF
    __int64 v199; // [rsp+2E0h] [rbp+1E0h] BYREF
    _BYTE* v200; // [rsp+2E8h] [rbp+1E8h]
    __int64 v201; // [rsp+2F0h] [rbp+1F0h]
    __int64 v202; // [rsp+2F8h] [rbp+1F8h]
    void* Block; // [rsp+300h] [rbp+200h]
    __int64 v204; // [rsp+308h] [rbp+208h]
    __int16 v205; // [rsp+310h] [rbp+210h]
    __int64 v206; // [rsp+350h] [rbp+250h]
    void(__fastcall * **v207)(_QWORD, __int64); // [rsp+358h] [rbp+258h]

    v2 = a1;
    v128 = a1;
    if (a2 == *((_QWORD*)a1 + 16))
    {
        v185 = (_BYTE*)*((_QWORD*)ArgList + 281);
        v3 = (volatile signed __int32*)(v185 - 16);
        if ((*((_DWORD*)v185 - 4) & 0x30000000) == 0)
            _InterlockedIncrement(v3);
        v4 = 0i64;
        if ((unsigned int)String::isNotEmpty(v185, &unk_14046DA3A))
        {
            v46 = *((_QWORD*)ArgList + 281);
            v126 = v46;
            if ((*(_DWORD*)(v46 - 16) & 0x30000000) == 0)
                _InterlockedIncrement((volatile signed __int32*)(v46 - 16));
            sub_140200820(ArgList, &v126, 0i64);
            v47 = qword_140EBFF78;
            v121 = operator new(0x220ui64);
            v48 = sub_140189A70(v121);
            sub_140274EA0(v47, v48);
        }
        else
        {
            v5 = *((_QWORD*)ArgList + 272);
            v165 = v5;
            if ((*(_DWORD*)(v5 - 16) & 0x30000000) == 0)
                _InterlockedIncrement((volatile signed __int32*)(v5 - 16));
            sub_140308BF0(&v197, &v165);
            v6 = (void*)(v165 - 16);
            if ((*(_DWORD*)(v165 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v6) == -1)
                j_j_free(v6);
            sub_140048D00(&v179, "*.sam");
            sub_140048D00(&v188, "GLM4 - Save As...");
            v199 = v188;
            v7 = (volatile signed __int32*)(v188 - 16);
            if ((*(_DWORD*)(v188 - 16) & 0x30000000) == 0)
                _InterlockedIncrement(v7);
            v200 = v179;
            v8 = (volatile signed __int32*)(v179 - 16);
            if ((*((_DWORD*)v179 - 4) & 0x30000000) == 0)
                _InterlockedIncrement(v8);
            v201 = v197;
            v9 = (volatile signed __int32*)(v197 - 16);
            v121 = (void*)(v197 - 16);
            if ((*(_DWORD*)(v197 - 16) & 0x30000000) == 0)
                _InterlockedIncrement(v9);
            v202 = 0i64;
            Block = 0i64;
            v204 = 0i64;
            v205 = 1;
            v206 = 0i64;
            v207 = 0i64;
            v10 = v179;
            if (*v179)
            {
                v11 = *v179;
                while (v11 == 32 || (unsigned __int8)(v11 - 9) <= 4u)
                {
                    ++v10;
                    if (v11 < 0)
                    {
                        v12 = 64;
                        if ((v11 & 0x40) != 0)
                        {
                            do
                            {
                                if (v12 <= 8u)
                                    break;
                                ++v10;
                                v12 >>= 1;
                            } while ((v12 & (unsigned __int8)v11) != 0);
                        }
                    }
                    v11 = *v10;
                    if (!*v10)
                        goto LABEL_25;
                }
            }
            else
            {
            LABEL_25:
                sub_140048D00(&v183, "*");
                v13 = v200;
                v200 = v183;
                v14 = v13 - 16;
                if ((*((_DWORD*)v13 - 4) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v14) == -1)
                    j_j_free(v14);
            }
            if ((*v7 & 0x30000000) == 0 && _InterlockedDecrement(v7) == -1)
                j_j_free((void*)v7);
            if ((*v8 & 0x30000000) == 0 && _InterlockedDecrement(v8) == -1)
                j_j_free((void*)v8);
            Component::BailOutChecker(&v180, qword_140EC0010);
            for (i = 0; i < SHIDWORD(v204); ++i)
                sub_140002BF0((char*)Block + 72 * i);
            HIDWORD(v204) = 0;
            if ((_DWORD)v204)
            {
                free(Block);
                Block = 0i64;
            }
            LODWORD(v204) = 0;
            v16 = v207;
            if (v207)
            {
                v207 = 0i64;
                (**v16)(v16, 1i64);
            }
            if ((_BYTE)v205)
            {
                v119 = (__int64*)operator new(0xC8ui64);
                v17 = sub_1400B76F0(v119, &v199, 134i64);
                if (v17)
                    v18 = v17 + 176;
                else
                    v18 = 0i64;
            }
            else
            {
                v119 = (__int64*)operator new(0xC08ui64);
                v18 = sub_140091130(v119, &v199, 134i64);
            }
            v19 = v207;
            v207 = (void(__fastcall***)(_QWORD, __int64))v18;
            if (v19)
            {
                (**v19)(v19, 1i64);
                v18 = (__int64)v207;
            }
            (*(void(__fastcall**)(__int64))(*(_QWORD*)v18 + 16i64))(v18);
            v20 = SHIDWORD(v204) > 0;
            v21 = v180;
            v22 = v180 != 0;
            if (v180)
            {
                if (*(_QWORD*)(v180 + 16) && Component::isShowing(*(_QWORD*)(v180 + 16)))
                {
                    v23 = v22 ? *(_QWORD*)(v21 + 16) : 0i64;
                    if (!Component::isCurrentlyBlockedByAnotherModalComponent(v23))
                    {
                        if (v22)
                            v24 = *(_QWORD*)(v21 + 16);
                        else
                            v24 = 0i64;
                        Component::grabKeyboardFocusInternal(v24, 2u, 1);
                    }
                }
                if (v21 && !_InterlockedAdd((volatile signed __int32*)(v21 + 8), 0xFFFFFFFF))
                    (**(void(__fastcall***)(__int64, __int64))v180)(v180, 1i64);
            }
            if (!v20)
                goto LABEL_114;
            sub_1403DAC80(&v199, &v181);
            if (v182 <= 0)
            {
                v118 = (char*)dword_140DDCDD0;
                v198[3] = (__int64)(&dword_140DDCDC0 + 4);
            }
            else
            {
                v25 = *(char**)v181;
                v129 = v25;
                if ((*((_DWORD*)v25 - 4) & 0x30000000) == 0)
                    _InterlockedIncrement((volatile signed __int32*)v25 - 4);
                v118 = v129;
                v129 = (char*)(&dword_140DDCDC0 + 4);
            }
            StringArray::clear((__int64)&v181);
            free(v181);
            v26 = String::lastIndexOfChar(&v118, 92);
            v27 = v26 + 1;
            v28 = String::lastIndexOfChar(&v118, 46);
            if (v28 <= v26 + 1)
            {
                if (v27 > 0)
                {
                    v29 = v118;
                    while (1)
                    {
                        v30 = *v29;
                        if (!*v29)
                            break;
                        ++v29;
                        if (v30 < 0)
                        {
                            for (j = 64; ((unsigned __int8)v30 & j) != 0; j >>= 1)
                            {
                                if (j <= 8u)
                                    break;
                                ++v29;
                            }
                        }
                        if (--v26 < 0)
                        {
                            String::String(&v120, v29);
                            goto LABEL_81;
                        }
                    }
                    v120 = (char*)dword_140DDCDD0;
                }
                else
                {
                    v120 = v118;
                    if ((*((_DWORD*)v118 - 4) & 0x30000000) == 0)
                        _InterlockedIncrement((volatile signed __int32*)v118 - 4);
                }
            }
            else
            {
                String::substring(&v118, &v120, v27, v28);
            }
        LABEL_81:
            if (!(unsigned __int8)sub_14026E2D0(&v120))
            {
                v184 = dword_140DDCDD0;
                sub_140048D00(&v133, "\\ / : * ? | < > \" # % & { } $ ! ' @ + = `");
                sub_140048D00(&v130, "Setup name contains invalid charaters, please type in a name without special characters.");
                sub_14031AF20(&v122, &v130);
                v32 = (void*)(v130 - 16);
                if ((*(_DWORD*)(v130 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v32) == -1)
                    j_j_free(v32);
                v119 = &v122;
                ImageCache::getFromHashCode(&v122, "\n", (int)"");
                v123 = v122;
                if ((*(_DWORD*)(v122 - 16) & 0x30000000) == 0)
                    _InterlockedIncrement((volatile signed __int32*)(v122 - 16));
                v33 = (void*)(v122 - 16);
                if ((*(_DWORD*)(v122 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v33) == -1)
                    j_j_free(v33);
                v178 = &v123;
                v178 = *(__int64**)sub_14031B920(&v123, &v133);
                v34 = (volatile signed __int32*)(v178 - 2);
                if ((*(_DWORD*)(v178 - 2) & 0x30000000) == 0)
                    _InterlockedIncrement(v34);
                v35 = (void*)(v123 - 16);
                if ((*(_DWORD*)(v123 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v35) == -1)
                    j_j_free(v35);
                sub_140048D00(&v131, "Error");
                sub_14031AF20(&v132, &v131);
                v36 = (void*)(v131 - 16);
                if ((*(_DWORD*)(v131 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v36) == -1)
                    j_j_free(v36);
                sub_14040FE70(2, (unsigned int)&v132, (unsigned int)&v178, (unsigned int)&v184, 0i64);
                v37 = (void*)(v132 - 16);
                if ((*(_DWORD*)(v132 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v37) == -1)
                    j_j_free(v37);
                if ((*v34 & 0x30000000) == 0 && _InterlockedDecrement(v34) == -1)
                    j_j_free((void*)v34);
                v38 = (void*)(v133 - 16);
                if ((*(_DWORD*)(v133 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v38) == -1)
                    j_j_free(v38);
                v39 = v120 - 16;
                if ((*((_DWORD*)v120 - 4) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v39) == -1)
                    j_j_free(v39);
                v40 = v118 - 16;
                if ((*((_DWORD*)v118 - 4) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v40) == -1)
                    j_j_free(v40);
                v9 = (volatile signed __int32*)v121;
            LABEL_114:
                sub_14040F290(&v199);
                if ((*v9 & 0x30000000) == 0 && _InterlockedDecrement(v9) == -1)
                    j_j_free((void*)v9);
            LABEL_139:
                if ((*v3 & 0x30000000) == 0 && _InterlockedDecrement(v3) == -1)
                    j_j_free((void*)v3);
                return;
            }
            v124 = v118;
            v41 = (volatile signed __int32*)(v118 - 16);
            if ((*((_DWORD*)v118 - 4) & 0x30000000) == 0)
                _InterlockedIncrement(v41);
            v125 = v118;
            if ((*v41 & 0x30000000) == 0)
                _InterlockedIncrement(v41);
            sub_140200820(ArgList, &v125, 0i64);
            v42 = qword_140EBFF78;
            v119 = (__int64*)operator new(0x220ui64);
            v43 = sub_140189A70(v119);
            sub_140274EA0(v42, v43);
            if ((*v41 & 0x30000000) == 0 && _InterlockedDecrement(v41) == -1)
                j_j_free((void*)v41);
            v44 = v120 - 16;
            if ((*((_DWORD*)v120 - 4) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v44) == -1)
                j_j_free(v44);
            if ((*v41 & 0x30000000) == 0 && _InterlockedDecrement(v41) == -1)
                j_j_free((void*)v41);
            sub_14040F290(&v199);
            v45 = v121;
            if ((*(_DWORD*)v121 & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v121) == -1)
                j_j_free(v45);
        }
        if (*(_DWORD*)(qword_140EBFF78 + 76) > 1u)
            v4 = *(_QWORD*)(*(_QWORD*)(qword_140EBFF78 + 64) + 8i64);
        sub_1401898D0(v4);
        goto LABEL_139;
    }
    if (a2 == *((_QWORD*)a1 + 19))
    {
        v49 = sub_14022D460(*((_QWORD*)ArgList + 66));
        v50 = qword_140EBFF78;
        if (v49)
        {
            v124 = (char*)operator new(0x348ui64);
            v51 = sub_1400E8FA0(v124);
        }
        else
        {
            v124 = (char*)operator new(0x390ui64);
            v51 = sub_1400EFC50(v124);
        }
        sub_140274EA0(v50, v51);
        return;
    }
    if (a2 == *((_QWORD*)a1 + 20))
    {
        a1[24] = 0;
        if (!(unsigned __int8)sub_14022A820(*((_QWORD*)ArgList + 66)))
        {
            v186 = dword_140DDCDD0;
            v187 = dword_140DDCDD0;
            sub_140048D00(
                &v136,
                "Please select the woofer extenxsion and monitor pair(s) by clicking first the woofer extension icon and then cli"
                "ck the monitor icon that used to calibrate the woofer system. Then click the Calibrate button again.");
            sub_140048D00(&v134, "Select the woofer extension and monitor pair(s)");
            sub_14031AF20(&v135, &v134);
            v52 = (void*)(v134 - 16);
            if ((*(_DWORD*)(v134 - 16) & 0x30000000) == 0
                && !_InterlockedExchangeAdd((volatile signed __int32*)v52, 0xFFFFFFFF))
            {
                j_j_free(v52);
            }
            sub_14040FB40(3, (unsigned int)&v135, (unsigned int)&v136, (unsigned int)&v187, (__int64)&v186, 0i64, 0i64);
            v53 = (void*)(v135 - 16);
            if ((*(_DWORD*)(v135 - 16) & 0x30000000) == 0
                && !_InterlockedExchangeAdd((volatile signed __int32*)v53, 0xFFFFFFFF))
            {
                j_j_free(v53);
            }
            v54 = (void*)(v136 - 16);
            if ((*(_DWORD*)(v136 - 16) & 0x30000000) == 0
                && !_InterlockedExchangeAdd((volatile signed __int32*)v54, 0xFFFFFFFF))
            {
                j_j_free(v54);
            }
            return;
        }
        v55 = 0;
        v56 = *((_QWORD*)ArgList + 174);
        if (*(_BYTE*)(v56 + 456))
        {
            sub_1401FD8D0(v56, v198);
            v58 = 0;
            v59 = v198[0];
            v60 = (v198[1] - v198[0]) >> 3;
            if (v60)
            {
                do
                {
                    v61 = 8i64 * v58;
                    v62 = *(_BYTE**)(v61 + v59);
                    if (*(_QWORD*)v62 && *(_BYTE*)(*(_QWORD*)v62 + 96i64))
                    {
                        sub_140048D00(&v137, "layout");
                        sub_14020F010(v62, &v137);
                        v62 = *(_BYTE**)(v61 + v59);
                    }
                    if (*(_QWORD*)v62 && *(_BYTE*)(*(_QWORD*)v62 + 96i64) && !v62[108])
                    {
                        v55 = 1;
                        v58 = v60;
                    }
                    ++v58;
                } while (v58 < v60);
                if (v55)
                {
                    v128 = dword_140DDCDD0;
                    sub_140048D00(
                        &v138,
                        "One(or more) loudspeakers are offline and calibration cannot be started, please check the connections, power and re - try.");
                    sub_14031AF20(&v141, &v138);
                    v63 = (void*)(v138 - 16);
                    if ((*(_DWORD*)(v138 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v63) == -1)
                        j_j_free(v63);
                    sub_140048D00(&v139, "Loudspeakers Offline");
                    sub_14031AF20(&v140, &v139);
                    v64 = (void*)(v139 - 16);
                    if ((*(_DWORD*)(v139 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v64) == -1)
                        j_j_free(v64);
                    sub_14040FE70(3, (unsigned int)&v140, (unsigned int)&v141, (unsigned int)&v128, 0i64);
                    v65 = (void*)(v140 - 16);
                    if ((*(_DWORD*)(v140 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v65) == -1)
                        j_j_free(v65);
                    v66 = (void*)(v141 - 16);
                    if ((*(_DWORD*)(v141 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v66) == -1)
                        j_j_free(v66);
                LABEL_303:
                    sub_140001FE0((__int64)v198);
                    return;
                }
                v2 = v128;
            }
            v67 = sub_1401FA890(v57);
            if (!*(_DWORD*)(*((_QWORD*)ArgList + 174) + 196i64))
            {
                v195 = dword_140DDCDD0;
                sub_140048D00(&v170, "The calibration microphone is not connected, please check the connection and re-try.");
                sub_14031AF20(&v173, &v170);
                v108 = (void*)(v170 - 16);
                if ((*(_DWORD*)(v170 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v108) == -1)
                    j_j_free(v108);
                sub_140048D00(&v171, "Microphone not connected");
                sub_14031AF20(&v172, &v171);
                v109 = (void*)(v171 - 16);
                if ((*(_DWORD*)(v171 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v109) == -1)
                    j_j_free(v109);
                sub_14040FE70(3, (unsigned int)&v172, (unsigned int)&v173, (unsigned int)&v195, 0i64);
                v110 = (void*)(v172 - 16);
                if ((*(_DWORD*)(v172 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v110) == -1)
                    j_j_free(v110);
                v111 = (void*)(v173 - 16);
                if ((*(_DWORD*)(v173 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v111) == -1)
                    j_j_free(v111);
                goto LABEL_303;
            }
            if (v67 == -1)
            {
                v189 = dword_140DDCDD0;
                sub_140048D00(
                    &v142,
                    "The microphone level is too low! There may be a connection issue, or the microphone may be faulty.");
                sub_14031AF20(&v145, &v142);
                v68 = (void*)(v142 - 16);
                if ((*(_DWORD*)(v142 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v68) == -1)
                    j_j_free(v68);
                sub_140048D00(&v143, "Microphone level problem");
                sub_14031AF20(&v144, &v143);
                v69 = (void*)(v143 - 16);
                if ((*(_DWORD*)(v143 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v69) == -1)
                    j_j_free(v69);
                sub_14040FE70(3, (unsigned int)&v144, (unsigned int)&v145, (unsigned int)&v189, 0i64);
                v70 = (void*)(v144 - 16);
                if ((*(_DWORD*)(v144 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v70) == -1)
                    j_j_free(v70);
                v71 = (void*)(v145 - 16);
                if ((*(_DWORD*)(v145 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v71) == -1)
                    j_j_free(v71);
                goto LABEL_303;
            }
            if (v67 == 1)
            {
                sub_140048D00(&v146, "No");
                sub_14031AF20(&v153, &v146);
                v72 = (void*)(v146 - 16);
                if ((*(_DWORD*)(v146 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v72) == -1)
                    j_j_free(v72);
                sub_140048D00(&v147, "Yes");
                sub_14031AF20(&v152, &v147);
                v73 = (void*)(v147 - 16);
                if ((*(_DWORD*)(v147 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v73) == -1)
                    j_j_free(v73);
                sub_140048D00(&v148, "The background noise measured by the microphone is high. Continue anyway?");
                sub_14031AF20(&v151, &v148);
                v74 = (void*)(v148 - 16);
                if ((*(_DWORD*)(v148 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v74) == -1)
                    j_j_free(v74);
                sub_140048D00(&v149, "High background noise level");
                sub_14031AF20(&v150, &v149);
                v75 = (void*)(v149 - 16);
                if ((*(_DWORD*)(v149 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v75) == -1)
                    j_j_free(v75);
                v76 = sub_14040FB40(
                    1,
                    (unsigned int)&v150,
                    (unsigned int)&v151,
                    (unsigned int)&v152,
                    (__int64)&v153,
                    0i64,
                    0i64);
                v77 = (void*)(v150 - 16);
                if ((*(_DWORD*)(v150 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v77) == -1)
                    j_j_free(v77);
                v78 = (void*)(v151 - 16);
                if ((*(_DWORD*)(v151 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v78) == -1)
                    j_j_free(v78);
                v79 = (void*)(v152 - 16);
                if ((*(_DWORD*)(v152 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v79) == -1)
                    j_j_free(v79);
                v80 = (void*)(v153 - 16);
                if ((*(_DWORD*)(v153 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v80) == -1)
                    j_j_free(v80);
                if (!v76)
                    goto LABEL_303;
            }
            sub_140001FE0((__int64)v198);
            sub_140048D00(&v154, "Cancel");
            sub_14031AF20(&v161, &v154);
            v81 = (void*)(v154 - 16);
            if ((*(_DWORD*)(v154 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v81) == -1)
                j_j_free(v81);
            sub_140048D00(&v155, "Start");
            sub_14031AF20(&v160, &v155);
            v82 = (void*)(v155 - 16);
            if ((*(_DWORD*)(v155 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v82) == -1)
                j_j_free(v82);
            sub_140048D00(
                &v156,
                "System will sweep through all monitors. Place your microphone to the Primary listening position at ear height an"
                "d make sure room is quiet when measuring.");
            sub_14031AF20(&v159, &v156);
            v83 = (void*)(v156 - 16);
            if ((*(_DWORD*)(v156 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v83) == -1)
                j_j_free(v83);
            sub_140048D00(&v157, "Start WooferCal");
            sub_14031AF20(&v158, &v157);
            v84 = (void*)(v157 - 16);
            if ((*(_DWORD*)(v157 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v84) == -1)
                j_j_free(v84);
            v85 = sub_14040FB40(
                1,
                (unsigned int)&v158,
                (unsigned int)&v159,
                (unsigned int)&v160,
                (__int64)&v161,
                (__int64)(v2 - 178),
                0i64);
            v86 = (void*)(v158 - 16);
            if ((*(_DWORD*)(v158 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v86) == -1)
                j_j_free(v86);
            v87 = (void*)(v159 - 16);
            if ((*(_DWORD*)(v159 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v87) == -1)
                j_j_free(v87);
            v88 = (void*)(v160 - 16);
            if ((*(_DWORD*)(v160 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v88) == -1)
                j_j_free(v88);
            v89 = (void*)(v161 - 16);
            if ((*(_DWORD*)(v161 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v89) == -1)
                j_j_free(v89);
            if (v85 == 1)
            {
                v90 = sub_1401FB760();
                v91 = 0;
                if ((unsigned int)ComboBox::getSelectedItemIndex(*((_QWORD*)v2 + 29)))
                {
                    v92 = ArgList;
                    *(_BYTE*)(*(_QWORD*)(*(_QWORD*)(*((_QWORD*)ArgList + 66) + 8i64)
                        + 8i64 * *(int*)(*((_QWORD*)ArgList + 66) + 268i64)
                        - 8)
                        + 592i64) = 0;
                    v164 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v92[66] + 8i64) + 8i64 * *(int*)(v92[66] + 268i64) - 8) + 632i64);
                    v93 = (volatile signed __int32*)(v164 - 16);
                    if ((*(_DWORD*)(v164 - 16) & 0x30000000) == 0)
                        _InterlockedIncrement(v93);
                    v121 = &v162;
                    v162 = v164;
                    if ((*v93 & 0x30000000) == 0)
                        _InterlockedIncrement(v93);
                    sub_140048D00(&v163, "local");
                    v94 = sub_1401FA950(ArgList, &v190, &v163, &v162);
                    v95 = sub_14031B6E0(v94, "MicFoundLocally");
                    v96 = (void*)(v190 - 16);
                    if ((*(_DWORD*)(v190 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v96) == -1)
                        j_j_free(v96);
                    if (!v95)
                    {
                        v127 = v164;
                        if ((*v93 & 0x30000000) == 0)
                            _InterlockedIncrement(v93);
                        if (!(unsigned __int8)sub_14026D8A0(&v127))
                        {
                            v191 = dword_140DDCDD0;
                            sub_140048D00(
                                &v166,
                                "Microphone correction file could not be downloaded. You can get microphone correction file also from Gen"
                                "elec website. You can also use default correction file (serial 000001) as a workaround.");
                            sub_14031AF20(&v169, &v166);
                            v97 = (void*)(v166 - 16);
                            if ((*(_DWORD*)(v166 - 16) & 0x30000000) == 0
                                && _InterlockedDecrement((volatile signed __int32*)v97) == -1)
                            {
                                j_j_free(v97);
                            }
                            sub_140048D00(&v167, "Error");
                            sub_14031AF20(&v168, &v167);
                            v98 = (void*)(v167 - 16);
                            if ((*(_DWORD*)(v167 - 16) & 0x30000000) == 0
                                && _InterlockedDecrement((volatile signed __int32*)v98) == -1)
                            {
                                j_j_free(v98);
                            }
                            sub_14040FE70(2, (unsigned int)&v168, (unsigned int)&v169, (unsigned int)&v191, 0i64);
                            v99 = (void*)(v168 - 16);
                            if ((*(_DWORD*)(v168 - 16) & 0x30000000) == 0
                                && _InterlockedDecrement((volatile signed __int32*)v99) == -1)
                            {
                                j_j_free(v99);
                            }
                            v100 = (void*)(v169 - 16);
                            if ((*(_DWORD*)(v169 - 16) & 0x30000000) == 0
                                && _InterlockedDecrement((volatile signed __int32*)v100) == -1)
                            {
                                j_j_free(v100);
                            }
                            if ((*v93 & 0x30000000) == 0 && _InterlockedDecrement(v93) == -1)
                                j_j_free((void*)v93);
                            return;
                        }
                    }
                    v91 = 1;
                    if ((*v93 & 0x30000000) == 0 && _InterlockedDecrement(v93) == -1)
                        j_j_free((void*)v93);
                LABEL_281:
                    v124 = (char*)operator new(0x348ui64);
                    v101 = sub_1401C0DD0(v124, v2 - 178, 0i64, v91);
                    sub_14040F9D0(v101 + 176);
                    v2[24] = 1;
                    return;
                }
                *(_BYTE*)(*(_QWORD*)(*(_QWORD*)(*((_QWORD*)ArgList + 66) + 8i64)
                    + 8i64 * *(int*)(*((_QWORD*)ArgList + 66) + 268i64)
                    - 8)
                    + 592i64) = 1;
                if (v90)
                    goto LABEL_281;
                v102 = sub_14031B460(&v194, "OK");
                v103 = sub_14031B460(&v193, "Please check your Internet connection and then press Start Calibration!");
                v104 = sub_14031B460(&v192, "Cloud connection error");
                sub_14040EFD0(2, v104, v103, v102, 0i64);
                v105 = (void*)(v192 - 16);
                if ((*(_DWORD*)(v192 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v105) == -1)
                    j_j_free(v105);
                v106 = (void*)(v193 - 16);
                if ((*(_DWORD*)(v193 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v106) == -1)
                    j_j_free(v106);
                v107 = (void*)(v194 - 16);
                if ((*(_DWORD*)(v194 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v107) == -1)
                    j_j_free(v107);
            }
        }
        else
        {
            v196 = dword_140DDCDD0;
            sub_140048D00(&v174, "The Gnet adapter is offline, please check the USB connection and re-try.");
            sub_14031AF20(&v177, &v174);
            v112 = (void*)(v174 - 16);
            if ((*(_DWORD*)(v174 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v112) == -1)
                j_j_free(v112);
            sub_140048D00(&v175, "GNet adapter offline");
            sub_14031AF20(&v176, &v175);
            v113 = (void*)(v175 - 16);
            if ((*(_DWORD*)(v175 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v113) == -1)
                j_j_free(v113);
            sub_14040FE70(3, (unsigned int)&v176, (unsigned int)&v177, (unsigned int)&v196, 0i64);
            v114 = (void*)(v176 - 16);
            if ((*(_DWORD*)(v176 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v114) == -1)
                j_j_free(v114);
            v115 = (void*)(v177 - 16);
            if ((*(_DWORD*)(v177 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v115) == -1)
                j_j_free(v115);
        }
    }
    else if (a2 == *((_QWORD*)a1 + 27))
    {
        v116 = qword_140EBFF78;
        sub_140274D60(qword_140EBFF78);
        if (*(_DWORD*)(v116 + 76) <= 1u)
            v117 = 0i64;
        else
            v117 = *(_QWORD*)(*(_QWORD*)(v116 + 64) + 8i64);
        sub_1401898D0(v117);
    }

    */
}

void run()//__int64 sub_1401B8D30()//override
{
    /*
    _QWORD* v0; // rdi
    struct _Mtx_internal_imp_t* v1; // rbx
    int v2; // eax
    int v3; // ebx
    unsigned __int64 v4; // rdi
    int v5; // ecx
    __int64 v6; // r15
    char* v7; // rbx
    int v8; // esi
    int v9; // edi
    char* v10; // rcx
    int v11; // ecx
    char* v12; // rax
    int v13; // ecx
    __int64 v14; // r12
    __int64 v15; // rsi
    _BYTE** v16; // r14
    __int64 v17; // r15
    char* v18; // rbx
    int v19; // esi
    int v20; // edi
    char* v21; // rax
    int v22; // ecx
    __int64 v23; // r12
    __int64 v24; // rsi
    _BYTE** v25; // r14
    char* v26; // rcx
    int v27; // ecx
    __int64 v28; // r15
    char* v29; // rbx
    int v30; // esi
    int v31; // edi
    char* v32; // rcx
    char* v33; // rax
    int v34; // ecx
    __int64 v35; // r12
    __int64 v36; // rsi
    _BYTE** v37; // r14
    __int64 v38; // rbx
    int v39; // eax
    _BYTE* v40; // rax
    int v41; // ecx
    _BYTE* v42; // rcx
    _BYTE* v43; // rcx
    char* v44; // rcx
    char* v45; // rcx
    char* v46; // rcx
    char* v48; // [rsp+40h] [rbp-59h] BYREF
    char* v49; // [rsp+48h] [rbp-51h] BYREF
    _BYTE* v50; // [rsp+50h] [rbp-49h] BYREF
    _BYTE* v51; // [rsp+58h] [rbp-41h] BYREF
    char* v52; // [rsp+60h] [rbp-39h] BYREF
    char* v53; // [rsp+68h] [rbp-31h] BYREF
    char* v54; // [rsp+70h] [rbp-29h] BYREF
    _DWORD* v55; // [rsp+78h] [rbp-21h] BYREF
    __int64 v56[14]; // [rsp+80h] [rbp-19h] BYREF
    int v57; // [rsp+108h] [rbp+6Fh]
    char* v58; // [rsp+118h] [rbp+7Fh] BYREF

    v0 = ArgList;
    v1 = (struct _Mtx_internal_imp_t*)*((_QWORD*)ArgList + 231);
    v56[3] = (__int64)v1;
    v2 = Mtx_lock(v1);
    if (v2)
        std::_Throw_C_error(v2);
    sub_140001EE0(v56, v0[66] + 32i64);
    Mtx_unlock(v1);
    v3 = 0;
    v4 = (v56[1] - v56[0]) >> 3;
    if (v4)
    {
        do
        {
            Sleep(0x3E8u);
            ++v3;
        } while (v3 < v4);
    }
    v55 = dword_140DDCDD0;
    sub_140048D00(&v58, "No");
    v56[4] = (__int64)&dword_140EC00EC;
    v57 = 19;
    if (_InterlockedCompareExchange(&dword_140EC00EC, 1, 0))
    {
        v5 = 19;
        while (_InterlockedCompareExchange(&dword_140EC00EC, 1, 0))
        {
            if (--v5 < 0)
            {
                while (_InterlockedCompareExchange(&dword_140EC00EC, 1, 0))
                    Sleep(0);
                break;
            }
        }
    }
    v6 = qword_140EC03E0;
    if (qword_140EC03E0)
    {
        if (*(_QWORD*)(qword_140EC03E0 + 64)
            && (int)StringArray::indexOf(qword_140EC03E0 + 24, v58, *(_BYTE*)(qword_140EC03E0 + 56), 0) < 0)
        {
            sub_1402FDDE0(*(_QWORD*)(v6 + 64), (__int64)&v54, &v58, (__int64)&v58);
            goto LABEL_22;
        }
        v7 = v58;
        v8 = *(_DWORD*)(v6 + 36);
        if (v8 <= 0)
            goto LABEL_20;
        v9 = 0;
        if (*(_BYTE*)(v6 + 56))
        {
            while ((unsigned int)compareIgnoreCase(*(char**)(*(_QWORD*)(v6 + 24) + 8i64 * v9), v7))
            {
                if (++v9 >= v8)
                {
                    v7 = v58;
                    goto LABEL_20;
                }
            }
            v7 = v58;
        }
        else
        {
            v14 = *(int*)(v6 + 36);
            v15 = 0i64;
            v16 = *(_BYTE***)(v6 + 24);
            while ((unsigned int)String::isNotEmpty(v7, *v16))
            {
                ++v9;
                ++v15;
                ++v16;
                if (v15 >= v14)
                    goto LABEL_20;
            }
        }
        if (v9 < 0)
        {
        LABEL_20:
            v54 = v7;
            if ((*((_DWORD*)v7 - 4) & 0x30000000) == 0)
                _InterlockedIncrement((volatile signed __int32*)v7 - 4);
            goto LABEL_22;
        }
        v12 = *(char**)sub_140316E00(v6 + 40, (unsigned int)v9);
        v54 = v12;
        v13 = *((_DWORD*)v12 - 4);
    }
    else
    {
        v12 = v58;
        v54 = v58;
        v13 = *((_DWORD*)v58 - 4);
    }
    if ((v13 & 0x30000000) == 0)
        _InterlockedIncrement((volatile signed __int32*)v12 - 4);
LABEL_22:
    _InterlockedExchange(&dword_140EC00EC, 0);
    v10 = v58 - 16;
    if ((*((_DWORD*)v58 - 4) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v10) == -1)
        j_j_free(v10);
    sub_140048D00(&v48, "Yes");
    v56[5] = (__int64)&dword_140EC00EC;
    if (_InterlockedCompareExchange(&dword_140EC00EC, 1, 0))
    {
        v11 = 19;
        while (_InterlockedCompareExchange(&dword_140EC00EC, 1, 0))
        {
            if (--v11 < 0)
            {
                while (_InterlockedCompareExchange(&dword_140EC00EC, 1, 0))
                    Sleep(0);
                break;
            }
        }
    }
    v17 = qword_140EC03E0;
    if (qword_140EC03E0)
    {
        if (*(_QWORD*)(qword_140EC03E0 + 64)
            && (int)StringArray::indexOf(qword_140EC03E0 + 24, v48, *(_BYTE*)(qword_140EC03E0 + 56), 0) < 0)
        {
            sub_1402FDDE0(*(_QWORD*)(v17 + 64), (__int64)&v53, &v48, (__int64)&v48);
            goto LABEL_62;
        }
        v18 = v48;
        v19 = *(_DWORD*)(v17 + 36);
        if (v19 <= 0)
            goto LABEL_50;
        v20 = 0;
        if (*(_BYTE*)(v17 + 56))
        {
            while ((unsigned int)compareIgnoreCase(*(char**)(*(_QWORD*)(v17 + 24) + 8i64 * v20), v18))
            {
                if (++v20 >= v19)
                {
                    v18 = v48;
                    goto LABEL_50;
                }
            }
            v18 = v48;
        }
        else
        {
            v23 = *(int*)(v17 + 36);
            v24 = 0i64;
            v25 = *(_BYTE***)(v17 + 24);
            while ((unsigned int)String::isNotEmpty(v18, *v25))
            {
                ++v20;
                ++v24;
                ++v25;
                if (v24 >= v23)
                    goto LABEL_50;
            }
        }
        if (v20 < 0)
        {
        LABEL_50:
            v53 = v18;
            if ((*((_DWORD*)v18 - 4) & 0x30000000) == 0)
                _InterlockedIncrement((volatile signed __int32*)v18 - 4);
            goto LABEL_62;
        }
        v21 = *(char**)sub_140316E00(v17 + 40, (unsigned int)v20);
        v53 = v21;
        v22 = *((_DWORD*)v21 - 4);
    }
    else
    {
        v21 = v48;
        v53 = v48;
        v22 = *((_DWORD*)v48 - 4);
    }
    if ((v22 & 0x30000000) == 0)
        _InterlockedIncrement((volatile signed __int32*)v21 - 4);
LABEL_62:
    _InterlockedExchange(&dword_140EC00EC, 0);
    v26 = v48 - 16;
    if ((*((_DWORD*)v48 - 4) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v26) == -1)
        j_j_free(v26);
    sub_140048D00(&v49, "Do you want to measure from extra positions?");
    v56[6] = (__int64)&dword_140EC00EC;
    if (_InterlockedCompareExchange(&dword_140EC00EC, 1, 0))
    {
        v27 = 19;
        while (_InterlockedCompareExchange(&dword_140EC00EC, 1, 0))
        {
            if (--v27 < 0)
            {
                while (_InterlockedCompareExchange(&dword_140EC00EC, 1, 0))
                    Sleep(0);
                break;
            }
        }
    }
    v28 = qword_140EC03E0;
    if (qword_140EC03E0)
    {
        if (*(_QWORD*)(qword_140EC03E0 + 64)
            && (int)StringArray::indexOf(qword_140EC03E0 + 24, v49, *(_BYTE*)(qword_140EC03E0 + 56), 0) < 0)
        {
            sub_1402FDDE0(*(_QWORD*)(v28 + 64), (__int64)&v52, &v49, (__int64)&v49);
            goto LABEL_82;
        }
        v29 = v49;
        v30 = *(_DWORD*)(v28 + 36);
        if (v30 <= 0)
            goto LABEL_80;
        v31 = 0;
        if (*(_BYTE*)(v28 + 56))
        {
            while ((unsigned int)compareIgnoreCase(*(char**)(*(_QWORD*)(v28 + 24) + 8i64 * v31), v29))
            {
                if (++v31 >= v30)
                {
                    v29 = v49;
                    goto LABEL_80;
                }
            }
            v29 = v49;
        }
        else
        {
            v35 = *(int*)(v28 + 36);
            v36 = 0i64;
            v37 = *(_BYTE***)(v28 + 24);
            while ((unsigned int)String::isNotEmpty(v29, *v37))
            {
                ++v31;
                ++v36;
                ++v37;
                if (v36 >= v35)
                    goto LABEL_80;
            }
        }
        if (v31 < 0)
        {
        LABEL_80:
            v52 = v29;
            if ((*((_DWORD*)v29 - 4) & 0x30000000) == 0)
                _InterlockedIncrement((volatile signed __int32*)v29 - 4);
            goto LABEL_82;
        }
        v33 = *(char**)sub_140316E00(v28 + 40, (unsigned int)v31);
        v52 = v33;
        v34 = *((_DWORD*)v33 - 4);
    }
    else
    {
        v33 = v49;
        v52 = v49;
        v34 = *((_DWORD*)v49 - 4);
    }
    if ((v34 & 0x30000000) == 0)
        _InterlockedIncrement((volatile signed __int32*)v33 - 4);
LABEL_82:
    _InterlockedExchange(&dword_140EC00EC, 0);
    v32 = v49 - 16;
    if ((*((_DWORD*)v49 - 4) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v32) == -1)
        j_j_free(v32);
    sub_140048D00(&v50, "Measurement completed");
    v56[7] = (__int64)&dword_140EC00EC;
    if (_InterlockedCompareExchange(&dword_140EC00EC, 1, 0))
    {
        while (_InterlockedCompareExchange(&dword_140EC00EC, 1, 0))
        {
            if (--v57 < 0)
            {
                while (_InterlockedCompareExchange(&dword_140EC00EC, 1, 0))
                    Sleep(0);
                break;
            }
        }
    }
    v38 = qword_140EC03E0;
    if (qword_140EC03E0)
    {
        if (*(_QWORD*)(qword_140EC03E0 + 64)
            && (int)StringArray::indexOf(qword_140EC03E0 + 24, v50, *(_BYTE*)(qword_140EC03E0 + 56), 0) < 0)
        {
            sub_1402FDDE0(*(_QWORD*)(v38 + 64), (__int64)&v51, &v50, (__int64)&v50);
            goto LABEL_110;
        }
        v39 = StringArray::indexOf(v38 + 24, v50, *(_BYTE*)(v38 + 56), 0);
        if (v39 < 0)
        {
            v40 = v50;
            v51 = v50;
            v41 = *((_DWORD*)v50 - 4);
        }
        else
        {
            v40 = *(_BYTE**)sub_140316E00(v38 + 40, (unsigned int)v39);
            v51 = v40;
            v41 = *((_DWORD*)v40 - 4);
        }
    }
    else
    {
        v40 = v50;
        v51 = v50;
        v41 = *((_DWORD*)v50 - 4);
    }
    if ((v41 & 0x30000000) == 0)
        _InterlockedIncrement((volatile signed __int32*)v40 - 4);
LABEL_110:
    _InterlockedExchange(&dword_140EC00EC, 0);
    v42 = v50 - 16;
    if ((*((_DWORD*)v50 - 4) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v42) == -1)
        j_j_free(v42);
    sub_14040D100((_DWORD)v42, (unsigned int)&v51, (unsigned int)&v52, (unsigned int)&v53, (__int64)&v54, (__int64)&v55);
    v43 = v51 - 16;
    if ((*((_DWORD*)v51 - 4) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v43) == -1)
        j_j_free(v43);
    v44 = v52 - 16;
    if ((*((_DWORD*)v52 - 4) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v44) == -1)
        j_j_free(v44);
    v45 = v53 - 16;
    if ((*((_DWORD*)v53 - 4) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v45) == -1)
        j_j_free(v45);
    v46 = v54 - 16;
    if ((*((_DWORD*)v54 - 4) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v46) == -1)
        j_j_free(v46);
    return sub_140001FE0((__int64)v56);
    */
  
}

void changeListenerCallback(ChangeBroadcaster* source)//char*  sub_1401B89D0(__int64 a1, char* a2)//override
{
    /*
    char* result; // rax

    result = (char*)ArgList + 880;
    if (a2 == (char*)ArgList + 880)
        result = (char*)sub_140133CE0(*(_QWORD*)(a1 + 136));
    return result;
    */
    
}

unsigned __int64  sub_140133CE0(__int64 a1)
{
    /*
    __int64 v1; // r13
    int v2; // er12
    __int64 v3; // r8
    unsigned __int64 result; // rax
    __int64 v5; // r15
    char* v6; // rbx
    char* v7; // rsi
    unsigned __int64 v8; // rdi
    __int64 v9; // rdi
    char* v10; // rdx
    signed __int64 v11; // rbx
    __int64 v12; // rax
    int v13; // esi
    char* v14; // rdi
    unsigned __int64 v15; // rbp
    _QWORD* v16; // rbx
    volatile signed __int32* v17; // rbx
    char* v18; // rax
    __int128 Block; // [rsp+20h] [rbp-48h]
    char* v20; // [rsp+30h] [rbp-38h]

    v1 = a1;
    v2 = 0;
    v3 = *(_QWORD*)(a1 + 192);
    result = (unsigned __int64)((unsigned __int128)((*(_QWORD*)(a1 + 200) - v3) * (__int128)0x2AAAAAAAAAAAAAABi64) >> 64) >> 63;
    if ((*(_QWORD*)(a1 + 200) - v3) / 24)
    {
        v5 = 0i64;
        do
        {
            Block = 0i64;
            v20 = 0i64;
            v6 = *(char**)(v5 + v3);
            v7 = *(char**)(v5 + v3 + 8);
            if (v6 != v7)
            {
                v8 = (v7 - v6) >> 4;
                if (v8 > 0xFFFFFFFFFFFFFFFi64)
                    sub_140001B80(a1);
                v9 = 16 * v8;
                v10 = (char*)sub_140002110(v9);
                *(_QWORD*)&Block = v10;
                v20 = &v10[v9];
                v11 = v6 - v10;
                do
                {
                    *(_QWORD*)v10 = 0i64;
                    *((_QWORD*)v10 + 1) = 0i64;
                    v12 = *(_QWORD*)&v10[v11 + 8];
                    if (v12)
                        _InterlockedIncrement((volatile signed __int32*)(v12 + 8));
                    *(_QWORD*)v10 = *(_QWORD*)&v10[v11];
                    *((_QWORD*)v10 + 1) = *(_QWORD*)&v10[v11 + 8];
                    v10 += 16;
                } while (&v10[v11] != v7);
                *((_QWORD*)&Block + 1) = v10;
            }
            v13 = 0;
            v14 = (char*)Block;
            v15 = (__int64)(*((_QWORD*)&Block + 1) - Block) >> 4;
            if (v15)
            {
                v16 = (_QWORD*)Block;
                do
                {
                    sub_140165980(*v16);
                    ++v13;
                    v16 += 2;
                } while (v13 < v15);
            }
            if ((_QWORD)Block)
            {
                if ((_QWORD)Block != *((_QWORD*)&Block + 1))
                {
                    do
                    {
                        v17 = (volatile signed __int32*)*((_QWORD*)v14 + 1);
                        if (v17)
                        {
                            if (_InterlockedExchangeAdd(v17 + 2, 0xFFFFFFFF) == 1)
                            {
                                (**(void(__fastcall***)(volatile signed __int32*))v17)(v17);
                                if (_InterlockedExchangeAdd(v17 + 3, 0xFFFFFFFF) == 1)
                                    (*(void(__fastcall**)(volatile signed __int32*))(*(_QWORD*)v17 + 8i64))(v17);
                            }
                        }
                        v14 += 16;
                    } while (v14 != *((char**)&Block + 1));
                    v14 = (char*)Block;
                }
                v18 = v14;
                if (((v20 - v14) & 0xFFFFFFFFFFFFFFF0ui64) >= 0x1000)
                {
                    v14 = (char*)*((_QWORD*)v14 - 1);
                    if ((unsigned __int64)(v18 - v14 - 8) > 0x1F)
                        invalid_parameter_noinfo_noreturn();
                }
                j_j_free(v14);
            }
            ++v2;
            v5 += 24i64;
            v3 = *(_QWORD*)(v1 + 192);
            a1 = *(_QWORD*)(v1 + 200) - v3;
            result = v2;
        } while (v2 < (unsigned __int64)(a1 / 24));
    }
    return result;
    */
    return 0;
}