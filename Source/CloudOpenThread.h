#pragma once
#include <JuceHeader.h>
namespace juce
{

	class CloudOpenThread : public juce::ThreadWithProgressWindow
	{
	public:
		//==============================================================================
		CloudOpenThread();
		~CloudOpenThread() override;

		void run() override;

		void threadComplete(bool userPressedCancel) override;
	};

} // namespace juce
