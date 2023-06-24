#pragma once
#include <JuceHeader.h>
class G_DocumentWindowButton :  public Button
{
public:
	void paintButton(Graphics& g, bool shouldDrawButtonAsHighlighted, bool shouldDrawButtonAsDown) override
	{
		auto background = Colours::grey;

		if (auto* rw = findParentComponentOfClass<ResizableWindow>())
			if (auto lf = dynamic_cast<LookAndFeel_V4*> (&rw->getLookAndFeel()))
				background = lf->getCurrentColourScheme().getUIColour(LookAndFeel_V4::ColourScheme::widgetBackground);

		g.fillAll(background);

		g.setColour((!isEnabled() || shouldDrawButtonAsDown) ? colour.withAlpha(0.6f)
			: colour);

		if (shouldDrawButtonAsHighlighted)
		{
			g.fillAll();
			g.setColour(background);
		}

		auto& p = getToggleState() ? toggledShape : normalShape;

		auto reducedRect = Justification(Justification::centred)
			.appliedToRectangle(Rectangle<int>(getHeight(), getHeight()), getLocalBounds())
			.toFloat()
			.reduced((float)getHeight() * 0.3f);

		g.fillPath(p, p.getTransformToScaleToFit(reducedRect, true));
	}
private:
	Colour colour;
	Path normalShape, toggledShape;
};

