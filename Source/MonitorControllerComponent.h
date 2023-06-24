#pragma once
#include <JuceHeader.h>
class MonitorControllerComponent :  public Component//,other class 5?????
{
public:
	void sub_140187B20(__int64 a1, __int64 a2); //override
	__int64 sub_140188350(__int64 a1, __int64 a2);//override
	void sub_140187810(__int64* a1, char* a2);//override
	bool sub_140187E70(__int64 a1, __int64 a2);//override
	void sub_140187990(__int64 a1);//override
	void mouseDown(const MouseEvent& event) override;
	void lookAndFeelChanged() override;
	void paint(Graphics&) override;
	void resized() override;
private:
};

