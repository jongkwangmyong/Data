#pragma once
#include <JuceHeader.h>
namespace juce
{

	class FirmwareUpdateProgressWindow : public juce::Component,
										 public juce::ThreadWithProgressWindow
	{
	public:
		//==============================================================================
		FirmwareUpdateProgressWindow();
		~FirmwareUpdateProgressWindow() override;

		void run() override;

		void threadComplete(bool userPressedCancel) override;
	};

} // namespace juce
