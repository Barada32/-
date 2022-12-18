#pragma once

#include "Header.h"
#include "Constant.cpp"

//возвращает минимальное значение из массива
template<typename Mytype> Mytype minValueIn(Mytype arr[], const int length)
{
	Mytype min = arr[0];
	int minpoz = 0;
	for (size_t i = 0; i < length; i++)
	{
		if (arr[i] < min)
		{
			min = arr[i];
			minpoz = i;
		}
	}
	return min;
}

//возвращает минимальное значение из массива
template<typename Mytype> Mytype minValueIn(Mytype arr[rows][cols], const int rows, const int cols)
{
	Mytype min = arr[0][0];
	for (size_t i = 0; i < rows; i++)
	{
		for (size_t j = 0; j < cols; j++)
		{
			if (arr[i][j] < min)
			{
				min = arr[i][j];
			}
		}
	}
	return min;
}
