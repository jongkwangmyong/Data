#pragma once
#include <JuceHeader.h>
namespace juce
{

class GLMAbout : public Component
{
public:
	//==============================================================================
	GLMAbout();
	~GLMAbout() override;

	void mouseEnter(const MouseEvent& event) override;
	void mouseExit(const MouseEvent& event) override;
	void mouseUp(const MouseEvent& event) override;
	void paint(Graphics& g) override;
	void resized() override;
	float desktopScale = 1.0f;
private:
	float width = 484; //offset 40
	float height = 438; //offset 44
	Label label_GLM;  //offset 184
	Label label_GLMVersion; //offset 192
	Label lable_URL; //offset 200
	std::unique_ptr<Drawable> content; //offset 208
	bool escapeKeyTriggersCloseButton = false;
	JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR(GLMAbout)
};

} // namespace juce
