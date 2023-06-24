#pragma once
#include <JuceHeader.h>
class InfoPanel :  public juce::Component,
					public juce::Timer,
					public juce::ChangeListener,
					public juce::Button::Listener
{
public:
	void buttonClicked(Button*) override;
	void changeListenerCallback(ChangeBroadcaster* source) override;
	void timerCallback() override;
	void lookAndFeelChanged() override;
	void paint(Graphics& g) override;


private:
};

