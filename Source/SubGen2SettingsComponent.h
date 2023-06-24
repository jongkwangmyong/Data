#pragma once
#include <JuceHeader.h>
class SubGen2SettingsComponent : public Component, public juce::Button::Listener, public juce::ComboBox::Listener, public juce::Slider::Listener, public juce::TextEditor::Listener
{
public:
	void paint(Graphics& g) override;
	void resized() override;
	void sliderValueChanged(Slider* slider) override;
	void comboBoxChanged(ComboBox* comboBoxThatHasChanged) override;
	void buttonClicked(Button*) override;
};