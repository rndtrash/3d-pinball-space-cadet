//
// Created by neo on 2019-08-15.
//

#ifndef PINBALL_TSOUND_H
#define PINBALL_TSOUND_H

#include "../../pinball.h"

/* 132 */
struct TSound;

TSound* __thiscall TSound::`vector deleting destructor`(TSound *this, char a2);
double __thiscall TSound::Play(TSound* this);
TSound* __thiscall TSound::TSound(TSound* this, struct TPinballTable* a2, int a3);

void* TSound::`vftable` = &TPinballComponent::Message; // weak

#endif //PINBALL_TSOUND_H