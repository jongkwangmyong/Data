#include "GLMAbout.h"

GLMAbout::~GLMAbout() = default;
GLMAbout::GLMAbout()
{
	//escapeKeyTriggersCloseButton = true;	
	addAndMakeVisible(label_GLM);
	addAndMakeVisible(label_GLMVersion);
	addAndMakeVisible(lable_URL);

	label_GLM.setText("Genelec Loudspeaker Manager", dontSendNotification); //offset 184
	label_GLMVersion.setText("GLM Version: x.x.x (Up-to-date)", dontSendNotification);//offset 192
	lable_URL.setText("www.genelec.com/glm", dontSendNotification);//offset 200

	label_GLM.setFont(Font(20.0, Font::bold));
	label_GLMVersion.setFont(Font(15.0));
	lable_URL.setFont(Font(15.0));

	label_GLM.setColour(Label::textColourId, Colours::white);
	label_GLMVersion.setColour(Label::textColourId, Colours::white);
	lable_URL.setColour(Label::textColourId, Colours::white);
	
}

void GLMAbout::mouseEnter(const MouseEvent& event)
{
	if (event.eventComponent == &lable_URL) //URL부분우에 놓이면
	{
		setMouseCursor(MouseCursor::PointingHandCursor); //유표를 손모양으로 만든다.
		Font font(16.0, 0);
		font.setUnderline(true);
		lable_URL.setFont(font);
	}
	else
	{
		setMouseCursor(MouseCursor::ParentCursor);
		Font font(16.0, 0);
		font.setUnderline(false);
		lable_URL.setFont(font);
	}
}

void GLMAbout::mouseExit(const MouseEvent& event)
{
	if (event.eventComponent == &lable_URL) //URL부분우에 놓이면
	{
		setMouseCursor(MouseCursor::PointingHandCursor); //유표를 손모양으로 만든다.
	}
}

void GLMAbout::mouseUp(const MouseEvent& event)
{
	if (event.eventComponent == &lable_URL) //URL부분우에 놓이면
	{
		URL juceWebsite("http://www.genelec.com/glm");
		juceWebsite.launchInDefaultBrowser();
	}
}

void GLMAbout::paint(Graphics& g)
{
	g.fillAll(Colour(0xFFD1D6D8));
	g.setColour(Colour(0xFF000000));
	
	if (content)
	{
		content->drawWithin(g, Rectangle<float>(0.0f, 0.0f,484, 438), RectanglePlacement::stretchToFit, 1.0f);
	}
	g.fillAll(getLookAndFeel().findColour(ResizableWindow::backgroundColourId));
	/*
	v13 = (__int64*)sub_14040DF80(&v26, &unk_140B758D0, 347454i64); //load logo png
	if (content != v13)
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
	*/
	g.setColour(Colour(0xFF000000));
	if (content)
	{
		content->drawWithin(g, Rectangle<float>(0.0f, 0.0f, 484, 438), RectanglePlacement::onlyReduceInSize | RectanglePlacement::onlyIncreaseInSize, 1.0f);
	}
	
}
void GLMAbout::resized()
{
	label_GLM.setBounds(0, 240,	width, 24);
	label_GLMVersion.setBounds(0,270, width,24);
	lable_URL.setBounds(0,304, width,	24);
}