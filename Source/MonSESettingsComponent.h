#pragma once
#include <JuceHeader.h>

class MonSESettingsComponent :  public juce::Component,
								public juce::ComboBox::Listener,
								public juce::Slider::Listener
{
public:
	void paint(Graphics&) override;
	void comboBoxChanged(ComboBox* comboBoxThatHasChanged) override;
};

