#pragma once

#include "Header.h"
#include "Constant.cpp"

template<typename Mytype>
void SortVybor(Mytype arr[], const int length)

{
	int min, poz, kol = 0;
	for (size_t i = 0; i < length; i++)
	{
		//����������� � ������� ������ ������� � ����������������� ������� �������
		min = arr[i];//��������� �������
		poz = i;//������� �������� 
		for (size_t j = i + 1; j < length; j++)// ����� ������� � ����������������� ������� 
		{									   // �� ��������� ����� ��� i+1

			if (arr[j] < min)//����� �������� � ����������������� �������
			{//���� ������� ������� ������ �������� �� 
				min = arr[j];//������� �������
				poz = j;//������� �������� � ����������������� �������
			}
			kol++;//���������� ��������
		}
		// ����� ������� ���������� ����� ���������� �����
		swap(arr[i], arr[poz]);
	}
}



template<typename Mytype>
void SortVybor_po_strokam(Mytype arr[rows][cols], const int rows, const int cols)
{
	int temp, i, j, pos, k;
	for (i = 0; i < rows; ++i) // ���� �������� �� ���������� ����������� �������� �� �������
	{
		for (k = 0; k < cols; ++k) // k - ����� �������� ����(��������  ������ �� ��������� ������)
		{
			pos = k;
			temp = arr[i][pos];
			for (j = k + 1; j < cols; ++j) // ���� ������ ����������� ��������
			{
				if (arr[i][j] < temp)
				{
					pos = j;
					temp = arr[i][j];
				}
			}
			arr[i][pos] = arr[i][k];
			arr[i][k] = temp; // ������ ������� ���������� � arr[j1]
		}
	}
}





