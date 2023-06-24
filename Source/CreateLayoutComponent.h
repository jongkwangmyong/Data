#pragma once
#include <JuceHeader.h>
namespace juce
{

	class CreateLayoutComponent : public juce::Component,
								  public juce::DragAndDropContainer,
								  public juce::ChangeListener,
								  public juce::ComboBox::Listener,
								  public juce::Button::Listener
	{
	public:
		//==============================================================================
		CreateLayoutComponent();
		~CreateLayoutComponent() override;

		void paint(Graphics& g) override;
		void resized() override;

		void buttonClicked(Button*) override;

		void changeListenerCallback(ChangeBroadcaster* source) override;

		void comboBoxChanged(ComboBox* comboBoxThatHasChanged) override;
	};

} // namespace juce
