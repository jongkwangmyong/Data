#pragma once
#include <JuceHeader.h>
class ProfilerComponent : public Component, public juce::Button::Listener, public juce::ComboBox::Listener
{
public:
	void paint(Graphics& g) override;
	void resized() override;
	void buttonClicked(Button*) override;
	void comboBoxChanged(ComboBox* comboBoxThatHasChanged) override;
};