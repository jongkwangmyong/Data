#pragma once

#include"defs.h"
#include <JuceHeader.h>

class WeCalMeasurementProgressWindow :    public Component,
	                                      public ThreadWithProgressWindow //other class 1
{

	public:
		void run()override;//sub_1401BED70(__int64 a1)		
		void threadComplete(bool userPressedCancel) override;//sub_1401BEA00
};

