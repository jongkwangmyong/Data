#pragma once
#include <JuceHeader.h>
namespace juce
{

	class CloudReplaceSetupThread : public juce::ThreadWithProgressWindow
	{
	public:
		//==============================================================================
		CloudReplaceSetupThread();
		~CloudReplaceSetupThread() override;

		void run() override;

		void threadComplete(bool userPressedCancel) override;

	};

} // namespace juce
