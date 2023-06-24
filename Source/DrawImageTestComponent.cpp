#include "DrawImageTestComponent.h"
DrawImageTestComponent::DrawImageTestComponent()
{

}

DrawImageTestComponent::~DrawImageTestComponent()
{

}

void DrawImageTestComponent::lookAndFeelChanged()
{
/*
	v1 = a1;
	v2 = a1;
	for (i = a1 == 0; !i; i = v2 == 0)
	{
		v4 = *(_QWORD*)(v2 + 80);
		if (v4)
		{
			v5 = *(_QWORD*)(v4 + 16);
			if (v5)
			{
				LookAndFeel::findColour(v5, &v14, 255);
				goto LABEL_10;
			}
		}
		v2 = *(_QWORD*)(v2 + 24);
	}
	v6 = qword_140EC0000;
	if (!qword_140EC0000)
	{
		v14 = operator new(0x130ui64);
		v6 = Desktop::Desktop((__int64)v14);
		qword_140EC0000 = v6;
	}
	v7 = Desktop::getDefaultLookAndFeel(v6);
	LookAndFeel::findColour(v7, &v14, 255);
	if (!v1)
	{
	LABEL_14:
		v11 = qword_140EC0000;
		if (!qword_140EC0000)
		{
			v15 = operator new(0x130ui64);
			v11 = Desktop::Desktop((__int64)v15);
			qword_140EC0000 = v11;
		}
		v10 = Desktop::getDefaultLookAndFeel(v11);
		goto LABEL_17;
	}
LABEL_10:
	v8 = v1;
	while (1)
	{
		v9 = *(_QWORD*)(v8 + 80);
		if (v9)
		{
			v10 = *(_QWORD*)(v9 + 16);
			if (v10)
				break;
		}
		v8 = *(_QWORD*)(v8 + 24);
		if (!v8)
			goto LABEL_14;
	}
LABEL_17:
	LookAndFeel::findColour(v10, &v15, 254);
	v12 = (int)v15;
	(*(void(__fastcall * *)(_QWORD, _QWORD, _QWORD))(**(_QWORD * *)(v1 + 192) + 368i64))(
		*(_QWORD*)(v1 + 192),
		*(unsigned int*)(v1 + 188),
		(unsigned int)v15);
	*(_DWORD*)(v1 + 188) = v12;
	return sub_1401412D0(v1, (unsigned int)v14);*/
}

void DrawImageTestComponent::paint(Graphics& g)
{
/*
	v3 = *(__int64**)(a1 + 192);
	v5 = *(_DWORD*)(a1 + 40);
	v40 = (float)v5 + 6.755399441055744e15;
	v6 = (unsigned int)(v5 / 2 - SLODWORD(v40) / 2);
	v7 = *(_DWORD*)(a1 + 44);
	v41 = (float)v7 + 6.755399441055744e15;
	v8 = v41;
	v9 = (unsigned int)(v7 / 2 - SLODWORD(v8) / 2);
	if (v3)
	{
		v10 = **(_QWORD * *)(a1 + 176);
		if (v10 && *(_BYTE*)(v10 + 96))
		{
			v11 = _mm_cvtsi32_si128(LODWORD(v40));
			v12 = *v3;
			LODWORD(v40) = 36;
			v13 = _mm_shuffle_ps(
				(__m128)COERCE_UNSIGNED_INT((float)(int)v6),
				(__m128)COERCE_UNSIGNED_INT((float)(int)v6),
				225);
			v13.m128_f32[0] = (float)(int)v9;
			v14 = _mm_shuffle_ps(v13, v13, 198);
			v14.m128_f32[0] = _mm_cvtepi32_ps(v11).m128_f32[0];
			v15 = _mm_shuffle_ps(v14, v14, 39);
			v15.m128_f32[0] = (float)SLODWORD(v41);
			v37 = _mm_shuffle_ps(v15, v15, 57);
			v16 = (float*)(*(__int64(__fastcall * *)(__int64*, char*))(v12 + 360))(v3, v38);
			v17 = RectanglePlacement::getTransformToFit((int*)& v40, v39, v16, v37.m128_f32);
			v18 = 1065353216;
		}
		else
		{
			v19 = _mm_cvtsi32_si128(LODWORD(v40));
			v20 = *v3;
			LODWORD(v40) = 36;
			v21 = _mm_shuffle_ps(
				(__m128)COERCE_UNSIGNED_INT((float)(int)v6),
				(__m128)COERCE_UNSIGNED_INT((float)(int)v6),
				225);
			v21.m128_f32[0] = (float)(int)v9;
			v22 = _mm_shuffle_ps(v21, v21, 198);
			v22.m128_f32[0] = _mm_cvtepi32_ps(v19).m128_f32[0];
			v23 = _mm_shuffle_ps(v22, v22, 39);
			v23.m128_f32[0] = (float)SLODWORD(v41);
			v37 = _mm_shuffle_ps(v23, v23, 57);
			v24 = (float*)(*(__int64(__fastcall * *)(__int64*, char*))(v20 + 360))(v3, v38);
			v17 = RectanglePlacement::getTransformToFit((int*)& v40, v39, v24, v37.m128_f32);
			v18 = 1056964608;
		}
		Drawable::nonConstDraw((__int64)v3, a2, *(float*)& v18, v17);
	}
	v25 = *(__int64**)(a1 + 200);
	v26 = *(_DWORD*)(a1 + 40);
	v27 = (float) * (int*)(a1 + 44);
	v40 = (float)v26 + 6.755399441055744e15;
	v42 = v40;
	v28 = _mm_cvtsi32_si128(LODWORD(v40));
	v29 = v26 / 2 - SLODWORD(v40) / 2;
	LODWORD(v40) = 18;
	v30 = _mm_shuffle_ps((__m128)COERCE_UNSIGNED_INT((float)v29), (__m128)COERCE_UNSIGNED_INT((float)v29), 225);
	*(double*)v37.m128_u64 = v27 + 6.755399441055744e15;
	v41 = *(double*)v37.m128_u64;
	v31 = *v25;
	v30.m128_f32[0] = (float)(SLODWORD(v41) / 2);
	v32 = _mm_shuffle_ps(v30, v30, 198);
	v32.m128_f32[0] = _mm_cvtepi32_ps(v28).m128_f32[0];
	v33 = _mm_shuffle_ps(v32, v32, 39);
	v33.m128_f32[0] = (float)(v37.m128_i32[0] / 2 - 2);
	v37 = _mm_shuffle_ps(v33, v33, 57);
	v34 = (float*)(*(__int64(__fastcall * *)(__int64*, char*, __int64, __int64, unsigned __int64, unsigned __int64))(v31 + 360))(
		v25,
		v38,
		v6,
		v9,
		v37.m128_u64[0],
		v37.m128_u64[1]);
	v35 = RectanglePlacement::getTransformToFit((int*)& v40, v39, v34, v37.m128_f32);
	return Drawable::nonConstDraw((__int64)v25, a2, 1.0, v35);*/
}

