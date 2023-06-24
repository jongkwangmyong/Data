#pragma once
#include <JuceHeader.h>
struct TextProgressComponent : public Component
{
public:
	void lookAndFeelChanged() override;
	void paint(Graphics& g) override;
};