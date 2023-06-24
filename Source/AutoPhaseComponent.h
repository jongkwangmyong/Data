#pragma once
#include <JuceHeader.h>
namespace juce
{

	class AutoPhaseComponent : public juce::Component,
							   public juce::Thread,
							   public juce::ChangeListener,
							   public juce::Button::Listener,
							   public juce::ComboBox::Listener
	{
	public:
		//==============================================================================
		AutoPhaseComponent();
		~AutoPhaseComponent() override;

		void paint(Graphics& g) override;
		void resized() override;

		void buttonClicked(Button*) override;

		void run() override;

		void comboBoxChanged(ComboBox* comboBoxThatHasChanged) override;

		void changeListenerCallback(ChangeBroadcaster* source) override;

		unsigned __int64 sub_140133CE0(__int64 a1);


	};

} // namespace juce
