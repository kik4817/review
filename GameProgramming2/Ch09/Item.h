#pragma once

#include <stdio.h>


// ������ ����ü
// 1. ������ �̸�
// 2. ������ ���� (���ݷ�, ����, ������, ���µ�)
// 3. 2���� �迭

#define ITEM_COL 8
#define ITEM_ROW 5

typedef struct _ITEM
{
	char* name;
	int stats;
	char(*itemIndex)[ITEM_ROW+1];
}ITEM;

void ShowItem(ITEM* itemPtr, ITEM* stats, int itemIndex);
