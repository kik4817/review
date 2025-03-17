#include "Inventory.h"

int* InventoryPtr;

void ShowInvetoryCount(int* Inventroy)
{
	if (Inventroy == NULL)
	{
		printf("인벤토리의 주소가 할당되어 있지 않습니다.\n");
	}
	else
	{
		printf("현재 인벤토리의 최대 수 : %d\n", *Inventroy);
	}
}

void IncreaseInverntroyCount(int* Inventroy, int IncreaseCount)
{
	*Inventroy += IncreaseCount;
}

void InventroyExample()
{
	InventoryPtr = malloc(sizeof(int));
	*InventoryPtr = 0;
	ShowInvetoryCount(InventoryPtr);
}
