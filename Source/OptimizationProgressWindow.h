#pragma once
#include <JuceHeader.h>
class OptimizationProgressWindow : public Component, public ThreadWithProgressWindow, public MultiTimer

{
public:
	void threadComplete(bool userPressedCancel) override;

	void run() override;
	void timerCallback() override;
};