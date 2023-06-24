#pragma once
#include <JuceHeader.h>
namespace juce
{

	class CloudSupportThread : public juce::ThreadWithProgressWindow
	{
	public:
		//==============================================================================
		CloudSupportThread();
		~CloudSupportThread() override;

		void run() override;

		void threadComplete(bool userPressedCancel) override;
	};

} // namespace juce
