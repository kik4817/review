#include "2DimensionArry.h"

void ShowLecture()
{
	printf("2���� �迭\n\n");

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

	// arr1�� �� ���� = ���� * ����
	printf("%d", arr1[0][0]);
	printf("%d\n", arr1[0][1]);
	printf("%d", arr1[1][0]);
	printf("%d\n", arr1[1][1]);
	printf("%d", arr1[2][0]);
	printf("%d\n", arr1[2][1]);
	printf("%d", arr1[3][0]);
	printf("%d\n", arr1[3][1]);

	printf("\n�ݺ������� ǥ���� 2���� �迭\n\n");
	// for �ݺ������� ǥ��
	for (int c = 0; c < COL; c++)
	{
		for (int r = 0; r < ROW; r++)
		{
			printf("%d", arr1[c][r]);
		}
		printf("\n");
	}

	// ����
	// ���� �ѹ� = ���ø� ���, ��ó����
	// const COL_SIZE = 4;

	printf("\narr2 �迭 ���\n\n");
	for (int c = 0; c < 2; c++)
	{
		for (int r = 0; r < 4; r++)
		{
			printf("%d", arr2[c][r]);
		}
		printf("\n");
	}

	// char[][]	char*[][]
	// ���ڸ� ������ Ÿ������ �ϴ� 2���� �迭�� �����
	// �� ����� 4 * 5 ��
	printf("\nmap1 ���\n\n");
	// ���ڷ� ǥ��
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

	printf("\nmap2 ���\n\n");
	// ���� �迭�� ǥ��
	char map2[4][6] = // char* ������ �迭 char**
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