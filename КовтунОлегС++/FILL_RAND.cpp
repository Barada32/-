#pragma once
#include "Header.h"
#include "Constant.cpp"

//заполнение одномерного массива int и double
template<typename Mytype> void FillRand(Mytype arr[], const int length, int minrand, int maxrand)
{
	if (minrand > maxrand)
	{
		swap(minrand, maxrand);
	}
	if (minrand == maxrand)
	{
		maxrand++;
	}
	for (int i = 0; i < length; i++)
	{
		arr[i] = (minrand + rand() % (maxrand - minrand)) + (1 + rand() % 99 / 100.0);
	}

}

//заполнение одномерного массива случайными CHAR символами
void FillRand(char arr[], const int length, char minrand, char maxrand)
{
	if (minrand > maxrand)
	{
		swap(minrand, maxrand);
	}
	if (minrand == maxrand)
	{
		maxrand++;
	}
	for (int i = 0; i < length; i++)
	{
		arr[i] = minrand + rand() % (maxrand - minrand + 1);
	}
}

//заполнение двумерного массива int и double
template<typename Mytype>void FillRand(Mytype arr[rows][cols], const int rows, const int cols, int minrand, int maxrand)
{
	if (minrand > maxrand)
	{
		swap(minrand, maxrand);
	}
	if (minrand == maxrand)
	{
		maxrand++;
	}
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			{
				arr[i][j] = (minrand + rand() % (maxrand - minrand)) + (1 + rand() % 99 / 100.0);
			}
		}
	}
}

//заполнение двумерного массива  char 
void FillRand(char arr[rows][cols], const int rows, const int cols, char minrand, char maxrand)
{
	if (minrand > maxrand)
	{
		swap(minrand, maxrand);
	}
	if (minrand == maxrand)
	{
		maxrand++;
	}
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			arr[i][j] = minrand + rand() % (maxrand - minrand + 1);
		}
	}
}