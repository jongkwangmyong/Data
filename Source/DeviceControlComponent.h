#pragma once
#include <JuceHeader.h>
namespace juce
{

	class DeviceControlComponent : public juce::Component,
								   public juce::Timer,
								   public juce::Button::Listener
	{
	public:
		//==============================================================================
		DeviceControlComponent();
		~DeviceControlComponent() override;

		void paint(Graphics& g) override;

		void buttonClicked(Button*) override;

		void timerCallback() override;
	};

} // namespace juce
