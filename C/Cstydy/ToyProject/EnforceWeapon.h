#pragma once

#include <stdio.h>
#include <stdbool.h>
#include <conio.h>
#include <Windows.h>
#include <stdlib.h>
#include <time.h>
#include "Random.h"
#include "Currency.h"

void ShowMenu();
void Upgrade();
void ShowStatus();

bool IsGameClear();
extern int CurrentLevel;
extern int TargetLevel;
extern bool isClear;
extern bool isFail;