#include <stdio.h>
#include "Struct.h"

// array 주소의 값을 변경하지 말아주세요.
void ShowAllData(const int* array, int length)
{
	for (int i = 0; i < length; i++)
	{
		//array[i] += 1;
		printf("%d", array[i]);
	}
	
}

void ShowData(const int* num1ptr)
{
	int* rptr = num1ptr;
	*rptr += 2;
	printf("%d\n", *rptr);
	//printf("&d\n", *num1ptr);
}

void ShowItemData(const char* itemName)
{
	//*itemName = "다른 이름"; itemName 접근해서 값을 변경하지 못한다.
	printf("아이템 이름 : %s\n", itemName);
}

int main()
{
	int arr1[5] = { 0,1,2,3,4 };
	ShowAllData(arr1, 5);
	printf("\n\n");
	
	int n1 = 1;
	ShowData(&n1);
	printf("\n\n");

	char itemName[10] = "칼";
	ShowItemData(itemName);
	printf("\n\n");

	printf("Ch05\n\n");
	
	printf("상수 예제\n");
	const int num1 = 10;
	const int PI = 3.14;

	int number1 = 2;
	int number2 = 3;
	const int* number1ptr = &number1;
	number1ptr = &number2;

	int* const number2ptr = &number2;
	*number2ptr += 3;
	printf("\n\n");
	
	printf("구조체 예제\n");
	StructExample();

	

}