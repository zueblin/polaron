// Copyright (c) 2018 Thomas Zueblin
//
// Author: Thomas Zueblin (thomas.zueblin@gmail.com)
//
// Permission is hereby granted, free of charge, to any person obtaining a copy
// of this software and associated documentation files (the "Software"), to deal
// in the Software without restriction, including without limitation the rights
// to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
// copies of the Software, and to permit persons to whom the Software is
// furnished to do so, subject to the following conditions:
//
// The above copyright notice and this permission notice shall be included in
// all copies or substantial portions of the Software.
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
// SOFTWARE.

#include "SequencerTrack.h"
#include "Arduino.h"

// bit=0:track is not muted
// bit=1:track is muted
#define MUTE_STATE_BIT 0

// bit=0:dont change mute state on next update
// bit=1:toggle mute state on next update
#define MUTE_ARM_STATE_BIT 1

SequencerTrack::SequencerTrack() : currentPattern(0), state(0) {}

void SequencerTrack::init(ParameterSet defaultValues) {
    for (auto &pattern : patterns) {
        pattern.init(defaultValues);
    }
}
void SequencerTrack::initPatternOpsArmState(uint8_t trackIdx, uint8_t *patternOpsArmSt) {
    trackIndex = trackIdx;
    patternOpsArmState = patternOpsArmSt;
}

SequencerStep & SequencerTrack::doStep() { return patterns[currentPattern].doStep(); }

void SequencerTrack::onStop() {
    for (auto &pattern : patterns) {
        pattern.onStop();
    }
}

SequencerStep &SequencerTrack::getCurrentStep() { return patterns[currentPattern].getCurrentStep(); }

SequencerPattern &SequencerTrack::getCurrentPattern() { return patterns[currentPattern]; }

uint8_t SequencerTrack::getCurrentPatternIndex() { return currentPattern; }

void SequencerTrack::switchToPattern(uint8_t number) {
    patterns[number].setCurrentStepIndex(patterns[currentPattern].getCurrentStepIndex());
    currentPattern = number;
}

void SequencerTrack::toggleMute() { state ^= _BV(MUTE_STATE_BIT); }

void SequencerTrack::mute() { state |= _BV(MUTE_STATE_BIT); }

void SequencerTrack::unMute() { state &= ~_BV(MUTE_STATE_BIT); }

bool SequencerTrack::isMuted() { return state & _BV(MUTE_STATE_BIT); }

bool SequencerTrack::isArmed() { return state & _BV(MUTE_ARM_STATE_BIT); }

void SequencerTrack::toggleMuteArm() { state ^= _BV(MUTE_ARM_STATE_BIT); }

void SequencerTrack::activateMuteArms() {
    if (state & _BV(MUTE_ARM_STATE_BIT)) {
        // if arm bit is set we toggle mute state and reset the arm bit
        toggleMute();
        state &= ~_BV(MUTE_ARM_STATE_BIT);
    }
}
