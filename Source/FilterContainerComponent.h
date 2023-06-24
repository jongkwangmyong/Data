#pragma once
#include <JuceHeader.h>
namespace juce
{

	class FilterContainerComponent : public juce::Component
	{
	public:
		//==============================================================================
		FilterContainerComponent();
		~FilterContainerComponent() override;

		void resized() override;
	};

} // namespace juce
