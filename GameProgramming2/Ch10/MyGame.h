#pragma once

#include "ConsoleGame.h"

// GetAsyncŰ ������ �̵��ϴ� ��

typedef struct _MYPLAYER
{
	char* name;
	COORD playerPos;
}MYPLAYER;

void InputPlayer(MYPLAYER* MyPlayerPtr);
void ShowPlayer(const MYPLAYER* MyPlayerPtr);
void MyPlayerXY(COORD MyPlayerPos);