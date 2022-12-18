#pragma once
#include "Header.h"
#include "Constant.cpp"

template<typename Mytype> void Search(Mytype arr[], const int length)
{//находит в массиве повтор€юшиес€ значени€, выводит их на экран,
////и выводит на экран количество повторений
	int maxcount = 0;//счетчик частовстречаемого элемента массива
	int max = arr[0];//допускаем что первый элемент наиболее часто встречаем
	//перебираем все элементы массива
	for (size_t i = 0; i < length; i++)
	{
		int count = 0;
		//перебираем все элементы от i до конца
		for (size_t j = i; j < length; j++)
		{
			//если элемент i совпадает с одним из последующих (j), то увеличиваем число
			if ((int)arr[i] == (int)arr[j])
				count++;
		}
		//если число больше ранее сохраненного - перезаписываем
		if (maxcount < count)
		{
			maxcount = count;//макс повтор число
			max = i;//макс число раз
		}
	}
	//если изначальное состо€ние не изменилось то повтор€ющихс€ элементов нет
	if (maxcount == 1)
	{
		cout << "Ќет повтор€ющихс€ элементов" << "\n";
	}
	else
	{
		cout << "—имвол  " << "[ " << arr[max] << " ]" << " повтор€етс€ " << maxcount << " раз " << "\n";
	}
}

template<typename Mytype> void Search(Mytype arr[rows][cols], const int ROWS, const int COLS)
{
	bool printing = false;
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			int count = 0;
			bool counting = true;
			for (int k = i + 1; k < rows; k++)
			{
				for (int l = j + 1; l < cols; l++)
				{
					if ((arr[i][j] - arr[k][l]) == 0) count++;
					for (int l = 0; l < i; l++)
					{
						if ((arr[i][j] - arr[k][l]) == 0)
						{
							counting = false;
							count = 0;
						}
					}
					if (count == 1 && counting)
					{
						cout << "\t«начение: ";
						counting = false;
						printing = true;
					}
				}
			}
			if (count > 0) cout << arr[i][j] << " повтор€етс€ " << count + 1 << (((count - 1) % 10 < 5 || (count - 1) % 10 > 1) ? " раза.\n" : " раз.\n");
		}
	}
	if (!printing) cout << "ѕовтор€ющихс€ значений не обнаружено.\n";
}