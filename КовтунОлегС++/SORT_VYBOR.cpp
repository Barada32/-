#pragma once

#include "Header.h"
#include "Constant.cpp"

template<typename Mytype>
void SortVybor(Mytype arr[], const int length)

{
	int min, poz, kol = 0;
	for (size_t i = 0; i < length; i++)
	{
		//записываеем в минимум первый элемент в неотсортированном участке массива
		min = arr[i];//назначаем минимум
		poz = i;//позиция минимума 
		for (size_t j = i + 1; j < length; j++)// найти минимум в неотсортированном участке 
		{									   // во вложенном цикле это i+1

			if (arr[j] < min)//поиск минимума в неотсортированном участке
			{//если элемент массива меньше минимума то 
				min = arr[j];//элемент массива
				poz = j;//позиция минимума в неотсортированном участке
			}
			kol++;//количество итераций
		}
		// после прохода вложенного цикла происходит обмен
		swap(arr[i], arr[poz]);
	}
}



template<typename Mytype>
void SortVybor_po_strokam(Mytype arr[rows][cols], const int rows, const int cols)
{
	int temp, i, j, pos, k;
	for (i = 0; i < rows; ++i) // цикл отвечает за сортировку одмномерных массивов по строкам
	{
		for (k = 0; k < cols; ++k) // k - номер текущего шага(проходим  циклом по элементам строки)
		{
			pos = k;
			temp = arr[i][pos];
			for (j = k + 1; j < cols; ++j) // цикл выбора наименьшего элемента
			{
				if (arr[i][j] < temp)
				{
					pos = j;
					temp = arr[i][j];
				}
			}
			arr[i][pos] = arr[i][k];
			arr[i][k] = temp; // меняем местами наименьший с arr[j1]
		}
	}
}





