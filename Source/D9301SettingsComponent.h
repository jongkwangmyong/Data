#pragma once
#include <JuceHeader.h>
namespace juce
{

	class D9301SettingsComponent : public juce::Component,
								   public juce::ComboBox::Listener,
								   public juce::Button::Listener
	{
	public:
		//==============================================================================
		D9301SettingsComponent();
		~D9301SettingsComponent() override;

		void paint(Graphics& g) override;

		void comboBoxChanged(ComboBox* comboBoxThatHasChanged) override;

		void buttonClicked(Button*) override;
	};

} // namespace juce
