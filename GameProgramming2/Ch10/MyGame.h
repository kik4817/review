#pragma once

#include "ConsoleGame.h"

// GetAsync키 실제로 이동하는 것

typedef struct _MYPLAYER
{
	char* name;
	COORD playerPos;
}MYPLAYER;

void InputPlayer(MYPLAYER* MyPlayerPtr);
void ShowPlayer(const MYPLAYER* MyPlayerPtr);
void MyPlayerXY(COORD MyPlayerPos);