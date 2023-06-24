#pragma once
#include <JuceHeader.h>

class MidiSettingsComponent :    public juce::Component,
								 public juce::ChangeListener,
	 							 public juce::Button::Listener,
							 	 public juce::Slider::Listener,
								 public juce::ComboBox::Listener
{
public:
	 void sliderValueChanged(Slider* slider) override;		
	void paint(Graphics&) override;
	void resized() override;
	void comboBoxChanged(ComboBox* comboBoxThatHasChanged) override;

	void buttonClicked(Button*) override;
	void changeListenerCallback(ChangeBroadcaster* source) override;	

	void sub_140172F90(__int64 a1);


private:
};

