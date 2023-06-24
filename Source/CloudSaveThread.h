#pragma once
#include <JuceHeader.h>
namespace juce
{

	class CloudSaveThread : public juce::ThreadWithProgressWindow
	{
	public:
		//==============================================================================
		CloudSaveThread();
		~CloudSaveThread() override;

		void run() override;

		void threadComplete(bool userPressedCancel) override;
	};

} // namespace juce
