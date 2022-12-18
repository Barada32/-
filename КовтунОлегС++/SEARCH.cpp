#pragma once
#include "Header.h"
#include "Constant.cpp"

template<typename Mytype> void Search(Mytype arr[], const int length)
{//������� � ������� ������������� ��������, ������� �� �� �����,
////� ������� �� ����� ���������� ����������
	int maxcount = 0;//������� ����������������� �������� �������
	int max = arr[0];//��������� ��� ������ ������� �������� ����� ���������
	//���������� ��� �������� �������
	for (size_t i = 0; i < length; i++)
	{
		int count = 0;
		//���������� ��� �������� �� i �� �����
		for (size_t j = i; j < length; j++)
		{
			//���� ������� i ��������� � ����� �� ����������� (j), �� ����������� �����
			if ((int)arr[i] == (int)arr[j])
				count++;
		}
		//���� ����� ������ ����� ������������ - ��������������
		if (maxcount < count)
		{
			maxcount = count;//���� ������ �����
			max = i;//���� ����� ���
		}
	}
	//���� ����������� ��������� �� ���������� �� ������������� ��������� ���
	if (maxcount == 1)
	{
		cout << "��� ������������� ���������" << "\n";
	}
	else
	{
		cout << "������  " << "[ " << arr[max] << " ]" << " ����������� " << maxcount << " ��� " << "\n";
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
						cout << "\t��������: ";
						counting = false;
						printing = true;
					}
				}
			}
			if (count > 0) cout << arr[i][j] << " ����������� " << count + 1 << (((count - 1) % 10 < 5 || (count - 1) % 10 > 1) ? " ����.\n" : " ���.\n");
		}
	}
	if (!printing) cout << "������������� �������� �� ����������.\n";
}