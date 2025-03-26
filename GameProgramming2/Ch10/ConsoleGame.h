#pragma once

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <Windows.h>
#include <conio.h>
#include <time.h>
#include "Stage.h"

// 콘솔 게임 만들기
// - 포인터 사용, 구조체 사용
// - 2차원 배열 이미지 푷현
// 스테이지를 만들고, 특정 위치에 도달하면 다음 스테이지로 이동

void GotoXY(int x, int y);

void ShowStage(char (*stage)[STAGE_WIDTH + 1], COORD pos);

// 플레이어 좌표, Stage안에 문자의 값 ('@')

// x,y 좌표에 들어있는 문자를 ('@') 반환하느 함수
char ReturnValueFromStage(char (*stage)[STAGE_WIDTH + 1], COORD pos);
//char ReturnValueFromStruct(char(STAGE* stage));
// 다음 스테이지로 이동이 가능한가요?
BOOL CanMoveStage(char(*stage)[STAGE_WIDTH + 1], COORD playerPos, char exitCharacter);
// 이동 하세요

void NextStage(char(*stage)[STAGE_WIDTH + 1], COORD stagePos);