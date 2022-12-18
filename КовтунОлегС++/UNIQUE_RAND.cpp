#pragma once

#include "Header.h"
#include "Constant.cpp"


template<typename Mytype> void UniqueRand(Mytype arr[], const int length, int minrand, int maxrand)
{
	
	if (minrand > maxrand)
	{
		swap(minrand, maxrand);
	}
	if (minrand == maxrand)
	{
		maxrand++;
	}
	
	bool flag = true;

	for (int i = 0; i < length; )
	{
		flag = false;
		int new_znach = (minrand + rand() % (maxrand - minrand)) + (1 + rand() % 99 / 100.0);//��������� ���������� ��������� ������ �� ��������� ���������

		for (int j = 0; j < i; j++)//� ����� ��������� ����� ������� ������� �� ���������� � ���������� 
		{
			if (arr[j] == new_znach)//���� == �� ����������� ������
			{
				flag = true;
				break;
			}
		}
		if (flag == false)
		{
			arr[i] = new_znach;
			i++;//����� �� ������� ������ � ������ ���������� ������ �������� � ������
		}
	}
}


template<typename Mytype> void UniqueRand(Mytype arr[rows][cols], const int rows, const int cols, int  minrand, int maxrand)
{

	if (rows * cols > maxrand - minrand)
	{
		cout << "��� ������� ��������� ������� �� ��������.���������� ���������� ��������" << endl;

	}
	if (maxrand - minrand <= 0)
	{
		cout << "��� ������� ��������� ������� �� ��������.���������� ���������� ��������" << endl;
	}
	else
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
				bool uniq = true;
				do
				{
					arr[i][j] = (minrand + rand() % (maxrand - minrand)) + (1 + rand() % 99 / 100.0);
					for (int k = 0; k <= i; k++)
					{
						for (int l = 0; (k < i) ? (l < cols) : (l < j); l++)
						{
							if (arr[i][j] == arr[k][l]) uniq = false;
						}
					}
					uniq = !uniq;
				} while (uniq);
			}
		}
	}
}




