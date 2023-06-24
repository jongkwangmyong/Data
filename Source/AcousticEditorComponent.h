#pragma once
#include <JuceHeader.h>
namespace juce
{

class AcousticEditorComponent : public juce::Component,
								public juce::Timer,
								public juce::Slider::Listener,
								public juce::ComboBox::Listener,
								public juce::ChangeListener,
								public juce::Button::Listener
	
{
public:
	//==============================================================================
	AcousticEditorComponent();
	~AcousticEditorComponent() override;

	void paint(Graphics& g) override;
	void resized() override;
	void buttonClicked(Button*) override;
	void comboBoxChanged(ComboBox* comboBoxThatHasChanged) override;
	void sliderValueChanged(Slider* slider) override;
	void changeListenerCallback(ChangeBroadcaster* source) override;

};

} // namespace juce
