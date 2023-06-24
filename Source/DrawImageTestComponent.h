#pragma once
#include <JuceHeader.h>
namespace juce
{

	class DrawImageTestComponent : public juce::Component
	{
	public:
		//==============================================================================
		DrawImageTestComponent();
		~DrawImageTestComponent() override;

		void lookAndFeelChanged() override;
		void paint(Graphics& g) override;
	};

} // namespace juce
