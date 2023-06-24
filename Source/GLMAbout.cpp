#include "GLMAbout.h"

GLMAbout::~GLMAbout() = default;

void GLMAbout::mouseEnter(const MouseEvent& event)
{
	if (event.eventComponent == &urlLabel) //URL부분우에 놓이면
	{
		setMouseCursor(MouseCursor::PointingHandCursor); //유표를 손모양으로 만든다.
		Font font(16.0, 0);
		font.setUnderline(true);
		urlLabel.setFont(font);
	}
	else
	{
		setMouseCursor(MouseCursor::ParentCursor);
		Font font(16.0, 0);
		font.setUnderline(false);
		urlLabel.setFont(font);
	}
}

void GLMAbout::mouseExit(const MouseEvent& event)
{
	if (event.eventComponent == &urlLabel) //URL부분우에 놓이면
	{
		setMouseCursor(MouseCursor::PointingHandCursor); //유표를 손모양으로 만든다.
	}
}

void GLMAbout::mouseUp(const MouseEvent& event)
{
	if (event.eventComponent == &urlLabel) //URL부분우에 놓이면
	{
		URL juceWebsite("http://www.genelec.com/glm");
		juceWebsite.launchInDefaultBrowser();
	}
}

void GLMAbout::paint(Graphics& g)
{
	/*g.fillAll(Colour(0xFFD1D6D8));
	g.setColour(Colour(0xFF000000));
	v4 = (__int64*)(a1 + 208);
	v5 = *(_QWORD*)(a1 + 208);
	if (v5)
	{
		d->drawWithin(g, Rectangle<float>(0.0f, 0.0f, 438, 484), RectanglePlacement::stretchToFit, 1.0f);
	}
	g.fillAll(getLookAndFeel().findColour(ResizableWindow::backgroundColourId));
	v13 = (__int64*)sub_14040DF80(&v26, &unk_140B758D0, 347454i64);
	if (v4 != v13)
	{
		v14 = (void(__fastcall * **)(_QWORD, _QWORD)) * v13;
		*v13 = 0i64;
		v15 = (void(__fastcall * **)(_QWORD, __int64)) * v4;
		*v4 = (__int64)v14;
		if (v15)
			(**v15)(v15, 1i64);
	}
	if (v26)
		(**v26)(v26, 1i64);
	v16 = *(_DWORD*)(a1 + 40);
	v17 = *(_DWORD*)(a1 + 44);
	g.setColour(Colour(0xFF000000));
	v18 = *v4;
	if (v18)
	{
		d->drawWithin(g, Rectangle<float>(0.0f, 0.0f, 438, 484), RectanglePlacement::onlyReduceInSize | RectanglePlacement::onlyIncreaseInSize, 1.0f);
	}*/
}
void GLMAbout::resized()
{
	/*Component::setBounds(
		*(_QWORD*)(a1 + 184),
		0,
		240,
		COERCE_UNSIGNED_INT64((float)*(int*)(a1 + 40) + 6.755399441055744e15),
		24);
	Component::setBounds(
		*(_QWORD*)(a1 + 192),
		0,
		270,
		COERCE_UNSIGNED_INT64((float)*(int*)(a1 + 40) + 6.755399441055744e15),
		24);
	return Component::setBounds(
		*(_QWORD*)(a1 + 200),
		0,
		304,
		COERCE_UNSIGNED_INT64((float)*(int*)(a1 + 40) + 6.755399441055744e15),
		24);*/

}