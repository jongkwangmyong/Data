#pragma once
#include <JuceHeader.h>
class LayerSelectComponent : public Component
{
public:
	void mouseDrag(const MouseEvent& event) override;
	void resized() override;
private:
};

