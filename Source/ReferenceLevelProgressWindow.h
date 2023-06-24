#pragma once
#include <JuceHeader.h>
class ReferenceLevelProgressWindow : public Component, public juce::ThreadWithProgressWindow
{
public:
	void run() override;
	void threadComplete(bool userPressedCancel) override;
};