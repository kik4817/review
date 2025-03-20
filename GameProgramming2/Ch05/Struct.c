#include "Struct.h"

void StructExample()
{
	struct Pos playerPos = { 1,1 };

	printf("[%d, %d]", playerPos.xPos, playerPos.yPos);
	printf("\n");

	Pos origin1 = { 0,0 };
	struct Circle MyCircle = { origin1, 2.5 };

	printf("원점 : [%d, %d], 반지름 : %1f\n", MyCircle.origin.xPos, MyCircle.origin.yPos, MyCircle.radius);

	CalculateCircleInfo(MyCircle);
	printf("\n");

	char playerName[10] = "AAA";
	struct Player MyPlayer = { playerName, playerPos };
	ShowPlayerCurrentPos(MyPlayer);
}

void CalculateCircleInfo(Circle circle)
{
	// 호의 길이 2 * PI * R
	printf("호의 길이 : %1f\n", 2 * 3.14 * circle.radius);
	printf("원의 넓이 : %1f\n", 0.5 * 3.14 * circle.radius * circle.radius);
	printf("원점의 위치 : [%d, %d]\n", circle.origin.xPos, circle.origin.yPos);
}

void ShowPlayerCurrentPos(Player player)
{
	
	printf("플레이어의 이름 : %s\n", player.playerName);
	printf("플레이어의 좌표 : %d, %d\n", player.PlayerPos1.xPos, player.PlayerPos1.yPos);
}

void MovePlayer(Player player)
{
}

void ShowPlayerCurrentPos2(Player* player)
{
}
