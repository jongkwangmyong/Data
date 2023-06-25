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

private:
	int frequencyGraphComponentPos_x, frequencyGraphComponentPos_y; //offset 16, 20
	int btnPos_x, btnPos_y; //offset 24, 28
	Label label_LevelCompensation; //offset 240
	Slider slider_LevelCompensation; //offset 248
	Label label_FlightDelay; //offset 256
	Slider slider_FlightDelay; //offset 264
	Label label_OptionalGain; //offet 272
	Slider slider_OptionalGain; //offset 280
	Label label_Phase; //offset 288
	Slider slider_Pahse; //offset 296
	FrequencyGraphComponent frequencyGraphComponent; //offset 304
	FilterContainerComponent filterContainerComponent; //offset 312
	Viewport viewport; //offset 320
	TextButton new_button1; //offset 392
	TextButton new_button2; //offset 400
};

} // namespace juce
