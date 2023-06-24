#pragma once
#include <JuceHeader.h>
namespace juce
{

	class CloudAutoCal2 : public juce::Component,
						  public juce::MultiTimer
	{
	public:
		//==============================================================================
		CloudAutoCal2();
		~CloudAutoCal2() override;

		void timerCallback(int timerID) override;
	};

} // namespace juce
