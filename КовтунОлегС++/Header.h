#pragma once

#include "Constant.cpp"
#include<iostream>


using namespace std;
using std::cin;
using std::cout;
using std::endl;;

#define INT
#define DOUBLE
#define CHAR


#define D_M_INT
#define D_M_DOUBLE
#define D_M_CHAR

#define FILLRAND		 //������ ��� ���������� ���������� ���������
#define PRINTAR			 //������ ������ INT,DOUBLE,CHAR �������
#define SUMM			 //����� INT � DOUBLE ������� 
#define SRSSUM			 //�������������������� INT � DOUBLE CHAR  �������
#define MINVALUEIN		 //���������� ����������� �������� �� ������� INT DOUBLE CHAR
#define MAXVALUEIN		 //���������� ������������ �������� �� ������� INT DOUBLE CHAR
#define SHIFTLEFT		 //��������� ����������� ����� ������� �� �������� ����� ��������� �����
#define SHIFTRIGHT		 //��������� ����������� �� ��� ������� �� �������� ����� ��������� �����
//#define SORTVYBOR		 //���������� ������� �������
#define SORTPYZYR		 //���������� ������� ���������
#define UNIQUERAND	 //���������� ������� ����������� ����������
#define SEARCH		 //����� ���������� � �������

#ifdef FILLRAND
template<typename Mytype> void FillRand(Mytype arr1[], const int length, int minrand = 0, int maxrand = 100);
void FillRand(char arr1[], const int length, char minrand = 'A', char maxrand = 'Z');

template<typename Mytype> void FillRand(Mytype arr[rows][cols], const int rows, const int cols, int minrand = 0, int maxrand = 100);
void FillRand(char arr[rows][cols], const int rows, const int cols, char minrand = 'A', char maxrand = 'Z');
#endif //��������� ������� ��� ���������� �������� ���������� ���������

#ifdef PRINTAR
template<typename Mytype> void PrintAr(Mytype arr1[], const int length);
template<typename Mytype> void PrintAr(Mytype arr[rows][cols], const int rows, const int cols);
#endif //������ ������ INT,DOUBLE,CHAR �������

#ifdef SUMM 
template<typename Mytype> double Summ(Mytype arr[], const int length);
void Summ(char arr[], const int length);//��������-���������� ��� ������� ���� CHAR

template<typename Mytype> double Summ(Mytype arr[rows][cols], const int rows, const int cols);
void Summ(char[rows][cols], const int rows, const int cols);
#endif // ����� INT � DOUBLE CHAR ������� 

#ifdef SRSSUM
template<typename Mytype> double SRSumm(Mytype arr[], const int length);
void SRSumm(char arr[], const int length);//��������-���������� ��� ������� ���� CHAR

template<typename Mytype> double SRSumm(Mytype arr[rows][cols], const int rows, const int cols);
void SRSumm(char arr[rows][cols], const int rows, const int cols);
#endif//�������������������� INT � DOUBLE CHAR  �������

#ifdef MINVALUEIN 
template<typename Mytype> Mytype minValueIn(Mytype arr[], const int length);
template<typename Mytype> Mytype minValueIn(Mytype arr_d[rows][cols], const int rows, const int cols);
#endif//���������� ����������� �������� �� ������� INT � DOUBLE CHAR

#ifdef MAXVALUEIN
template<typename Mytype> Mytype maxValueIn(Mytype arr[], const int length);
template<typename Mytype> Mytype maxValueIn(Mytype arr_d[rows][cols], const int rows, const int cols);
#endif //���������� ������������ �������� �� ������� INT DOUBLE CHAR

#ifdef SHIFTLEFT
template<typename Mytype> void shiftLeft(Mytype arr[], const int length, int sdvig);
template<typename Mytype> void shiftLeft(Mytype arr[rows][cols], const int rows, const int cols, int sdvig);
#endif //��������� ����������� ����� ������� �� �������� ����� ��������� �����

#ifdef SHIFTRIGHT
template<typename Mytype> void shiftRight(Mytype arr[], const int length, int sdvig);
template<typename Mytype> void shiftRight(Mytype arr[rows][cols], const int rows, const int cols, int sdvig);
#endif //��������� ����������� ����� ������� �� �������� ����� ��������� �����

#ifdef SORTVYBOR
template<typename Mytype>
void SortVybor(Mytype arr[], const int length);//��������� ���������� ������� � ������� ����������� �������
template<typename Mytype>
void SortVybor_po_strokam(Mytype arr[rows][cols], const int rows, const int cols);
#endif //��������� ���������� ���������� ������� �������

#ifdef SORTPYZYR
template<typename Mytype>
void SortPyzyr(Mytype arr[], const int length);
template<typename Mytype>
void SortPyzyr(Mytype arr[rows][cols], const int rows, const int cols);
#endif/*��������� ���������� ������� � ������� ����������� ��������� */

#ifdef UNIQUERAND
template<typename Mytype> void UniqueRand(Mytype arr[], const int length, int minrand = 0, int maxrand = 100);
template<typename Mytype> void UniqueRand(Mytype arr[rows][cols], const int rows, const int cols, int minrand, int maxrand);
#endif /*��������� ������ ����������� ���������� ������� � �������� ���������*/

#ifdef SEARCH
template<typename Mytype>
void Search(Mytype arr[], const int length); 
template<typename Mytype>
void Search(Mytype arr[rows][cols], const int ROWS, const int COLS);
#endif/*������� � ������� ������������� ��������, ������� �� �� �����, � ������� �� ����� ���������� ����������*/