#include "Inventory.h"

int* InventoryPtr;

void ShowInvetoryCount(int* Inventroy)
{
	if (Inventroy == NULL)
	{
		printf("�κ��丮�� �ּҰ� �Ҵ�Ǿ� ���� �ʽ��ϴ�.\n");
	}
	else
	{
		printf("���� �κ��丮�� �ִ� �� : %d\n", *Inventroy);
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
