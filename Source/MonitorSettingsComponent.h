#pragma once
#include <JuceHeader.h>

class MonitorSettingsComponent :public juce::Component,
								public juce::TextEditor::Listener,
								public juce::ComboBox::Listener,
								public juce::Button::Listener,
								public juce::Slider::Listener
{
public:
	void comboBoxChanged(ComboBox* comboBoxThatHasChanged) override;
	void sliderValueChanged(Slider* slider) override;
	void buttonClicked(Button*) override;	
	void paint(Graphics&) override;
};

