#include "lecture.h"
int GameScore = 0;

void ShowLecture()
{
	printf("���� ���� 1\n");
	int num1 = 10;
	int* num1Ptr = &num1;

	printf("���� ��� : %d\n", num1);
	printf("�ּҸ� ��� : %p\n", num1Ptr);
	printf("�ּҸ� ��� : %d\n\n", *num1Ptr);
	
	printf("���� �ǽ� 1\n");
	
	int numA = 5;
	int numB = 6;
	printf("numA�� �� : %d, numB�� �� : %d\n", numA, numB);
	Swap(&numA, &numB);
	printf("numA�� �� : %d, numB�� �� : %d\n\n", numA, numB);
	
	printf("���� ���� 1\n");
		
	IncreaseScore(&GameScore, 10);
	IncreaseTemp(GameScore, 10);
	printf("���� ���� : %d\n\n", GameScore);

	printf("���� �ǽ� 2\n");
	float weight = 1.5f;
	int weaponLv = 1;
	int baseAP = 10;

	printf("����ġ : %f, ���� : %d, �⺻����� : %d\n", weight, weaponLv, baseAP);
	UpgradeWeapon(&weaponLv, baseAP, &weight);
	printf("����ġ : %f, ���� : %d, �⺻����� : %d\n\n", weight, weaponLv, baseAP);


	// �������� ������ ������Ű�� �Լ�
	int ItemBag = 0;
	int GetItem = 1;
	IncreasItem(&ItemBag, GetItem);
	printf("������ : %d, ȹ���� ������ : %d\n\n", ItemBag, GetItem);

	// �÷��̾��� ��ǥ �̵���Ű�� �Լ�

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
	printf("���� ���� ���ݷ� : %f\n", (*weaponLV) * (*weight) + baseAP);
}

void IncreasItem(int* ItemBag, int GetItem)
{
	*ItemBag += GetItem;
}
