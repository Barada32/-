#pragma once

#include "Header.h"
#include "Constant.cpp"


//выполняет циклический сдвиг одномерного массива на заданное число элементов лево
template<typename Mytype> void shiftLeft(Mytype arr[], const int length, int sdvig)
{
	for (size_t k = 0; k < sdvig; k++)
	{
		Mytype buffer = arr[0];
		for (size_t i = 0; i < length; i++)
		{
			arr[i] = arr[i + 1];
		}
		arr[length - 1] = buffer;
	}
}

//выполняет циклический сдвиг одномерного массива на заданное число элементов право
template<typename Mytype> void shiftRight(Mytype arr[], const int length, int sdvig)
{
	sdvig = length - sdvig;
	for (size_t j = 0; j < sdvig; j++)
	{
		Mytype buffer = arr[0];
		for (size_t i = 0; i < length; i++)
		{
			arr[i] = arr[i + 1];
		}
		arr[length - 1] = buffer;
	}
}

//выполняет циклический сдвиг двумерного массива на заданное число элементов право
template<typename Mytype> void shiftRight(Mytype arr[rows][cols], const int rows, const int cols, int sdvig)
{
	//sdvig = (rows * (cols - 1) + 1) - sdvig;
	for (size_t k = 0; k < sdvig; k++)
	{
		Mytype buffer = arr[rows - 1][cols - 1];

		for (int i = rows - 1; i >= 0; i--)
		{
			for (int j = cols - 1; j > 0; j--)
			{
				arr[i][j] = arr[i][j - 1];
			}
			arr[i][0] = arr[i - 1][cols - 1];
		}
		arr[0][0] = buffer;
	}
}

//выполняет циклический сдвиг двумерного массива на заданное число элементов лево
template<typename Mytype> void shiftLeft(Mytype arr[rows][cols], const int rows, const int cols, int sdvig)
{
	for (size_t k = 0; k < sdvig; k++)
	{
		Mytype buffer = arr[0][0];

		for (size_t i = 0; i < rows; i++)
		{
			for (size_t j = 0; j < cols; j++)
			{
				arr[i][j] = arr[i][j + 1];
			}
			arr[i][cols - 1] = arr[i + 1][0];
		}
		arr[rows - 1][cols - 1] = buffer;
	}
}