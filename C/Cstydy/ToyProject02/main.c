#include "Border.h"
#include <Windows.h>
#include <conio.h>
#include <stdlib.h>
#include <stdbool.h>

// Ŀ�� : output ����� ����ϴ� ��ġ�� �ȳ����ִ� �ȳ� ��ȣ
// (x,y) ��ǥ�� Ŀ���� �ű��.
void setCursorPos(int x, int y)
{
	COORD pos = { x,y };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}

//Ŀ���� ����� �ͽ��ϴ�. true : Ŀ���� ���δ�, false : Ŀ���� ������ �ʴ´�.

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
	printf("��");
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
		printf("��");

		// UI �ڵ�
		setCursorPos(10, 0);
		printf("Score :");
		setCursorPos(10, 1);
		printf("���� ���� : %d", CurrentScore);

		Sleep(50);
		//break;

		// ĳ���Ͱ� Ư�� ��ġ�� �����ϸ� GameOver true ���ᰡ �ǵ��� �����
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