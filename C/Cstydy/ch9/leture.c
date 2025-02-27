#include "leture.h"



void ShowExample()
{
	int number = 10;
	printf("number의 값 : %d\n", number);

	LocalFunc(10);
	LocalFunc(15);
}

void LocalFunc(int a)
{
	int value = 5;
	printf("a에 값에 5를 더한 값 : %d\n ", a + 5);
}
