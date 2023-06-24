#pragma once
#include <JuceHeader.h>
struct TestControlsComponent : public Component, public juce::Button::Listener
{
public:
	void paint(Graphics& g) override;
	void resized() override;
	void buttonClicked(Button*) override;
};