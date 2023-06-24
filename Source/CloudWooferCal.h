#pragma once
#include <JuceHeader.h>
namespace juce
{

	class CloudWooferCal : public juce::Component,
						   public juce::MultiTimer
	{
	public:
		//==============================================================================
		CloudWooferCal();
		~CloudWooferCal() override;

		void timerCallback(int timerID) override;
	};

} // namespace juce
