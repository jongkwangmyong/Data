#pragma once
#include <JuceHeader.h>
class HexTestComponent :public Component,
						public DragAndDropTarget,
						public SettableTooltipClient,
						private Button::Listener
{
public:
	void setTooltip(const String& newTooltip) override;
	bool isInterestedInDragSource(const SourceDetails&) override;
	void itemDragEnter(const SourceDetails&) override;
	void itemDragExit(const SourceDetails&) override;
	/** @internal */
	void itemDropped(const SourceDetails&) override;

	void mouseEnter(const MouseEvent& event) override;
	void mouseExit(const MouseEvent& event) override;
	void mouseDown(const MouseEvent& event) override;
	void mouseDrag(const MouseEvent& event) override;

	void parentHierarchyChanged() override;
	bool hitTest(int x, int y) override;
	void lookAndFeelChanged() override;
	void paint(Graphics&) override;
	void resized() override;

private:
};

