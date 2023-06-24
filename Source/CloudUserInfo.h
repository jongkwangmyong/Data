#pragma once
#include <JuceHeader.h>
namespace juce
{

	class CloudUserInfo : public juce::Component,
						  public juce::Button::Listener
	{
	public:
		//==============================================================================
		CloudUserInfo();
		~CloudUserInfo() override;

		void paint(Graphics& g) override;
		void resized() override;

		void buttonClicked(Button*) override;
	};

} // namespace juce
