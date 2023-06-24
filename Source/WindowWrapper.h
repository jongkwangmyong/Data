#pragma once
#include <JuceHeader.h>
class WindowWrapper :public DocumentWindow, juce::ChangeListener
{
public:
	void closeButtonPressed() override;
private:
};

