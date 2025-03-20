#pragma once
#include <stdio.h>

typedef struct Pos
{
	int xPos;
	int yPos;
}Pos;

/*
	����ü�� ������ �� ���� struct Ű���带 �ٿ��ִ� ���� ���ŷӴ�.
	typedef ����ϸ� ---Ÿ�� �̸��� {} Ÿ�� ������ �����ϴ�.
	typedef struct Ÿ���� �̸��� ������ �� �ִ�.
	���� struct Ÿ�� ������ �����ϸ� struct Pos ���·δ� ����� ���Ѵ�.
*/

typedef struct Circle
{
	Pos origin; // struct Pos; == Pos;
	double radius;
}Circle;

void StructExample();

void CalculateCircleInfo(Circle circle);

// �÷��̾��� ������ ����ϴ� �Լ��� ��������.

typedef struct Player
{
	char* playerName;
	Pos PlayerPos1; // 1. ��ǥ
	// 2. ����
	// 3. ������
}Player;

void ShowPlayerCurrentPos(Player player);

void MovePlayer(Player player);

void ShowPlayerCurrentPos2(Player* player); // �޸𸮰� ���� ����.