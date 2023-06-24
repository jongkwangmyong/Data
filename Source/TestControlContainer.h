#pragma once
#include <JuceHeader.h>
struct TestControlContainer : public Component, public juce::Button::Listener, public juce::Slider::Listener
{
public:
	void paint(Graphics& g) override;
	void resized() override;
	void buttonClicked(Button*) override;
	void sliderValueChanged(Slider* slider) override;
};