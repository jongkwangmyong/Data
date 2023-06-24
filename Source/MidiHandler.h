#pragma once

#include"defs.h"
#include <JuceHeader.h>


class MidiHandler:  public ChangeListener,
	                private  MidiInputCallback,
	                private MidiKeyboardStateListener
{
    public:
	void handleNoteOn(MidiKeyboardState* source,int midiChannel, int midiNoteNumber, float velocity) override;//sub_1401CC030	
	void handleNoteOff(MidiKeyboardState* source,int midiChannel, int midiNoteNumber, float velocity) override;//sub_1401CBED0
	void handleIncomingMidiMessage(MidiInput* source, const MidiMessage& message) override;//sub_1401CC1D0
	void changeListenerCallback(ChangeBroadcaster* source) override;//sub_1401CA9A0


	struct IncomingMessageCallback : public CallbackMessage
	{
		void messageCallback() override;//sub_140007370
	};
};

