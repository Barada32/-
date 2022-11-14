//#include <iostream>
//
//using namespace std;
//
////Реализация функции (Определение функции - Function definition)
//
//
////заполнение случайными INT и DOUBLE числами
//template<typename Mytype>
//void FillRand(Mytype arr[], const int length, int minrand, int maxrand)
//{
//	if (minrand > maxrand)
//	{
//		swap(minrand, maxrand);
//	}
//	if (minrand == maxrand)
//	{
//		maxrand++;
//	}
//	for (size_t i = 0; i < length; i++)
//	{
//		arr[i] = (minrand + rand() % (maxrand - minrand)) + (1 + rand() % 99 / 100.0);
//	}
//
//}
////заполнение случайными CHAR символами
//void FillRand(char arr[], const int length, char minrand = 'A', char maxrand = 'Z')
//{
//	for (size_t i = 0; i < length; i++)
//	{
//		arr[i] = minrand + rand() % (maxrand - minrand + 1);
//	}
//}
////вывод функции на экран
//template<typename Mytype>
//void PrintAr(Mytype arr[], const int length)
//{
//	for (size_t i = 0; i < length; i++)
//	{
//		cout << arr[i] << "\t";
//	}
//}
//
////Реализация шаблона суммы массива типа INT или DOUBLE
//template<typename Mytype>
//double Summ(Mytype arr[], const int length)
//{
//	double sum = 0;
//	for (size_t i = 0; i < length; i++)
//	{
//		sum += arr[i];
//	}
//	return sum;
//}
////перегрузка для массива типа CHAR
//void Summ(char arr[], const int length)
//{
//	string slovo;
//	for (size_t i = 0; i < length; i++)
//	{
//		slovo += arr[i];
//	}
//	cout << slovo;
//
//}
//
////Реализация шаблона средней суммы массива типа INT или DOUBLE
//template<typename Mytype>
//double SRSumm(Mytype arr[], const int length)
//{
//	double sum = 0;
//	for (size_t i = 0; i < length; i++)
//	{
//		sum += arr[i];
//	}
//	return sum / length;
//}
////перегрузка для массива типа CHAR
//void SRSumm(char arr[], const int length)
//{
//	cout << "Для данного типа массива функция СРЕДНЕАРИФМЕТИЧСКОЕ не подходит ";
//}
////возвращает минимальное значение из массива
//
//template<typename Mytype>
//double minValueIn(Mytype arr[], const int length)
//{
//	double min = arr[0];
//	int minpoz = 0;
//	for (size_t i = 0; i < length; i++)
//	{
//		if (arr[i] < min)
//		{
//			min = arr[i];
//			minpoz = i;
//		}
//	}
//	return min;
//}
////возвращает минимальное значение из массива
//char minValueIn(char arr[], const int length)
//{
//	char min = arr[0];
//	int minpoz = 0;
//	for (size_t i = 0; i < length; i++)
//	{
//		if (arr[i] < min)
//		{
//			min = arr[i];
//			minpoz = i;
//		}
//	}
//	return min;
//}
////возвращает минимальное значение из массива
//template<typename Mytype>
//double maxValueIn(Mytype arr[], const int length)
//{
//	int max = arr[0];
//	int maxpoz = 0;
//	for (size_t i = 0; i < length; i++)
//	{
//		if (arr[i] > max)
//		{
//			max = arr[i];
//			maxpoz = i;
//		}
//	}
//	return max;
//}
//char maxValueIn(char arr[], const int length)
//{
//	char max = arr[0];
//	int maxpoz = 0;
//	for (size_t i = 0; i < length; i++)
//	{
//		if (arr[i] > max)
//		{
//			max = arr[i];
//			maxpoz = i;
//		}
//	}
//	return max;
//}