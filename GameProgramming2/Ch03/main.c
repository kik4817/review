#include <stdio.h>
#include "Input.h"
#include "Inventory.h"

int* InventoryPtr;

void SetMemoryAndValue(int amount)
{
	int* num1Ptr = NULL;
	num1Ptr = malloc(sizeof(int));

	*num1Ptr = amount;

	printf("할당한 메모리 주소의 값 : %p\n", num1Ptr);
	printf("할당한 메모리 값을 호출 : %d\n", *num1Ptr);

	free(num1Ptr);
}

int main()
{
	printf("Ch3\n");

	//InputExample();

	printf("포인터 변수 사용\n");

	int number = 1;
	int* numberPtr = &number;

	InventoryPtr = malloc(sizeof(int));
	*InventoryPtr = 0;

	//*num1Ptr = 10;
	SetMemoryAndValue(10);



	while (1)
	{
		printf("1. 인벤토리의 수가 증가됩니다.\n");
		printf("2. 현재 인벤토리의 크기를 열람합니다.\n");

		int inputNumber = -1;
		printf("키를 입력해주세요.\n");
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