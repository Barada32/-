#pragma once
#include "Header.h"
#include "Constant.cpp"

//���������� ������� ������� ����� ���������� ������� ���� INT ��� DOUBLE
template<typename Mytype>
double SRSumm(Mytype arr[rows][cols], const int rows, const int cols)
{
	double sum = 0;
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			sum += arr[i][j];
		}
	}
	return sum / (rows * cols);
}

//���������� ��� ����������  ������� ���� CHAR
void SRSumm(char arr[rows][cols], const int rows, const int cols)
{
	cout << "��� ������� ���� ������� ������� ������������������� �� �������� ";
}

//���������� ������� ������� ����� ����������� ������� ���� INT ��� DOUBLE
template<typename Mytype>
double SRSumm(Mytype arr[], const int length)
{
	double sum = 0;
	for (int i = 0; i < length; i++)
	{
		sum += arr[i];
	}
	return sum / length;
}

//���������� ��� ����������� ������� ���� CHAR
void SRSumm(char arr[], const int length)
{
	cout << "��� ������� ���� ������� ������� ������������������� �� �������� ";
}