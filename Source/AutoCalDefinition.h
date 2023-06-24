#pragma once
#include <JuceHeader.h>
namespace juce
{

	class AutoCalDefinition : public juce::Component,
							  public juce::Button::Listener,
							  public juce::Slider::Listener
	{
	public:
		//==============================================================================
		AutoCalDefinition();
		~AutoCalDefinition() override;

		void mouseUp(const MouseEvent& event) override;
		void paint(Graphics& g) override;
		void resized() override;

		void sliderValueChanged(Slider* slider) override;
		void buttonClicked(Button*) override;
	};

} // namespace juce
