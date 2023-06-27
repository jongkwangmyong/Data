#pragma once

#include <JuceHeader.h>
#include "GenelecLookAndFeel.h"
#include "GLMAbout.h"


//==============================================================================
/*
    This component lives inside our window, and this is where you should put all
    your controls and content.
*/
class MainComponent : public juce::AudioAppComponent, public ApplicationCommandTarget,
	public MenuBarModel
{
public:
    //==============================================================================
    MainComponent();
    ~MainComponent() override;

    //==============================================================================
    void prepareToPlay (int samplesPerBlockExpected, double sampleRate) override;
    void getNextAudioBlock (const juce::AudioSourceChannelInfo& bufferToFill) override;
    void releaseResources() override;

    //==============================================================================
    void paint (juce::Graphics& g) override;
	void MainComponent::DrawComponent(int x, int y, int len, Graphics& g);
	void DrawComponent5(int select, Graphics& g);
	void DrawComponent7(Graphics& g);
	void DrawComponent9(Graphics& g);
	void DrawComponent11(Graphics& g);
	void updateValueUI();
    void resized() override;
    //=================================JKM 2023.4.26 =============================================
	TextButton ResetLayout{ "Reset Layout" };
	TextButton ConfirmLayout{ "ConfirmLayout" };
	ComboBox orderBox;
	Label descriptionLabel{ {}, "Define SAM System Layout.\n\n" };
	Label GENELEC{ {}, "GENELEC\n\n" };
	Label captions{ {}, "Layout      Group     AutoCal     AutoPhase    WooferCal.\n\n" };
	Label LayoutStyle{ {}, "LayoutStyle\n" };
	Label Devices{ {}, "Devices\n" };
	Label NotUsed{ {}, "NotUsed\n" };
	Label Unplaced{ {}, "Unplaced\n" };
	Label UnplacedNum{ {}, "0\n" };
	Label NotUsedNum{ {}, "0\n" };
	Label txtLeft{ {}, "Left\n" };
	Label txtsub{ {}, "Sub\n" };
	Label txtRight{ {}, "Right\n" };

	TextButton header;
	enum CommandIDs
	{
		New = 1,// Index = 0
		Open,
		OpenRecent,
		Save,
		SaveAs,
		OpenfromCloud,
		SavetoCloud,
		ImportGLM3Setup,
		Exit,
		Add,// Index = 1
		Duplicate,
		Edit,
		Calibrate,
		Delete,
		SoundCharacterProfiler,
		StandardLoudnessSPLCalibration,
		SetPresetLevels,
		StoretoLoudSpeakers,
		ViewSummary,//Index =2		
		SAMSystemPower,
		AutomaticWakeUPSystemWithGLM,
		AutomaticShutDownSystemWithGLM,
		WakeUPAll,
		ShutDownAll,
		EnableUSBController,
		MaxLevelRestriction,
		SettoCurrentLevel,
		Remove,
		LEDState,
		On,
		Off,
		EditLayout,//Index =3		
		MIDISettings,
		Theme,
		UseDarkTheme,
		UseLightTheme,
		LevelPanel,
		Visible,
		Never,
		For2Sec,
		For3Sec,
		For4Sec,
		For5Sec,
		Position,
		LeftTop,
		LeftCenter,
		LeftBottom,
		CenterTop,
		CenterCenter,
		CenterBottom,
		RightTop,
		RightCenter,
		RightBottom,
		KeyboardShortCuts,
		Enabled,
		Disabled,
		Language,
		Chinese,
		English,
		Finnish,
		French,
		German,
		Italian,
		Japanese,
		Korean,
		Portuguese,
		Spanish,
		Tooltips,
		TEnabled,
		TDisabled,
		Login,//Index =4
		Services,
		GLMManual,
		ExportSetuptoDesktop,
		About,
		innerColourRed,
		innerColourGreen,
		innerColourBlue,
		outerColourRed,
		outerColourGreen,
		outerColourBlue
	};
	enum class MenuBarPosition
	{
		window,
		global,
		burger
	};
	ApplicationCommandManager commandManager;

	StringArray getMenuBarNames() override
	{
		return { "File", "Group Preset", "Setup","Settings","User","Help" };
	}
	PopupMenu getMenuForIndex(int menuIndex, const String& /* menuName */) override
	{
		PopupMenu menu;

		if (menuIndex == 0)
		{

			//menu.addSeparator();
			//menu.addCommandItem(&commandManager, CommandIDs::menuPositionBurgerMenu);
			menu.addCommandItem(&commandManager, CommandIDs::New);
			menu.addSeparator();
			menu.addCommandItem(&commandManager, CommandIDs::Open);
			menu.addCommandItem(&commandManager, CommandIDs::OpenRecent);
			menu.addSeparator();
			menu.addCommandItem(&commandManager, CommandIDs::Save);
			menu.addCommandItem(&commandManager, CommandIDs::SaveAs);
			menu.addSeparator();
			menu.addCommandItem(&commandManager, CommandIDs::OpenfromCloud);
			menu.addCommandItem(&commandManager, CommandIDs::SavetoCloud);
			menu.addSeparator();
			menu.addCommandItem(&commandManager, CommandIDs::ImportGLM3Setup);
			menu.addSeparator();
			menu.addCommandItem(&commandManager, CommandIDs::Exit);
			/*

			PopupMenu subMenu;
			for (int j = 0; j < 10; ++j)
			{
				if (j % 2 == 0)
				{
					PopupMenu subSubMenu;

					for (int z = 0; z < 5; ++z)
						subSubMenu.addItem("Sub-sub-item " + String(z), nullptr);

					subMenu.addSubMenu("Sub-item " + String(j), subSubMenu);
				}
				else
				{
					subMenu.addItem("Sub-item " + String(j), nullptr);
				}
			}
			menu.addSubMenu("Item " + String(1), subMenu);*/

			//menu.addSeparator();

			//menu.addSeparator();
		}
		else if (menuIndex == 1)
		{
			menu.addCommandItem(&commandManager, CommandIDs::Add);
			menu.addCommandItem(&commandManager, CommandIDs::Duplicate);
			menu.addCommandItem(&commandManager, CommandIDs::Edit);
			menu.addCommandItem(&commandManager, CommandIDs::Calibrate);
			menu.addSeparator();
			menu.addCommandItem(&commandManager, CommandIDs::Delete);
			menu.addSeparator();
			menu.addCommandItem(&commandManager, CommandIDs::SoundCharacterProfiler);
			menu.addCommandItem(&commandManager, CommandIDs::StandardLoudnessSPLCalibration);
			menu.addCommandItem(&commandManager, CommandIDs::SetPresetLevels);
			menu.addSeparator();
			menu.addCommandItem(&commandManager, CommandIDs::StoretoLoudSpeakers);
			menu.addSeparator();
			menu.addCommandItem(&commandManager, CommandIDs::ViewSummary);
		}
		else if (menuIndex == 2)
		{
			PopupMenu subMenu1, subMenu2, subMenu3;

			//subMenu.addItem("Automatic WakeUp System With GLM " , nullptr);
			subMenu1.addCommandItem(&commandManager, CommandIDs::AutomaticWakeUPSystemWithGLM);
			subMenu1.addCommandItem(&commandManager, CommandIDs::AutomaticShutDownSystemWithGLM);
			subMenu1.addCommandItem(&commandManager, CommandIDs::WakeUPAll);
			subMenu1.addCommandItem(&commandManager, CommandIDs::ShutDownAll);
			menu.addSubMenu("SAMSystemPower", subMenu1);
			menu.addCommandItem(&commandManager, CommandIDs::EnableUSBController);
			menu.addSeparator();

			subMenu2.addCommandItem(&commandManager, CommandIDs::SettoCurrentLevel);
			subMenu2.addCommandItem(&commandManager, CommandIDs::Remove);
			menu.addSubMenu("Max Level Restriction", subMenu2);
			menu.addSeparator();
			subMenu3.addCommandItem(&commandManager, CommandIDs::On);
			subMenu3.addCommandItem(&commandManager, CommandIDs::Off);
			menu.addSubMenu("LEDState", subMenu3);
			menu.addSeparator();
			menu.addCommandItem(&commandManager, CommandIDs::EditLayout);
		}
		else if (menuIndex == 3)
		{
			PopupMenu subMenu1, subMenu2, subMenu3, subMenu4, subMenu5, subMenu6, subMenu7;
			menu.addCommandItem(&commandManager, CommandIDs::MIDISettings);
			subMenu1.addCommandItem(&commandManager, CommandIDs::UseDarkTheme);
			subMenu1.addCommandItem(&commandManager, CommandIDs::UseLightTheme);
			menu.addSubMenu("Theme", subMenu1);


			subMenu3.addCommandItem(&commandManager, CommandIDs::Never);
			subMenu3.addCommandItem(&commandManager, CommandIDs::For2Sec);
			subMenu3.addCommandItem(&commandManager, CommandIDs::For3Sec);
			subMenu3.addCommandItem(&commandManager, CommandIDs::For4Sec);
			subMenu3.addCommandItem(&commandManager, CommandIDs::For5Sec);

			subMenu2.addSubMenu("Visible", subMenu3);

			subMenu4.addCommandItem(&commandManager, CommandIDs::LeftTop);
			subMenu4.addCommandItem(&commandManager, CommandIDs::LeftCenter);
			subMenu4.addCommandItem(&commandManager, CommandIDs::LeftBottom);
			subMenu4.addCommandItem(&commandManager, CommandIDs::CenterTop);
			subMenu4.addCommandItem(&commandManager, CommandIDs::CenterCenter);
			subMenu4.addCommandItem(&commandManager, CommandIDs::CenterBottom);
			subMenu4.addCommandItem(&commandManager, CommandIDs::RightTop);
			subMenu4.addCommandItem(&commandManager, CommandIDs::RightCenter);
			subMenu4.addCommandItem(&commandManager, CommandIDs::RightBottom);

			subMenu2.addSubMenu("Position", subMenu4);
			menu.addSubMenu("LevelPanel", subMenu2);

			subMenu5.addCommandItem(&commandManager, CommandIDs::Enabled);
			subMenu5.addCommandItem(&commandManager, CommandIDs::Disabled);
			menu.addSubMenu("KeyboardShortCuts", subMenu5);

			subMenu6.addCommandItem(&commandManager, CommandIDs::Chinese);
			subMenu6.addCommandItem(&commandManager, CommandIDs::English);
			subMenu6.addCommandItem(&commandManager, CommandIDs::Finnish);
			subMenu6.addCommandItem(&commandManager, CommandIDs::French);
			subMenu6.addCommandItem(&commandManager, CommandIDs::German);
			subMenu6.addCommandItem(&commandManager, CommandIDs::Italian);
			subMenu6.addCommandItem(&commandManager, CommandIDs::Japanese);
			subMenu6.addCommandItem(&commandManager, CommandIDs::Korean);
			subMenu6.addCommandItem(&commandManager, CommandIDs::Portuguese);
			subMenu6.addCommandItem(&commandManager, CommandIDs::Spanish);
			menu.addSubMenu("Language", subMenu6);
			subMenu7.addCommandItem(&commandManager, CommandIDs::TEnabled);
			subMenu7.addCommandItem(&commandManager, CommandIDs::TDisabled);
			menu.addSubMenu("Tooltips", subMenu7);
		}
		else if (menuIndex == 4)
		{
			menu.addCommandItem(&commandManager, CommandIDs::Login);
			menu.addCommandItem(&commandManager, CommandIDs::Services);
		}
		else if (menuIndex == 5)
		{
			menu.addCommandItem(&commandManager, CommandIDs::GLMManual);
			menu.addCommandItem(&commandManager, CommandIDs::ExportSetuptoDesktop);
			menu.addCommandItem(&commandManager, CommandIDs::About);
		}
		return menu;
	}
	void menuItemSelected(int /* menuItemID */, int /* topLevelMenuIndex */) override {
	/*	v3 = a2;
		if (a3)
		{
			if (a3 == 1)
			{
				v103 = *(ArgList + 66);
				v104 = (*(v103 + 16) - *(v103 + 8)) >> 3;
				switch (a2)
				{
				case 1:
					if (v104 >= 0xA)
					{
						v216 = dword_140DDCDD0;
						v105 = sub_14031B460(&v213, "No more group presets allowed.");
						sub_140048D00(&v211, "Info");
						sub_14040FE70(3, &v211, v105, &v216, 0i64);
						sub_1400403F0(v211);
						sub_1400403F0(v213);
						sub_1400403F0(dword_140DDCDD0);
						return;
					}
					sub_1402699F0();
					v106 = *(ArgList + 281);
					v248 = v106;
					if ((*(v106 - 16) & 0x30000000) == 0)
						_InterlockedIncrement((v106 - 16));
					sub_140200820(ArgList, &v248, 0i64);
					sub_140228170(*(ArgList + 66));
					v107 = qword_140EBFF78;
					v212 = operator new(0x188ui64);
					v108 = sub_140144C00(v212);
				LABEL_214:
					sub_140274EA0(v107, v108);
					sub_14022E650(*(ArgList + 66));
					goto LABEL_362;
				case 2:
					if (v104 >= 0xA)
					{
						v216 = dword_140DDCDD0;
						v109 = sub_14031B460(&v213, "No more group presets allowed.");
						sub_140048D00(&v211, "Info");
						sub_14040FE70(3, &v211, v109, &v216, 0i64);
						sub_1400403F0(v211);
						sub_1400403F0(v213);
						sub_1400403F0(dword_140DDCDD0);
						return;
					}
					sub_1402699F0();
					sub_1401E6C10();
					v110 = *(ArgList + 281);
					v249 = v110;
					if ((*(v110 - 16) & 0x30000000) == 0)
						_InterlockedIncrement((v110 - 16));
					sub_140200820(ArgList, &v249, 0i64);
					v111 = qword_140EBFF78;
					v212 = operator new(0x220ui64);
					v112 = sub_140189A70(v212);
					sub_140274EA0(v111, v112);
					if (*(v111 + 76) <= 1u)
						sub_1401898D0(0i64);
					else
						sub_1401898D0(*(*(v111 + 64) + 8i64));
					goto LABEL_362;
				case 3:
					sub_1402699F0();
					v113 = *(ArgList + 281);
					v250 = v113;
					if ((*(v113 - 16) & 0x30000000) == 0)
						_InterlockedIncrement((v113 - 16));
					sub_140200820(ArgList, &v250, 0i64);
					v107 = qword_140EBFF78;
					v212 = operator new(0x188ui64);
					v108 = sub_140144C00(v212);
					goto LABEL_214;
				case 4:
					sub_1402699F0();
					v114 = *(ArgList + 281);
					v251 = v114;
					if ((*(v114 - 16) & 0x30000000) == 0)
						_InterlockedIncrement((v114 - 16));
					sub_140200820(ArgList, &v251, 0i64);
					v107 = qword_140EBFF78;
					v212 = operator new(0x390ui64);
					v108 = sub_1400EFC50(v212);
					goto LABEL_214;
				case 5:
					v115 = sub_14031B460(&v215, "No");
					v116 = sub_14031B460(&v211, "Yes");
					v117 = sub_14031B460(&v213, "The current group will be deleted, are you sure you want to proceed?");
					v118 = sub_14031B460(&v216, "Notification");
					v119 = 0i64;
					LOBYTE(v117) = sub_14040FB40(1, v118, v117, v116, v115, 0i64, 0i64);
					sub_1400403F0(v216);
					sub_1400403F0(v213);
					sub_1400403F0(v211);
					sub_1400403F0(v215);
					sub_1402699F0();
					if (v117 == 1)
					{
						if (v104 <= 1)
						{
							v215 = dword_140DDCDD0;
							v123 = sub_14031B460(&v213, "The last group cannot be deleted, there must be at least one group.");
							v124 = sub_14031B460(&v216, "Info");
							sub_14040FE70(3, v124, v123, &v215, 0i64);
							sub_1400403F0(v216);
							sub_1400403F0(v213);
							sub_1400403F0(dword_140DDCDD0);
						}
						else
						{
							sub_1401DBCB0();
							v120 = *(ArgList + 281);
							v252 = v120;
							if ((*(v120 - 16) & 0x30000000) == 0)
								_InterlockedIncrement((v120 - 16));
							sub_140200820(ArgList, &v252, 0i64);
							v121 = qword_140EBFF78;
							v212 = operator new(0x220ui64);
							v122 = sub_140189A70(v212);
							sub_140274EA0(v121, v122);
							if (*(v121 + 76) > 1u)
								v119 = *(*(v121 + 64) + 8i64);
							sub_1401898D0(v119);
						}
					}
					goto LABEL_362;
				case 6:
					v212 = &v215;
					v125 = sub_14031B460(&v215, "Sound Character Profiler");
					v218 = operator new(0x280ui64);
					v126 = sub_140199700(v218);
					sub_14026A0D0(v126, v125, v127, 800, 600);
					sub_1402021B0(v293);
					sub_1402021B0(v291);
					v128 = *(ArgList + 66);
					v129 = *(v128 + 268);
					v130 = *(*(v128 + 8) + 8 * v129 - 8);
					sub_140007FA0(v293, v130 + 24);
					sub_140007FA0(v291, v130 + 136);
					if (*(*(*(*(ArgList + 66) + 8i64) + 8 * v129 - 8) + 548i64) > 0 && v294 == 0.0 && v292 == 0.0)
					{
						v215 = dword_140DDCDD0;
						v131 = sub_14031B460(
							&v213,
							"Sound Charater Profiler functionality updated, it uses now LF Shelf1 and HF Shelf1 filters. Please "
							"check from acoustic editors if HF Shelf2 was previously set and clear that if needed. Click Cancel "
							"to prevent any changes.");
						v132 = sub_14031B460(&v216, "Sound Charater Profiler Version Warning");
						sub_14040FE70(2, v132, v131, &v215, 0i64);
						sub_1400403F0(v216);
						sub_1400403F0(v213);
						sub_1400403F0(dword_140DDCDD0);
					}
					sub_1402022C0(v291);
					sub_1402022C0(v293);
					goto LABEL_362;
				}
				if (a2 != 96)
				{
					switch (a2)
					{
					case 7:
						sub_1402699F0();
						v212 = &v215;
						v136 = sub_14031B460(&v215, "Store Group Settings to the Monitors");
						v218 = operator new(0x160ui64);
						v137 = sub_1401A1A60(v218);
						sub_14026A0D0(v137, v136, v138, 800, 600);
						goto LABEL_362;
					case 0xA:
						v139 = qword_140EBFF78;
						v212 = operator new(0x138ui64);
						v140 = sub_14019C420(v212);
						sub_140274EA0(v139, v140);
						goto LABEL_362;
					case 0xC:
						sub_14022B4B0(*(ArgList + 66), 1i64);
						break;
					case 0xD:
						*(*(*(v103 + 8) + 8i64 * *(v103 + 268) - 8) + 524i64) = dword_140EBFF3C;
						break;
					default:
						goto LABEL_362;
					}
					if (*(qword_140EBFF78 + 76) <= 1u)
						sub_1401894C0(0i64);
					else
						sub_1401894C0(*(*(qword_140EBFF78 + 64) + 8i64));
					goto LABEL_362;
				}
				v212 = &v215;
				v133 = sub_14031B460(&v215, "Group Preset Summary");
				v218 = operator new(0x110ui64);
				v134 = sub_14015BF80(v218);
				v135 = 600i64;
			LABEL_361:
				sub_14026D6D0(v134, v133, v135);
				goto LABEL_362;
			}
			if (a3 == 2)
			{
				if (a2 == 1)
				{
					*(*(ArgList + 66) + 223i64) = *(*(ArgList + 66) + 223i64) == 0;
					goto LABEL_362;
				}
				if (a2 == 2)
				{
					*(*(ArgList + 66) + 224i64) = *(*(ArgList + 66) + 224i64) == 0;
					goto LABEL_362;
				}
				if (a2 == 3)
				{
					sub_1401E9F40(ArgList, 0i64);
					goto LABEL_362;
				}
				if (a2 == 4)
				{
					LOBYTE(a2) = 1;
					sub_1401E9F40(ArgList, a2);
					goto LABEL_362;
				}
				if (a2 == 5)
				{
					v141 = *(ArgList + 66);
					v142 = *(v141 + 221);
					*(v141 + 221) = v142 == 0;
					if (v142)
						sub_140225010(v141);
					else
						sub_140225040(v141);
					goto LABEL_362;
				}
				if (a2 == 6)
				{
					sub_1402251F0(*(ArgList + 66));
					if (*(qword_140EBFF78 + 76) <= 1u)
						v144 = 0i64;
					else
						v144 = *(*(qword_140EBFF78 + 64) + 8i64);
					LOBYTE(v143) = 1;
					(*(**(v144 + 536) + 88i64))(*(v144 + 536), v143);
					v145 = *(ArgList + 281);
					v253 = v145;
					if ((*(v145 - 16) & 0x30000000) == 0)
						_InterlockedIncrement((v145 - 16));
					sub_140200820(ArgList, &v253, 0i64);
					v213 = dword_140DDCDD0;
					String::String_3(&v211, v146, 0, 0);
					v147 = sub_14031B460(&v215, "Max level restriction is set to ");
					v148 = sub_14031B550(&v216, v147, &v211);
					v149 = sub_14031B5C0(&v286, v148, " dB.");
					v150 = sub_14031B460(&v217, "Info");
					sub_14040FE70(3, v150, v149, &v213, 0i64);
					sub_1400403F0(v217);
					sub_1400403F0(v286);
					sub_1400403F0(v211);
					sub_1400403F0(dword_140DDCDD0);
				}
				else
				{
					if (a2 != 7)
					{
						if (a2 == 8)
						{
							v155 = 0i64;
						}
						else
						{
							if (a2 != 9)
							{
								if (a2 == 14)
								{
									v212 = operator new(0x1D0ui64);
									LOBYTE(v156) = 1;
									v157 = sub_14012D4C0(v212, v156);
									sub_140274EA0(a1 - 22, v157);
								}
								goto LABEL_362;
							}
							v155 = 1i64;
						}
						sub_140225160(*(ArgList + 66), v155);
						goto LABEL_362;
					}
					sub_1402251F0(*(ArgList + 66));
					if (*(qword_140EBFF78 + 76) <= 1u)
						v151 = 0i64;
					else
						v151 = *(*(qword_140EBFF78 + 64) + 8i64);
					(*(**(v151 + 536) + 88i64))(*(v151 + 536), 0i64);
					v152 = *(ArgList + 281);
					v254 = v152;
					if ((*(v152 - 16) & 0x30000000) == 0)
						_InterlockedIncrement((v152 - 16));
					sub_140200820(ArgList, &v254, 0i64);
					v286 = dword_140DDCDD0;
					v153 = sub_14031B460(&v215, "Max level restriction is removed.");
					v154 = sub_14031B460(&v217, "Info");
					sub_14040FE70(3, v154, v153, &v286, 0i64);
					sub_1400403F0(v217);
					sub_1400403F0(v215);
					sub_1400403F0(dword_140DDCDD0);
				}
			LABEL_362:
				sub_1403F8860(a1);
				return;
			}
			if (a3 != 3)
			{
				if (a3 == 4)
				{
					if (a2 == 1)
					{
						if (*(ArgList + 632))
						{
							v211 = dword_140DDCDD0;
							if (sub_14026A5C0())
							{
								v185 = sub_14031B460(&v217, "You logged out from your Cloud account!");
								v186 = sub_14031B460(&v286, "Logged out");
								sub_14040FE70(3, v186, v185, &v211, 0i64);
								sub_14031BA10(&v286);
								sub_14031BA10(&v217);
								sub_14031BA10(&v211);
								sub_1401F9700(ArgList);
							}
							else
							{
								v187 = sub_14031B460(&v217, "Could not log out from your Cloud account!");
								v188 = sub_14031B460(&v286, "Logout Failed");
								sub_14040FE70(2, v188, v187, &v211, 0i64);
								sub_14031BA10(&v286);
								sub_14031BA10(&v217);
								sub_14031BA10(&v211);
							}
							v189 = qword_140EBFF78;
							v212 = operator new(0x220ui64);
							v190 = sub_140189A70(v212);
							sub_140274EA0(v189, v190);
						}
						else
						{
							v212 = operator new(0x118ui64);
							v191 = sub_14010CDD0(v212);
							sub_140274EA0(a1 - 22, v191);
						}
						goto LABEL_362;
					}
					if (a2 == 2)
					{
						v212 = operator new(0x24BD8ui64);
						v192 = sub_140197B90(v212);
						sub_140274EA0(a1 - 22, v192);
						goto LABEL_362;
					}
					if (a2 != 3)
						goto LABEL_362;
				}
				else
				{
					if (a3 != 5)
						goto LABEL_362;
					if (a2 == 1)
					{
						v211 = dword_140DDCDD0;
						v194 = File::getSpecialLocation(&v215, 12i64);
						v195 = File::getParentDirectory(v194, &v217);
						v196 = File::getChildFile(v195, &v286, "GLM4Manual.pdf");
						v211 = *v196;
						*v196 = dword_140DDCDD0;
						sub_140001CE0(&v286);
						sub_140001CE0(&v217);
						sub_140001CE0(&v215);
						if (sub_140313100(&v211))
						{
							sub_140048D00(&v213, &unk_14046E3BB);
							v197 = sub_14031B270(&v286, "file:", &v211);
							sub_140311A30(v197, &v213);
							sub_14031BA10(&v286);
						}
						else
						{
							v213 = dword_140DDCDD0;
							v198 = sub_14031B460(&v216, " cannot be found!");
							v199 = sub_14031BA60(&v286, &v211);
							LODWORD(v198) = sub_14031B550(&v215, v199, v198);
							v200 = sub_14031B460(&v217, "Error");
							sub_14040FE70(2, v200, v198, &v213, 0i64);
							sub_14031BA10(&v217);
							sub_14031BA10(&v215);
							sub_14031BA10(&v216);
						}
						sub_14031BA10(&v213);
						sub_140001CE0(&v211);
						goto LABEL_362;
					}
					if (a2 != 2)
					{
						if (a2 == 3)
						{
							sub_140048D00(&v213, "Desktop");
							sub_1401F7810(v204, &v213);
							sub_140048D00(&v211, "Desktop");
							v206 = sub_1401F7810(v205, &v211);
							v213 = dword_140DDCDD0;
							if (v206)
							{
								v207 = sub_14031B460(&v217, "Setup has been exported to the desktop.");
								v208 = sub_14031B460(&v286, "Export Setup to Desktop");
								sub_14040FE70(3, v208, v207, &v213, 0i64);
							}
							else
							{
								v209 = sub_14031B460(&v217, "Failed to export the setup to the desktop.");
								v210 = sub_14031B460(&v286, "Export Setup to Desktop");
								sub_14040FE70(2, v210, v209, &v213, 0i64);
							}
							sub_14031BA10(&v286);
							sub_14031BA10(&v217);
							sub_14031BA10(&v213);
							goto LABEL_362;
						}
						if (a2 != 4)
							goto LABEL_362;
						v212 = &v286;
						v133 = sub_14031B460(&v286, "About GLM");
						v218 = operator new(0xD8ui64);
						v134 = sub_1401574A0(v218);
						v135 = 484i64;
						goto LABEL_361;
					}
					if (!*(ArgList + 632))
					{
						v213 = dword_140DDCDD0;
						v201 = sub_14031B460(&v217, "Please log in to the Genelec Cloud and try again!");
						v202 = sub_14031B460(&v286, "Action Required");
						sub_14040FE70(2, v202, v201, &v213, 0i64);
						sub_14031BA10(&v286);
						sub_14031BA10(&v217);
						sub_14031BA10(&v213);
						v212 = operator new(0x118ui64);
						v203 = sub_14010CDD0(v212);
						sub_140274EA0(a1 - 22, v203);
						goto LABEL_362;
					}
				}
				v212 = operator new(0x170ui64);
				v193 = sub_140115BE0(v212);
				sub_140274EA0(a1 - 22, v193);
				goto LABEL_362;
			}
			switch (a2)
			{
			case 1:
				v212 = &v286;
				v133 = sub_14031B460(&v286, "GLM MIDI Settings");
				v218 = operator new(0x400ui64);
				v134 = sub_140176FC0(v218);
				v135 = 800i64;
				goto LABEL_361;
			case 2:
				sub_1403F8D80(a1 - 22, a1[46]);
				v158 = sub_1403215B0();
				v286 = off_140EB1BD0;
				sub_140048D00(&v287, "dark");
				sub_140048D00(&v211, "theme");
				sub_140317E00(v158, &v211, &v286);
				sub_1400403F0(v211);
				((*v286)[22])(v286, &v287);
				sub_1403F8120(a1[46]);
				sub_140267CC0();
				goto LABEL_362;
			case 3:
				sub_1403F8D80(a1 - 22, a1[47]);
				v159 = sub_1403215B0();
				v286 = off_140EB1BD0;
				sub_140048D00(&v287, "light");
				sub_140048D00(&v211, "theme");
				sub_140317E00(v159, &v211, &v286);
				sub_1400403F0(v211);
				((*v286)[22])(v286, &v287);
				sub_1403F8120(a1[47]);
				sub_140267CC0();
				goto LABEL_362;
			}
			if ((a2 - 4) <= 5)
			{
				v160 = sub_1403215B0();
				v161 = v3 - 4;
				if (v161)
				{
					v162 = v161 - 1;
					if (v162)
					{
						v163 = v162 - 1;
						if (v163)
						{
							v164 = v163 - 1;
							if (v164)
							{
								if (v164 != 1)
								{
									sub_140048D00(&v211, "toastPanelDelay_s");
									sub_140311A90(v160, &v211);
									sub_1400403F0(v211);
									goto LABEL_362;
								}
								v286 = off_140EB1BE0;
								LODWORD(v287) = 5;
								sub_140048D00(&v211, "toastPanelDelay_s");
								sub_140317E00(v160, &v211, &v286);
								sub_1400403F0(v211);
							}
							else
							{
								v286 = off_140EB1BE0;
								LODWORD(v287) = 4;
								sub_140048D00(&v211, "toastPanelDelay_s");
								sub_140317E00(v160, &v211, &v286);
								sub_1400403F0(v211);
							}
						}
						else
						{
							v286 = off_140EB1BE0;
							LODWORD(v287) = 3;
							sub_140048D00(&v211, "toastPanelDelay_s");
							sub_140317E00(v160, &v211, &v286);
							sub_1400403F0(v211);
						}
					}
					else
					{
						v286 = off_140EB1BE0;
						LODWORD(v287) = 2;
						sub_140048D00(&v211, "toastPanelDelay_s");
						sub_140317E00(v160, &v211, &v286);
						sub_1400403F0(v211);
					}
				}
				else
				{
					v286 = off_140EB1BE0;
					LODWORD(v287) = -1;
					sub_140048D00(&v211, "toastPanelDelay_s");
					sub_140317E00(v160, &v211, &v286);
					sub_1400403F0(v211);
				}
				((*v286)[22])(v286, &v287);
				goto LABEL_362;
			}
			v165 = a2 - 10;
			if ((a2 - 10) <= 8)
			{
				v166 = sub_1403215B0();
				v286 = off_140EB1BE0;
				LODWORD(v287) = v165;
				sub_140048D00(&v211, "toastPanelLocation");
				sub_140317E00(v166, &v211, &v286);
				sub_1400403F0(v211);
			LABEL_301:
				((*v286)[22])(v286, &v287);
				v168 = (sub_1403FA980() + 24);
				v169 = *v168;
				v222 = 17i64;
				v223 = 0;
				v224 = 0i64;
				v225 = 0i64;
				v226 = 0;
				v227 = 0;
				v228 = 0;
				(*(v169 + 32))(v168, &v222);
				goto LABEL_362;
			}
			if (a2 == 19)
			{
				v167 = sub_1403215B0();
				v286 = off_140EB1BC0;
				LOBYTE(v287) = 1;
				sub_140048D00(&v211, "keyboardshortcutsenabled");
				sub_140317E00(v167, &v211, &v286);
				sub_1400403F0(v211);
				goto LABEL_301;
			}
			if (a2 == 20)
			{
				v170 = sub_1403215B0();
				sub_140048D00(&v211, "keyboardshortcutsenabled");
				sub_140311A90(v170, &v211);
				sub_1400403F0(v211);
				v171 = (sub_1403FA980() + 24);
				v172 = *v171;
				v222 = 17i64;
				v223 = 0;
				v224 = 0i64;
				v225 = 0i64;
				v226 = 0;
				v227 = 0;
				v228 = 0;
				(*(v172 + 32))(v171, &v222);
				goto LABEL_362;
			}
			v173 = a2 - 21;
			if ((a2 - 21) > 0xA)
			{
				if ((a2 - 101) <= 1)
				{
					v184 = sub_1403215B0();
					v286 = off_140EB1BC0;
					LOBYTE(v287) = v3 != 102;
					sub_140048D00(&v211, "EnableTooltips");
					sub_140317E00(v184, &v211, &v286);
					sub_14031BA10(&v211);
					sub_14031B500(&v286);
				}
				goto LABEL_362;
			}
			v174 = sub_1403215B0();
			v288 = off_140EB1BD0;
			v175 = *sub_140316E00(a1 + 7, v173);
			v289 = v175;
			if ((*(v175 - 16) & 0x30000000) == 0)
				_InterlockedIncrement((v175 - 16));
			sub_140048D00(&v211, "language");
			sub_140317E00(v174, &v211, &v288);
			sub_1400403F0(v211);
			((*v288)[22])(v288, &v289);
			sub_140267CC0();
			v176 = a1 + 49;
			if (_RTDynamicCast(
				a1[49],
				0i64,
				&juce::Component `RTTI Type Descriptor',
				& MonitorControllerComponent `RTTI Type Descriptor',
				0))
			{
				v212 = operator new(0x220ui64);
				v177 = sub_140189A70(v212);
			}
			else if (_RTDynamicCast(
				*v176,
				0i64,
				&juce::Component `RTTI Type Descriptor',
				& EditGroupComponent `RTTI Type Descriptor',
				0))
			{
				v212 = operator new(0x188ui64);
				v177 = sub_140144C00(v212);
			}
			else if (_RTDynamicCast(
				*v176,
				0i64,
				&juce::Component `RTTI Type Descriptor',
				& CalibrateComponent `RTTI Type Descriptor',
				0))
			{
				v212 = operator new(0x390ui64);
				v177 = sub_1400EFC50(v212);
			}
			else if (_RTDynamicCast(
				*v176,
				0i64,
				&juce::Component `RTTI Type Descriptor',
				& AutoPhaseComponent `RTTI Type Descriptor',
				0))
			{
				v212 = operator new(0x348ui64);
				v177 = sub_1400E8FA0(v212);
			}
			else if (_RTDynamicCast(
				*v176,
				0i64,
				&juce::Component `RTTI Type Descriptor',
				& WeCalComponent `RTTI Type Descriptor',
				0))
			{
				v212 = operator new(0x3D0ui64);
				v177 = sub_1401BB7E0(v212);
			}
			else
			{
				if (!_RTDynamicCast(
					*v176,
					0i64,
					&juce::Component `RTTI Type Descriptor',
					& RefCalComponent `RTTI Type Descriptor',
					0))
				{
					if (_RTDynamicCast(
						*v176,
						0i64,
						&juce::Component `RTTI Type Descriptor',
						& CloudSupport `RTTI Type Descriptor',
						0))
					{
						v212 = operator new(0x170ui64);
						v179 = sub_140115BE0(v212);
						sub_140001E50(a1 + 49, v179);
					}
					else if (_RTDynamicCast(
						*v176,
						0i64,
						&juce::Component `RTTI Type Descriptor',
						& CloudLogin `RTTI Type Descriptor',
						0))
					{
						v212 = operator new(0x118ui64);
						v180 = sub_14010CDD0(v212);
						sub_140001E50(a1 + 49, v180);
					}
					else if (_RTDynamicCast(
						*v176,
						0i64,
						&juce::Component `RTTI Type Descriptor',
						& CloudOpen `RTTI Type Descriptor',
						0))
					{
						v212 = operator new(0x120ui64);
						v181 = sub_14010F010(v212);
						sub_140001E50(a1 + 49, v181);
					}
					else if (_RTDynamicCast(
						*v176,
						0i64,
						&juce::Component `RTTI Type Descriptor',
						& CloudUserSpace `RTTI Type Descriptor',
						0))
					{
						v212 = operator new(0x130ui64);
						v182 = sub_14011C610(v212);
						sub_140001E50(a1 + 49, v182);
					}
					else
					{
						v212 = operator new(0x1D0ui64);
						v183 = sub_14012D4C0(v212, 0i64);
						sub_140274EA0(a1 - 22, v183);
					}
				LABEL_330:
					sub_1404115C0(a1 - 22, *v176, 0xFFFFFFFFi64);
					Component::repaint((a1 - 22));
					(*(*(a1 - 22) + 264i64))(a1 - 22);
					goto LABEL_362;
				}
				v212 = operator new(0x138ui64);
				v177 = sub_14019C420(v212);
			}
			v178 = *v176;
			*v176 = v177;
			if (v178)
				(**v178)(v178, 1i64);
			goto LABEL_330;
		}
		if (a2 == 1)
		{
			sub_1402699F0();
			v5 = *(ArgList + 281);
			v6 = (v5 - 16);
			if ((*(v5 - 4) & 0x30000000) == 0)
				_InterlockedIncrement(v6);
			for (i = 0i64; ; ++i)
			{
				while (1)
				{
					v8 = *v5++;
					if ((v8 & 0x80u) != 0)
						break;
					if (!v8)
					{
						if ((*v6 & 0x30000000) == 0 && _InterlockedDecrement(v6) == -1)
							j_j_free(v6);
						if (i > 0)
						{
							v9 = *(ArgList + 281);
							v233 = v9;
							if ((*(v9 - 16) & 0x30000000) == 0)
								_InterlockedIncrement((v9 - 16));
							sub_140200820(ArgList, &v233, 0i64);
						}
						sub_1401E0760(v5);
						sub_1401EC100(ArgList);
						v286 = operator new(0x1D0ui64);
						v10 = sub_14012D4C0(v286, 0i64);
						sub_140274EA0(a1 - 22, v10);
						goto LABEL_362;
					}
				LABEL_11:
					++i;
				}
				if ((*v5 & 0xC0) != 0x80)
					goto LABEL_11;
				do
					++v5;
				while ((*v5 & 0xC0) == 0x80);
			}
		}
		if (a2 == 2)
		{
			sub_1402699F0();
			v11 = *(ArgList + 272);
			v255 = v11;
			if ((*(v11 - 16) & 0x30000000) == 0)
				_InterlockedIncrement((v11 - 16));
			sub_140308BF0(&v260, &v255);
			v12 = (v255 - 16);
			if ((*(v255 - 16) & 0x30000000) == 0 && _InterlockedDecrement(v12) == -1)
				j_j_free(v12);
			sub_140048D00(&v258, "*.sam");
			sub_140048D00(&v256, "GLM4 - Open the SAM File...");
			sub_14031AF20(&v257, &v256);
			v13 = (v256 - 16);
			if ((*(v256 - 16) & 0x30000000) == 0 && _InterlockedDecrement(v13) == -1)
				j_j_free(v13);
			sub_14040F380(v295, &v257, &v260, &v258);
			v14 = (v257 - 16);
			if ((*(v257 - 16) & 0x30000000) == 0 && _InterlockedDecrement(v14) == -1)
				j_j_free(v14);
			v15 = (v258 - 16);
			if ((*(v258 - 16) & 0x30000000) == 0 && _InterlockedDecrement(v15) == -1)
				j_j_free(v15);
			if (sub_1403DB020(v295, 5i64))
			{
				sub_14040F1B0(v295, &v259);
				v275 = *(ArgList + 281);
				if ((*(v275 - 4) & 0x30000000) == 0)
					_InterlockedIncrement(v275 - 4);
				v16 = String::length(&v275);
				if ((*v17 & 0x30000000) == 0 && _InterlockedDecrement(v17) == -1)
					j_j_free(v17);
				if (v16 > 0)
				{
					v18 = *(ArgList + 281);
					v234[0] = v18;
					if ((*(v18 - 16) & 0x30000000) == 0)
						_InterlockedIncrement((v18 - 16));
					sub_140200820(ArgList, v234, 0i64);
				}
				v285[1] = v259;
				v19 = (v259 - 16);
				if ((*(v259 - 16) & 0x30000000) == 0)
					_InterlockedIncrement(v19);
				v234[1] = v259;
				if ((*v19 & 0x30000000) == 0)
					_InterlockedIncrement(v19);
				sub_1401F87B0(ArgList);
				v20 = qword_140EBFF78;
				v21 = operator new(0x220ui64);
				v22 = sub_140189A70(v21);
				sub_140274EA0(v20, v22);
				v214 = operator new(0x220ui64);
				v23 = sub_140189A70(v214);
				sub_140274EA0(a1 - 22, v23);
				if ((*v19 & 0x30000000) == 0 && _InterlockedDecrement(v19) == -1)
					j_j_free(v19);
				if ((*v19 & 0x30000000) == 0 && _InterlockedDecrement(v19) == -1)
					j_j_free(v19);
			}
			sub_14040F290(v295);
			v24 = v260;
		LABEL_133:
			v59 = v24 - 16;
			if ((*v59 & 0x30000000) == 0 && _InterlockedDecrement(v59) == -1)
				j_j_free(v59);
			goto LABEL_362;
		}
		if (a2 == 3)
		{
			sub_1402699F0();
			v25 = *(ArgList + 281);
			v261 = v25;
			if ((*(v25 - 16) & 0x30000000) == 0)
				_InterlockedIncrement((v25 - 16));
			sub_140200820(ArgList, &v261, 0i64);
			goto LABEL_362;
		}
		if (a2 != 4)
		{
			if (a2 != 5)
			{
				switch (a2)
				{
				case 6:
					sub_1402699F0();
					if (*(ArgList + 632))
					{
						v65 = *(ArgList + 281);
						v240 = v65;
						if ((*(v65 - 16) & 0x30000000) == 0)
							_InterlockedIncrement((v65 - 16));
						sub_140308BF0(v239, &v240);
						v66 = sub_14031AE20(v239, v273);
						sub_140268BF0(&v220, v66);
						sub_14031BA10(v239);
						v67 = (v240 - 16);
						if ((*(v240 - 16) & 0x30000000) == 0 && _InterlockedDecrement(v67) == -1)
							j_j_free(v67);
						if (String::isNotEmpty(v220, &unk_14046E3AF))
						{
							if (String::isNotEmpty(v220, "NotFull"))
							{
								if (!String::isNotEmpty(v220, "Full"))
								{
									sub_1401F8EB0(v75, &v211);
									sub_14031A6B0(ArgList + 872, &v211);
									v218 = operator new(0x130ui64);
									v76 = sub_14011C610(v218);
									sub_140274EA0(a1 - 22, v76);
									sub_1400403F0(v211);
								}
							}
							else
							{
								v72 = operator new(0x270ui64);
								v218 = v72;
								v213 = dword_140DDCDD0;
								sub_140048D00(&v211, "Save to Cloud");
								sub_14040F6C0(v72, &v211, v73, 0, 10000, &v213);
								sub_1400403F0(v211);
								sub_1400403F0(dword_140DDCDD0);
								*v72 = &CloudSaveThread::`vftable';
									v72[64] = &CloudSaveThread::`vftable';
									v72[77] = dword_140DDCDD0;
								sub_140048D00(&v216, &unk_14046D7EE);
								v74 = v72[77];
								v72[77] = v216;
								sub_1400403F0(v74);
								sub_14040F9D0(v72);
							}
						}
						else
						{
							v274 = dword_140DDCDD0;
							v68 = sub_14031B460(
								&v276,
								"Cannot connect to the Genelec Cloud, please check your Internet connection and try again!");
							v69 = sub_14031B460(&v282, "Save to Cloud Error");
							sub_14040FE70(2, v69, v68, &v274, 0i64);
							v70 = (v282 - 16);
							if ((*(v282 - 16) & 0x30000000) == 0 && _InterlockedDecrement(v70) == -1)
								j_j_free(v70);
							v71 = (v276 - 16);
							if ((*(v276 - 16) & 0x30000000) == 0 && _InterlockedDecrement(v71) == -1)
								j_j_free(v71);
						}
						sub_1400403F0(v220);
					}
					else
					{
						v216 = dword_140DDCDD0;
						v77 = sub_14031B460(&v211, "Please log in to the Genelec Cloud and try again!");
						v78 = sub_14031B460(&v213, "Action Required");
						sub_14040FE70(2, v78, v77, &v216, 0i64);
						sub_1400403F0(v213);
						sub_1400403F0(v211);
						sub_1400403F0(dword_140DDCDD0);
						v218 = operator new(0x118ui64);
						v79 = sub_14010CDD0(v218);
						sub_140274EA0(a1 - 22, v79);
					}
					break;
				case 7:
					sub_1402699F0();
					v80 = *File::getSpecialLocation(v278, 0i64);
					v241 = v80;
					if ((*(v80 - 16) & 0x30000000) == 0)
						_InterlockedIncrement((v80 - 16));
					sub_14031B5C0(&v245, &v241, "\\Genelec\\GLMv3\\Setup Files");
					sub_14031BA10(v278);
					sub_140308BF0(v244, &v245);
					sub_140048D00(&v242, "*.sam");
					v81 = sub_14031B460(&v279, "GLM4 - Import GLM3 Setup...");
					sub_14040F380(v296, v81, v244, &v242);
					sub_1400403F0(v279);
					sub_1400403F0(v242);
					if (sub_1403DB020(v296, 5i64))
					{
						sub_14040F1B0(v296, &v221);
						v82 = v221;
						v212 = v221;
						if ((*(v221 - 2) & 0x30000000) == 0)
							_InterlockedIncrement(v221 - 4);
						v243 = v221;
						v83 = *(v82 - 16);
						if ((v83 & 0x30000000) == 0)
							_InterlockedIncrement((v82 - 16));
						sub_1401EA690(v83, &v243);
						v84 = qword_140EBFF78;
						v85 = operator new(0x220ui64);
						v86 = sub_140189A70(v85);
						sub_140274EA0(v84, v86);
						v218 = operator new(0x220ui64);
						v87 = sub_140189A70(v218);
						sub_140274EA0(a1 - 22, v87);
						sub_1400403F0(v221);
						sub_14031BA10(&v221);
					}
					sub_14040F290(v296);
					sub_14031BA10(v244);
					sub_1400403F0(v245);
					break;
				case 0x5A:
					sub_140048D00(&v211, &unk_14046E3AB);
					sub_1401DA930(v88, &v211);
					break;
				case 0x5B:
					sub_1402699F0();
					sub_1401DA2E0();
					v212 = operator new(0x220ui64);
					v89 = sub_140189A70(v212);
					v90 = a1[49];
					a1[49] = v89;
					if (v90)
						(**v90)(v90, 1i64);
					v91 = qword_140EBFF78;
					v92 = operator new(0x220ui64);
					v93 = sub_140189A70(v92);
					sub_140274EA0(v91, v93);
					v212 = operator new(0x220ui64);
					v94 = sub_140189A70(v212);
					sub_140274EA0(a1 - 22, v94);
					break;
				case 8:
					sub_140325AF0();
					break;
				default:
					sub_1402699F0();
					v95 = *(ArgList + 281);
					v246 = v95;
					if ((*(v95 - 4) & 0x30000000) == 0)
						_InterlockedIncrement(v95 - 4);
					v96 = String::length(&v246);
					sub_1400403F0(v246);
					if (v96 > 0)
					{
						v98 = *(ArgList + 281);
						v247[0] = v98;
						if ((*(v98 - 16) & 0x30000000) == 0)
							_InterlockedIncrement((v98 - 16));
						sub_140200820(ArgList, v247, 0i64);
					}
					v232 = dword_140DDCDD0;
					sub_1401EB990(v97, (v3 % 20), &v232);
					v247[1] = v232;
					if ((*(v232 - 4) & 0x30000000) == 0)
						_InterlockedIncrement(v232 - 4);
					sub_1401F87B0(ArgList);
					v99 = qword_140EBFF78;
					v100 = operator new(0x220ui64);
					v101 = sub_140189A70(v100);
					sub_140274EA0(v99, v101);
					v212 = operator new(0x220ui64);
					v102 = sub_140189A70(v212);
					sub_140274EA0(a1 - 22, v102);
					sub_1400403F0(v232);
					break;
				}
				goto LABEL_362;
			}
			sub_1402699F0();
			v263 = *(ArgList + 281);
			if ((*(v263 - 4) & 0x30000000) == 0)
				_InterlockedIncrement(v263 - 4);
			v45 = String::length(&v263);
			v47 = *v46;
			if ((v47 & 0x30000000) == 0)
			{
				v47 = _InterlockedDecrement(v46);
				if (v47 == -1)
					j_j_free(v46);
			}
			if (v45 > 0)
			{
				v48 = *(ArgList + 281);
				v238 = v48;
				if ((*(v48 - 16) & 0x30000000) == 0)
					_InterlockedIncrement((v48 - 16));
				sub_140200820(ArgList, &v238, 0i64);
			}
			if (!*(ArgList + 632))
			{
				v270 = dword_140DDCDD0;
				v60 = sub_14031B460(&v272, "Please log in to the Genelec Cloud and try again!");
				v61 = sub_14031B460(&v271, "Action Required");
				sub_14040FE70(2, v61, v60, &v270, 0i64);
				v62 = (v271 - 16);
				if ((*(v271 - 16) & 0x30000000) == 0 && _InterlockedDecrement(v62) == -1)
					j_j_free(v62);
				v63 = (v272 - 16);
				if ((*(v272 - 16) & 0x30000000) == 0 && _InterlockedDecrement(v63) == -1)
					j_j_free(v63);
				v218 = operator new(0x118ui64);
				v64 = sub_14010CDD0(v218);
				sub_140274EA0(a1 - 22, v64);
				goto LABEL_362;
			}
			sub_1401F8EB0(v47, &v231);
			v49 = v231;
			if (String::isNotEmpty(v231, &unk_14046E3AE))
			{
				if (String::isNotEmpty(v49, "NoSetupFound"))
				{
					sub_14031A6B0(ArgList + 872, &v231);
					v214 = operator new(0x120ui64);
					v58 = sub_14010F010(v214);
					sub_140274EA0(a1 - 22, v58);
				}
				else
				{
					v267 = dword_140DDCDD0;
					v54 = sub_14031B460(&v269, "There is no setup in your Cloud space!");
					v55 = sub_14031B460(&v268, "Cloud space is empty");
					sub_14040FE70(3, v55, v54, &v267, 0i64);
					v56 = (v268 - 16);
					if ((*(v268 - 16) & 0x30000000) == 0 && _InterlockedDecrement(v56) == -1)
						j_j_free(v56);
					v57 = (v269 - 16);
					if ((*(v269 - 16) & 0x30000000) == 0 && _InterlockedDecrement(v57) == -1)
						j_j_free(v57);
				}
			}
			else
			{
				v264 = dword_140DDCDD0;
				v50 = sub_14031B460(
					&v266,
					"Cannot connect to the Genelec Cloud, please check your Internet connection and try again!");
				v51 = sub_14031B460(&v265, "Open from Cloud Error");
				sub_14040FE70(2, v51, v50, &v264, 0i64);
				v52 = (v265 - 16);
				if ((*(v265 - 16) & 0x30000000) == 0 && _InterlockedDecrement(v52) == -1)
					j_j_free(v52);
				v53 = (v266 - 16);
				if ((*(v266 - 16) & 0x30000000) == 0 && _InterlockedDecrement(v53) == -1)
					j_j_free(v53);
			}
			v24 = v231;
			goto LABEL_133;
		}
		sub_1402699F0();
		v26 = *(ArgList + 272);
		v262 = v26;
		if ((*(v26 - 16) & 0x30000000) == 0)
			_InterlockedIncrement((v26 - 16));
		sub_140308BF0(&v230, &v262);
		v27 = (v262 - 16);
		if ((*(v262 - 16) & 0x30000000) == 0 && _InterlockedDecrement(v27) == -1)
			j_j_free(v27);
		sub_140048D00(&v235, "*.sam");
		v28 = sub_14031B460(&v277, "GLM4 - Save As...");
		sub_14040F380(v290, v28, &v230, &v235);
		v29 = (v277 - 16);
		if ((*(v277 - 16) & 0x30000000) == 0 && _InterlockedDecrement(v29) == -1)
			j_j_free(v29);
		v30 = (v235 - 16);
		if ((*(v235 - 16) & 0x30000000) == 0 && _InterlockedDecrement(v30) == -1)
			j_j_free(v30);
		if (!sub_1403DB020(v290, 134i64))
		{
		LABEL_103:
			v218 = operator new(0x220ui64);
			v44 = sub_140189A70(v218);
			sub_140274EA0(a1 - 22, v44);
			sub_14040F290(v290);
			sub_14031BA10(&v230);
			goto LABEL_362;
		}
		sub_14040F1B0(v290, &v219);
		sub_14031AE20(&v219, &v229);
		if (sub_14026E2D0(&v229))
		{
			v218 = v219;
			v42 = (v219 - 16);
			if ((*(v219 - 4) & 0x30000000) == 0)
				_InterlockedIncrement(v42);
			v237 = v219;
			if ((*v42 & 0x30000000) == 0)
				_InterlockedIncrement(v42);
			LOBYTE(v31) = 1;
			sub_140200820(ArgList, &v237, v31);
			if ((*v42 & 0x30000000) == 0 && _InterlockedDecrement(v42) == -1)
				j_j_free(v42);
			v43 = (v229 - 16);
			if ((*(v229 - 16) & 0x30000000) == 0 && _InterlockedDecrement(v43) == -1)
				j_j_free(v43);
			sub_14031BA10(&v219);
			goto LABEL_103;
		}
		v283 = dword_140DDCDD0;
		sub_140048D00(&v236, "\\ / : * ? | < > \" # % & { } $ ! ' @ + = `");
		v32 = sub_14031B460(v280, "Setup name contains invalid charaters, please type in a name without special characters.");
		v33 = sub_14031B5C0(v281, v32, "\n");
		v34 = sub_14031B550(v285, v33, &v236);
		v35 = sub_14031B460(&v284, "Error");
		sub_14040FE70(2, v35, v34, &v283, 0i64);
		v36 = (v284 - 16);
		if ((*(v284 - 16) & 0x30000000) == 0 && _InterlockedDecrement(v36) == -1)
			j_j_free(v36);
		v37 = (v285[0] - 16);
		if ((*(v285[0] - 16) & 0x30000000) == 0 && _InterlockedDecrement(v37) == -1)
			j_j_free(v37);
		v38 = (v236 - 16);
		if ((*(v236 - 16) & 0x30000000) == 0 && _InterlockedDecrement(v38) == -1)
			j_j_free(v38);
		v39 = (v229 - 16);
		if ((*(v229 - 16) & 0x30000000) == 0 && _InterlockedDecrement(v39) == -1)
			j_j_free(v39);
		v40 = v219 - 16;
		if ((*(v219 - 4) & 0x30000000) == 0 && _InterlockedDecrement(v40) == -1)
			j_j_free(v40);
		sub_14040F290(v290);
		v41 = (v230 - 16);
		if ((*(v230 - 16) & 0x30000000) == 0 && _InterlockedDecrement(v41) == -1)
			j_j_free(v41);*/
	}

	//==============================================================================
	// The following methods implement the ApplicationCommandTarget interface, allowing
	// this window to publish a set of actions it can perform, and which can be mapped
	// onto menus, keypresses, etc.
	ApplicationCommandTarget* getNextCommandTarget() override
	{
		return findFirstTargetParentComponent();
	}
	void getAllCommands(Array<CommandID>& c) override
	{
		Array<CommandID> commands{ CommandIDs::New,
									CommandIDs::Open,
									CommandIDs::OpenRecent,
									CommandIDs::Save,
									CommandIDs::SaveAs,
									CommandIDs::OpenfromCloud,
									CommandIDs::SavetoCloud,
									CommandIDs::ImportGLM3Setup,
									CommandIDs::Exit,
									CommandIDs::Add,
									CommandIDs::Duplicate,CommandIDs::Edit,CommandIDs::Calibrate,CommandIDs::Delete,CommandIDs::SoundCharacterProfiler,
									CommandIDs::StandardLoudnessSPLCalibration ,CommandIDs::SetPresetLevels ,CommandIDs::StoretoLoudSpeakers,CommandIDs::ViewSummary,
									CommandIDs::SAMSystemPower,CommandIDs::AutomaticWakeUPSystemWithGLM,CommandIDs::AutomaticShutDownSystemWithGLM,CommandIDs::WakeUPAll,CommandIDs::ShutDownAll, CommandIDs::EnableUSBController,
									CommandIDs::SettoCurrentLevel,CommandIDs::Remove,CommandIDs::MaxLevelRestriction, CommandIDs::LEDState,CommandIDs::LEDState,CommandIDs::On,CommandIDs::Off,CommandIDs::EditLayout,
									CommandIDs::MIDISettings ,CommandIDs::Theme ,CommandIDs::UseDarkTheme,CommandIDs::UseLightTheme,CommandIDs::LevelPanel,CommandIDs::Never,CommandIDs::For2Sec,CommandIDs::For3Sec,CommandIDs::For4Sec,CommandIDs::For5Sec,CommandIDs::LeftTop,CommandIDs::LeftCenter,CommandIDs::LeftBottom,CommandIDs::CenterTop,CommandIDs::CenterCenter,CommandIDs::CenterBottom,CommandIDs::RightTop,CommandIDs::RightCenter,CommandIDs::RightBottom,
									CommandIDs::KeyboardShortCuts,CommandIDs::Enabled,CommandIDs::Disabled,CommandIDs::Language,CommandIDs::Chinese,CommandIDs::English,CommandIDs::Finnish,CommandIDs::French,CommandIDs::German,CommandIDs::Italian,CommandIDs::Japanese,CommandIDs::Korean,CommandIDs::Portuguese,CommandIDs::Spanish,CommandIDs::Tooltips,
									CommandIDs::TEnabled,CommandIDs::TDisabled,CommandIDs::Login,CommandIDs::Services,CommandIDs::GLMManual,CommandIDs::ExportSetuptoDesktop,CommandIDs::About };
		c.addArray(commands);
	}

	void getCommandInfo(CommandID commandID, ApplicationCommandInfo& result) override
	{
		switch (commandID)
		{
		case CommandIDs::New:
			result.setInfo("New", "Places the menu bar inside the application window", "Menu", 0);			
			result.addDefaultKeypress('w', ModifierKeys::shiftModifier);
			break;
		case CommandIDs::Open:
			result.setInfo("Open", "Places the menu bar inside the application window", "Menu", 0);
			//result.setTicked(menuBarPosition == MenuBarPosition::window);
			result.addDefaultKeypress('w', ModifierKeys::shiftModifier);
			break;
		case CommandIDs::OpenRecent:
			result.setInfo("Open Recent", "Places the menu bar inside the application window", "Menu", 0);
			//result.setTicked(menuBarPosition == MenuBarPosition::window);
			result.addDefaultKeypress('w', ModifierKeys::shiftModifier);
			break;
		case CommandIDs::Save:
			result.setInfo("Save", "Places the menu bar inside the application window", "Menu", 0);
			//result.setTicked(menuBarPosition == MenuBarPosition::window);
			result.addDefaultKeypress('w', ModifierKeys::shiftModifier);
			break;
		case CommandIDs::SaveAs:
			result.setInfo("Save As", "Uses a global menu bar", "Menu", 0);
			//result.setTicked(menuBarPosition == MenuBarPosition::global);
			result.addDefaultKeypress('g', ModifierKeys::shiftModifier);
			break;
		case CommandIDs::OpenfromCloud:
			result.setInfo("Open from Cloud", "Uses a burger menu", "Menu", 0);
			//result.setTicked(menuBarPosition == MenuBarPosition::burger);
			result.addDefaultKeypress('b', ModifierKeys::shiftModifier);
			break;
		case CommandIDs::SavetoCloud:
			result.setInfo("Save to Cloud", "Uses a burger menu", "Menu", 0);
			//result.setTicked(menuBarPosition == MenuBarPosition::burger);
			result.addDefaultKeypress('b', ModifierKeys::shiftModifier);
			break;
		case CommandIDs::ImportGLM3Setup:
			result.setInfo("Import GLM3 Setup", "Uses a burger menu", "Menu", 0);
			//result.setTicked(menuBarPosition == MenuBarPosition::burger);
			result.addDefaultKeypress('b', ModifierKeys::shiftModifier);
			break;
		case CommandIDs::Exit:
			result.setInfo("Exit", "Uses a burger menu", "Menu", 0);
			//result.setTicked(menuBarPosition == MenuBarPosition::burger);
			result.addDefaultKeypress('b', ModifierKeys::shiftModifier);
			break;
			//Menu->Group
		case CommandIDs::Add:
			result.setInfo("Add", "Uses a burger menu", "Menu", 0);
			//result.setTicked(menuBarPosition == MenuBarPosition::burger);
			result.addDefaultKeypress('b', ModifierKeys::shiftModifier);
			break;
		case CommandIDs::Duplicate:
			result.setInfo("Duplicate", "Uses a burger menu", "Menu", 0);
			//result.setTicked(menuBarPosition == MenuBarPosition::burger);
			result.addDefaultKeypress('b', ModifierKeys::shiftModifier);
			break;
		case CommandIDs::Edit:
			result.setInfo("Edit", "Uses a burger menu", "Menu", 0);
			//result.setTicked(menuBarPosition == MenuBarPosition::burger);
			result.addDefaultKeypress('b', ModifierKeys::shiftModifier);
			break;
		case CommandIDs::Calibrate:
			result.setInfo("Calibrate", "Uses a burger menu", "Menu", 0);
			//result.setTicked(menuBarPosition == MenuBarPosition::burger);
			result.addDefaultKeypress('b', ModifierKeys::shiftModifier);
			break;
		case CommandIDs::Delete:
			result.setInfo("Delete", "Uses a burger menu", "Menu", 0);
			//result.setTicked(menuBarPosition == MenuBarPosition::burger);
			result.addDefaultKeypress('b', ModifierKeys::shiftModifier);
			break;
		case CommandIDs::SoundCharacterProfiler:
			result.setInfo("Sound Character Profiler", "Uses a burger menu", "Menu", 0);
			//result.setTicked(menuBarPosition == MenuBarPosition::burger);
			result.addDefaultKeypress('b', ModifierKeys::shiftModifier);
			break;
		case CommandIDs::StandardLoudnessSPLCalibration:
			result.setInfo("Standard Loudness SPL Calibration", "Uses a burger menu", "Menu", 0);
			//result.setTicked(menuBarPosition == MenuBarPosition::burger);
			result.addDefaultKeypress('b', ModifierKeys::shiftModifier);
			break;
		case CommandIDs::SetPresetLevels:
			result.setInfo("Set Preset Levels", "Uses a burger menu", "Menu", 0);
			//result.setTicked(menuBarPosition == MenuBarPosition::burger);
			result.addDefaultKeypress('b', ModifierKeys::shiftModifier);
			break;
		case CommandIDs::StoretoLoudSpeakers:
			result.setInfo("Store to LoudSpeakers", "Uses a burger menu", "Menu", 0);
			//result.setTicked(menuBarPosition == MenuBarPosition::burger);
			result.addDefaultKeypress('b', ModifierKeys::shiftModifier);
			break;
		case CommandIDs::ViewSummary:
			result.setInfo("View Summary", "Uses a burger menu", "Menu", 0);
			//result.setTicked(menuBarPosition == MenuBarPosition::burger);
			result.addDefaultKeypress('b', ModifierKeys::shiftModifier);
			break;
		case CommandIDs::SAMSystemPower:
			result.setInfo("SAMSystemPower", "Uses a burger menu", "Menu", 0);
			//result.setTicked(menuBarPosition == MenuBarPosition::burger);
			result.addDefaultKeypress('b', ModifierKeys::shiftModifier);
			break;
		case CommandIDs::AutomaticWakeUPSystemWithGLM:
			result.setInfo("Automatic WakeUP System With GLM", "Uses a burger menu", "Menu", 0);
			//result.setTicked(menuBarPosition == MenuBarPosition::burger);
			result.addDefaultKeypress('b', ModifierKeys::shiftModifier);
			break;
		case CommandIDs::AutomaticShutDownSystemWithGLM:
			result.setInfo("Automatic ShutDown System With GLM", "Uses a burger menu", "Menu", 0);
			//result.setTicked(menuBarPosition == MenuBarPosition::burger);
			result.addDefaultKeypress('b', ModifierKeys::shiftModifier);
			break;
		case CommandIDs::WakeUPAll:
			result.setInfo("WakeUPAll", "Uses a burger menu", "Menu", 0);
			//result.setTicked(menuBarPosition == MenuBarPosition::burger);
			result.addDefaultKeypress('b', ModifierKeys::shiftModifier);
			break;
		case CommandIDs::ShutDownAll:
			result.setInfo("ShutDownAll", "Uses a burger menu", "Menu", 0);
			//result.setTicked(menuBarPosition == MenuBarPosition::burger);
			result.addDefaultKeypress('b', ModifierKeys::shiftModifier);
			break;
		case CommandIDs::EnableUSBController:
			result.setInfo("EnableUSBController", "Uses a burger menu", "Menu", 0);
			//result.setTicked(menuBarPosition == MenuBarPosition::burger);
			result.addDefaultKeypress('b', ModifierKeys::shiftModifier);
			break;
		case CommandIDs::MaxLevelRestriction:
			result.setInfo("MaxLevelRestriction", "Uses a burger menu", "Menu", 0);
			//result.setTicked(menuBarPosition == MenuBarPosition::burger);
			result.addDefaultKeypress('b', ModifierKeys::shiftModifier);
			break;
		case CommandIDs::SettoCurrentLevel:
			result.setInfo("Set to CurrentLevel", "Uses a burger menu", "Menu", 0);
			//result.setTicked(menuBarPosition == MenuBarPosition::burger);
			result.addDefaultKeypress('b', ModifierKeys::shiftModifier);
			break;
		case CommandIDs::Remove:
			result.setInfo("Remove", "Uses a burger menu", "Menu", 0);
			//result.setTicked(menuBarPosition == MenuBarPosition::burger);
			result.addDefaultKeypress('b', ModifierKeys::shiftModifier);
			break;
		case CommandIDs::LEDState:
			result.setInfo("LEDState", "Uses a burger menu", "Menu", 0);
			//result.setTicked(menuBarPosition == MenuBarPosition::burger);
			result.addDefaultKeypress('b', ModifierKeys::shiftModifier);
			break;
		case CommandIDs::On:
			result.setInfo("On", "Uses a burger menu", "Menu", 0);
			//result.setTicked(menuBarPosition == MenuBarPosition::burger);
			result.addDefaultKeypress('b', ModifierKeys::shiftModifier);
			break;
		case CommandIDs::Off:
			result.setInfo("Off", "Uses a burger menu", "Menu", 0);
			//result.setTicked(menuBarPosition == MenuBarPosition::burger);
			result.addDefaultKeypress('b', ModifierKeys::shiftModifier);
			break;
		case CommandIDs::EditLayout:
			result.setInfo("Edit Layout", "Uses a burger menu", "Menu", 0);
			//result.setTicked(menuBarPosition == MenuBarPosition::burger);
			result.addDefaultKeypress('b', ModifierKeys::shiftModifier);
			break;
			//
		case CommandIDs::MIDISettings:
			result.setInfo("MIDISettings", "Uses a burger menu", "Menu", 0);
			//result.setTicked(menuBarPosition == MenuBarPosition::burger);
			result.addDefaultKeypress('b', ModifierKeys::shiftModifier);
			break;
		case CommandIDs::Theme:
			result.setInfo("Theme", "Uses a burger menu", "Menu", 0);
			//result.setTicked(menuBarPosition == MenuBarPosition::burger);
			result.addDefaultKeypress('b', ModifierKeys::shiftModifier);
			break;
		case CommandIDs::UseDarkTheme:
			result.setInfo("Use Dark Theme", "Uses a burger menu", "Menu", 0);
			//result.setTicked(menuBarPosition == MenuBarPosition::burger);
			result.addDefaultKeypress('b', ModifierKeys::shiftModifier);
			break;
		case CommandIDs::UseLightTheme:
			result.setInfo("Use Light Theme", "Uses a burger menu", "Menu", 0);
			//result.setTicked(menuBarPosition == MenuBarPosition::burger);
			result.addDefaultKeypress('b', ModifierKeys::shiftModifier);
			break;
		case CommandIDs::LevelPanel:
			result.setInfo("Level Panel", "Uses a burger menu", "Menu", 0);
			//result.setTicked(menuBarPosition == MenuBarPosition::burger);
			result.addDefaultKeypress('b', ModifierKeys::shiftModifier);
			break;
		case CommandIDs::Visible:
			result.setInfo("Visible", "Uses a burger menu", "Menu", 0);
			//result.setTicked(menuBarPosition == MenuBarPosition::burger);
			result.addDefaultKeypress('b', ModifierKeys::shiftModifier);
			break;
		case CommandIDs::Never:
			result.setInfo("Never", "Uses a burger menu", "Menu", 0);
			//result.setTicked(menuBarPosition == MenuBarPosition::burger);
			result.addDefaultKeypress('b', ModifierKeys::shiftModifier);
			break;
		case CommandIDs::For2Sec:
			result.setInfo("For2Sec", "Uses a burger menu", "Menu", 0);
			//result.setTicked(menuBarPosition == MenuBarPosition::burger);
			result.addDefaultKeypress('b', ModifierKeys::shiftModifier);
			break;
		case CommandIDs::For3Sec:
			result.setInfo("For3Sec", "Uses a burger menu", "Menu", 0);
			//result.setTicked(menuBarPosition == MenuBarPosition::burger);
			result.addDefaultKeypress('b', ModifierKeys::shiftModifier);
			break;
		case CommandIDs::For4Sec:
			result.setInfo("For4Sec", "Uses a burger menu", "Menu", 0);
			//result.setTicked(menuBarPosition == MenuBarPosition::burger);
			result.addDefaultKeypress('b', ModifierKeys::shiftModifier);
			break;
		case CommandIDs::For5Sec:
			result.setInfo("For5Sec", "Uses a burger menu", "Menu", 0);
			//result.setTicked(menuBarPosition == MenuBarPosition::burger);
			result.addDefaultKeypress('b', ModifierKeys::shiftModifier);
			break;
		case CommandIDs::KeyboardShortCuts:
			result.setInfo("Keyboard ShortCuts", "Uses a burger menu", "Menu", 0);
			//result.setTicked(menuBarPosition == MenuBarPosition::burger);
			result.addDefaultKeypress('b', ModifierKeys::shiftModifier);
			break;
		case CommandIDs::Enabled:
			result.setInfo("Enabled", "Uses a burger menu", "Menu", 0);
			//result.setTicked(menuBarPosition == MenuBarPosition::burger);
			result.addDefaultKeypress('b', ModifierKeys::shiftModifier);
			break;
		case CommandIDs::Disabled:
			result.setInfo("Disabled", "Uses a burger menu", "Menu", 0);
			//result.setTicked(menuBarPosition == MenuBarPosition::burger);
			result.addDefaultKeypress('b', ModifierKeys::shiftModifier);
			break;
		case CommandIDs::Position:
			result.setInfo("Position", "Uses a burger menu", "Menu", 0);
			//result.setTicked(menuBarPosition == MenuBarPosition::burger);
			result.addDefaultKeypress('b', ModifierKeys::shiftModifier);
			break;
		case CommandIDs::LeftTop:
			result.setInfo("LeftTop", "Uses a burger menu", "Menu", 0);
			//result.setTicked(menuBarPosition == MenuBarPosition::burger);
			result.addDefaultKeypress('b', ModifierKeys::shiftModifier);
			break;
		case CommandIDs::LeftCenter:
			result.setInfo("LeftCenter", "Uses a burger menu", "Menu", 0);
			//result.setTicked(menuBarPosition == MenuBarPosition::burger);
			result.addDefaultKeypress('b', ModifierKeys::shiftModifier);
			break;
		case CommandIDs::LeftBottom:
			result.setInfo("LeftBottom", "Uses a burger menu", "Menu", 0);
			//result.setTicked(menuBarPosition == MenuBarPosition::burger);
			result.addDefaultKeypress('b', ModifierKeys::shiftModifier);
			break;
		case CommandIDs::CenterTop:
			result.setInfo("CenterTop", "Uses a burger menu", "Menu", 0);
			//result.setTicked(menuBarPosition == MenuBarPosition::burger);
			result.addDefaultKeypress('b', ModifierKeys::shiftModifier);
			break;
		case CommandIDs::CenterCenter:
			result.setInfo("CenterCenter", "Uses a burger menu", "Menu", 0);
			//result.setTicked(menuBarPosition == MenuBarPosition::burger);
			result.addDefaultKeypress('b', ModifierKeys::shiftModifier);
			break;
		case CommandIDs::CenterBottom:
			result.setInfo("CenterBottom", "Uses a burger menu", "Menu", 0);
			//result.setTicked(menuBarPosition == MenuBarPosition::burger);
			result.addDefaultKeypress('b', ModifierKeys::shiftModifier);
			break;
		case CommandIDs::RightTop:
			result.setInfo("RightTop", "Uses a burger menu", "Menu", 0);
			//result.setTicked(menuBarPosition == MenuBarPosition::burger);
			result.addDefaultKeypress('b', ModifierKeys::shiftModifier);
			break;
		case CommandIDs::RightCenter:
			result.setInfo("RightCenter", "Uses a burger menu", "Menu", 0);
			//result.setTicked(menuBarPosition == MenuBarPosition::burger);
			result.addDefaultKeypress('b', ModifierKeys::shiftModifier);
			break;
		case CommandIDs::RightBottom:
			result.setInfo("RightBottom", "Uses a burger menu", "Menu", 0);
			//result.setTicked(menuBarPosition == MenuBarPosition::burger);
			result.addDefaultKeypress('b', ModifierKeys::shiftModifier);
			break;
		case CommandIDs::Language:
			result.setInfo("Language", "Uses a burger menu", "Menu", 0);
			//result.setTicked(menuBarPosition == MenuBarPosition::burger);
			result.addDefaultKeypress('b', ModifierKeys::shiftModifier);
			break;
		case CommandIDs::Chinese:
			result.setInfo("Chinese", "Uses a burger menu", "Menu", 0);
			//result.setTicked(menuBarPosition == MenuBarPosition::burger);
			result.addDefaultKeypress('b', ModifierKeys::shiftModifier);
			break;
		case CommandIDs::English:
			result.setInfo("English", "Uses a burger menu", "Menu", 0);
			//result.setTicked(menuBarPosition == MenuBarPosition::burger);
			result.addDefaultKeypress('b', ModifierKeys::shiftModifier);
			break;
		case CommandIDs::Finnish:
			result.setInfo("Finnish", "Uses a burger menu", "Menu", 0);
			//result.setTicked(menuBarPosition == MenuBarPosition::burger);
			result.addDefaultKeypress('b', ModifierKeys::shiftModifier);
			break;
		case CommandIDs::French:
			result.setInfo("French", "Uses a burger menu", "Menu", 0);
			//result.setTicked(menuBarPosition == MenuBarPosition::burger);
			result.addDefaultKeypress('b', ModifierKeys::shiftModifier);
			break;
		case CommandIDs::German:
			result.setInfo("German", "Uses a burger menu", "Menu", 0);
			//result.setTicked(menuBarPosition == MenuBarPosition::burger);
			result.addDefaultKeypress('b', ModifierKeys::shiftModifier);
			break;
		case CommandIDs::Italian:
			result.setInfo("Italian", "Uses a burger menu", "Menu", 0);
			//result.setTicked(menuBarPosition == MenuBarPosition::burger);
			result.addDefaultKeypress('b', ModifierKeys::shiftModifier);
			break;
		case CommandIDs::Japanese:
			result.setInfo("Japanese", "Uses a burger menu", "Menu", 0);
			//result.setTicked(menuBarPosition == MenuBarPosition::burger);
			result.addDefaultKeypress('b', ModifierKeys::shiftModifier);
			break;
		case CommandIDs::Korean:
			result.setInfo("Korean", "Uses a burger menu", "Menu", 0);
			//result.setTicked(menuBarPosition == MenuBarPosition::burger);
			result.addDefaultKeypress('b', ModifierKeys::shiftModifier);
			break;
		case CommandIDs::Portuguese:
			result.setInfo("Portuguese", "Uses a burger menu", "Menu", 0);
			//result.setTicked(menuBarPosition == MenuBarPosition::burger);
			result.addDefaultKeypress('b', ModifierKeys::shiftModifier);
			break;
		case CommandIDs::Spanish:
			result.setInfo("Spanish", "Uses a burger menu", "Menu", 0);
			//result.setTicked(menuBarPosition == MenuBarPosition::burger);
			result.addDefaultKeypress('b', ModifierKeys::shiftModifier);
			break;
		case CommandIDs::Tooltips:
			result.setInfo("Tooltips", "Uses a burger menu", "Menu", 0);
			//result.setTicked(menuBarPosition == MenuBarPosition::burger);
			result.addDefaultKeypress('b', ModifierKeys::shiftModifier);
			break;
		case CommandIDs::TEnabled:
			result.setInfo("Enabled", "Uses a burger menu", "Menu", 0);
			//result.setTicked(menuBarPosition == MenuBarPosition::burger);
			result.addDefaultKeypress('b', ModifierKeys::shiftModifier);
			break;
		case CommandIDs::TDisabled:
			result.setInfo("Disabled", "Uses a burger menu", "Menu", 0);
			//result.setTicked(menuBarPosition == MenuBarPosition::burger);
			result.addDefaultKeypress('b', ModifierKeys::shiftModifier);
			break;
		case CommandIDs::Login:
			result.setInfo("Login", "Uses a burger menu", "Menu", 0);
			//result.setTicked(menuBarPosition == MenuBarPosition::burger);
			result.addDefaultKeypress('b', ModifierKeys::shiftModifier);
			break;
		case CommandIDs::Services:
			result.setInfo("Services", "Uses a burger menu", "Menu", 0);
			//result.setTicked(menuBarPosition == MenuBarPosition::burger);
			result.addDefaultKeypress('b', ModifierKeys::shiftModifier);
			break;
		case CommandIDs::GLMManual:
			result.setInfo("GLM Manual", "Uses a burger menu", "Menu", 0);
			//result.setTicked(menuBarPosition == MenuBarPosition::burger);
			result.addDefaultKeypress('b', ModifierKeys::shiftModifier);
			break;
		case CommandIDs::ExportSetuptoDesktop:
			result.setInfo("Export Setup to Desktop", "Uses a burger menu", "Menu", 0);
			//result.setTicked(menuBarPosition == MenuBarPosition::burger);
			result.addDefaultKeypress('b', ModifierKeys::shiftModifier);
			break;
		case CommandIDs::About:
			result.setInfo("About", "Uses a burger menu", "Menu", 0);
			//result.setTicked(menuBarPosition == MenuBarPosition::burger);
			result.addDefaultKeypress('b', ModifierKeys::shiftModifier);
			break;

		default:
			break;
		}
	}

	bool perform(const InvocationInfo& info) override
	{
		auto fileToSave = File::createTempFile("saveChooserDemo");
		switch (info.commandID)
		{
		case CommandIDs::New:
			//setMenuBarPosition(MenuBarPosition::window);
			break;
		case CommandIDs::Open:
			fc.reset(new FileChooser("Choose a file to open...", File::getCurrentWorkingDirectory(),
				"*", true));

			fc->launchAsync(FileBrowserComponent::canSelectMultipleItems | FileBrowserComponent::openMode
				| FileBrowserComponent::canSelectFiles,
				[](const FileChooser& chooser)
				{
					String chosen;
					auto results = chooser.getURLResults();

					for (auto result : results)
						chosen << (result.isLocalFile() ? result.getLocalFile().getFullPathName()
							: result.toString(false)) << "\n";

					AlertWindow::showAsync(MessageBoxOptions()
						.withIconType(MessageBoxIconType::InfoIcon)
						.withTitle("File Chooser...")
						.withMessage("You picked: " + chosen)
						.withButton("OK"),
						nullptr);
				});
			break;
		case CommandIDs::OpenRecent:
			break;
		case CommandIDs::Save:
			//setMenuBarPosition(MenuBarPosition::burger);
			break;
		case CommandIDs::SaveAs:	
			if (fileToSave.createDirectory().wasOk())
			{
				fileToSave = fileToSave.getChildFile("JUCE.png");
				fileToSave.deleteFile();

				FileOutputStream outStream(fileToSave);

				/*if (outStream.openedOk())
					if (auto inStream = createAssetInputStream("juce_icon.png"))
						outStream.writeFromInputStream(*inStream, -1);*/
			}

			fc.reset(new FileChooser("Choose a file to save...",
				File::getCurrentWorkingDirectory().getChildFile(fileToSave.getFileName()),
				"*", true));

			fc->launchAsync(FileBrowserComponent::saveMode | FileBrowserComponent::canSelectFiles,
				[fileToSave](const FileChooser& chooser)
				{
					auto result = chooser.getURLResult();
					auto name = result.isEmpty() ? String()
						: (result.isLocalFile() ? result.getLocalFile().getFullPathName()
							: result.toString(true));

					// Android and iOS file choosers will create placeholder files for chosen
					// paths, so we may as well write into those files.
#if JUCE_ANDROID || JUCE_IOS
					if (!result.isEmpty())
					{
						std::unique_ptr<InputStream>  wi(fileToSave.createInputStream());
						std::unique_ptr<OutputStream> wo(result.createOutputStream());

						if (wi.get() != nullptr && wo.get() != nullptr)
						{
							auto numWritten = wo->writeFromInputStream(*wi, -1);
							jassertquiet(numWritten > 0);
							wo->flush();
						}
					}
#endif

					AlertWindow::showAsync(MessageBoxOptions()
						.withIconType(MessageBoxIconType::InfoIcon)
						.withTitle("File Chooser...")
						.withMessage("You picked: " + name)
						.withButton("OK"),
						nullptr);
				});
			break;
		case CommandIDs::OpenfromCloud:

			break;
		case CommandIDs::SavetoCloud:

			break;
		case CommandIDs::ImportGLM3Setup:
			fc.reset(new FileChooser("Choose a file to open...", File::getCurrentWorkingDirectory(),
				"*", true));

			fc->launchAsync(FileBrowserComponent::canSelectMultipleItems | FileBrowserComponent::openMode
				| FileBrowserComponent::canSelectFiles,
				[](const FileChooser& chooser)
				{
					String chosen;
					auto results = chooser.getURLResults();

					for (auto result : results)
						chosen << (result.isLocalFile() ? result.getLocalFile().getFullPathName()
							: result.toString(false)) << "\n";

					AlertWindow::showAsync(MessageBoxOptions()
						.withIconType(MessageBoxIconType::InfoIcon)
						.withTitle("File Chooser...")
						.withMessage("You picked: " + chosen)
						.withButton("OK"),
						nullptr);
				});
			break;
		case CommandIDs::Exit:	
			JUCEApplication::getInstance()->systemRequestedQuit();//JKM 2023/5/2
			break;
		case CommandIDs::Add:
			break;
		case CommandIDs::Duplicate:
			break;
		case CommandIDs::Edit:
			break;
		case CommandIDs::Calibrate:
			break;
		case CommandIDs::Delete:
			break;
		case CommandIDs::SoundCharacterProfiler:
			break;
		case CommandIDs::StandardLoudnessSPLCalibration:
			break;
		case CommandIDs::SetPresetLevels:
			break;
		case CommandIDs::StoretoLoudSpeakers:
			break;
		case CommandIDs::ViewSummary:
			break;
		case CommandIDs::SAMSystemPower:
			break;
		case CommandIDs::AutomaticWakeUPSystemWithGLM:
			break;
		case CommandIDs::AutomaticShutDownSystemWithGLM:
			break;
		case CommandIDs::WakeUPAll:
			break;
		case CommandIDs::ShutDownAll:
			break;
		case CommandIDs::EnableUSBController:
			break;
		case CommandIDs::MaxLevelRestriction:
			break;
		case CommandIDs::SettoCurrentLevel:
			break;
		case CommandIDs::Remove:
			break;
		case CommandIDs::LEDState:
			break;
		case CommandIDs::On:
			break;
		case CommandIDs::Off:
			break;
		case CommandIDs::EditLayout:
			break;
		case CommandIDs::MIDISettings:
			showDialogWindow();
			break;
		case CommandIDs::Theme:
			break;
		case CommandIDs::UseDarkTheme:
			break;
		case CommandIDs::UseLightTheme:
			break;
		case CommandIDs::LevelPanel:
			break;
		case CommandIDs::Visible:
			break;
		case CommandIDs::Never:
			break;
		case CommandIDs::For2Sec:
			break;
		case CommandIDs::For3Sec:
			break;
		case CommandIDs::For4Sec:
			break;
		case CommandIDs::For5Sec:
			break;
		case CommandIDs::KeyboardShortCuts:
			break;
		case CommandIDs::Enabled:
			break;
		case CommandIDs::Disabled:
			break;
		case CommandIDs::Position:
			break;
		case CommandIDs::LeftTop:
			break;
		case CommandIDs::LeftCenter:
			break;
		case CommandIDs::LeftBottom:
			break;
		case CommandIDs::CenterTop:
			break;
		case CommandIDs::CenterCenter:
			break;
		case CommandIDs::CenterBottom:
			break;
		case CommandIDs::RightTop:
			break;
		case CommandIDs::RightCenter:
			break;
		case CommandIDs::RightBottom:
			break;
		case CommandIDs::Language:
			break;
		case CommandIDs::Chinese:
			break;
		case CommandIDs::English:
			break;
		case CommandIDs::Finnish:
			break;
		case CommandIDs::French:
			break;
		case CommandIDs::German:
			break;
		case CommandIDs::Italian:
			break;
		case CommandIDs::Japanese:
			break;
		case CommandIDs::Korean:
			break;
		case CommandIDs::Portuguese:
			break;
		case CommandIDs::Spanish:
			break;
		case CommandIDs::Tooltips:
			break;
		case CommandIDs::TEnabled:
			break;
		case CommandIDs::TDisabled:
			break;
		case CommandIDs::Login:
			break;
		case CommandIDs::Services:
			break;
		case CommandIDs::GLMManual:
			break;
		case CommandIDs::ExportSetuptoDesktop:
			break;
		case CommandIDs::About:
			showGLMDialog();
			break;
		default:
			return false;
		}

		return true;
	}	
	void showDialogWindow()
	{
		String m;

		m << "Dialog Windows can be used to quickly show a component, usually blocking mouse input to other windows." << newLine
			<< newLine
			<< "They can also be quickly closed with the escape key, try it now.";

		DialogWindow::LaunchOptions options;
		auto* label = new Label();
		label->setText(m, dontSendNotification);
		label->setColour(Label::textColourId, Colours::whitesmoke);
		options.content.setOwned(label);

		Rectangle<int> area(0, 0, 300, 200);

		options.content->setSize(area.getWidth(), area.getHeight());

		options.dialogTitle = "Dialog Window";
		options.dialogBackgroundColour = Colour(0xff0e345a);
		options.escapeKeyTriggersCloseButton = true;
		options.useNativeTitleBar = false;
		options.resizable = true;

		dialogWindow = options.launchAsync();

		if (dialogWindow != nullptr)
			dialogWindow->centreWithSize(500, 400);
	}
	void showGLMDialog()
	{
		
		GLMAbout *glmAbout =new GLMAbout();
		
		DialogWindow::LaunchOptions options;
		
		options.content.setOwned(glmAbout);

		Rectangle<int> area(0, 0, 484, 438);

		options.content->setSize(area.getWidth(), area.getHeight());

		options.dialogTitle = "Dialog Window";
		//options.dialogBackgroundColour = Colour(0xff0e345a);
		options.escapeKeyTriggersCloseButton = true;
		options.useNativeTitleBar = false;
		options.resizable = true;

		dialogWindow = options.launchAsync();

		if (dialogWindow != nullptr)
			dialogWindow->centreWithSize(484, 438);
	}
	void setMenuBarPosition(MenuBarPosition newPosition)
	{
		if (menuBarPosition != newPosition)
		{
			menuBarPosition = newPosition;

			//if (menuBarPosition != MenuBarPosition::burger)
			//	sidePanel.showOrHide(false);

#if JUCE_MAC
			MenuBarModel::setMacMainMenu(menuBarPosition == MenuBarPosition::global ? this : nullptr);
#endif

			menuBar->setVisible(menuBarPosition == MenuBarPosition::window);
			//burgerMenu.setModel(menuBarPosition == MenuBarPosition::burger ? this : nullptr);
			//sidePanel.setContent(menuBarPosition == MenuBarPosition::burger ? &burgerMenu : nullptr, false);
			menuItemsChanged();

			resized();
		}
	}
	
private:
    //==============================================================================
    // Your private member variables go here...
	//=============JKM 2023.4.26=========================
	TabbedComponent tabs{ TabbedButtonBar::Orientation::TabsAtTop };
	std::unique_ptr<MenuBarComponent> menuBar;	
	SidePanel sidePanel{ "Menu", 300, false };
	MenuBarPosition menuBarPosition = MenuBarPosition::window;
	std::unique_ptr<FileChooser> fc;
	BurgerMenuComponent burgerMenu;
	SafePointer<DialogWindow> dialogWindow;
	GenelecLookAndFeel genelecLookAndFeel;


	//===================Add End==========================


    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (MainComponent)
};
