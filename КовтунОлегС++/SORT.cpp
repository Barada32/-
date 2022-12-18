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
//	unsigned int start_time1 = clock(); // ��������� �����
//	buble_sort(mass, n);
//	unsigned int end_time1 = clock(); // �������� �����
//	unsigned int search_time1 = end_time1 - start_time1; // ������� �����
//
//	unsigned int start_time2 = clock(); // ��������� �����
//	selection_sort(mass1, n);
//	unsigned int end_time2 = clock(); // �������� �����
//	unsigned int search_time2 = end_time2 - start_time2; // ������� �����
//
//	unsigned int start_time3 = clock(); // ��������� �����
//	intersection_sort(mass2, n);
//	unsigned int end_time3 = clock(); // �������� �����
//	unsigned int search_time3 = end_time3 - start_time3; // ������� �����
//
//	cout << "���������� ���������: " << search_time1 << "��" << endl;
//	cout << "���������� �������: " << search_time2 << "��" << endl;
//	cout << "���������� ���������: " << search_time3 << "��" << endl;
//
//}
//
//
//void buble_sort(int arr[], int n) {
//	//���������� ���������
//	bool key;
//	int a = 0, k = 0;
//	do
//	{
//		key = false;//������� ���� �� ����
//		for (size_t i = 0; i < n - 1 - a; i++)//�� ��������� �� ��������, ������� ��� ����� �� ����� ������
//		{
//			//���� ��������� ������� ������, ��� ������� - ������ �� �������
//			if (arr[i + 1] < arr[i])
//			{
//				swap(arr[i], arr[i + 1]);
//				key = true;//��������� ������
//			}
//			k++;//���������� �������
//		}
//		a++;//������� ���������� ������ �������� �� ������� = ���������� ���������, ������� ����� �� �����
//	} while (key == true);//���� ���������� ������
//	//��������� ��������� � ������ ������ O(n^2)
//}
//
//
//void selection_sort(int arr[], int n) {
//	//���������� �������
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
//	//���������� ���������
//	for (int i = 0; i < n; i++) {
//		int pos = i;
//		int cursor = arr[i];
//		while (pos > 0 && arr[pos - 1] > cursor) {
//			//����� ����� ������� ���� �� �������� �������
//			int x = arr[i];
//			arr[i] = arr[i - 1];
//			arr[i - 1] = x;
//			pos -= 1;
//		}
//		arr[pos] = cursor;
//	}
//}
//
