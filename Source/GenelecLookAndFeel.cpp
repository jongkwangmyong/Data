#include "GenelecLookAndFeel.h"
namespace LookAndFeelHelpers
{
	static Colour createBaseColour(Colour buttonColour,
		bool hasKeyboardFocus,
		bool shouldDrawButtonAsHighlighted,
		bool shouldDrawButtonAsDown) noexcept
	{
		const float sat = hasKeyboardFocus ? 1.3f : 0.9f;
		const Colour baseColour(buttonColour.withMultipliedSaturation(sat));

		if (shouldDrawButtonAsDown)        return baseColour.contrasting(0.2f);
		if (shouldDrawButtonAsHighlighted) return baseColour.contrasting(0.1f);

		return baseColour;
	}

	static TextLayout layoutTooltipText(const String& text, Colour colour) noexcept
	{
		const float tooltipFontSize = 13.0f;
		const int maxToolTipWidth = 400;

		AttributedString s;
		s.setJustification(Justification::centred);
		s.append(text, Font(tooltipFontSize, Font::bold), colour);

		TextLayout tl;
		tl.createLayoutWithBalancedLineLengths(s, (float)maxToolTipWidth);
		return tl;
	}
}
void GenelecLookAndFeel::drawDocumentWindowTitleBar(DocumentWindow& window, Graphics& g,
	int w, int h, int titleSpaceX, int titleSpaceW,
	const Image* icon, bool drawTitleTextOnLeft)
{
	if (w * h == 0)
		return;

	auto isActive = window.isActiveWindow();

	g.setColour(getCurrentColourScheme().getUIColour(ColourScheme::widgetBackground));
	g.fillAll();

	Font font((float)h * 0.65f, Font::plain);
	g.setFont(font);

	auto textW = font.getStringWidth(window.getName());
	auto iconW = 0;
	auto iconH = 0;

	if (icon != nullptr)
	{
		iconH = static_cast<int> (font.getHeight());
		iconW = icon->getWidth() * iconH / icon->getHeight() + 4;
	}

	textW = jmin(titleSpaceW, textW + iconW);
	auto textX = drawTitleTextOnLeft ? titleSpaceX
		: jmax(titleSpaceX, (w - textW) / 2);

	if (textX + textW > titleSpaceX + titleSpaceW)
		textX = titleSpaceX + titleSpaceW - textW;

	if (icon != nullptr)
	{
		g.setOpacity(isActive ? 1.0f : 0.6f);
		g.drawImageWithin(*icon, textX, (h - iconH) / 2, iconW, iconH,
			RectanglePlacement::centred, false);
		textX += iconW;
		textW -= iconW;
	}

	if (window.isColourSpecified(DocumentWindow::textColourId) || isColourSpecified(DocumentWindow::textColourId))
		g.setColour(window.findColour(DocumentWindow::textColourId));
	else
		g.setColour(getCurrentColourScheme().getUIColour(ColourScheme::defaultText));

	g.drawText(window.getName(), textX, 0, textW, h, Justification::centredLeft, true);
}
//==============================================================================
class LookAndFeel_V4_DocumentWindowButton : public Button
{
public:
	LookAndFeel_V4_DocumentWindowButton(const String& name, Colour c, const Path& normal, const Path& toggled)
		: Button(name), colour(c), normalShape(normal), toggledShape(toggled)
	{
	}

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

	JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR(LookAndFeel_V4_DocumentWindowButton)
};
Button* GenelecLookAndFeel::createDocumentWindowButton(int buttonType)
{
	Path shape;
	auto crossThickness = 0.15f;

	if (buttonType == DocumentWindow::closeButton)
	{
		shape.addLineSegment({ 0.0f, 0.0f, 1.0f, 1.0f }, crossThickness);
		shape.addLineSegment({ 1.0f, 0.0f, 0.0f, 1.0f }, crossThickness);

		return new LookAndFeel_V4_DocumentWindowButton("close", Colour(0xff9A131D), shape, shape);
	}

	if (buttonType == DocumentWindow::minimiseButton)
	{
		shape.addLineSegment({ 0.0f, 0.5f, 1.0f, 0.5f }, crossThickness);

		return new LookAndFeel_V4_DocumentWindowButton("minimise", Colour(0xffaa8811), shape, shape);
	}

	if (buttonType == DocumentWindow::maximiseButton)
	{
		shape.addLineSegment({ 0.5f, 0.0f, 0.5f, 1.0f }, crossThickness);
		shape.addLineSegment({ 0.0f, 0.5f, 1.0f, 0.5f }, crossThickness);

		Path fullscreenShape;
		fullscreenShape.startNewSubPath(45.0f, 100.0f);
		fullscreenShape.lineTo(0.0f, 100.0f);
		fullscreenShape.lineTo(0.0f, 0.0f);
		fullscreenShape.lineTo(100.0f, 0.0f);
		fullscreenShape.lineTo(100.0f, 45.0f);
		fullscreenShape.addRectangle(45.0f, 45.0f, 100.0f, 100.0f);
		PathStrokeType(30.0f).createStrokedPath(fullscreenShape, fullscreenShape);

		return new LookAndFeel_V4_DocumentWindowButton("maximise", Colour(0xff0A830A), shape, fullscreenShape);
	}

	jassertfalse;
	return nullptr;
}
int GenelecLookAndFeel::getSliderThumbRadius(Slider& slider)
{
	return 16;//success
}
void GenelecLookAndFeel::drawLinearSlider(Graphics& g, int x, int y, int width, int height,
	float sliderPos, float minSliderPos, float maxSliderPos,
	const Slider::SliderStyle style, Slider& slider)
{
	g.fillAll(slider.findColour(Slider::backgroundColourId));

	if (style == Slider::LinearBar || style == Slider::LinearBarVertical)
	{
		const float fx = (float)x, fy = (float)y, fw = (float)width, fh = (float)height;

		Path p;

		if (style == Slider::LinearBarVertical)
			p.addRectangle(fx, sliderPos, fw, 1.0f + fh - sliderPos);
		else
			p.addRectangle(fx, fy, sliderPos - fx, fh);

		auto baseColour = slider.findColour(Slider::thumbColourId)
			.withMultipliedSaturation(slider.isEnabled() ? 1.0f : 0.5f)
			.withMultipliedAlpha(0.8f);

		g.setGradientFill(ColourGradient::vertical(baseColour.brighter(0.08f), 0.0f,
			baseColour.darker(0.08f), (float)height));
		g.fillPath(p);

		g.setColour(baseColour.darker(0.2f));

		if (style == Slider::LinearBarVertical)
			g.fillRect(fx, sliderPos, fw, 1.0f);
		else
			g.fillRect(sliderPos, fy, 1.0f, fh);
	}
	else
	{
		drawLinearSliderBackground(g, x, y, width, height, sliderPos, minSliderPos, maxSliderPos, style, slider);
		drawLinearSliderThumb(g, x, y, width, height, sliderPos, minSliderPos, maxSliderPos, style, slider);
	}
}
int GenelecLookAndFeel::getDefaultScrollbarWidth()
{
	return 16;
}
void GenelecLookAndFeel::drawTooltip(Graphics& g, const String& text, int width, int height)
{
	g.fillAll(findColour(TooltipWindow::backgroundColourId));

#if ! JUCE_MAC // The mac windows already have a non-optional 1 pix outline, so don't double it here..
	g.setColour(findColour(TooltipWindow::outlineColourId));
	g.drawRect(0, 0, width, height, 1);
#endif

	LookAndFeelHelpers::layoutTooltipText(text, findColour(TooltipWindow::textColourId))
		.draw(g, Rectangle<float>((float)width, (float)height));
}
void GenelecLookAndFeel::drawAlertBox(Graphics& g, AlertWindow& alert,
	const Rectangle<int>& textArea, TextLayout& textLayout)
{
	auto cornerSize = 4.0f;

	g.setColour(alert.findColour(AlertWindow::outlineColourId));
	g.drawRoundedRectangle(alert.getLocalBounds().toFloat(), cornerSize, 2.0f);

	auto bounds = alert.getLocalBounds().reduced(1);
	g.reduceClipRegion(bounds);

	g.setColour(alert.findColour(AlertWindow::backgroundColourId));
	g.fillRoundedRectangle(bounds.toFloat(), cornerSize);

	auto iconSpaceUsed = 0;

	auto iconWidth = 80;
	auto iconSize = jmin(iconWidth + 50, bounds.getHeight() + 20);

	if (alert.containsAnyExtraComponents() || alert.getNumButtons() > 2)
		iconSize = jmin(iconSize, textArea.getHeight() + 50);

	Rectangle<int> iconRect(iconSize / -10, iconSize / -10,
		iconSize, iconSize);

	if (alert.getAlertType() != MessageBoxIconType::NoIcon)
	{
		Path icon;
		char character;
		uint32 colour;

		if (alert.getAlertType() == MessageBoxIconType::WarningIcon)
		{
			character = '!';

			icon.addTriangle((float)iconRect.getX() + (float)iconRect.getWidth() * 0.5f, (float)iconRect.getY(),
				static_cast<float> (iconRect.getRight()), static_cast<float> (iconRect.getBottom()),
				static_cast<float> (iconRect.getX()), static_cast<float> (iconRect.getBottom()));

			icon = icon.createPathWithRoundedCorners(5.0f);
			colour = 0x66ff2a00;
		}
		else
		{
			colour = Colour(0xff00b0b9).withAlpha(0.4f).getARGB();
			character = alert.getAlertType() == MessageBoxIconType::InfoIcon ? 'i' : '?';

			icon.addEllipse(iconRect.toFloat());
		}

		GlyphArrangement ga;
		ga.addFittedText({ (float)iconRect.getHeight() * 0.9f, Font::bold },
			String::charToString((juce_wchar)(uint8)character),
			static_cast<float> (iconRect.getX()), static_cast<float> (iconRect.getY()),
			static_cast<float> (iconRect.getWidth()), static_cast<float> (iconRect.getHeight()),
			Justification::centred, false);
		ga.createPath(icon);

		icon.setUsingNonZeroWinding(false);
		g.setColour(Colour(colour));
		g.fillPath(icon);

		iconSpaceUsed = iconWidth;
	}

	g.setColour(alert.findColour(AlertWindow::textColourId));

	Rectangle<int> alertBounds(bounds.getX() + iconSpaceUsed, 30,
		bounds.getWidth(), bounds.getHeight() - getAlertWindowButtonHeight() - 20);

	textLayout.draw(g, alertBounds.toFloat());
}
void GenelecLookAndFeel::drawMenuBarBackground(Graphics& g, int width, int height,
	bool, MenuBarComponent& menuBar)
{
	auto colour = menuBar.findColour(PopupMenu::backgroundColourId);

	Rectangle<int> r(width, height);

	g.setColour(colour.contrasting(0.15f));
	g.fillRect(r.removeFromTop(1));
	g.fillRect(r.removeFromBottom(1));

	g.setGradientFill(ColourGradient::vertical(colour, 0, colour.darker(0.08f), (float)height));
	g.fillRect(r);
}
void GenelecLookAndFeel::drawMenuBarItem(Graphics& g, int width, int height,
	int itemIndex, const String& itemText,
	bool isMouseOverItem, bool isMenuOpen,
	bool /*isMouseOverBar*/, MenuBarComponent& menuBar)
{
	if (!menuBar.isEnabled())
	{
		g.setColour(menuBar.findColour(PopupMenu::textColourId)
			.withMultipliedAlpha(0.5f));
	}
	else if (isMenuOpen || isMouseOverItem)
	{
		g.fillAll(menuBar.findColour(PopupMenu::highlightedBackgroundColourId));
		g.setColour(menuBar.findColour(PopupMenu::highlightedTextColourId));
	}
	else
	{
		g.setColour(menuBar.findColour(PopupMenu::textColourId));
	}

	g.setFont(getMenuBarFont(menuBar, itemIndex, itemText));
	g.drawFittedText(itemText, 0, 0, width, height, Justification::centred, 1);
}
void GenelecLookAndFeel::drawButtonBackground(Graphics& g,
	Button& button,
	const Colour& backgroundColour,
	bool shouldDrawButtonAsHighlighted,
	bool shouldDrawButtonAsDown)
{
	auto cornerSize = 6.0f;
	auto bounds = button.getLocalBounds().toFloat().reduced(0.5f, 0.5f);

	auto baseColour = backgroundColour.withMultipliedSaturation(button.hasKeyboardFocus(true) ? 1.3f : 0.9f)
		.withMultipliedAlpha(button.isEnabled() ? 1.0f : 0.5f);

	if (shouldDrawButtonAsDown || shouldDrawButtonAsHighlighted)
		baseColour = baseColour.contrasting(shouldDrawButtonAsDown ? 0.2f : 0.05f);

	//g.setColour(baseColour);
	g.setColour(juce::Colours::green);//JKM 2023.6.17

	auto flatOnLeft = button.isConnectedOnLeft();
	auto flatOnRight = button.isConnectedOnRight();
	auto flatOnTop = button.isConnectedOnTop();
	auto flatOnBottom = button.isConnectedOnBottom();

	if (flatOnLeft || flatOnRight || flatOnTop || flatOnBottom)
	{
		Path path;
		path.addRoundedRectangle(bounds.getX(), bounds.getY(),
			bounds.getWidth(), bounds.getHeight(),
			cornerSize, cornerSize,
			!(flatOnLeft || flatOnTop),
			!(flatOnRight || flatOnTop),
			!(flatOnLeft || flatOnBottom),
			!(flatOnRight || flatOnBottom));

		g.fillPath(path);

		g.setColour(button.findColour(ComboBox::outlineColourId));
		g.strokePath(path, PathStrokeType(1.0f));
	}
	else
	{
		g.fillRoundedRectangle(bounds, cornerSize);

		g.setColour(button.findColour(ComboBox::outlineColourId));
		g.drawRoundedRectangle(bounds, cornerSize, 1.0f);
	}
}