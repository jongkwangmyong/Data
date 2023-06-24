#pragma once
#include <JuceHeader.h>

class MidiSettingsComponent :    public Component//,other class 4 ????
{
public:
	__int64 sub_140175A40(__int64 a1);//override
	void  sub_140172F90(__int64 a1);
	void paint(Graphics&) override;
	void resized() override;
	void sub_140175A20(__int64 a1);//override
	void sub_140175A60(__int64* a1, __int64 a2);//override
	void sub_14016EA70(__int64 a1, __int64 a2);//override
private:
};

