#include "CreateLayoutComponent.h"
CreateLayoutComponent::CreateLayoutComponent()
{

}

CreateLayoutComponent::~CreateLayoutComponent()
{

}

void CreateLayoutComponent::paint(Graphics& g)
{
	/*if (a1)
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
	v6 = LookAndFeel::findColour(v4, &v8, 0x1005700);
	return Graphics::fillAll(a2, *v6);*/
}

void CreateLayoutComponent::resized()
{
/*
	Component::setBounds(*(_QWORD*)(a1 + 304), *(_DWORD*)(a1 + 40) / 2 - 250, *(_DWORD*)(a1 + 44) / 2 - 250, 500, 500);
	v2 = 40;
	Component::setBounds(*(_QWORD*)(a1 + 320), *(_DWORD*)(a1 + 40) / 2 - 100, 16, 200, 40);
	v3 = 150;
	Component::setBounds(*(_QWORD*)(a1 + 328), *(_DWORD*)(a1 + 40) - 150, *(_DWORD*)(a1 + 44) - 40, 150, 32);
	Component::setBounds(*(_QWORD*)(a1 + 368), *(_DWORD*)(a1 + 40) - 158, 88, 150, 40);
	Component::setBounds(*(_QWORD*)(a1 + 376), *(_DWORD*)(a1 + 40) - 158, 64, 150, 24);
	Component::setBounds(*(_QWORD*)(a1 + 384), *(_DWORD*)(a1 + 40) - 158, 136, 150, 40);
	Component::setBounds(*(_QWORD*)(a1 + 392), *(_DWORD*)(a1 + 40) - 158, 184, 150, 40);
	Component::setBounds(*(_QWORD*)(a1 + 400), 0, 336, 150, 32);
	Component::setBounds(*(_QWORD*)(a1 + 408), 8, 279, 96, 15);
	Component::setBounds(*(_QWORD*)(a1 + 416), 82, 235, 96, 15);
	Component::setBounds(*(_QWORD*)(a1 + 424), *(_DWORD*)(a1 + 40) / 2 - 225, 0, 450, 50);
	Component::setBounds(*(_QWORD*)(a1 + 432), 0, *(_DWORD*)(a1 + 44) - 87, 150, 32);
	Component::setBounds(*(_QWORD*)(a1 + 440), 8, 260, 96, 15);
	Component::setBounds(*(_QWORD*)(a1 + 448), 82, 216, 96, 15);
	Component::setBounds(*(_QWORD*)(a1 + 456), 0, *(_DWORD*)(a1 + 44) - 40, 150, 32);
	v4 = *(_DWORD*)(a1 + 40);
	v5 = 150;
	v6 = *(_DWORD*)(a1 + 44);
	if (v4 < 150)
		v5 = *(_DWORD*)(a1 + 40);
	v7 = v4 - v5;
	if (v7 < 150)
		v3 = v7;
	v8 = v7 - v3;
	if (v6 < 40)
		v2 = *(_DWORD*)(a1 + 44);
	v9 = v6 - v2;
	v10 = v9;
	if (v8 <= v9)
		v10 = v8;
	return Component::setBounds(*(_QWORD*)(a1 + 304), v5 + (v8 - v10) / 2, v2 + (v9 - v10) / 2, v10, v10);
*/
}

void CreateLayoutComponent::comboBoxChanged(ComboBox* comboBoxThatHasChanged)
{
	/*v3 = *(_QWORD*)(a1 + 104);
	if (a2 != v3)
		return;
	sub_14040CD70(*(_QWORD*)(v3 + 368), &v110);
	v4 = v110;
	v5 = (unsigned int)compareIgnoreCase(v110, "Huge") == 0;
	v6 = v4 - 16;
	if ((*((_DWORD*)v4 - 4) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v6) == -1)
		j_j_free(v6);
	if (!v5)
	{
		sub_14040CD70(*(_QWORD*)(*(_QWORD*)(a1 + 104) + 368i64), &v111);
		v11 = v111;
		v12 = (unsigned int)compareIgnoreCase(v111, "Large") == 0;
		v13 = v11 - 16;
		if ((*((_DWORD*)v11 - 4) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v13) == -1)
			j_j_free(v13);
		if (v12)
		{
			v14 = *((_QWORD*)ArgList + 66);
			sub_140048D00(&v109, "Large");
			sub_14022D270(v14, &v109);
			v109 = operator new(0xF0ui64);
			v15 = sub_140134300((__int64)v109, 5, 1);
			v17 = v15;
		LABEL_106:
			v90 = *(void(__fastcall * ***)(_QWORD, __int64))(a1 + 96);
			*(_QWORD*)(a1 + 96) = v15;
			if (v90)
			{
				(**v90)(v90, 1i64);
				v17 = *(_QWORD*)(a1 + 96);
			}
			if (v17)
			{
				LOBYTE(v16) = 1;
				(*(void(__fastcall * *)(__int64, __int64))(*(_QWORD*)v17 + 88i64))(v17, v16);
				Component::addChildComponent(a1 - 208, v17, -1);
			}
			*(_DWORD*)(*((_QWORD*)ArgList + 66) + 256i64) = 5;
			goto LABEL_111;
		}
		sub_14040CD70(*(_QWORD*)(*(_QWORD*)(a1 + 104) + 368i64), &v112);
		v18 = v112;
		v19 = (unsigned int)compareIgnoreCase(v112, "Medium") == 0;
		v20 = v18 - 16;
		if ((*((_DWORD*)v18 - 4) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v20) == -1)
			j_j_free(v20);
		if (v19)
		{
			v21 = *((_QWORD*)ArgList + 66);
			sub_140048D00(&v109, "Medium");
			sub_14022D270(v21, &v109);
			v109 = operator new(0xF0ui64);
			v22 = sub_140134300((__int64)v109, 4, 1);
			v24 = v22;
			goto LABEL_21;
		}
		sub_14040CD70(*(_QWORD*)(*(_QWORD*)(a1 + 104) + 368i64), &v93);
		v26 = v93;
		v27 = (unsigned int)compareIgnoreCase(v93, "Small") == 0;
		v28 = v26 - 16;
		if ((*((_DWORD*)v26 - 4) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v28) == -1)
			j_j_free(v28);
		if (v27)
		{
			v29 = *((_QWORD*)ArgList + 66);
			sub_140048D00(&v109, "Small");
			sub_14022D270(v29, &v109);
			v109 = operator new(0xF0ui64);
			v30 = sub_140134300((__int64)v109, 3, 1);
			v32 = v30;
		}
		else
		{
			sub_14040CD70(*(_QWORD*)(*(_QWORD*)(a1 + 104) + 368i64), &v94);
			v34 = v94;
			v35 = (unsigned int)compareIgnoreCase(v94, "Stereo") == 0;
			v36 = v34 - 16;
			if ((*((_DWORD*)v34 - 4) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v36) == -1)
				j_j_free(v36);
			if (v35)
			{
				v37 = *((_QWORD*)ArgList + 66);
				sub_140048D00(&v109, "Stereo");
				sub_14022D270(v37, &v109);
				v109 = operator new(0xF0ui64);
				v30 = sub_140134300((__int64)v109, 3, 1);
				v32 = v30;
			}
			else
			{
				sub_14040CD70(*(_QWORD*)(*(_QWORD*)(a1 + 104) + 368i64), &v95);
				v38 = v95;
				v39 = (unsigned int)compareIgnoreCase(v95, "Stereo with sub") == 0;
				v40 = v38 - 16;
				if ((*((_DWORD*)v38 - 4) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v40) == -1)
					j_j_free(v40);
				if (!v39)
				{
					sub_14040CD70(*(_QWORD*)(*(_QWORD*)(a1 + 104) + 368i64), &v96);
					v42 = v96;
					v43 = (unsigned int)compareIgnoreCase(v96, "5.1") == 0;
					v44 = v42 - 16;
					if ((*((_DWORD*)v42 - 4) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v44) == -1)
						j_j_free(v44);
					if (v43)
					{
						v45 = *((_QWORD*)ArgList + 66);
						sub_140048D00(&v109, "5.1");
						sub_14022D270(v45, &v109);
						v109 = operator new(0xF0ui64);
						v22 = sub_140134300((__int64)v109, 4, 1);
						v24 = v22;
					}
					else
					{
						sub_14040CD70(*(_QWORD*)(*(_QWORD*)(a1 + 104) + 368i64), &v97);
						v46 = v97;
						v47 = (unsigned int)compareIgnoreCase(v97, "5.1.2") == 0;
						v48 = v46 - 16;
						if ((*((_DWORD*)v46 - 4) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v48) == -1)
							j_j_free(v48);
						if (v47)
						{
							v49 = *((_QWORD*)ArgList + 66);
							sub_140048D00(&v109, "5.1.2");
							sub_14022D270(v49, &v109);
							v109 = operator new(0xF0ui64);
							v22 = sub_140134300((__int64)v109, 4, 1);
							v24 = v22;
						}
						else
						{
							sub_14040CD70(*(_QWORD*)(*(_QWORD*)(a1 + 104) + 368i64), &v98);
							v50 = v98;
							v51 = (unsigned int)compareIgnoreCase(v98, "5.1.4") == 0;
							v52 = v50 - 16;
							if ((*((_DWORD*)v50 - 4) & 0x30000000) == 0
								&& _InterlockedDecrement((volatile signed __int32*)v52) == -1)
							{
								j_j_free(v52);
							}
							if (v51)
							{
								v53 = *((_QWORD*)ArgList + 66);
								sub_140048D00(&v109, "5.1.4");
								sub_14022D270(v53, &v109);
								v109 = operator new(0xF0ui64);
								v22 = sub_140134300((__int64)v109, 4, 1);
								v24 = v22;
							}
							else
							{
								sub_14040CD70(*(_QWORD*)(*(_QWORD*)(a1 + 104) + 368i64), &v99);
								v54 = v99;
								v55 = (unsigned int)compareIgnoreCase(v99, "7.1") == 0;
								v56 = v54 - 16;
								if ((*((_DWORD*)v54 - 4) & 0x30000000) == 0
									&& _InterlockedDecrement((volatile signed __int32*)v56) == -1)
								{
									j_j_free(v56);
								}
								if (v55)
								{
									v57 = *((_QWORD*)ArgList + 66);
									sub_140048D00(&v109, "7.1");
									sub_14022D270(v57, &v109);
									v109 = operator new(0xF0ui64);
									v22 = sub_140134300((__int64)v109, 4, 1);
									v24 = v22;
								}
								else
								{
									sub_14040CD70(*(_QWORD*)(*(_QWORD*)(a1 + 104) + 368i64), &v100);
									v58 = v100;
									v59 = (unsigned int)compareIgnoreCase(v100, "7.1.2") == 0;
									v60 = v58 - 16;
									if ((*((_DWORD*)v58 - 4) & 0x30000000) == 0
										&& _InterlockedDecrement((volatile signed __int32*)v60) == -1)
									{
										j_j_free(v60);
									}
									if (v59)
									{
										v61 = *((_QWORD*)ArgList + 66);
										sub_140048D00(&v109, "7.1.2");
										sub_14022D270(v61, &v109);
										v109 = operator new(0xF0ui64);
										v22 = sub_140134300((__int64)v109, 4, 1);
										v24 = v22;
									}
									else
									{
										sub_14040CD70(*(_QWORD*)(*(_QWORD*)(a1 + 104) + 368i64), &v101);
										v62 = v101;
										v63 = (unsigned int)compareIgnoreCase(v101, "7.1.4") == 0;
										v64 = v62 - 16;
										if ((*((_DWORD*)v62 - 4) & 0x30000000) == 0
											&& _InterlockedDecrement((volatile signed __int32*)v64) == -1)
										{
											j_j_free(v64);
										}
										if (v63)
										{
											v65 = *((_QWORD*)ArgList + 66);
											sub_140048D00(&v109, "7.1.4");
											sub_14022D270(v65, &v109);
											v109 = operator new(0xF0ui64);
											v22 = sub_140134300((__int64)v109, 4, 1);
											v24 = v22;
										}
										else
										{
											sub_14040CD70(*(_QWORD*)(*(_QWORD*)(a1 + 104) + 368i64), &v102);
											v66 = v102;
											v67 = (unsigned int)compareIgnoreCase(v102, "9.1.2") == 0;
											v68 = v66 - 16;
											if ((*((_DWORD*)v66 - 4) & 0x30000000) == 0
												&& _InterlockedDecrement((volatile signed __int32*)v68) == -1)
											{
												j_j_free(v68);
											}
											if (v67)
											{
												v69 = *((_QWORD*)ArgList + 66);
												sub_140048D00(&v109, "9.1.2");
												sub_14022D270(v69, &v109);
												v109 = operator new(0xF0ui64);
												v22 = sub_140134300((__int64)v109, 4, 1);
												v24 = v22;
											}
											else
											{
												sub_14040CD70(*(_QWORD*)(*(_QWORD*)(a1 + 104) + 368i64), &v103);
												v70 = v103;
												v71 = (unsigned int)compareIgnoreCase(v103, "9.1.4") == 0;
												v72 = v70 - 16;
												if ((*((_DWORD*)v70 - 4) & 0x30000000) == 0
													&& _InterlockedDecrement((volatile signed __int32*)v72) == -1)
												{
													j_j_free(v72);
												}
												if (v71)
												{
													v73 = *((_QWORD*)ArgList + 66);
													sub_140048D00(&v109, "9.1.4");
													sub_14022D270(v73, &v109);
													v109 = operator new(0xF0ui64);
													v22 = sub_140134300((__int64)v109, 4, 1);
													v24 = v22;
												}
												else
												{
													sub_14040CD70(*(_QWORD*)(*(_QWORD*)(a1 + 104) + 368i64), &v104);
													v74 = v104;
													v75 = (unsigned int)compareIgnoreCase(v104, "9.1.6") == 0;
													v76 = v74 - 16;
													if ((*((_DWORD*)v74 - 4) & 0x30000000) == 0
														&& _InterlockedDecrement((volatile signed __int32*)v76) == -1)
													{
														j_j_free(v76);
													}
													if (v75)
													{
														v77 = *((_QWORD*)ArgList + 66);
														sub_140048D00(&v109, "9.1.6");
														sub_14022D270(v77, &v109);
														v109 = operator new(0xF0ui64);
														v22 = sub_140134300((__int64)v109, 4, 1);
														v24 = v22;
													}
													else
													{
														sub_14040CD70(*(_QWORD*)(*(_QWORD*)(a1 + 104) + 368i64), &v105);
														v78 = v105;
														v79 = (unsigned int)compareIgnoreCase(v105, "Auro 3D") == 0;
														v80 = v78 - 16;
														if ((*((_DWORD*)v78 - 4) & 0x30000000) == 0
															&& _InterlockedDecrement((volatile signed __int32*)v80) == -1)
														{
															j_j_free(v80);
														}
														if (!v79)
														{
															sub_14040CD70(*(_QWORD*)(*(_QWORD*)(a1 + 104) + 368i64), &v106);
															v82 = v106;
															v83 = (unsigned int)compareIgnoreCase(v106, "Sony 360RA") == 0;
															v84 = v82 - 16;
															if ((*((_DWORD*)v82 - 4) & 0x30000000) == 0
																&& _InterlockedDecrement((volatile signed __int32*)v84) == -1)
															{
																j_j_free(v84);
															}
															if (v83)
															{
																v85 = *((_QWORD*)ArgList + 66);
																sub_140048D00(&v109, "Sony 360RA");
																sub_14022D270(v85, &v109);
																v109 = operator new(0xF0ui64);
																v15 = sub_140134300((__int64)v109, 5, 1);
																v17 = v15;
															}
															else
															{
																sub_14040CD70(*(_QWORD*)(*(_QWORD*)(a1 + 104) + 368i64), &v107);
																v86 = v107;
																v87 = (unsigned int)compareIgnoreCase(v107, "NHK 22.2") == 0;
																v88 = v86 - 16;
																if ((*((_DWORD*)v86 - 4) & 0x30000000) == 0
																	&& _InterlockedDecrement((volatile signed __int32*)v88) == -1)
																{
																	j_j_free(v88);
																}
																if (!v87)
																	goto LABEL_112;
																v89 = *((_QWORD*)ArgList + 66);
																sub_140048D00(&v109, "NHK 22.2");
																sub_14022D270(v89, &v109);
																v109 = operator new(0xF0ui64);
																v15 = sub_140134300((__int64)v109, 5, 1);
																v17 = v15;
															}
															goto LABEL_106;
														}
														v81 = *((_QWORD*)ArgList + 66);
														sub_140048D00(&v109, "Auro 3D");
														sub_14022D270(v81, &v109);
														v109 = operator new(0xF0ui64);
														v22 = sub_140134300((__int64)v109, 4, 1);
														v24 = v22;
													}
												}
											}
										}
									}
								}
							}
						}
					}
				LABEL_21:
					v25 = *(void(__fastcall * ***)(_QWORD, __int64))(a1 + 96);
					*(_QWORD*)(a1 + 96) = v22;
					if (v25)
					{
						(**v25)(v25, 1i64);
						v24 = *(_QWORD*)(a1 + 96);
					}
					if (v24)
					{
						LOBYTE(v23) = 1;
						(*(void(__fastcall * *)(__int64, __int64))(*(_QWORD*)v24 + 88i64))(v24, v23);
						Component::addChildComponent(a1 - 208, v24, -1);
					}
					*(_DWORD*)(*((_QWORD*)ArgList + 66) + 256i64) = 4;
					goto LABEL_111;
				}
				v41 = *((_QWORD*)ArgList + 66);
				sub_140048D00(&v109, "Stereo with sub");
				sub_14022D270(v41, &v109);
				v109 = operator new(0xF0ui64);
				v30 = sub_140134300((__int64)v109, 3, 1);
				v32 = v30;
			}
		}
		v33 = *(void(__fastcall * ***)(_QWORD, __int64))(a1 + 96);
		*(_QWORD*)(a1 + 96) = v30;
		if (v33)
		{
			(**v33)(v33, 1i64);
			v32 = *(_QWORD*)(a1 + 96);
		}
		if (v32)
		{
			LOBYTE(v31) = 1;
			(*(void(__fastcall * *)(__int64, __int64))(*(_QWORD*)v32 + 88i64))(v32, v31);
			Component::addChildComponent(a1 - 208, v32, -1);
		}
		*(_DWORD*)(*((_QWORD*)ArgList + 66) + 256i64) = 3;
		goto LABEL_111;
	}
	v7 = *((_QWORD*)ArgList + 66);
	sub_140048D00(&v109, "Huge");
	sub_14022D270(v7, &v109);
	v109 = operator new(0xF0ui64);
	v9 = sub_140134300((__int64)v109, 6, 1);
	v10 = *(void(__fastcall * ***)(_QWORD, __int64))(a1 + 96);
	*(_QWORD*)(a1 + 96) = v9;
	if (v10)
	{
		(**v10)(v10, 1i64);
		v9 = *(_QWORD*)(a1 + 96);
	}
	if (v9)
	{
		LOBYTE(v8) = 1;
		(*(void(__fastcall * *)(__int64, __int64))(*(_QWORD*)v9 + 88i64))(v9, v8);
		Component::addChildComponent(a1 - 208, v9, -1);
	}
	*(_DWORD*)(*((_QWORD*)ArgList + 66) + 256i64) = 6;
LABEL_111:
	(*(void(__fastcall * *)(__int64))(*(_QWORD*)(a1 - 208) + 264i64))(a1 - 208);
LABEL_112:
	if (_RTDynamicCast(
		*(_QWORD*)(a1 + 96),
		0i64,
		&juce::Component `RTTI Type Descriptor',
		& CustomHexLayoutComponent `RTTI Type Descriptor',
		0))
	{
		v91 = *(_QWORD*)(a1 + 96);
		v92 = sub_140001EE0(v108, a1 + 72);
		sub_140133F10(v91, v92, 0i64);
	}
	sub_14040CC50(*(_QWORD*)(a1 + 96));*/
}

void CreateLayoutComponent::buttonClicked(Button*)
{
	/*if (a2 == *(_QWORD*)(a1 + 112))
	{
		if (*(_BYTE*)(a1 + 8))
		{
			sub_14022C970(*((_QWORD*)ArgList + 66));
			v20 = *((_QWORD*)ArgList + 281);
			v48 = v20;
			if ((*(_DWORD*)(v20 - 16) & 0x30000000) == 0)
				_InterlockedIncrement((volatile signed __int32*)(v20 - 16));
			sub_140200820(ArgList, &v48, 0i64);
			v21 = qword_140EBFF78;
			v61 = operator new(0x220ui64);
			v22 = sub_140189A70(v61);
			sub_140274EA0(v21, v22);
		}
		else
		{
			if (!((__int64)(*(_QWORD*)(a1 + 24) - *(_QWORD*)(a1 + 16)) >> 3))
				goto LABEL_43;
			if (*(_QWORD*)(a1 + 72) - *(_QWORD*)(a1 + 64) < 8ui64)
			{
				v59 = dword_140DDCDD0;
				sub_140048D00(
					&v62,
					"Monitors on the left side need to be placed in the grid before continuing. Drag the monitor icon to the grid c"
					"ell that matches its location in the room, then drop it.");
				sub_14031AF20(&v39, (__int64*)& v62);
				v2 = (char*)(v62 - 4);
				if ((*(v62 - 4) & 0x30000000) == 0 && !_InterlockedExchangeAdd((volatile signed __int32*)v2, 0xFFFFFFFF))
					j_j_free(v2);
				sub_140048D00(&v63, "Monitors need to be placed!");
				sub_14031AF20(&v64, &v63);
				v3 = (void*)(v63 - 16);
				if ((*(_DWORD*)(v63 - 16) & 0x30000000) == 0
					&& !_InterlockedExchangeAdd((volatile signed __int32*)v3, 0xFFFFFFFF))
				{
					j_j_free(v3);
				}
				sub_14040FE70(3, (unsigned int)& v64, (unsigned int)& v39, (unsigned int)& v59, 0i64);
				v4 = (void*)(v64 - 16);
				if ((*(_DWORD*)(v64 - 16) & 0x30000000) == 0
					&& !_InterlockedExchangeAdd((volatile signed __int32*)v4, 0xFFFFFFFF))
				{
					j_j_free(v4);
				}
				v5 = (void*)(v39 - 16);
				if ((*(_DWORD*)(v39 - 16) & 0x30000000) == 0
					&& !_InterlockedExchangeAdd((volatile signed __int32*)v5, 0xFFFFFFFF))
				{
					j_j_free(v5);
				}
				return;
			}
			sub_140048D00(&v40, "No");
			sub_14031AF20(&v47, &v40);
			v6 = (void*)(v40 - 16);
			if ((*(_DWORD*)(v40 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v6) == -1)
				j_j_free(v6);
			sub_140048D00(&v41, "Yes");
			sub_14031AF20(&v46, &v41);
			v7 = (void*)(v41 - 16);
			if ((*(_DWORD*)(v41 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v7) == -1)
				j_j_free(v7);
			sub_140048D00(&v42, "There are unplaced devices, are you sure you want to proceed?");
			sub_14031AF20(&v45, &v42);
			v8 = (void*)(v42 - 16);
			if ((*(_DWORD*)(v42 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v8) == -1)
				j_j_free(v8);
			sub_140048D00(&v43, "Notification");
			sub_14031AF20(&v44, &v43);
			v9 = (void*)(v43 - 16);
			if ((*(_DWORD*)(v43 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v9) == -1)
				j_j_free(v9);
			v10 = sub_14040FB40(1, (unsigned int)& v44, (unsigned int)& v45, (unsigned int)& v46, (__int64)& v47, 0i64, 0i64);
			v11 = (void*)(v44 - 16);
			if ((*(_DWORD*)(v44 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v11) == -1)
				j_j_free(v11);
			v12 = (void*)(v45 - 16);
			if ((*(_DWORD*)(v45 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v12) == -1)
				j_j_free(v12);
			v13 = (void*)(v46 - 16);
			if ((*(_DWORD*)(v46 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v13) == -1)
				j_j_free(v13);
			v14 = (void*)(v47 - 16);
			if ((*(_DWORD*)(v47 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v14) == -1)
				j_j_free(v14);
			if (v10)
			{
			LABEL_43:
				v15 = sub_14022D2F0(*((_QWORD*)ArgList + 66));
				LOBYTE(v16) = 1;
				v17 = 85i64;
				if (!v15)
					v17 = 1i64;
				sub_140218C10(
					*(_QWORD*)(*(_QWORD*)(*((_QWORD*)ArgList + 66) + 8i64)
						+ 8i64 * *(int*)(*((_QWORD*)ArgList + 66) + 268i64)
						- 8),
					v17,
					v16);
				sub_14022E9E0(*((_QWORD*)ArgList + 66));
				sub_14022C970(*((_QWORD*)ArgList + 66));
				v18 = qword_140EBFF78;
				v60 = operator new(0x188ui64);
				v19 = sub_140144C00(v60);
				sub_140274EA0(v18, v19);
			}
		}
	}
	else if (a2 == *(_QWORD*)(a1 + 184))
	{
		sub_140048D00(&v49, "No");
		sub_14031AF20(&v56, &v49);
		v23 = (void*)(v49 - 16);
		if ((*(_DWORD*)(v49 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v23) == -1)
			j_j_free(v23);
		sub_140048D00(&v50, "Yes");
		sub_14031AF20(&v55, &v50);
		v24 = (void*)(v50 - 16);
		if ((*(_DWORD*)(v50 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v24) == -1)
			j_j_free(v24);
		sub_140048D00(
			&v51,
			"Placements of all devices will be cleared and moved to the 'Unplaced' cell, are you sure you want to proceed?");
		sub_14031AF20(&v54, &v51);
		v25 = (void*)(v51 - 16);
		if ((*(_DWORD*)(v51 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v25) == -1)
			j_j_free(v25);
		sub_140048D00(&v52, "Notification");
		sub_14031AF20(&v53, &v52);
		v26 = (void*)(v52 - 16);
		if ((*(_DWORD*)(v52 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v26) == -1)
			j_j_free(v26);
		v27 = sub_14040FB40(1, (unsigned int)& v53, (unsigned int)& v54, (unsigned int)& v55, (__int64)& v56, 0i64, 0i64);
		v28 = (void*)(v53 - 16);
		if ((*(_DWORD*)(v53 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v28) == -1)
			j_j_free(v28);
		v29 = (void*)(v54 - 16);
		if ((*(_DWORD*)(v54 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v29) == -1)
			j_j_free(v29);
		v30 = (void*)(v55 - 16);
		if ((*(_DWORD*)(v55 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v30) == -1)
			j_j_free(v30);
		v31 = (void*)(v56 - 16);
		if ((*(_DWORD*)(v56 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v31) == -1)
			j_j_free(v31);
		if (v27 == 1)
		{
			v32 = ArgList;
			v33 = 0i64;
			v34 = (__int64)(*(_QWORD*)(*((_QWORD*)ArgList + 66) + 40i64) - *(_QWORD*)(*((_QWORD*)ArgList + 66) + 32i64)) >> 3;
			v35 = (int)v34;
			if ((int)v34 > 0)
			{
				do
					sub_14020C700(
						*(_QWORD*)(*(_QWORD*)(v32[66] + 32i64) + 8 * v33++),
						*(_DWORD*)(v32[66] + 256i64),
						-1,
						-1,
						-1,
						0);
				while (v33 < v35);
			}
			if (*((_BYTE*)v32 + 928)
				&& !_InterlockedCompareExchange((volatile signed __int32*)(v32[112] + 24i64), 1, 0)
				&& !MessageManager::MessageBase::post(v32[112]))
			{
				_InterlockedExchange((volatile __int32*)(v32[112] + 24i64), 0);
			}
		}
	}
	else if (a2 == *(_QWORD*)(a1 + 216))
	{
		sub_140048D00(&v57, "GLM Help");
		sub_14031AF20(&v58, &v57);
		v36 = (void*)(v57 - 16);
		if ((*(_DWORD*)(v57 - 16) & 0x30000000) == 0 && _InterlockedDecrement((volatile signed __int32*)v36) == -1)
			j_j_free(v36);
		v62 = operator new(0x118ui64);
		v37 = sub_14015DC70((__int64)v62);
		sub_14026A0D0(v37, (unsigned int)& v58, v38, 800, 600);
	}
	else if (a2 == *(_QWORD*)(a1 + 240))
	{
		sub_140274D60(qword_140EBFF78);
	}*/
}

void CreateLayoutComponent::changeListenerCallback(ChangeBroadcaster* source)
{
/*
	result = (char*)ArgList + 880;
	if (a2 == (char*)ArgList + 880)
	{
		sub_14012B240((_QWORD*)(a1 - 200));
		result = (char*)sub_1401B6F80(*(_QWORD*)(a1 + 224), 1i64);
	}
	return result;*/
}