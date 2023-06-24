#pragma once
#include <JuceHeader.h>
class StoreSettingsComponent : public Component, public juce::Button::Listener, public juce::ComboBox::Listener, public juce::Slider::Listener
{
public:
	void paint(Graphics& g) override;
	void resized() override;
	void comboBoxChanged(ComboBox* comboBoxThatHasChanged) override;
};