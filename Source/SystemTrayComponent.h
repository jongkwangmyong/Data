#pragma once
#include <JuceHeader.h>
struct SystemTrayComponent : public juce::SystemTrayIconComponent, public juce::ChangeListener,  protected juce::Timer
{
public:
	void mouseDown(const MouseEvent& event) override;
	void changeListenerCallback(ChangeBroadcaster* source) override;
};