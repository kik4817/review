#pragma once

#include <stdio.h>
#include <string.h>

#define NAMELENGTH 50

// ����ü
// Player
// char name[�̸��� �ִ� ����]

typedef struct
{
	char name[NAMELENGTH];
}Player;

void SetPlayerName(char* playerNamePtr);
void SetPlayer(Player* player, const char* name);
void ShowPlayerInfo(Player* player);