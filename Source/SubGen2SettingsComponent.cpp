#include "SubGen2SettingsComponent.h"
void SubGen2SettingsComponent::paint(Graphics& g)
{
	/* if ( a1 )
  {
    while ( 1 )
    {
      v3 = *(_QWORD *)(a1 + 80);
      if ( v3 )
      {
        v4 = *(_QWORD *)(v3 + 16);
        if ( v4 )
          break;
      }
      a1 = *(_QWORD *)(a1 + 24);
      if ( !a1 )
        goto LABEL_5;
    }
  }
  else
  {
LABEL_5:
    v5 = qword_140EC0000;
    if ( !qword_140EC0000 )
    {
      v9 = operator new(0x130ui64);
      v5 = Desktop::Desktop((__int64)v9);
      qword_140EC0000 = v5;
    }
    v4 = Desktop::getDefaultLookAndFeel(v5);
  }
  v6 = LookAndFeel::findColour(v4, &v8, 16799488);
  return Graphics::fillAll(a2, *v6);*/
}
void SubGen2SettingsComponent::resized()
{
	/*return Component::setBounds(*(_QWORD*)(a1 + 248), *(_DWORD*)(a1 + 40) - 92, 112, 45, 24);*/
}
void SubGen2SettingsComponent::sliderValueChanged(Slider* slider)
{
	//v2 = *(_QWORD*)(a1 + 256);
	//if (a2 == v2)
	//{
	//	v3 = **(_QWORD * *)(a1 + 8);
	//	*(_DWORD*)(v3 + 104) = (int) * (double*)sub_14009F390(*(_QWORD*)(v2 + 512)).m128_u64;
	//}
}
void SubGen2SettingsComponent::comboBoxChanged(ComboBox* comboBoxThatHasChanged)
{
	/*if (a2 == *(_QWORD*)(a1 + 40))
	{
		if (!(unsigned __int8)sub_14022D2F0(*((_QWORD*)ArgList + 66))
			&& !(unsigned __int8)sub_14022D460(*((_QWORD*)ArgList + 66)))
		{
			sub_140218C10(
				*(__int64**)(*(_QWORD*)(*((_QWORD*)ArgList + 66) + 8i64)
					+ 8i64 * *(int*)(*((_QWORD*)ArgList + 66) + 268i64)
					- 8),
				85,
				1,
				v3);
		}
		sub_14022C310(*((_QWORD*)ArgList + 66), *(_QWORD * *)(a1 + 24));
		v4 = qword_140EBFF78;
		if (*(_DWORD*)(qword_140EBFF78 + 76) <= 1u)
			v5 = 0i64;
		else
			v5 = *(_QWORD*)(*(_QWORD*)(qword_140EBFF78 + 64) + 8i64);
		v43 = *(char**)(v5 + 16);
		v6 = (volatile signed __int32*)(v43 - 16);
		if ((*((_DWORD*)v43 - 4) & 0x30000000) == 0)
			_InterlockedIncrement(v6);
		if (!(unsigned int)compareIgnoreCase(v43, "EditGroup"))
		{
			if (*(_DWORD*)(v4 + 76) <= 1u)
				v7 = 0i64;
			else
				v7 = *(_QWORD*)(*(_QWORD*)(v4 + 64) + 8i64);
			sub_1401429A0(v7);
		}
		v8 = *(_QWORD*)(a1 + 32);
		v9 = *(_DWORD*)(v8 + 44);
		v10 = *(_DWORD*)(v8 + 40);
		v42.m128i_i64[0] = 0i64;
		v42.m128i_i64[1] = __PAIR64__(v9, v10);
		v47[0] = v42;
		Component::internalRepaintUnchecked(v8, v47, 1);
		sub_1401AB6D0(a1 - 184);
		if ((*v6 & 0x30000000) == 0 && _InterlockedDecrement(v6) == -1)
		{
			v11 = v43 - 16;
		LABEL_71:
			j_j_free(v11);
			return;
		}
	}
	else
	{
		if (a2 == *(_QWORD*)(a1 + 80))
		{
			sub_1401AC530(a1 - 184);
			return;
		}
		v12 = *(_QWORD*)(a1 + 112);
		if (a2 == v12)
		{
			v13 = 1;
			if ((unsigned int)ComboBox::getSelectedItemIndex(v12))
				v13 = 5 * (ComboBox::getSelectedItemIndex(*(_QWORD*)(a1 + 112)) + 9);
			(*(void(__fastcall * *)(_QWORD, _QWORD, _QWORD))(***(_QWORD * **)(a1 + 24) + 328i64))(
				**(_QWORD * *)(a1 + 24),
				v13,
				0i64);
		}
		else if (a2 == *(_QWORD*)(a1 + 232))
		{
			v14 = (__int64)(*(_QWORD*)(*((_QWORD*)ArgList + 66) + 40i64) - *(_QWORD*)(*((_QWORD*)ArgList + 66) + 32i64)) >> 3;
			(*(void(__fastcall * *)(_QWORD, char**))(***(_QWORD * **)(a1 + 24) + 48i64))(**(_QWORD * *)(a1 + 24), &v49);
			sub_14040CD70(*(_QWORD*)(*(_QWORD*)(a1 + 232) + 368i64), &v41);
			Block = 0i64;
			v39 = 0i64;
			StringArray::addTokens((__int64)& Block, v41, ":", (char*)& unk_14046DA2F);
			if (HIDWORD(v39) <= 1)
			{
				if (dword_140EC06A8 > * (_DWORD*)(*(_QWORD*)NtCurrentTeb()->ThreadLocalStoragePointer + 4i64))
				{
					Init_thread_header(&dword_140EC06A8);
					if (dword_140EC06A8 == -1)
					{
						off_140EB1E28 = dword_140DDCDD0;
						atexit(sub_14046AE50);
						Init_thread_footer(&dword_140EC06A8);
					}
				}
				v15 = &off_140EB1E28;
			}
			else
			{
				v15 = (void**)((char*)Block + 8);
			}
			sub_140315330(v15, &v48);
			if ((_DWORD)v14)
			{
				v16 = 0i64;
				v17 = (unsigned int)v14;
				do
				{
					v18 = **(_BYTE * **)(v16 + *(_QWORD*)(*((_QWORD*)ArgList + 66) + 32i64));
					if (v18 && v18[96])
					{
						(*(void(__fastcall * *)(_BYTE*, __int64*))(*(_QWORD*)v18 + 376i64))(v18, v46);
						v19 = **(_QWORD * *)(v16 + *(_QWORD*)(*((_QWORD*)ArgList + 66) + 32i64));
						v20 = (char**)(*(__int64(__fastcall * *)(__int64, __int64*))(*(_QWORD*)v19 + 376i64))(v19, &v44);
						if (v49 == *v20)
							v21 = 0;
						else
							v21 = compareIgnoreCase(v49, *v20);
						v22 = (void*)(v44 - 16);
						if ((*(_DWORD*)(v44 - 16) & 0x30000000) == 0
							&& _InterlockedDecrement((volatile signed __int32*)v22) == -1)
						{
							j_j_free(v22);
						}
						if (!v21)
						{
							v23 = **(_QWORD * *)(v16 + *(_QWORD*)(*((_QWORD*)ArgList + 66) + 32i64));
							v24 = *(void(__fastcall * *)(__int64, __int64*, _QWORD))(*(_QWORD*)v23 + 384i64);
							sub_140048D00(&v50, "0");
							v24(v23, &v50, 0i64);
						}
						v25 = (char**)sub_14020F300(*(_QWORD*)(v16 + *(_QWORD*)(*((_QWORD*)ArgList + 66) + 32i64)), &v45);
						if (v48 == *v25)
							v26 = 0;
						else
							v26 = compareIgnoreCase(v48, *v25);
						v27 = (void*)(v45 - 16);
						if ((*(_DWORD*)(v45 - 16) & 0x30000000) == 0
							&& _InterlockedDecrement((volatile signed __int32*)v27) == -1)
						{
							j_j_free(v27);
						}
						if (!v26)
						{
							v28 = **(_QWORD * *)(v16 + *(_QWORD*)(*((_QWORD*)ArgList + 66) + 32i64));
							v29 = *(void(__fastcall * *)(__int64, char**, _QWORD))(*(_QWORD*)v28 + 384i64);
							v51 = v49;
							if ((*((_DWORD*)v49 - 4) & 0x30000000) == 0)
								_InterlockedIncrement((volatile signed __int32*)v49 - 4);
							v29(v28, &v51, 0i64);
							v30 = **(_QWORD * *)(a1 + 24);
							v31 = *(void(__fastcall * *)(__int64, char**, _QWORD))(*(_QWORD*)v30 + 384i64);
							v40 = v48;
							if ((*((_DWORD*)v48 - 4) & 0x30000000) == 0)
								_InterlockedIncrement((volatile signed __int32*)v48 - 4);
							v31(v30, &v40, 0i64);
						}
						v32 = (void*)(v46[0] - 16);
						if ((*(_DWORD*)(v46[0] - 16) & 0x30000000) == 0
							&& _InterlockedDecrement((volatile signed __int32*)v32) == -1)
						{
							j_j_free(v32);
						}
					}
					v16 += 8i64;
					--v17;
				} while (v17);
			}
			v33 = v48 - 16;
			if ((*((_DWORD*)v48 - 4) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v33) == -1)
				j_j_free(v33);
			if (SHIDWORD(v39) > 0)
			{
				v34 = Block;
				v35 = HIDWORD(v39);
				do
				{
					v36 = (_DWORD*)(*v34 - 16i64);
					if ((*v36 & 0x30000000) == 0 && _InterlockedDecrement(v36) == -1)
						j_j_free(v36);
					++v34;
					--v35;
				} while (v35);
			}
			free(Block);
			v37 = v41 - 16;
			if ((*((_DWORD*)v41 - 4) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v37) == -1)
				j_j_free(v37);
			v11 = v49 - 16;
			if ((*((_DWORD*)v49 - 4) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v11) == -1)
				goto LABEL_71;
		}
	}*/
}
void SubGen2SettingsComponent::buttonClicked(Button*)
{
	/*if (a2 == *(_QWORD*)(a1 + 40) || a2 == *(_QWORD*)(a1 + 48) || a2 == *(_QWORD*)(a1 + 56))
		goto LABEL_34;
	v3 = *(_QWORD*)(a1 + 64);
	if (a2 == v3)
	{
		if (!(unsigned __int8)Button::getToggleState(v3))
		{
		LABEL_33:
			sub_1401AB5A0(a1 - 192);
			return;
		}
		v4 = *(_QWORD*)(a1 + 256);
	LABEL_32:
		Button::setToggleState(v4, 0, 0, 0);
		goto LABEL_33;
	}
	if (a2 == *(_QWORD*)(a1 + 88))
	{
	LABEL_34:
		sub_1401AC530(a1 - 192);
		return;
	}
	v5 = *(_QWORD*)(a1 + 96);
	if (a2 != v5)
	{
		v20 = *(_QWORD*)(a1 + 256);
		if (a2 != v20)
			return;
		if (!(unsigned __int8)Button::getToggleState(v20))
			goto LABEL_33;
		v4 = *(_QWORD*)(a1 + 64);
		goto LABEL_32;
	}
	if (!(unsigned __int8)Button::getToggleState(v5))
	{
		v8 = *(_QWORD*)(*(_QWORD*)(*((_QWORD*)ArgList + 66) + 8i64)
			+ 8i64 * *(int*)(*((_QWORD*)ArgList + 66) + 268i64)
			- 8);
		v9 = *(_DWORD*)(v8 + 644);
		v10 = *(_BYTE*)(v8 + 531) == 0;
		v11 = *(_QWORD*)(a1 + 104);
		if (v10)
		{
			v9 = 85;
			Component::setEnabled(v11, 1);
			(*(void(__fastcall * *)(_QWORD, _QWORD))(**(_QWORD * *)(a1 + 192) + 88i64))(*(_QWORD*)(a1 + 192), 0i64);
			v14 = *(_QWORD*)(a1 + 104);
		}
		else
		{
			Component::setEnabled(v11, 0);
			LOBYTE(v12) = 1;
			(*(void(__fastcall * *)(_QWORD, __int64))(**(_QWORD * *)(a1 + 192) + 88i64))(*(_QWORD*)(a1 + 192), v12);
			v14 = *(_QWORD*)(a1 + 104);
			if (v9 == 1)
			{
				v15 = ComboBox::selectIfEnabled(*(_QWORD*)(a1 + 104), 0, v13);
				if (v15)
					ComboBox::setSelectedId(v14, *(_DWORD*)(v15 + 8), 0);
				else
					ComboBox::setSelectedId(v14, 0, 0);
			LABEL_28:
				(*(void(__fastcall * *)(_QWORD, _QWORD, _QWORD))(***(_QWORD * **)(a1 + 16) + 328i64))(
					**(_QWORD * *)(a1 + 16),
					v9,
					0i64);
				return;
			}
		}
		v16 = (__int64*)sub_14031BAC0(&v23);
		v22 = v16;
		ImageCache::getFromHashCode(v16, "Hz", (int)"");
		v17 = *v16;
		v22 = (__int64*)v17;
		if ((*(_DWORD*)(v17 - 16) & 0x30000000) == 0)
			_InterlockedIncrement((volatile signed __int32*)(v17 - 16));
		v18 = (_DWORD*)(*v16 - 16);
		if ((*v18 & 0x30000000) == 0 && _InterlockedDecrement(v18) == -1)
			j_j_free(v18);
		sub_14040D680(v14, &v22, 0i64);
		v19 = v22 - 2;
		if ((*(_DWORD*)(v22 - 2) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v19) == -1)
			j_j_free(v19);
		goto LABEL_28;
	}
	(*(void(__fastcall * *)(_QWORD, _QWORD, _QWORD))(***(_QWORD * **)(a1 + 16) + 328i64))(
		**(_QWORD * *)(a1 + 16),
		0i64,
		0i64);
	v6 = *(_QWORD*)(a1 + 104);
	sub_140048D00(&v21, "85Hz");
	sub_14040D680(v6, &v21, 0i64);
	v7 = (void*)(v21 - 16);
	if ((*(_DWORD*)(v21 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v7) == -1)
		j_j_free(v7);
	Component::setEnabled(*(_QWORD*)(a1 + 104), 0);
	(*(void(__fastcall * *)(_QWORD, _QWORD))(**(_QWORD * *)(a1 + 192) + 88i64))(*(_QWORD*)(a1 + 192), 0i64);*/
}
