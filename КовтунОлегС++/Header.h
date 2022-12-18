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

#define FILLRAND		 //шаблон для наполнения случайными символами
#define PRINTAR			 //шаблон вывода INT,DOUBLE,CHAR массива
#define SUMM			 //сумма INT и DOUBLE массива 
#define SRSSUM			 //среднеарифметическая INT и DOUBLE CHAR  массива
#define MINVALUEIN		 //возвращает минимальное значение из массива INT DOUBLE CHAR
#define MAXVALUEIN		 //возвращает максимальное значение из массива INT DOUBLE CHAR
#define SHIFTLEFT		 //выполняет циклический сдвиг массива на заданное число элементов влево
#define SHIFTRIGHT		 //выполняет циклический сд виг массива на заданное число элементов право
//#define SORTVYBOR		 //сортировка массива выбором
#define SORTPYZYR		 //сортировка массива пузырьком
#define UNIQUERAND	 //заполнение массива уникальными значениями
#define SEARCH		 //поиск повторений в массиве

#ifdef FILLRAND
template<typename Mytype> void FillRand(Mytype arr1[], const int length, int minrand = 0, int maxrand = 100);
void FillRand(char arr1[], const int length, char minrand = 'A', char maxrand = 'Z');

template<typename Mytype> void FillRand(Mytype arr[rows][cols], const int rows, const int cols, int minrand = 0, int maxrand = 100);
void FillRand(char arr[rows][cols], const int rows, const int cols, char minrand = 'A', char maxrand = 'Z');
#endif //шаблонная функция для наполнения массивов случайными символами

#ifdef PRINTAR
template<typename Mytype> void PrintAr(Mytype arr1[], const int length);
template<typename Mytype> void PrintAr(Mytype arr[rows][cols], const int rows, const int cols);
#endif //шаблон вывода INT,DOUBLE,CHAR массива

#ifdef SUMM 
template<typename Mytype> double Summ(Mytype arr[], const int length);
void Summ(char arr[], const int length);//прототип-перегрузка для массива типа CHAR

template<typename Mytype> double Summ(Mytype arr[rows][cols], const int rows, const int cols);
void Summ(char[rows][cols], const int rows, const int cols);
#endif // сумма INT и DOUBLE CHAR массива 

#ifdef SRSSUM
template<typename Mytype> double SRSumm(Mytype arr[], const int length);
void SRSumm(char arr[], const int length);//прототип-перегрузка для массива типа CHAR

template<typename Mytype> double SRSumm(Mytype arr[rows][cols], const int rows, const int cols);
void SRSumm(char arr[rows][cols], const int rows, const int cols);
#endif//среднеарифметическая INT и DOUBLE CHAR  массива

#ifdef MINVALUEIN 
template<typename Mytype> Mytype minValueIn(Mytype arr[], const int length);
template<typename Mytype> Mytype minValueIn(Mytype arr_d[rows][cols], const int rows, const int cols);
#endif//возвращает минимальное значение из массива INT и DOUBLE CHAR

#ifdef MAXVALUEIN
template<typename Mytype> Mytype maxValueIn(Mytype arr[], const int length);
template<typename Mytype> Mytype maxValueIn(Mytype arr_d[rows][cols], const int rows, const int cols);
#endif //возвращает максимальное значение из массива INT DOUBLE CHAR

#ifdef SHIFTLEFT
template<typename Mytype> void shiftLeft(Mytype arr[], const int length, int sdvig);
template<typename Mytype> void shiftLeft(Mytype arr[rows][cols], const int rows, const int cols, int sdvig);
#endif //выполняет циклический сдвиг массива на заданное число элементов влево

#ifdef SHIFTRIGHT
template<typename Mytype> void shiftRight(Mytype arr[], const int length, int sdvig);
template<typename Mytype> void shiftRight(Mytype arr[rows][cols], const int rows, const int cols, int sdvig);
#endif //выполняет циклический сдвиг массива на заданное число элементов право

#ifdef SORTVYBOR
template<typename Mytype>
void SortVybor(Mytype arr[], const int length);//выполняет сортировку массива в порядке возрастания выбором
template<typename Mytype>
void SortVybor_po_strokam(Mytype arr[rows][cols], const int rows, const int cols);
#endif //выполняет сортировку двумерного массива выбором

#ifdef SORTPYZYR
template<typename Mytype>
void SortPyzyr(Mytype arr[], const int length);
template<typename Mytype>
void SortPyzyr(Mytype arr[rows][cols], const int rows, const int cols);
#endif/*выполняет сортировку массива в порядке возрастания пузырьком */

#ifdef UNIQUERAND
template<typename Mytype> void UniqueRand(Mytype arr[], const int length, int minrand = 0, int maxrand = 100);
template<typename Mytype> void UniqueRand(Mytype arr[rows][cols], const int rows, const int cols, int minrand, int maxrand);
#endif /*заполняет массив уникальными случайными числами в заданном диапазоне*/

#ifdef SEARCH
template<typename Mytype>
void Search(Mytype arr[], const int length); 
template<typename Mytype>
void Search(Mytype arr[rows][cols], const int ROWS, const int COLS);
#endif/*находит в массиве повторяюшиеся значения, выводит их на экран, и выводит на экран количество повторений*/