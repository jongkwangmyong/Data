#pragma once
#include <JuceHeader.h>
namespace juce
{

	class CustomHexLayoutComponent : public juce::Component
	{
	public:
		//==============================================================================
		CustomHexLayoutComponent();
		~CustomHexLayoutComponent() override;

		void resized() override;
	};

} // namespace juce
