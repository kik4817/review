#include "MyString.h"
#include "Player.h"

// ���ڿ� �� ����� (2���� �迭)

#define STAGE_HEIGHT 6
#define STAGE_WIDTH 6


char Stage1[STAGE_HEIGHT][STAGE_WIDTH + 1] = // [����] [����+1]

{
	"######",
	"#    #",
	"#    #",
	"#    #",
	"#    #",
	"######",
};

char Stage2[STAGE_HEIGHT][STAGE_WIDTH + 1] = // [����] [����+1]

{
	"######",
	"#    #",
	"# #  #",
	"#  # #",
	"#    #",
	"######",
};

int main()
{
	//ArrayExample();

	// 1. ���� ����

	// �÷����� ĳ������ �̸��� �����Ѵ�. SetPlayerName
	// char* ������ �ؼ� ���� �� �� �����͸� ȣ���Ѵ�. ShowPlaeyrInfo

	/*char* playerNmae[10];
	SetPlayerName(playerNmae);
	printf("%s", playerNmae);*/

	// �迭 - ������
	// �迭 �������� �ּҸ� �����ϸ� �ȵȴ�. ��� ������

	//char* playerName;
	//printf("�÷��̾��� �̸��� �Է����ּ���.\n");
	//char input[50];
	//scanf_s("%s", input, 50);
	//playerName = input;
	////SetPlayerName(playerName);
	//printf("%s", playerName);

	Player player;
	Player* playerPtr = &player;
	char inputA[10] = "";
	printf("�÷��̾��� �̸��� �Է����ּ���.\n");
	scanf_s("%s", inputA, 10);
	SetPlayer(&player, inputA);
	ShowPlayerInfo(&player);

	// 2���� �迭
	printf("\n\n");
	printf("�� ���\n");

	// ����x1�� ����xn�� Ǯ��

	for (int i = 0; i < STAGE_HEIGHT; i++)
	{
		printf("%s\n", Stage2[i]);
	}
}