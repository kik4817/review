#include "Border.h"
#include <Windows.h>
#include <conio.h>
#include <stdlib.h>
#include <stdbool.h>

// 커서 : output 결과를 출력하는 위치를 안내해주는 안내 기호
// (x,y) 좌표로 커서를 옮긴다.
void setCursorPos(int x, int y)
{
	COORD pos = { x,y };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}

//커서를 숨기고 싶습니다. true : 커서가 보인다, false : 커서가 보이지 않는다.

void setCursorVisible(enable)
{
	CONSOLE_CURSOR_INFO cursorInfo;
	cursorInfo.bVisible = enable;
	cursorInfo.dwSize = 1;
	SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &cursorInfo);
}

bool GameOver = false;
int CurrentScore = 0;

int main()
{

	ShowBorder();

	int playerX = 2;
	int playerY = 2;

	setCursorPos(playerX, playerY);
	printf("□");
	setCursorVisible(false);

	while (1)
	{
		SetCursorPos(playerX, playerY);
		printf(" ");

		if (_kbhit())
		{
			if (GetAsyncKeyState(VK_UP) & 0x8000)
			{
				playerY -= 1;
				if (playerY <= 0)
				{
					playerY = 1;
				}
			}
			if (GetAsyncKeyState(VK_DOWN) & 0x8000)
			{
				playerY += 1;
				if (playerY >= 4)
				{
					playerY = 3;
				}
			}
			if (GetAsyncKeyState(VK_LEFT) & 0x8000)
			{
				playerX -= 1;
				if (playerX <= 0)
				{
					playerX = 1;
				}
			}
			if (GetAsyncKeyState(VK_RIGHT) & 0x8000)
			{
				playerX += 1;
				if (playerX >= 4)
				{
					playerX = 3;
				}
			}
			else
			{

			}
		}

		//system("cls");
		//ShowBorder();
		setCursorPos(playerX, playerY);
		printf("□");

		// UI 코드
		setCursorPos(10, 0);
		printf("Score :");
		setCursorPos(10, 1);
		printf("현재 점수 : %d", CurrentScore);

		Sleep(50);
		//break;

		// 캐릭터가 특정 위치에 도달하면 GameOver true 종료가 되도록 만들기
		if (playerX == 1 && playerY == 1);
		{
			CurrentScore++;
		}
		if (GameOver)
		{
			break;
		}
	}
}