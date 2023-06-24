#pragma once
#include <JuceHeader.h>
namespace juce
{

	class DeviceComponent : public juce::Component
	{
	public:
		//==============================================================================
		DeviceComponent();
		~DeviceComponent() override;

		void mouseUp(const MouseEvent& event) override;
		void resized() override;
	};

} // namespace juce
