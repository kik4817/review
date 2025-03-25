#include "Player.h"

// 1. ���� �ּ�
// 2. ����ü -> ���� �ּ� ����

void SetPlayerName(char* playerNamePtr)
{
	printf("�÷��̾��� �̸��� �Է����ּ���.\n");
	char input[50];
	scanf_s("%s", input, 50);

	// string.h
	strcpy_s(playerNamePtr, 50, input); // ����� ���ڿ��� �ּ� | ����� ���ڿ��� ũ�� | ������ ���ڿ��� �ּ�
}

void SetPlayer(Player* player, const char* name)
{
	// ���� ó��
	// ����ϴ� ����� �Ǽ��ϴ� ���� ����
	if (player == NULL)
	{
		printf("[���]�÷��̾ �ּҸ� �Է����ּ���.\n");
		return;
	}
	strcpy_s(player->name, NAMELENGTH, name);
}



void ShowPlayerInfo(Player* player)
{
	printf("�÷��̾��� �̸� : %s", player->name);
}
