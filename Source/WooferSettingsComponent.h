#pragma once

#include"defs.h"
#include <JuceHeader.h>

class WooferSettingsComponent :     public Component, //other 4
									public TextEditor::Listener,
									public  ComboBox::Listener,
									public Button::Listener,
									public Slider::Listener
{
   public:

	   void paint(Graphics& g) override;

	   void buttonClicked(Button*) override;//sub_1401C4620
	   void sliderValueChanged(Slider* slider) override;//sub_1401C45E0
	   void comboBoxChanged(ComboBox* comboBoxThatHasChanged) override;//sub_1401C4650
};

