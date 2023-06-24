#include "GLMTooltip.h"
void GLMTooltip::mouseEnter(const MouseEvent& e)
{
	if (e.eventComponent == this)
		hideTip();
}
void GLMTooltip::timerCallback()
{
	const auto mouseSource = Desktop::getInstance().getMainMouseSource();
	auto* newComp = mouseSource.isTouch() ? nullptr : mouseSource.getComponentUnderMouse();

	if (manuallyShownTip.isNotEmpty())
	{
		if (dismissalMouseEventOccurred || newComp == nullptr)
			hideTip();

		return;
	}

	if (newComp == nullptr || getParentComponent() == nullptr || newComp->getPeer() == getPeer())
	{
		const auto newTip = newComp != nullptr ? getTipFor(*newComp) : String();

		const auto mousePos = mouseSource.getScreenPosition();
		const auto mouseMovedQuickly = (mousePos.getDistanceFrom(lastMousePos) > 12);
		lastMousePos = mousePos;

		const auto tipChanged = (newTip != lastTipUnderMouse || newComp != lastComponentUnderMouse);
		const auto now = Time::getApproximateMillisecondCounter();

		lastComponentUnderMouse = newComp;
		lastTipUnderMouse = newTip;

		if (tipChanged || dismissalMouseEventOccurred || mouseMovedQuickly)
			lastCompChangeTime = now;

		const auto showTip = [this, &mouseSource, &mousePos, &newTip]
		{
			//if (mouseSource.getLastMouseDownPosition() != lastMousePos)
			//	TooltipWindow::displayTipInternal(mousePos.roundToInt(), newTip, ShownManually::no);
		};

		if (isVisible() || now < lastHideTime + 500)
		{
			// if a tip is currently visible (or has just disappeared), update to a new one
			// immediately if needed..
			if (newComp == nullptr || dismissalMouseEventOccurred || newTip.isEmpty())
				hideTip();
			else if (tipChanged)
				showTip();
		}
		else
		{
			// if there isn't currently a tip, but one is needed, only let it appear after a timeout
			if (newTip.isNotEmpty()
				&& newTip != tipShowing
				&& now > lastCompChangeTime + (uint32)millisecondsBeforeTipAppears)
			{
				showTip();
			}
		}
	}
}
