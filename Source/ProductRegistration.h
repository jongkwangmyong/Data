#pragma once
#include <JuceHeader.h>
class ProductRegistration : public Component, public juce::Button::Listener
{
public:
	void paint(Graphics& g) override;
	void resized() override;
	void buttonClicked(Button*) override;
};