#include "FilterControlComponent.h"
FilterControlComponent::FilterControlComponent()
{

}

FilterControlComponent::~FilterControlComponent()
{

}

void FilterControlComponent::paint(Graphics& g)
{
	/*v4 = *(_QWORD*)(a1 + 24);
	if (v4)
	{
		while (!_RTDynamicCast(
			v4,
			0i64,
			&juce::Component `RTTI Type Descriptor',
			& AcousticEditorComponent `RTTI Type Descriptor',
			0))
		{
			v4 = *(_QWORD*)(v4 + 24);
			if (!v4)
				goto LABEL_56;
		}
		if (!(unsigned int)compareIgnoreCase(*(char**)(a1 + 320), "twowaygen1")
			|| !(unsigned int)compareIgnoreCase(*(char**)(a1 + 320), "twowaygen2")
			|| !(unsigned int)compareIgnoreCase(*(char**)(a1 + 320), "threewaygen1")
			|| !(unsigned int)compareIgnoreCase(*(char**)(a1 + 320), "threewaygen1_1")
			|| !(unsigned int)compareIgnoreCase(*(char**)(a1 + 320), "threewaygen2")
			|| !(unsigned int)compareIgnoreCase(*(char**)(a1 + 320), "WooferExtensionGen2"))
		{
			for (i = *(_QWORD*)(a1 + 24); i; i = *(_QWORD*)(i + 24))
			{
				if (_RTDynamicCast(
					i,
					0i64,
					&juce::Component `RTTI Type Descriptor',
					& AcousticEditorComponent `RTTI Type Descriptor',
					0))
				{
					break;
				}
			}
			v6 = *(_DWORD*)(a1 + 184);
			v7 = 300;
			if (v6 != 2)
			{
			LABEL_35:
				if (v6)
					goto LABEL_56;
				v21 = *(_QWORD*)(*(_QWORD*)(*((_QWORD*)ArgList + 66) + 8i64)
					+ 8i64 * *(int*)(*((_QWORD*)ArgList + 66) + 268i64)
					- 8);
				if (!*(_DWORD*)(v21 + 548))
				{
					if (*(int*)(v21 + 544) >= 0)
					{
						Component::setEnabled(*(_QWORD*)(a1 + 344), 1);
						Component::setEnabled(*(_QWORD*)(a1 + 336), 1);
					LABEL_55:
						(*(void(__fastcall * *)(_QWORD, _QWORD, int*, int*))(***(_QWORD * **)(a1 + 296) + 216i64))(
							**(_QWORD * *)(a1 + 296),
							*(unsigned int*)(a1 + 184),
							&v45,
							&v44);
						sub_14009F400(*(_QWORD*)(*(_QWORD*)(a1 + 344) + 512i64), v31, 0i64);
						sub_14009F400(*(_QWORD*)(*(_QWORD*)(a1 + 336) + 512i64), v32, 0i64);
						goto LABEL_56;
					}
					*(_DWORD*)(v21 + 548) = 6;
				}
				v22 = *(_DWORD*)(a1 + 44);
				v23 = *(_DWORD*)(a1 + 40);
				if (v23 < 300)
					v7 = *(_DWORD*)(a1 + 40);
				*(_QWORD*)& v51 = (unsigned int)(v23 - v7);
				*((_QWORD*)& v51 + 1) = __PAIR64__(v22, v7);
				Component::setEnabled(*(_QWORD*)(a1 + 344), 0);
				Component::setEnabled(*(_QWORD*)(a1 + 336), 0);
				v24 = a1;
				while (1)
				{
					v25 = *(_QWORD*)(v24 + 80);
					if (v25)
					{
						v26 = *(_QWORD*)(v25 + 16);
						if (v26)
							break;
					}
					v24 = *(_QWORD*)(v24 + 24);
					if (!v24)
					{
						v27 = qword_140EC0000;
						if (!qword_140EC0000)
						{
							v54 = operator new(0x130ui64);
							v27 = Desktop::Desktop((__int64)v54);
							qword_140EC0000 = v27;
						}
						v26 = Desktop::getDefaultLookAndFeel(v27);
						break;
					}
				}
				v28 = LookAndFeel::findColour(v26, &v53, 16777857);
				Graphics::setColour(a2, *v28);
				sub_140048D00(&v49, "Filter is controlled by SCP.");
				sub_14031AF20((__int64*)& v46, &v49);
				v29 = (void*)(v49 - 16);
				if ((*(_DWORD*)(v49 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v29) == -1)
					j_j_free(v29);
				v56 = v51;
				Graphics::drawFittedText(a2, &v46, (int*)& v56, 36, 1, 0);
				v30 = v46 - 16;
				if ((*((_DWORD*)v46 - 4) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v30) == -1)
					j_j_free(v30);
				goto LABEL_55;
			}
			v8 = *(_QWORD*)(*(_QWORD*)(*((_QWORD*)ArgList + 66) + 8i64)
				+ 8i64 * *(int*)(*((_QWORD*)ArgList + 66) + 268i64)
				- 8);
			if (!*(_DWORD*)(v8 + 548))
			{
				if (*(int*)(v8 + 544) >= 0)
				{
					Component::setEnabled(*(_QWORD*)(a1 + 344), 1);
					Component::setEnabled(*(_QWORD*)(a1 + 336), 1);
				LABEL_34:
					(*(void(__fastcall * *)(_QWORD, _QWORD, int*, int*))(***(_QWORD * **)(a1 + 296) + 232i64))(
						**(_QWORD * *)(a1 + 296),
						(unsigned int)(*(_DWORD*)(a1 + 184) - 2),
						&v43,
						&v42);
					sub_14009F400(*(_QWORD*)(*(_QWORD*)(a1 + 344) + 512i64), v19, 0i64);
					sub_14009F400(*(_QWORD*)(*(_QWORD*)(a1 + 336) + 512i64), v20, 0i64);
					v6 = *(_DWORD*)(a1 + 184);
					goto LABEL_35;
				}
				*(_DWORD*)(v8 + 548) = 6;
			}
			v9 = *(_DWORD*)(a1 + 44);
			v10 = *(_DWORD*)(a1 + 40);
			v11 = 300;
			if (v10 < 300)
				v11 = *(_DWORD*)(a1 + 40);
			*(_QWORD*)& v50 = (unsigned int)(v10 - v11);
			*((_QWORD*)& v50 + 1) = __PAIR64__(v9, v11);
			Component::setEnabled(*(_QWORD*)(a1 + 344), 0);
			Component::setEnabled(*(_QWORD*)(a1 + 336), 0);
			v12 = a1;
			while (1)
			{
				v13 = *(_QWORD*)(v12 + 80);
				if (v13)
				{
					v14 = *(_QWORD*)(v13 + 16);
					if (v14)
						break;
				}
				v12 = *(_QWORD*)(v12 + 24);
				if (!v12)
				{
					v15 = qword_140EC0000;
					if (!qword_140EC0000)
					{
						v46 = operator new(0x130ui64);
						v15 = Desktop::Desktop((__int64)v46);
						qword_140EC0000 = v15;
					}
					v14 = Desktop::getDefaultLookAndFeel(v15);
					break;
				}
			}
			v16 = LookAndFeel::findColour(v14, &v52, 16777857);
			Graphics::setColour(a2, *v16);
			sub_140048D00(&v47, "Filter is controlled by SCP.");
			sub_14031AF20((__int64*)& v48, &v47);
			v17 = (void*)(v47 - 16);
			if ((*(_DWORD*)(v47 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v17) == -1)
				j_j_free(v17);
			v55 = v50;
			Graphics::drawFittedText(a2, &v48, (int*)& v55, 36, 1, 0);
			v18 = v48 - 16;
			if ((*((_DWORD*)v48 - 4) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v18) == -1)
				j_j_free(v18);
			goto LABEL_34;
		}
	}
LABEL_56:
	v33 = *(_QWORD*)(a1 + 24);
	if (!v33)
		return;
	while (!_RTDynamicCast(
		v33,
		0i64,
		&juce::Component `RTTI Type Descriptor',
		& ProfilerComponent `RTTI Type Descriptor',
		0))
	{
		v33 = *(_QWORD*)(v33 + 24);
		if (!v33)
			return;
	}
	sub_1402021B0(v62);
	sub_1402021B0(v57);
	v34 = *(_QWORD*)(*(_QWORD*)(*((_QWORD*)ArgList + 66) + 8i64)
		+ 8i64 * *(int*)(*((_QWORD*)ArgList + 66) + 268i64)
		- 8);
	sub_140007FA0(v62, v34 + 24);
	sub_140007FA0(v57, v34 + 136);
	if ((unsigned int)String::isNotEmpty(*(_BYTE * *)(a1 + 200), "LOWSHELF"))
	{
		if ((unsigned int)String::isNotEmpty(*(_BYTE * *)(a1 + 200), "HISHELF"))
			goto LABEL_65;
		*(_QWORD*)(a1 + 216) = v61;
		*(_QWORD*)(a1 + 208) = v60;
		sub_14009F400(*(_QWORD*)(*(_QWORD*)(a1 + 336) + 512i64), v37, 0i64);
	}
	else
	{
		*(_QWORD*)(a1 + 216) = v66;
		*(_QWORD*)(a1 + 208) = v65;
		sub_14009F400(*(_QWORD*)(*(_QWORD*)(a1 + 336) + 512i64), v35, 0i64);
	}
	sub_14009F400(*(_QWORD*)(*(_QWORD*)(a1 + 344) + 512i64), v36, 0i64);
LABEL_65:
	v38 = (void*)(v59 - 16);
	if ((*(_DWORD*)(v59 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v38) == -1)
		j_j_free(v38);
	v39 = (void*)(v58 - 16);
	if ((*(_DWORD*)(v58 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v39) == -1)
		j_j_free(v39);
	v40 = (void*)(v64 - 16);
	if ((*(_DWORD*)(v64 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v40) == -1)
		j_j_free(v40);
	v41 = (void*)(v63 - 16);
	if ((*(_DWORD*)(v63 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v41) == -1)
		j_j_free(v41);*/
}

void FilterControlComponent::resized()
{
/*
	Component::setBounds(
		*(_QWORD*)(a1 + 328),
		0,
		0,
		100,
		COERCE_UNSIGNED_INT64((float) * (int*)(a1 + 44) + 6.755399441055744e15));
	Component::setBounds(
		*(_QWORD*)(a1 + 336),
		100,
		0,
		120,
		COERCE_UNSIGNED_INT64((float) * (int*)(a1 + 44) + 6.755399441055744e15));
	Component::setBounds(
		*(_QWORD*)(a1 + 344),
		230,
		0,
		120,
		COERCE_UNSIGNED_INT64((float) * (int*)(a1 + 44) + 6.755399441055744e15));
	return Component::setBounds(
		*(_QWORD*)(a1 + 352),
		360,
		0,
		120,
		COERCE_UNSIGNED_INT64((float) * (int*)(a1 + 44) + 6.755399441055744e15));
*/
}

void FilterControlComponent::sliderValueChanged(Slider* slider)
{
	/*v2 = *(double*)sub_14009F390(*(_QWORD*)(*(_QWORD*)(a1 + 160) + 512i64)).m128_u64;
	v37 = v2;
	v3 = *(double*)sub_14009F390(*(_QWORD*)(*(_QWORD*)(a1 + 168) + 512i64)).m128_u64;
	v36 = v3;
	v4 = *(double*)sub_14009F390(*(_QWORD*)(*(_QWORD*)(a1 + 176) + 512i64)).m128_u64;
	v38 = v4;
	v5 = *(_QWORD*)(a1 - 152);
	if (v5)
	{
		do
		{
			v6 = _RTDynamicCast(
				v5,
				0i64,
				&juce::Component `RTTI Type Descriptor',
				& AcousticEditorComponent `RTTI Type Descriptor',
				0);
			if (v6)
			{
				if ((unsigned int)compareIgnoreCase(*(char**)(a1 + 144), "twowaygen1")
					&& (unsigned int)compareIgnoreCase(*(char**)(a1 + 144), "twowaygen2")
					&& (unsigned int)compareIgnoreCase(*(char**)(a1 + 144), "threewaygen1")
					&& (unsigned int)compareIgnoreCase(*(char**)(a1 + 144), "threewaygen1_1")
					&& (unsigned int)compareIgnoreCase(*(char**)(a1 + 144), "threewaygen2")
					&& (unsigned int)compareIgnoreCase(*(char**)(a1 + 144), "WooferExtensionGen2"))
				{
					if (!(unsigned int)String::isNotEmpty(*(_BYTE * *)(a1 + 24), "NOTCH"))
						(*(void(__fastcall * *)(_QWORD, _QWORD, float*, float*, float*, _BYTE))(***(_QWORD * **)(a1 + 120) + 256i64))(
							**(_QWORD * *)(a1 + 120),
							*(unsigned int*)(a1 + 8),
							&v37,
							&v36,
							&v38,
							0);
				}
				else if ((unsigned int)String::isNotEmpty(*(_BYTE * *)(a1 + 24), "LOWSHELF"))
				{
					if ((unsigned int)String::isNotEmpty(*(_BYTE * *)(a1 + 24), "HISHELF"))
					{
						if (!(unsigned int)String::isNotEmpty(*(_BYTE * *)(a1 + 24), "NOTCH"))
						{
							(*(void(__fastcall * *)(_QWORD, _QWORD, float*, float*, float*, _BYTE))(***(_QWORD * **)(a1 + 120)
								+ 256i64))(
									**(_QWORD * *)(a1 + 120),
									(unsigned int)(*(_DWORD*)(a1 + 8) - 4),
									&v37,
									&v36,
									&v38,
									0);
							v11 = *(_QWORD * *)(a1 + 128);
							if (v11)
							{
								LOBYTE(v35) = 0;
								(*(void(__fastcall * *)(_QWORD, _QWORD, float*, float*, float*, int))(*(_QWORD*)* v11 + 256i64))(
									*v11,
									(unsigned int)(*(_DWORD*)(a1 + 8) + 8),
									&v37,
									&v36,
									&v38,
									v35);
							}
						}
					}
					else
					{
						LOBYTE(v32) = 0;
						(*(void(__fastcall * *)(_QWORD, _QWORD, float*, float*, int))(***(_QWORD * **)(a1 + 120) + 240i64))(
							**(_QWORD * *)(a1 + 120),
							(unsigned int)(*(_DWORD*)(a1 + 8) - 2),
							&v37,
							&v36,
							v32);
						v10 = *(_QWORD * *)(a1 + 128);
						if (v10)
						{
							LOBYTE(v34) = 0;
							(*(void(__fastcall * *)(_QWORD, _QWORD, float*, float*, int))(*(_QWORD*)* v10 + 240i64))(
								*v10,
								(unsigned int)(*(_DWORD*)(a1 + 8) - 2),
								&v37,
								&v36,
								v34);
						}
					}
				}
				else
				{
					LOBYTE(v32) = 0;
					(*(void(__fastcall * *)(_QWORD, _QWORD, float*, float*, int))(***(_QWORD * **)(a1 + 120) + 224i64))(
						**(_QWORD * *)(a1 + 120),
						*(unsigned int*)(a1 + 8),
						&v37,
						&v36,
						v32);
					v9 = *(_QWORD * *)(a1 + 128);
					if (v9)
					{
						LOBYTE(v33) = 0;
						(*(void(__fastcall * *)(_QWORD, _QWORD, float*, float*, int))(*(_QWORD*)* v9 + 224i64))(
							*v9,
							*(unsigned int*)(a1 + 8),
							&v37,
							&v36,
							v33);
					}
				}
				Component::setEnabled(*(_QWORD*)(v6 + 392), 1);
				v12 = *(_QWORD*)(v6 + 304);
				sub_140150180(v12);
				v39.m128i_i64[0] = 0i64;
				v39.m128i_i64[1] = *(_QWORD*)(v12 + 40);
				Component::internalRepaintUnchecked(v12, &v39, 1);
				return;
			}
			v5 = *(_QWORD*)(v5 + 24);
		} while (v5);
		v7 = *(_QWORD*)(a1 - 152);
		if (v7)
		{
			while (1)
			{
				v8 = _RTDynamicCast(
					v7,
					0i64,
					&juce::Component `RTTI Type Descriptor',
					& ProfilerComponent `RTTI Type Descriptor',
					0);
				if (v8)
					break;
				v7 = *(_QWORD*)(v7 + 24);
				if (!v7)
					return;
			}
			sub_1402021B0(&v70);
			sub_1402021B0(&v60);
			v13 = *((_QWORD*)ArgList + 66);
			v14 = *(int*)(v13 + 268);
			v15 = *(_QWORD*)(*(_QWORD*)(v13 + 8) + 8 * v14 - 8);
			sub_140007FA0(&v70, v15 + 24);
			sub_140007FA0(&v60, v15 + 136);
			if ((unsigned int)String::isNotEmpty(*(_BYTE * *)(a1 + 24), "LOWSHELF"))
			{
				if (!(unsigned int)String::isNotEmpty(*(_BYTE * *)(a1 + 24), "HISHELF"))
				{
					v19 = v36;
					*(double*)(a1 + 40) = v36;
					v20 = v37;
					*(double*)(a1 + 32) = v37;
					*(double*)& v63 = v20;
					*((double*)& v63 + 1) = v19;
					sub_14009F400(*(_QWORD*)(*(_QWORD*)(a1 + 168) + 512i64), v18, 0i64);
				}
			}
			else
			{
				v16 = v36;
				*(double*)(a1 + 40) = v36;
				v17 = v37;
				*(double*)(a1 + 32) = v37;
				*(double*)& v73 = v17;
				*((double*)& v73 + 1) = v16;
			}
			v21 = *(_QWORD*)(*(_QWORD*)(*((_QWORD*)ArgList + 66) + 8i64) + 8 * v14 - 8);
			v40 = v60;
			v41 = v61;
			if ((*(_DWORD*)(v61 - 16) & 0x30000000) == 0)
				_InterlockedIncrement((volatile signed __int32*)(v61 - 16));
			v42 = v62;
			if ((*(_DWORD*)(v62 - 16) & 0x30000000) == 0)
				_InterlockedIncrement((volatile signed __int32*)(v62 - 16));
			v43 = v63;
			v44 = v64;
			v45 = v65;
			v46 = v66;
			v47 = v67;
			v48 = v68;
			v49 = v69;
			v50 = v70;
			v51 = v71;
			if ((*(_DWORD*)(v71 - 16) & 0x30000000) == 0)
				_InterlockedIncrement((volatile signed __int32*)(v71 - 16));
			v52 = v72;
			if ((*(_DWORD*)(v72 - 16) & 0x30000000) == 0)
				_InterlockedIncrement((volatile signed __int32*)(v72 - 16));
			v53 = v73;
			v54 = v74;
			v55 = v75;
			v56 = v76;
			v57 = v77;
			v58 = v78;
			v59 = v79;
			sub_140218790(v21, &v50, &v40);
			v22 = *(_QWORD*)(v8 + 600);
			v23 = sub_1403FA9F0(v22);
			v25 = ComboBox::selectIfEnabled(v22, v23 - 1, v24);
			if (v25)
				v26 = *(_DWORD*)(v25 + 8);
			else
				v26 = 0;
			ComboBox::setSelectedId(v22, v26, 0);
			*(_DWORD*)(v8 + 552) = ComboBox::getSelectedItemIndex(*(_QWORD*)(v8 + 600));
			sub_140198D50(v8);
			v27 = ArgList;
			if (*((_BYTE*)ArgList + 1040)
				&& !_InterlockedCompareExchange((volatile signed __int32*)(*((_QWORD*)ArgList + 126) + 24i64), 1, 0)
				&& !MessageManager::MessageBase::post(v27[126]))
			{
				_InterlockedExchange((volatile __int32*)(v27[126] + 24i64), 0);
			}
			v28 = (void*)(v62 - 16);
			if ((*(_DWORD*)(v62 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v28) == -1)
				j_j_free(v28);
			v29 = (void*)(v61 - 16);
			if ((*(_DWORD*)(v61 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v29) == -1)
				j_j_free(v29);
			v30 = (void*)(v72 - 16);
			if ((*(_DWORD*)(v72 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v30) == -1)
				j_j_free(v30);
			v31 = (void*)(v71 - 16);
			if ((*(_DWORD*)(v71 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v31) == -1)
				j_j_free(v31);
		}
	}*/
}

