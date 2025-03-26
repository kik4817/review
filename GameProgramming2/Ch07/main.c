// 2025-03-21

#include "Player.h"

int main()
{
	// 플레이어의 기본 데이터를 설정
	COORD playerPos = { 0,0 };
	Player player = { "모험가", playerPos }; // 이름, 좌표
	

	while (true)
	{
		system("cls");
		GetPlayerInput(&player);
		ShowPlayer(&player);
		Sleep(100);
	}
}

