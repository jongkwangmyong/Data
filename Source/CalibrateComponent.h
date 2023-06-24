#pragma once
#include <JuceHeader.h>
namespace juce
{

	class CalibrateComponent : public juce::Component,
							   public juce::Thread,
							   public juce::TextEditor::Listener,
							   public juce::ChangeListener,
							   public juce::Button::Listener,
							   public juce::ComboBox::Listener
	{
	public:
		//==============================================================================
		CalibrateComponent();
		~CalibrateComponent() override;

		void paint(Graphics& g) override;
		void resized() override;

		void buttonClicked(Button*) override;

		void comboBoxChanged(ComboBox* comboBoxThatHasChanged) override;

		void run() override;

		void changeListenerCallback(ChangeBroadcaster* source) override;
	};

} // namespace juce
