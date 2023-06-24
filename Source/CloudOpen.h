#pragma once
#include <JuceHeader.h>
namespace juce
{

	class CloudOpen : public juce::Component,
					  public juce::Button::Listener
	{
	public:
		//==============================================================================
		CloudOpen();
		~CloudOpen() override;

		void mouseUp(const MouseEvent& event) override;
		void paint(Graphics& g) override;
		void resized() override;

		void buttonClicked(Button*) override;
	};

} // namespace juce
