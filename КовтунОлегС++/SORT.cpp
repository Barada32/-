//#include<iostream>
//#include <ctime>
//using namespace std;
//
//
//void buble_sort(int arr[], int n);
//void selection_sort(int arr[], int n);
//void intersection_sort(int arr[], int n);
//
//
//void main() {
//	setlocale(LC_ALL, "");
//	const int n = 50000;
//	int mass[n] = {}; int mass1[n]; int mass2[n];
//	for (int i = 0; i < n; i++) {
//		int count = rand();
//		mass[i] = count;
//		mass1[i] = count;
//		mass2[i] = count;
//	}
//	unsigned int start_time1 = clock(); // начальное время
//	buble_sort(mass, n);
//	unsigned int end_time1 = clock(); // конечное время
//	unsigned int search_time1 = end_time1 - start_time1; // искомое время
//
//	unsigned int start_time2 = clock(); // начальное время
//	selection_sort(mass1, n);
//	unsigned int end_time2 = clock(); // конечное время
//	unsigned int search_time2 = end_time2 - start_time2; // искомое время
//
//	unsigned int start_time3 = clock(); // начальное время
//	intersection_sort(mass2, n);
//	unsigned int end_time3 = clock(); // конечное время
//	unsigned int search_time3 = end_time3 - start_time3; // искомое время
//
//	cout << "Сортировка пузырьком: " << search_time1 << "мс" << endl;
//	cout << "Сортировка выбором: " << search_time2 << "мс" << endl;
//	cout << "Сортировка вставками: " << search_time3 << "мс" << endl;
//
//}
//
//
//void buble_sort(int arr[], int n) {
//	//сортировка пузырьком
//	bool key;
//	int a = 0, k = 0;
//	do
//	{
//		key = false;//обменов пока не было
//		for (size_t i = 0; i < n - 1 - a; i++)//не проверяем те элементы, которые уже стоят на своих местах
//		{
//			//если следующий элемент меньше, чем текущий - меняем их местами
//			if (arr[i + 1] < arr[i])
//			{
//				swap(arr[i], arr[i + 1]);
//				key = true;//произошли обмены
//			}
//			k++;//количество обменов
//		}
//		a++;//считает количество полных проходов по массиву = количество элементов, которые стали на место
//	} while (key == true);//пока происходят обмены
//	//сложность алгоритма в худшем случае O(n^2)
//}
//
//
//void selection_sort(int arr[], int n) {
//	//сортировка выбором
//	for (int i = 0; i < n; i++) {
//		int minimum = i;
//		for (int j = i + 1; j < n; j++) {
//			if (arr[j] < arr[minimum])
//				minimum = j;
//		}
//		int x = arr[minimum];
//		arr[minimum] = arr[i];
//		arr[i] = arr[minimum];
//	}
//}
//
//void intersection_sort(int arr[], int n) {
//	//сортировка вставками
//	for (int i = 0; i < n; i++) {
//		int pos = i;
//		int cursor = arr[i];
//		while (pos > 0 && arr[pos - 1] > cursor) {
//			//меняю числа местами пока не встретим меньшее
//			int x = arr[i];
//			arr[i] = arr[i - 1];
//			arr[i - 1] = x;
//			pos -= 1;
//		}
//		arr[pos] = cursor;
//	}
//}
//
