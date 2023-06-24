#pragma once
#include <JuceHeader.h>
namespace juce
{

	class AutoCal2ProgressWindow : public juce::Component,
								   public juce::ThreadWithProgressWindow
	{
	public:
		//==============================================================================
		AutoCal2ProgressWindow();
		~AutoCal2ProgressWindow() override;
		void paint(Graphics& g) override;

		void run() override;
		void threadComplete(bool userPressedCancel) override;
		void sub_1400E1090(__int64 a1);
	};

} // namespace juce
