/*
*  int number; number 정수형 값을 저장할 수 있다. number의 주소를 갖고 있다.
*  주소연산자를 사용해서 변수에 들어있는 주소를 출력할 수 있다. &number.
*  주의할 점 : 주소 연산자는 변수가 선언되고 난 이후에 사용해야 한다. 
* 
*  포인터 변수를 선언할 때 사용하는 기호
*  포인터 연산자 : int* pointerNumber;
*  포인터 변수가 선언되고 난 이후에 사용되는 기호
*  역참조 연산자 : *pointerNumber;
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
	int temp; // 데이터를 임시 보관할 변수
	temp = numA; // A 임시 보관
	numA = numB; // A가 B의 값 변경
	numB = temp; // B가 A의 값 변경

	// 미리 보기 형식
	printf("Swap을 하면 이런 결과가 나옵니다.\n");
	printf("변경된 numA의 값 : %d\n", numA);
	printf("변경된 numB의 값 : %d\n", numB);
}

// 외부에서 가져온 값을 변경하고 싶다. 주소의 값을 변경한다.
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
	printf("주소값을 출력 : %p\n", &floatNum);
	printf("주소로 부터 값을 출력 : %f\n\n", *floatNumPtr);

	int num1 = 10;
	int* num1Ptr = &num1;
	printf("주소값을 출력 : %p\n", &num1);
	printf("주소로 부터 값을 출력 : %d\n\n", *num1Ptr);

	long long longNum = 100;
	long long* longNumPtr = &longNum;
	printf("주소값을 출력 : %p\n", &longNum);
	printf("주소로 부터 값을 출력 : %d\n\n", *longNumPtr);

	char charNum = 'A';
	char* charNumPtr = &charNum;
	printf("주소값을 출력 : %p\n", &charNum);
	printf("주소로 부터 값을 출력 : %c\n\n", *charNumPtr);

	int exampleNumber = 10;
	int* exampleNumberPtr = &exampleNumber;

	CallValue(exampleNumber);
	printf("CallValue 실행후 exampleNumber의 값 : %d\n", exampleNumber);
	//CallReference(&exampleNumber);
	CallReference(exampleNumberPtr);
	printf("CallReference 실행후 exampleNumber의 값 : %d\n\n", exampleNumber);

	// swap 구현
	// num1, num2, temp
	// 직전에 강화되어 있는 상태를 기억하고 싶음
	// 롤백을 할 수 있도록 기능을 구현

	// 유저가 몰라야 하는 정보
	int weaponLv = 1;
	int weaponBaseAP = 10;
	int weight = 5;

	// 유저가 볼수 있는 정보
	int weaponPower = weaponLv * weight + weaponBaseAP;

	int* saveWeaponData = &weaponPower;

	// 2가지 방식으로 weaponPower 접근을 할 수 있다.
	printf("무기 공격력 : %d\n", weaponPower);
	printf("무기 공격력 : %d\n\n", *saveWeaponData);

	// Swap 예제

	int numA = 50;
	int numB = 60;

	SwapPreview(numA, numB);
	printf("현제 numA, numB의 값\n");
	printf("numA : %d, numB : %d\n\n", numA, numB);

	Swap(&numA, &numB);
	printf("Swap 실행 후\n");
	printf("현제 numA, numB의 값\n");
	printf("numA : %d, numB : %d\n\n", numA, numB);
}