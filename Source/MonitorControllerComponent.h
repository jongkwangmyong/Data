#pragma once
#include <JuceHeader.h>
class MonitorControllerComponent :  public juce::Component,
									public juce::Timer,
									public juce::ChangeListener,
									public juce::Slider::Listener,
									public juce::Button::Listener,
									public juce::ComboBox::Listener
{
public:
	void comboBoxChanged(ComboBox* comboBoxThatHasChanged) override;	
	void sliderValueChanged(Slider* slider) override;
	void changeListenerCallback(ChangeBroadcaster* source) override;	
	void buttonClicked(Button*) override;	
	void timerCallback() override;	
	void mouseDown(const MouseEvent& event) override;
	void lookAndFeelChanged() override;
	void paint(Graphics&) override;
	void resized() override;
private:
};

