#pragma once
#include <JuceHeader.h>
class HelpComponent : public Component,
					  public juce::Button::Listener 
{
public:
	void paint(Graphics&) override;
	void resized() override;
	void buttonClicked(Button*) override;
};

