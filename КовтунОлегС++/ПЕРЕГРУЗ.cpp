//
//
//#include <iostream>
//using namespace std;
//const int rows = 5;
//const int cols = 6;
//
//void FillRand(int arr[rows][cols], const int rows, const int cols, char minrand, char maxrand)
//{
//	if (minrand > maxrand)
//	{
//		swap(minrand, maxrand);
//	}
//	if (minrand == maxrand)
//	{
//		maxrand++;
//	}
//	for (size_t i = 0; i < rows; i++)
//	{
//		for (size_t j = 0; j < cols; j++)
//		{
//			arr[i][j] = minrand + rand() % (maxrand - minrand + 1);
//		}
//	}
//}
//void PrintAr(int arr[rows][cols], const int rows, const int cols)
//{
//	for (size_t i = 0; i < rows; i++)
//	{
//		for (size_t j = 0; j < cols; j++)
//		{
//			cout << arr[i][j] << "\t";
//		}
//		cout << endl;
//	}
//}
//void SortVybor_po_strokam(int arr[rows][cols], const int rows, const int cols)
//{
//
//	int tmp, strok, stolb, pos, prohod;
//		for (strok = 0; strok < rows; ++strok) // цикл отвечает за сортировку одмномерных массивов по строкам
//		{
//			for (prohod = 0; prohod < cols; ++prohod) // j1 - номер текущего шага(проходим  циклом по элементам строки)
//			{
//				pos = prohod;
//				tmp = arr[strok][pos];
//				for (stolb = prohod + 1; stolb < cols; ++stolb) // цикл выбора наименьшего элемента
//				{
//					if (arr[stolb][stolb] < tmp)
//					{
//						pos = stolb;//мин позиция в строке
//						tmp = arr[strok][stolb];// мин значение в строке
//					}
//				}
//				arr[strok][pos] = arr[strok][prohod];
//				arr[strok][prohod] = tmp; // меняем местами наименьший с arr[j1]
//			}
//			
//		}
//		 
//
//}
//
//int main()
//{
//
//
//	int arr[rows][cols];
//
//	FillRand(arr, rows, cols, 1, 25);
//	PrintAr(arr, rows, cols);
//	cout << endl;
//	SortVybor_po_strokam(arr, rows, cols);
//	PrintAr(arr, rows, cols);
//	cout << endl;
//}
