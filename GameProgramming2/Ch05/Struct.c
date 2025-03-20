#include "Struct.h"

void StructExample()
{
	struct Pos playerPos = { 1,1 };

	printf("[%d, %d]", playerPos.xPos, playerPos.yPos);
	printf("\n");

	Pos origin1 = { 0,0 };
	struct Circle MyCircle = { origin1, 2.5 };

	printf("���� : [%d, %d], ������ : %1f\n", MyCircle.origin.xPos, MyCircle.origin.yPos, MyCircle.radius);

	CalculateCircleInfo(MyCircle);
	printf("\n");

	char playerName[10] = "AAA";
	struct Player MyPlayer = { playerName, playerPos };
	ShowPlayerCurrentPos(MyPlayer);
}

void CalculateCircleInfo(Circle circle)
{
	// ȣ�� ���� 2 * PI * R
	printf("ȣ�� ���� : %1f\n", 2 * 3.14 * circle.radius);
	printf("���� ���� : %1f\n", 0.5 * 3.14 * circle.radius * circle.radius);
	printf("������ ��ġ : [%d, %d]\n", circle.origin.xPos, circle.origin.yPos);
}

void ShowPlayerCurrentPos(Player player)
{
	
	printf("�÷��̾��� �̸� : %s\n", player.playerName);
	printf("�÷��̾��� ��ǥ : %d, %d\n", player.PlayerPos1.xPos, player.PlayerPos1.yPos);
}

void MovePlayer(Player player)
{
}

void ShowPlayerCurrentPos2(Player* player)
{
}
