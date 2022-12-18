#pragma once

#include "Header.h"
#include "Constant.cpp"

/*���������� ������� ����� ������� ���� INT ��� DOUBLE*/
template<typename Mytype>
double Summ(Mytype arr[], const int length)
{
	double sum = 0;
	for (int i = 0; i < length; i++)
	{
		sum += arr[i];
	}
	return sum;
}

//���������� ��� ������� ���� CHAR
void Summ(char arr[], const int length)
{
	string slovo;
	for (int i = 0; i < length; i++)
	{
		slovo += arr[i];
	}
	cout << slovo;

}

/*���������� ������� ����� ���������� ������� ���� INT ��� DOUBLE*/
template<typename Mytype>
double Summ(Mytype arr[rows][cols], const int rows, const int cols)
{
	double sum = 0;
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			sum += arr[i][j];
		}
	}
	return sum;
}

//���������� ��� ���������� ������� ���� CHAR
void Summ(char arr[rows][cols], const int rows, const int cols)
{
	string slovo;
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			slovo += arr[i][j];
		}
	}
	cout << slovo;


}
