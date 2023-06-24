#pragma once
#include <JuceHeader.h>
namespace juce
{

	class CloudSupport : public juce::Component,
						 public juce::Button::Listener
	{
	public:
		//==============================================================================
		CloudSupport();
		~CloudSupport() override;

		void mouseEnter(const MouseEvent& event) override;
		void mouseExit(const MouseEvent& event) override;
		void mouseUp(const MouseEvent& event) override;
		void paint(Graphics& g) override;
		void resized() override;

		void buttonClicked(Button*) override;

		__int64 sub_14040CF70(__int64 a1, __int64* a2);
	};

} // namespace juce
