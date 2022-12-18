#pragma once

#include "Header.h"
#include "Constant.cpp"

template<typename Mytype> void SortPyzyr(Mytype arr[rows][cols], const int rows, const int cols)
{
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			for (int a = 0; a < rows; a++) {
				for (int b = 0; b < cols; b++) {
					if (arr[a][b] > arr[i][j])
					{
						swap(arr[a][b], arr[i][j]);
					}
				}
			}
		}
	}
}

template<typename Mytype> void SortPyzyr(Mytype arr[], const int length)
{
	bool key;
	int a = 0, k = 0;
	do
	{
		key = false;//������� ���� �� ����
		for (size_t i = 0; i < length - 1 - a; i++)//�� ��������� �� ��������, ������� ��� ����� �� ����� ������
		{
			//���� ��������� ������� ������, ��� ������� - ������ �� �������
			if (arr[i + 1] < arr[i])
			{
				swap(arr[i], arr[i + 1]);
				key = true;//��������� ������
			}
			k++;//���������� �������
		}
		a++;//������� ���������� ������ �������� �� ������� = ���������� ���������, ������� ����� �� �����
	} while (key == true);//���� ���������� ������
}

