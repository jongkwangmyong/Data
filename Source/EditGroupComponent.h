#pragma once
#include <JuceHeader.h>
namespace juce
{

	class EditGroupComponent : public juce::Component,
							   public juce::ChangeListener,
							   public juce::Button::Listener,
							   public juce::Slider::Listener,
							   public juce::ComboBox::Listener
	{
	public:
		//==============================================================================
		EditGroupComponent();
		~EditGroupComponent() override;

		void paint(Graphics& g) override;
		void resized() override;

		void buttonClicked(Button*) override;

		void comboBoxChanged(ComboBox* comboBoxThatHasChanged) override;

		void changeListenerCallback(ChangeBroadcaster* source) override;

		void sliderValueChanged(Slider* slider) override;
	};

} // namespace juce
