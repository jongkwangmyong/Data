#pragma once
#include <JuceHeader.h>
class GroupPresetInfo :  public Component,
	                     public juce::Button::Listener
{
public:
	void mouseUp(const MouseEvent& event) override;
	void paint(Graphics&) override;
	void resized() override;
	void buttonClicked(Button*) override;
private:
};

