#pragma once

#include <stdio.h>
#include <string.h>

#define NAMELENGTH 50

// 구조체
// Player
// char name[이름의 최대 길이]

typedef struct
{
	char name[NAMELENGTH];
}Player;

void SetPlayerName(char* playerNamePtr);
void SetPlayer(Player* player, const char* name);
void ShowPlayerInfo(Player* player);