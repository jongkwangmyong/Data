#pragma once
#include <JuceHeader.h>
class GenelecLookAndFeel : public LookAndFeel_V4
{
public:
	GenelecLookAndFeel()
	{
		//setColour(juce::Button::buttonOver, juce::Colours::red);		
	}
	void drawDocumentWindowTitleBar(DocumentWindow&, Graphics&, int, int, int, int, const Image*, bool) override;//sub_140154BD0
	Button* createDocumentWindowButton(int) override;//sub_140153E50
	void drawLinearSlider(Graphics&, int x, int y, int width, int height,
		float sliderPos, float minSliderPos, float maxSliderPos,
		const Slider::SliderStyle, Slider&) override;
	int getSliderThumbRadius(Slider&) override;
	int getDefaultScrollbarWidth() override;
	void drawTooltip(Graphics&, const String& text, int width, int height) override;
	void drawAlertBox(Graphics&, AlertWindow&, const Rectangle<int>& textArea, TextLayout&) override;
	void drawMenuBarBackground(Graphics&, int width, int height, bool, MenuBarComponent&) override;
	void drawMenuBarItem(Graphics&, int width, int height,
		int itemIndex, const String& itemText,
		bool isMouseOverItem, bool isMenuOpen, bool isMouseOverBar,
		MenuBarComponent&) override;
	void drawButtonBackground(Graphics&, Button&, const Colour& backgroundColour,
		bool shouldDrawButtonAsHighlighted, bool shouldDrawButtonAsDown) override;
};

