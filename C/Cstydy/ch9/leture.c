#include "leture.h"



void ShowExample()
{
	int number = 10;
	printf("number�� �� : %d\n", number);

	LocalFunc(10);
	LocalFunc(15);
}

void LocalFunc(int a)
{
	int value = 5;
	printf("a�� ���� 5�� ���� �� : %d\n ", a + 5);
}
