#pragma once
#include <JuceHeader.h>
class SubGen1SettingsComponent : public Component, public juce::Button::Listener, public juce::ComboBox::Listener, public juce::Slider::Listener
{
public:
	void paint(Graphics& g) override;
	void comboBoxChanged(ComboBox* comboBoxThatHasChanged) override;
	void buttonClicked(Button*) override;
	void sliderValueChanged(Slider* slider) override;
};