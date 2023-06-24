#include "FilterContainerComponent.h"
FilterContainerComponent::FilterContainerComponent()
{

}

FilterContainerComponent::~FilterContainerComponent()
{

}

void FilterContainerComponent::resized()
{
/*
	v2 = 24;
	v3 = *(_DWORD*)(a1 + 40);
	v4 = 100;
	v28 = v3;
	v5 = 120;
	v6 = *(_DWORD*)(a1 + 44);
	v7 = 120;
	if (v6 < 24)
		v2 = *(_DWORD*)(a1 + 44);
	v8 = v6 - v2;
	v27 = v2;
	if (v3 < 100)
		v4 = v3;
	v9 = v3 - v4;
	v10 = 0;
	if (v3 - v4 < 120)
		v7 = v3 - v4;
	Component::setBounds(*(_QWORD*)(a1 + 224), v4, 0, v7, v2);
	v11 = v9 - v7;
	v12 = 20;
	v13 = 20;
	if (v11 < 20)
		v13 = v11;
	v14 = v13 + v7 + v4;
	v15 = v11 - v13;
	v16 = 120;
	if (v15 < 120)
		v16 = v15;
	Component::setBounds(*(_QWORD*)(a1 + 232), v14, 0, v16, v27);
	v17 = v15 - v16;
	if (v17 < 20)
		v12 = v17;
	v18 = v17 - v12;
	if (v18 < 120)
		v5 = v18;
	v19 = v27;
	Component::setBounds(*(_QWORD*)(a1 + 240), v16 + v12 + v14, 0, v5, v27);
	v20 = *(_QWORD*)(a1 + 208);
	v21 = *(_QWORD*)(a1 + 200);
	if ((v20 - v21) >> 3)
	{
		v22 = 0i64;
		do
		{
			v23 = 25;
			if (v8 < 25)
				v23 = v8;
			Component::setBounds(*(_QWORD*)(*(_QWORD*)(a1 + 200) + v22), 0, v19, v28, v23);
			v20 = *(_QWORD*)(a1 + 208);
			v22 += 8i64;
			v21 = *(_QWORD*)(a1 + 200);
			v24 = v8 - v23;
			v25 = 10;
			if (v24 < 10)
				v25 = v24;
			++v10;
			v8 = v24 - v25;
			v19 += v25 + v23;
		} while (v10 < (unsigned __int64)((v20 - v21) >> 3));
	}
	return Component::setBounds(
		a1,
		*(_DWORD*)(a1 + 32),
		*(_DWORD*)(a1 + 36),
		*(_DWORD*)(a1 + 40),
		35 * ((v20 - v21) >> 3) + 24);*/
}