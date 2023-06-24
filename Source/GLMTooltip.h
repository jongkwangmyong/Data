#pragma once
#include <JuceHeader.h>
class GLMTooltip : public TooltipWindow
{
public:

private:
	Point<float> lastMousePos;
	SafePointer<Component> lastComponentUnderMouse;
	String tipShowing, lastTipUnderMouse, manuallyShownTip;
	int millisecondsBeforeTipAppears;
	unsigned int lastCompChangeTime = 0, lastHideTime = 0;
	bool reentrant = false, dismissalMouseEventOccurred = false;

	enum ShownManually { yes, no };
	void mouseEnter(const MouseEvent&) override;
	void timerCallback() override;

};

