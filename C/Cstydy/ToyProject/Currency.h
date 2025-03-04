#pragma once

#include <stdio.h>
#include <stdbool.h>

extern int CurrentMoney;
extern int UpgradeCost;
extern bool isFail;

bool CanUpgrade(int cost);
