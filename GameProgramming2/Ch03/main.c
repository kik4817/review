#include <stdio.h>
#include "Input.h"
#include "Inventory.h"

int* InventoryPtr;

void SetMemoryAndValue(int amount)
{
	int* num1Ptr = NULL;
	num1Ptr = malloc(sizeof(int));

	*num1Ptr = amount;

	printf("�Ҵ��� �޸� �ּ��� �� : %p\n", num1Ptr);
	printf("�Ҵ��� �޸� ���� ȣ�� : %d\n", *num1Ptr);

	free(num1Ptr);
}

int main()
{
	printf("Ch3\n");

	//InputExample();

	printf("������ ���� ���\n");

	int number = 1;
	int* numberPtr = &number;

	InventoryPtr = malloc(sizeof(int));
	*InventoryPtr = 0;

	//*num1Ptr = 10;
	SetMemoryAndValue(10);



	while (1)
	{
		printf("1. �κ��丮�� ���� �����˴ϴ�.\n");
		printf("2. ���� �κ��丮�� ũ�⸦ �����մϴ�.\n");

		int inputNumber = -1;
		printf("Ű�� �Է����ּ���.\n");
		scanf_s("%d", &inputNumber);
		while (getchar() != '\n');

		if (inputNumber == 1)
		{
			IncreaseInverntroyCount(InventoryPtr, 4);
		}
		else
		{
			ShowInvetoryCount(InventoryPtr);
		}
	}


	free(InventoryPtr);
}