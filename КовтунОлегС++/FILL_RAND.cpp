#pragma once
#include "Header.h"
#include "Constant.cpp"

//���������� ����������� ������� int � double
template<typename Mytype> void FillRand(Mytype arr[], const int length, int minrand, int maxrand)
{
	if (minrand > maxrand)
	{
		swap(minrand, maxrand);
	}
	if (minrand == maxrand)
	{
		maxrand++;
	}
	for (int i = 0; i < length; i++)
	{
		arr[i] = (minrand + rand() % (maxrand - minrand)) + (1 + rand() % 99 / 100.0);
	}

}

//���������� ����������� ������� ���������� CHAR ���������
void FillRand(char arr[], const int length, char minrand, char maxrand)
{
	if (minrand > maxrand)
	{
		swap(minrand, maxrand);
	}
	if (minrand == maxrand)
	{
		maxrand++;
	}
	for (int i = 0; i < length; i++)
	{
		arr[i] = minrand + rand() % (maxrand - minrand + 1);
	}
}

//���������� ���������� ������� int � double
template<typename Mytype>void FillRand(Mytype arr[rows][cols], const int rows, const int cols, int minrand, int maxrand)
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
			{
				arr[i][j] = (minrand + rand() % (maxrand - minrand)) + (1 + rand() % 99 / 100.0);
			}
		}
	}
}

//���������� ���������� �������  char 
void FillRand(char arr[rows][cols], const int rows, const int cols, char minrand, char maxrand)
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
			arr[i][j] = minrand + rand() % (maxrand - minrand + 1);
		}
	}
}