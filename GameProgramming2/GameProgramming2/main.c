/*
*  int number; number ������ ���� ������ �� �ִ�. number�� �ּҸ� ���� �ִ�.
*  �ּҿ����ڸ� ����ؼ� ������ ����ִ� �ּҸ� ����� �� �ִ�. &number.
*  ������ �� : �ּ� �����ڴ� ������ ����ǰ� �� ���Ŀ� ����ؾ� �Ѵ�. 
* 
*  ������ ������ ������ �� ����ϴ� ��ȣ
*  ������ ������ : int* pointerNumber;
*  ������ ������ ����ǰ� �� ���Ŀ� ���Ǵ� ��ȣ
*  ������ ������ : *pointerNumber;
*/

#include <stdio.h>

void CallValue(int number)
{
	number = 100;

}

void CallReference(int* numberPtr)
{
	*numberPtr = 100;
}

void SwapPreview(int numA, int numB)
{
	int temp; // �����͸� �ӽ� ������ ����
	temp = numA; // A �ӽ� ����
	numA = numB; // A�� B�� �� ����
	numB = temp; // B�� A�� �� ����

	// �̸� ���� ����
	printf("Swap�� �ϸ� �̷� ����� ���ɴϴ�.\n");
	printf("����� numA�� �� : %d\n", numA);
	printf("����� numB�� �� : %d\n", numB);
}

// �ܺο��� ������ ���� �����ϰ� �ʹ�. �ּ��� ���� �����Ѵ�.
void Swap(int* numA, int* numB)
{
	int* temp;
	temp = *numA;
	*numA = *numB;
	*numB = temp;

}

int main()
{

	float floatNum = 0.01f;
	float* floatNumPtr = &floatNum;
	printf("�ּҰ��� ��� : %p\n", &floatNum);
	printf("�ּҷ� ���� ���� ��� : %f\n\n", *floatNumPtr);

	int num1 = 10;
	int* num1Ptr = &num1;
	printf("�ּҰ��� ��� : %p\n", &num1);
	printf("�ּҷ� ���� ���� ��� : %d\n\n", *num1Ptr);

	long long longNum = 100;
	long long* longNumPtr = &longNum;
	printf("�ּҰ��� ��� : %p\n", &longNum);
	printf("�ּҷ� ���� ���� ��� : %d\n\n", *longNumPtr);

	char charNum = 'A';
	char* charNumPtr = &charNum;
	printf("�ּҰ��� ��� : %p\n", &charNum);
	printf("�ּҷ� ���� ���� ��� : %c\n\n", *charNumPtr);

	int exampleNumber = 10;
	int* exampleNumberPtr = &exampleNumber;

	CallValue(exampleNumber);
	printf("CallValue ������ exampleNumber�� �� : %d\n", exampleNumber);
	//CallReference(&exampleNumber);
	CallReference(exampleNumberPtr);
	printf("CallReference ������ exampleNumber�� �� : %d\n\n", exampleNumber);

	// swap ����
	// num1, num2, temp
	// ������ ��ȭ�Ǿ� �ִ� ���¸� ����ϰ� ����
	// �ѹ��� �� �� �ֵ��� ����� ����

	// ������ ����� �ϴ� ����
	int weaponLv = 1;
	int weaponBaseAP = 10;
	int weight = 5;

	// ������ ���� �ִ� ����
	int weaponPower = weaponLv * weight + weaponBaseAP;

	int* saveWeaponData = &weaponPower;

	// 2���� ������� weaponPower ������ �� �� �ִ�.
	printf("���� ���ݷ� : %d\n", weaponPower);
	printf("���� ���ݷ� : %d\n\n", *saveWeaponData);

	// Swap ����

	int numA = 50;
	int numB = 60;

	SwapPreview(numA, numB);
	printf("���� numA, numB�� ��\n");
	printf("numA : %d, numB : %d\n\n", numA, numB);

	Swap(&numA, &numB);
	printf("Swap ���� ��\n");
	printf("���� numA, numB�� ��\n");
	printf("numA : %d, numB : %d\n\n", numA, numB);
}