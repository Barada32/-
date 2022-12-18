#pragma once
#include "Header.h"
#include "Constant.cpp"

	/*вывод функции на экран*/
template<typename Mytype>
void PrintAr(Mytype arr[], const int length)
{
	for (int i = 0; i < length; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
}
template<typename Mytype>
void PrintAr(Mytype arr[rows][cols], const int rows, const int cols)
{
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			cout<< arr[i][j] << "\t";
		}
		cout << endl;
	}

}