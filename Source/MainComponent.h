#pragma once

#include <JuceHeader.h>
#include "GenelecLookAndFeel.h"

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
		return { "File", "Group", "Preset Setup","Settings","User","Help" };
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
	void menuItemSelected(int /* menuItemID */, int /* topLevelMenuIndex */) override {}

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
