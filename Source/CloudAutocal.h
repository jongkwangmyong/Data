#pragma once
#include <JuceHeader.h>
namespace juce
{

	class CloudAutocal : public juce::Component,
						 public juce::MultiTimer
	{
	public:
		//==============================================================================
		CloudAutocal();
		~CloudAutocal() override;

		void timerCallback(int timerID) override;
	};

} // namespace juce
