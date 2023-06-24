#pragma once
#include <JuceHeader.h>
namespace juce
{

	class CloudUserSpace : public juce::Component,
						   public juce::Button::Listener
	{
	public:
		//==============================================================================
		CloudUserSpace();
		~CloudUserSpace() override;

		void mouseUp(const MouseEvent& event) override;
		void paint(Graphics& g) override;
		void resized() override;

		void buttonClicked(Button*) override;
	};

} // namespace juce
