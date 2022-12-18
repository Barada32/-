#pragma once
#include "Header.h"
#include "Constant.h"

int Factorial(int n)
{
	if (n == 0)
	{
		return 1;
	}
	int f = 1;
	for (int i = 0; i <= n; i++)
	{
		f *= i;
	}
	return f;
}
