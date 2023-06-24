#pragma once
#include <JuceHeader.h>
class InfoPanel :  public Component //,other class 3 ???
{
public:
	__int64 sub_140168170(__int64* a1, __int64 a2, __int64 a3);//Override
	void sub_140167080(__int64* a1, char* a2);//Override
	__int64  sub_140168120(__int64 a1);//Override
	void lookAndFeelChanged() override;
	void paint(Graphics& g) override;


private:
};

