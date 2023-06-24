#pragma once
#include <JuceHeader.h>
class SoloMuteMiniComponent : public Component, public juce::Button::Listener
{
public:
	void paint(Graphics& g) override;
	void resized() override;
};