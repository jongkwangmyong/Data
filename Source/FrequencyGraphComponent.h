#pragma once
#include <JuceHeader.h>
namespace juce
{

	class FrequencyGraphComponent : public juce::Component,
									public juce::ChangeListener
	{
	public:
		//==============================================================================
		FrequencyGraphComponent();
		~FrequencyGraphComponent() override;

		void mouseMove(const MouseEvent& event) override;
		void paint(Graphics& g) override;
		void resized() override;

		void changeListenerCallback(ChangeBroadcaster* source) override    {};
	};

} // namespace juce
