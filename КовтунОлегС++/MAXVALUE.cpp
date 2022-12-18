#pragma once

#include "Header.h"
#include "Constant.cpp"

//возвращает макс значение из массива
template<typename Mytype> Mytype maxValueIn(Mytype arr[], const int length)
{
	Mytype max = arr[0];
	for (int i = 0; i < length; i++)
	{
		if (arr[i] > max)
		{
			max = arr[i];
		}
	}
	return max;
}
template<typename Mytype> Mytype maxValueIn(Mytype arr[rows][cols], const int rows, const int cols)
{
	Mytype max = arr[0][0];
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			if (arr[i][j] > max)
			{
				max = arr[i][j];
			}
		}
	}
	return max;
}
