#include "2DimensionArry.h"

void ShowLecture()
{
	printf("2차원 배열\n\n");

	int arr1[4][2] =
	{
		{0,1},
		{1,1},
		{1,0},
		{1,1}
	};

	int arr2[2][4] =
	{
		{0,1,1,0},
		{1,0,0,0}
	};

	// arr1의 총 개수 = 세로 * 가로
	printf("%d", arr1[0][0]);
	printf("%d\n", arr1[0][1]);
	printf("%d", arr1[1][0]);
	printf("%d\n", arr1[1][1]);
	printf("%d", arr1[2][0]);
	printf("%d\n", arr1[2][1]);
	printf("%d", arr1[3][0]);
	printf("%d\n", arr1[3][1]);

	printf("\n반복문으로 표현한 2차원 배열\n\n");
	// for 반복문으로 표현
	for (int c = 0; c < COL; c++)
	{
		for (int r = 0; r < ROW; r++)
		{
			printf("%d", arr1[c][r]);
		}
		printf("\n");
	}

	// 변수
	// 매직 넘버 = 심플릭 상수, 전처리문
	// const COL_SIZE = 4;

	printf("\narr2 배열 출력\n\n");
	for (int c = 0; c < 2; c++)
	{
		for (int r = 0; r < 4; r++)
		{
			printf("%d", arr2[c][r]);
		}
		printf("\n");
	}

	// char[][]	char*[][]
	// 문자를 데이터 타입으로 하는 2차원 배열로 만들기
	// 맵 만들기 4 * 5 맵
	printf("\nmap1 출력\n\n");
	// 문자로 표현
	char map1[4][5] =
	{
		{'*','*','*','*','*'},
		{'*',' ',' ',' ','*'},
		{'*',' ',' ',' ','*'},
		{'*','*','*','*','*'}
	};
	for (int c = 0; c < 4; c++)
	{
		for (int r = 0; r < 5; r++)
		{
			printf("%c", map1[c][r]);
		}
		printf("\n");
	}

	printf("\nmap2 출력\n\n");
	// 문자 배열로 표현
	char map2[4][6] = // char* 포인터 배열 char**
	{
		{"*****"},
		{"*   *"},
		{"*   *"},
		{"*****"}
	};
	for (int c = 0; c < 4; c++)
	{
		for (int r = 0; r < 6; r++)
		{
			printf("%c", map2[c][r]);
		}
		printf("\n");
	}
	
}