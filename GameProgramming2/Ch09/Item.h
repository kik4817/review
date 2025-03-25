#pragma once

#include <stdio.h>


// 아이템 구조체
// 1. 아이템 이름
// 2. 아이템 스탯 (공격력, 가격, 내구도, 방어력등)
// 3. 2차원 배열

#define ITEM_COL 8
#define ITEM_ROW 5

typedef struct _ITEM
{
	char* name;
	int stats;
	char(*itemIndex)[ITEM_ROW+1];
}ITEM;

void ShowItem(ITEM* itemPtr, ITEM* stats, int itemIndex);
