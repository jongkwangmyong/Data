#pragma once
#include <JuceHeader.h>

class MeasurementProgressWindow : public ThreadWithProgressWindow,
								  public Component								 
{
public:
	void run() override;
	void threadComplete(bool userPressedCancel) override;
private:
};

