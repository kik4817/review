#pragma once

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <Windows.h>
#include <conio.h>
#include <time.h>
#include "Stage.h"

// �ܼ� ���� �����
// - ������ ���, ����ü ���
// - 2���� �迭 �̹��� ����
// ���������� �����, Ư�� ��ġ�� �����ϸ� ���� ���������� �̵�

void GotoXY(int x, int y);

void ShowStage(char (*stage)[STAGE_WIDTH + 1], COORD pos);

// �÷��̾� ��ǥ, Stage�ȿ� ������ �� ('@')

// x,y ��ǥ�� ����ִ� ���ڸ� ('@') ��ȯ�ϴ� �Լ�
char ReturnValueFromStage(char (*stage)[STAGE_WIDTH + 1], COORD pos);
//char ReturnValueFromStruct(char(STAGE* stage));
// ���� ���������� �̵��� �����Ѱ���?
BOOL CanMoveStage(char(*stage)[STAGE_WIDTH + 1], COORD playerPos, char exitCharacter);
// �̵� �ϼ���

void NextStage(char(*stage)[STAGE_WIDTH + 1], COORD stagePos);