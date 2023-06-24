#pragma once
#include <JuceHeader.h>
namespace juce
{

	class FilterControlComponent : public juce::Component,
								   public juce::Slider::Listener
	{
	public:
		//==============================================================================
		FilterControlComponent();
		~FilterControlComponent() override;

		void paint(Graphics& g) override;
		void resized() override;

		void sliderValueChanged(Slider* slider) override;
	};

} // namespace juce
