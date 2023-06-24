#include "MidiHandler.h"

void MidiHandler::handleIncomingMidiMessage(MidiInput* source, const MidiMessage& message)//__int64  sub_1401CC1D0(__int64 a1, __int64* a2, __int64 a3)//override
{
    /*
    unsigned __int8* v6; // rbx
    unsigned __int8 v7; // di
    __int64 result; // rax
    volatile signed __int32* v9; // rdi
    unsigned __int8 v10; // [rsp+28h] [rbp-20h]
    __int64 v11; // [rsp+50h] [rbp+8h] BYREF

    v6 = (unsigned __int8*)(a1 + 916);
    v7 = *(_BYTE*)(a1 + 916);
    v10 = v7;
    *(_BYTE*)(a1 + 916) = 1;
    result = sub_140282540(a1 + 920, a3);
    if (*(_BYTE*)(a1 + 1256))
    {
        *v6 = v7;
    }
    else
    {
        v11 = *a2;
        v9 = (volatile signed __int32*)(v11 - 16);
        if ((*(_DWORD*)(v11 - 16) & 0x30000000) == 0)
            _InterlockedIncrement(v9);
        sub_1401CBE40(a1, a3, &v11);
        if ((*v9 & 0x30000000) == 0 && _InterlockedDecrement(v9) == -1)
            j_j_free((void*)v9);
        result = v10;
        *v6 = v10;
    }
    return result;
    */
    return ;
}

void MidiHandler::handleNoteOn(MidiKeyboardState* source, int midiChannel, int midiNoteNumber, float velocity)//void  sub_1401CC030(__int64 a1, __int64 a2, int a3, char a4, float a5)//override
{
    /*
    double v6; // xmm1_8
    unsigned int v7; // eax
    unsigned __int8 v8; // cl
    int v9; // eax
    double v10; // xmm6_8
    __int64 v11; // rdi
    double* v12; // rdx
    __int64 v13; // rcx
    volatile signed __int32* v14; // rbx
    LARGE_INTEGER PerformanceCount; // [rsp+28h] [rbp-50h] BYREF
    __int64 v16[2]; // [rsp+30h] [rbp-48h] BYREF
    __int64 v17; // [rsp+40h] [rbp-38h]
    double v18; // [rsp+48h] [rbp-30h]
    int v19; // [rsp+50h] [rbp-28h]

    if (!*(_BYTE*)(a1 + 908))
    {
        v6 = (float)(a5 * 127.0) + 6.755399441055744e15;
        if (SLODWORD(v6) >= 0)
        {
            v8 = LOBYTE(v6);
            if (SLODWORD(v6) > 127)
                v8 = 127;
            v7 = v8;
        }
        else
        {
            v7 = 0;
            v8 = 0;
        }
        if (v7 > 0x7F)
            v8 = 127;
        v9 = a3 - 1;
        if (a3 - 1 >= 0)
        {
            if (v9 > 15)
                LOBYTE(v9) = 15;
        }
        else
        {
            LOBYTE(v9) = 0;
        }
        v19 = 3;
        LOBYTE(v17) = v9 | 0x90;
        BYTE1(v17) = a4 & 0x7F;
        BYTE2(v17) = v8;
        QueryPerformanceCounter(&PerformanceCount);
        v10 = (double)((int)qword_140EC0110 + PerformanceCount.LowPart) * *(double*)&qword_140EC0118 * 0.001;
        v18 = v10;
        v11 = a1 - 8;
        sub_140048D00(v16, "On-Screen Keyboard");
        v12 = (double*)operator new(0x38ui64);
        v16[1] = (__int64)v12;
        *((_DWORD*)v12 + 2) = 0;
        *(_QWORD*)v12 = &MidiHandler::IncomingMessageCallback::`vftable';
            v12[4] = v10;
        *((_DWORD*)v12 + 10) = 3;
        *((_QWORD*)v12 + 3) = v17;
        v13 = v16[0];
        v12[6] = *(double*)v16;
        v14 = (volatile signed __int32*)(v13 - 16);
        if ((*(_DWORD*)(v13 - 16) & 0x30000000) == 0)
            _InterlockedIncrement(v14);
        *((_QWORD*)v12 + 2) = v11;
        MessageManager::MessageBase::post((__int64)v12);
        if ((*v14 & 0x30000000) == 0 && _InterlockedDecrement(v14) == -1)
            j_j_free((void*)v14);
    }
    */
}

void MidiHandler::handleNoteOff(MidiKeyboardState* source, int midiChannel, int midiNoteNumber, float velocity)//void  sub_1401CBED0(__int64 a1, __int64 a2, int a3, char a4)//override
{
    /*
    int v5; // eax
    double v6; // xmm6_8
    __int64 v7; // rdi
    double* v8; // rdx
    __int64 v9; // rcx
    volatile signed __int32* v10; // rbx
    LARGE_INTEGER PerformanceCount; // [rsp+20h] [rbp-58h] BYREF
    __int64 v12[2]; // [rsp+28h] [rbp-50h] BYREF
    __int64 v13; // [rsp+38h] [rbp-40h]
    double v14; // [rsp+40h] [rbp-38h]
    int v15; // [rsp+48h] [rbp-30h]

    if (!*(_BYTE*)(a1 + 908))
    {
        v5 = a3 - 1;
        if (a3 - 1 >= 0)
        {
            if (v5 > 15)
                LOBYTE(v5) = 15;
        }
        else
        {
            LOBYTE(v5) = 0;
        }
        v15 = 3;
        LOBYTE(v13) = v5 | 0x80;
        *(_WORD*)((char*)&v13 + 1) = a4 & 0x7F;
        QueryPerformanceCounter(&PerformanceCount);
        v6 = (double)((int)qword_140EC0110 + PerformanceCount.LowPart) * *(double*)&qword_140EC0118 * 0.001;
        v14 = v6;
        v7 = a1 - 8;
        sub_140048D00(v12, "On-Screen Keyboard");
        v8 = (double*)operator new(0x38ui64);
        v12[1] = (__int64)v8;
        *((_DWORD*)v8 + 2) = 0;
        *(_QWORD*)v8 = &MidiHandler::IncomingMessageCallback::`vftable';
            v8[4] = v6;
        *((_DWORD*)v8 + 10) = 3;
        *((_QWORD*)v8 + 3) = v13;
        v9 = v12[0];
        v8[6] = *(double*)v12;
        v10 = (volatile signed __int32*)(v9 - 16);
        if ((*(_DWORD*)(v9 - 16) & 0x30000000) == 0)
            _InterlockedIncrement(v10);
        *((_QWORD*)v8 + 2) = v7;
        MessageManager::MessageBase::post((__int64)v8);
        if ((*v10 & 0x30000000) == 0 && _InterlockedDecrement(v10) == -1)
            j_j_free((void*)v10);
    }
    */
}

void MidiHandler::changeListenerCallback(ChangeBroadcaster* source)//__int64  sub_1401CA9A0(__int64 a1, __int64 a2)//override
{
    /*
    _QWORD* v2; // rbx
    __int64 v5; // r8
    __int64 result; // rax

    v2 = qword_140EBFF98;
    v5 = *((_QWORD*)qword_140EBFF98 + 7);
    if (!v5)
    {
        sub_14031E290(qword_140EBFF98);
        v5 = v2[7];
    }
    result = v5 + 104;
    if (!v5)
        result = 0i64;
    if (a2 == result)
        result = sub_1401CA0B0(a1 - 16);
    return result;
    */
   
}

void MidiHandler::IncomingMessageCallback::messageCallback()//__int64  sub_140007370(__int64 a1)//override
{
    /*
    __int64 result; // rax

    result = *(_QWORD*)(a1 + 16);
    if (result)
        result = sub_1401CAA10(*(_QWORD*)(a1 + 16), a1 + 24, a1 + 48);
    return result;
    */    
}