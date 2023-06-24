#pragma once
#include <JuceHeader.h>
class MasterSlider : public Slider
{
public:
	String getTextFromValue(double value) override;
private:
};

