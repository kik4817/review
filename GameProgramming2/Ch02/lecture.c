#include "lecture.h"
int GameScore = 0;

void ShowLecture()
{
	printf("강의 예제 1\n");
	int num1 = 10;
	int* num1Ptr = &num1;

	printf("값을 출력 : %d\n", num1);
	printf("주소를 출력 : %p\n", num1Ptr);
	printf("주소를 출력 : %d\n\n", *num1Ptr);
	
	printf("강의 실습 1\n");
	
	int numA = 5;
	int numB = 6;
	printf("numA의 값 : %d, numB의 값 : %d\n", numA, numB);
	Swap(&numA, &numB);
	printf("numA의 값 : %d, numB의 값 : %d\n\n", numA, numB);
	
	printf("응용 예제 1\n");
		
	IncreaseScore(&GameScore, 10);
	IncreaseTemp(GameScore, 10);
	printf("현제 점수 : %d\n\n", GameScore);

	printf("강의 실습 2\n");
	float weight = 1.5f;
	int weaponLv = 1;
	int baseAP = 10;

	printf("가증치 : %f, 레벨 : %d, 기본공경력 : %d\n", weight, weaponLv, baseAP);
	UpgradeWeapon(&weaponLv, baseAP, &weight);
	printf("가증치 : %f, 레벨 : %d, 기본공경력 : %d\n\n", weight, weaponLv, baseAP);


	// 아이템의 갯수를 증가시키는 함수
	int ItemBag = 0;
	int GetItem = 1;
	IncreasItem(&ItemBag, GetItem);
	printf("아이템 : %d, 획득한 아이템 : %d\n\n", ItemBag, GetItem);

	// 플레이어의 좌표 이동시키는 함수

}

void Swap(int* a, int* b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

void IncreaseScore(int* score, int points)
{
	*score += points;
}

void IncreaseTemp(int score, int points)
{
	score += points;
}

void UpgradeWeapon(int* weaponLV, int baseAP, float* weight)
{
	*weaponLV += 4;
	if (*weaponLV %5 == 0)
	{
		*weight = *weight * 1.5f;
	}
	printf("현제 무기 공격력 : %f\n", (*weaponLV) * (*weight) + baseAP);
}

void IncreasItem(int* ItemBag, int GetItem)
{
	*ItemBag += GetItem;
}
