#pragma once
#include <JuceHeader.h>
namespace juce
{

	class AutoPhaseProgressWindow : public juce::Component,
									public juce::ThreadWithProgressWindow
	{
	public:
		//==============================================================================
		AutoPhaseProgressWindow();
		~AutoPhaseProgressWindow() override;

		void run() override;
		void threadComplete(bool userPressedCancel) override;

	};

} // namespace juce
