#pragma once

#include"defs.h"
#include <JuceHeader.h>

class WeCalOptimizationProgressWindow : public Component,
	                                    public ThreadWithProgressWindow,//other 1
	                                    public MultiTimer
{
public:

	__int64  sub_1401C3120(__int64 a1);//override
	void  sub_1401C2270(__int64 a1, char a2);//override
	__int64  sub_1401C1000(__int64 a1);//override
};



