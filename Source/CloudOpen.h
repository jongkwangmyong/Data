#pragma once
#include <JuceHeader.h>
namespace juce
{

	class CloudOpen : public juce::Component,
					  public juce::Button::Listener
	{
	public:
		//==============================================================================
		CloudOpen();
		~CloudOpen() override;

		void mouseUp(const MouseEvent& event) override;
		void paint(Graphics& g) override;
		void resized() override;

		void buttonClicked(Button* button) override;
	private:
		int pos_x; //offset 40
		int pos_y; //offset 44
		Label label_SelectSetup; //offset 192
		TextButton button1; //offset 200
		TextButton button2; //offset 208
		ToggleButton toggleButton1; //offset 216
		ToggleButton toggleButton2; //offset 224
		ToggleButton toggleButton3; //offset 232
		Label label1; //offset 240
		Label label2; //offset 248
		Label label3; //offset 256
		Label label_setup1; //offset 264
		Label label_setup2; //offset 272
		Label label_setup3; //offset 280
	};

} // namespace juce
