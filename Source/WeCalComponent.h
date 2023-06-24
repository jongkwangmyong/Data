#pragma once

#include"defs.h"
#include <JuceHeader.h>
class WeCalComponent :  public Component,
						public Thread,
						public TextEditor::Listener,
						public ChangeListener,
						public Slider::Listener,
						public Button::Listener,
						public ComboBox::Listener	                   
{
	public:
		void paint(Graphics& g)override; //sub_1401BB240
		void resized()override; //sub_1401BB000
		void sliderValueChanged(Slider* slider) override;//sub_1401BAFD0//override
		void comboBoxChanged(ComboBox* comboBoxThatHasChanged) override;//sub_1401B9540//override
		void buttonClicked(Button*)override;//sub_1401B9620
		void run() override; //sub_1401B8D30();//override
		void changeListenerCallback(ChangeBroadcaster* source)override;//sub_1401B89D0//override
};