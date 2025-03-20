#pragma once
#include <stdio.h>

typedef struct Pos
{
	int xPos;
	int yPos;
}Pos;

/*
	구조체를 선언할 때 마다 struct 키워드를 붙여주는 것이 번거롭다.
	typedef 사용하면 ---타입 이름을 {} 타입 재정의 가능하다.
	typedef struct 타입의 이름을 생략할 수 있다.
	만약 struct 타입 이음을 생략하면 struct Pos 형태로는 사용을 못한다.
*/

typedef struct Circle
{
	Pos origin; // struct Pos; == Pos;
	double radius;
}Circle;

void StructExample();

void CalculateCircleInfo(Circle circle);

// 플레이어의 정보를 출력하는 함수를 만들어보세요.

typedef struct Player
{
	char* playerName;
	Pos PlayerPos1; // 1. 좌표
	// 2. 스탯
	// 3. 아이템
}Player;

void ShowPlayerCurrentPos(Player player);

void MovePlayer(Player player);

void ShowPlayerCurrentPos2(Player* player); // 메모리가 적게 들어간다.