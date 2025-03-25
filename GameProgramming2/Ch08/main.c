#include "MyString.h"
#include "Player.h"

// 문자열 맵 만들기 (2차원 배열)

#define STAGE_HEIGHT 6
#define STAGE_WIDTH 6


char Stage1[STAGE_HEIGHT][STAGE_WIDTH + 1] = // [세로] [가로+1]

{
	"######",
	"#    #",
	"#    #",
	"#    #",
	"#    #",
	"######",
};

char Stage2[STAGE_HEIGHT][STAGE_WIDTH + 1] = // [세로] [가로+1]

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

	// 1. 게임 시작

	// 플레이할 캐릭터의 이름을 설정한다. SetPlayerName
	// char* 저장을 해서 원할 때 이 데이터를 호출한다. ShowPlaeyrInfo

	/*char* playerNmae[10];
	SetPlayerName(playerNmae);
	printf("%s", playerNmae);*/

	// 배열 - 포인터
	// 배열 포인터의 주소를 변경하면 안된다. 상수 포인터

	//char* playerName;
	//printf("플레이어의 이름을 입력해주세요.\n");
	//char input[50];
	//scanf_s("%s", input, 50);
	//playerName = input;
	////SetPlayerName(playerName);
	//printf("%s", playerName);

	Player player;
	Player* playerPtr = &player;
	char inputA[10] = "";
	printf("플레이어의 이름을 입력해주세요.\n");
	scanf_s("%s", inputA, 10);
	SetPlayer(&player, inputA);
	ShowPlayerInfo(&player);

	// 2차원 배열
	printf("\n\n");
	printf("맵 출력\n");

	// 가로x1줄 세로xn줄 풀력

	for (int i = 0; i < STAGE_HEIGHT; i++)
	{
		printf("%s\n", Stage2[i]);
	}
}