#pragma once
#include <JuceHeader.h>
class RefCalComponent : public Component, public juce::ChangeListener, public juce::Button::Listener, public juce::ComboBox::Listener, public juce::Slider::Listener
{
public:
	void paint(Graphics& g) override;
	void resized() override;
	void buttonClicked(Button*) override;
	void comboBoxChanged(ComboBox* comboBoxThatHasChanged) override;
	void changeListenerCallback(ChangeBroadcaster* source) override;
};