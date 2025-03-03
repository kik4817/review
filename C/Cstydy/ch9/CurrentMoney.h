#pragma once

#include <stdbool.h>
#include <stdio.h>

extern int CurrentMoney;

bool IsEnoughMoney(int amount);

bool UseMoney(int price);
