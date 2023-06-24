#pragma once
#include <JuceHeader.h>
class MonGen1SettingsComponent :public juce::Component,
								public juce::ComboBox::Listener,
								public juce::Button::Listener,
								public juce::Slider::Listener								
{
public:
	void sliderValueChanged(Slider* slider) override;
	void comboBoxChanged(ComboBox* comboBoxThatHasChanged) override;
	void buttonClicked(Button*) override;
	void paint(Graphics&) override;
private:
};

