#pragma once
#include <JuceHeader.h>
namespace juce
{

class GLMAbout : public Component
{
public:
	//==============================================================================	
	~GLMAbout() override;

	void mouseEnter(const MouseEvent& event) override;
	void mouseExit(const MouseEvent& event) override;
	void mouseUp(const MouseEvent& event) override;
	void paint(Graphics& g) override;
	void resized() override;
	float desktopScale = 1.0f;
private:
	Label urlLabel;
	bool escapeKeyTriggersCloseButton;
};

} // namespace juce
