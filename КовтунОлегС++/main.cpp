
#include<iostream>


using namespace std;
//�������� ������� (���������� ������� - Function declaration)
int Add(int a, int b);//��������
int Sub(int a, int b);//���������
int Mul(int a, int b);//���������
int Div(int a, int b);//���������� � �������
double Pow(double a, int b);//���������� � �������
void FillRand(int arr[], const int length, int minrand = 0, int maxrand = 100);//���������� ���������� ���������� � ���������
void PrintAr(int arr[], const int length);//����� �������
int Summ(int arr[], const int length);//����� �������
double SRSumm(int arr[], const int length);//�������������������� �������
int minValueIn(int arr[], const int length);//���������� ����������� �������� �� �������
int maxValueIn(int arr[], const int length);//���������� ������������ �������� �� �������
void shiftLeft(int arr[], const int length, int sdvig);//��������� ����������� ����� ������� �� �������� ����� ��������� �����
void shiftRight(int arr[], const int length, int sdvig);//��������� ����������� ����� ������� �� �������� ����� ��������� �����
void SortVybor(int arr[], const int length);//��������� ���������� ������� � ������� ����������� �������
void SortPyzyr(int arr[], const int length);/*��������� ���������� �������
� ������� ����������� ��������� */
void UniqueRand(int arr[], const int length, int minrand = 0, int maxrand = 100);/*��������� ������ ����������� ����������
������� � �������� ���������*/
void Search(int arr[], const int length); /*������� � ������� ������������� ��������, ������� �� �� �����,
										  � ������� �� ����� ���������� ����������*/

										  
										  
	//���� ���������
void main()
{
	setlocale(LC_ALL, "");
	srand(time(NULL));
	/*int a, b;
	cout << "������� ��� ����� 1: ";
	cin >> a;
	cout << "������� ��� ����� 2: ";
	cin >> b;
	int c = Add(a, b);	//������������� ������� (����� ������� - Function call)
	cout << a << " + " << b << " = " << c << endl;
	cout << a << " - " << b << " = " << Sub(a, b) << endl;
	cout << a << " * " << b << " = " << Mul(a, b) << endl;
	cout << a << " / " << b << " = " << Div(a, b) << endl;
	cout << a << " ^ " << b << " = " << Pow(a, b) << endl;*/
	int start, b;
	cout << "������� ������ ������� : ";
	cin >> start;
	cout << "������� ����� ������� : ";
	cin >> b;
	const int n = 10;
	int arr[n] = {};
	FillRand(arr, n, start, b);
	PrintAr(arr, n);
	cout << endl;
	cout << "����� �������= " << Summ(arr, n);
	cout << endl;
	cout << "����� �������= " << SRSumm(arr, n);
	cout << endl;
	cout << "MIN ���� �������= " << minValueIn(arr, n);
	cout << endl;
	cout << "MAX ���� �������= " << maxValueIn(arr, n);
	cout << endl;
	cout << "������� �� ������� �������� ������ ����� = \n ";
	int sdvig;
	cin >> sdvig;
	cout << endl;
	shiftLeft(arr, n, sdvig);
	PrintAr(arr, n);
	cout << endl;
	cout << "������� �� ������� �������� ������ ������ = \n ";
	cin >> sdvig;
	shiftRight(arr, n, sdvig);
	PrintAr(arr, n);
	cout << endl;
	SortVybor(arr, n);
	cout << endl;
	cout << "����� ����������\n";
	PrintAr(arr, n);
	cout << endl;
	cout << "����� ���������� ����������� ����������\n";
	UniqueRand(arr, n, start, b);
	cout << endl;
	PrintAr(arr, n);
	cout << endl;
	cout << "���������� ����� ������\n";
	FillRand(arr, n, start, b);
	Search(arr, n);
	PrintAr(arr, n);


}//���������� ������� (����������� ������� - Function definition)



//Addition - ��������
int Add(int a, int b)
{
	int sum = a + b;
	return sum;
}
//Subtraction - ���������
int Sub(int a, int b)
{
	return a - b;
}
//Multiplication - ���������
int Mul(int a, int b)
{
	return a * b;
}
//Division - �������
int Div(int a, int b)
{
	return a / b;
}
//���������� � �������
double Pow(double a, int b)
{
	double chislo = a;
	for (size_t i = 1; i < b; i++)
	{
		chislo *= a;
	}
	return chislo;
}
//���������� ���������� �������
void FillRand(int arr[], const int length, int minrand, int maxrand)
{
	if (minrand > maxrand)
	{
		swap(minrand, maxrand);
	}
	if (minrand == maxrand)
	{
		maxrand++;
	}
	for (size_t i = 0; i < length; i++)
	{
		arr[i] = rand() % (maxrand - minrand) + minrand;
	}
}
//����� ������� �� �����
void PrintAr(int arr[], const int length)
{
	for (size_t i = 0; i < length; i++)
	{
		cout << arr[i] << "\t";
	}
}
//�����
int Summ(int arr[], const int length)
{
	int sum = 0;
	for (size_t i = 0; i < length; i++)
	{
		sum += arr[i];
	}
	return sum;
}
//������� �����
double SRSumm(int arr[], const int length)
{
	double sum = 0;
	for (size_t i = 0; i < length; i++)
	{
		sum += arr[i];
	}
	return sum / length;
}
//���������� ����������� �������� �� �������
int minValueIn(int arr[], const int length)
{
	int min = arr[0];
	int minpoz = 0;
	for (size_t i = 0; i < length; i++)
	{
		if (arr[i] < min)
		{
			min = arr[i];
			minpoz = i;
		}
	}
	return min;
}
//���������� ����������� �������� �� �������
int maxValueIn(int arr[], const int length)
{
	int max = arr[0];
	int maxpoz = 0;
	for (size_t i = 0; i < length; i++)
	{
		if (arr[i] > max)
		{
			max = arr[i];
			maxpoz = i;
		}
	}
	return max;
}
//��������� ����������� ����� ������� �� �������� ����� ��������� ����
void shiftLeft(int arr[], const int length, int sdvig)
{

	for (size_t j = 0; j < sdvig; j++)
	{
		int buffer = arr[0];
		for (size_t i = 0; i < length; i++)
		{
			arr[i] = arr[i + 1];
		}
		arr[length - 1] = buffer;
	}

}
//��������� ����������� ����� ������� �� �������� ����� ��������� �����
void shiftRight(int arr[], const int length, int sdvig)
{
	sdvig = length - sdvig;
	for (size_t j = 0; j < sdvig; j++)
	{
		int buffer = arr[0];
		for (size_t i = 0; i < length; i++)
		{
			arr[i] = arr[i + 1];
		}
		arr[length - 1] = buffer;
	}
}
 //��������� ���������� ������� � ������� �����������
void SortVybor(int arr[], const int length)

{
	int min, poz, kol = 0;
	for (size_t i = 0; i < length; i++)
	{
		//����������� � ������� ������ ������� � ����������������� ������� �������
		min = arr[i];
		poz = i;
		for (size_t j = i + 1; j < length; j++)
		{
			//����� �������� � ����������������� �������
			if (arr[j] < min)
			{
				min = arr[j];
				poz = j;
			}
			/*kol++;//���������� ��������*/
		}
		//�����
		swap(arr[i], arr[poz]);
	}
}
void SortPyzyr(int arr[], const int length)
{
	bool key;
	int a = 0, k = 0;
	do
	{
		key = false;//������� ���� �� ����
		for (size_t i = 0; i < length - 1 - a; i++)//�� ��������� �� ��������, ������� ��� ����� �� ����� ������
		{
			//���� ��������� ������� ������, ��� ������� - ������ �� �������
			if (arr[i + 1] < arr[i])
			{
				swap(arr[i], arr[i + 1]);
				key = true;//��������� ������
			}
			k++;//���������� �������
		}
		a++;//������� ���������� ������ �������� �� ������� = ���������� ���������, ������� ����� �� �����
	} while (key == true);//���� ���������� ������
}
void UniqueRand(int arr[], const int length, int minrand, int maxrand)
{
	bool flag = true;

	for (int i = 0; i < length; )
	{
		flag = false;
		int new_znach = rand() % (maxrand - minrand) + minrand;//��������� ���������� ��������� ������ �� ��������� ���������

		for (int j = 0; j < i; j++)//� ����� ��������� ����� ������� ������� �� ���������� � ���������� 
		{
			if (arr[j] == new_znach)//���� == �� ����������� ������
			{
				flag = true;
				break;
			}
		}
		if (flag == false)
		{
			arr[i] = new_znach;
			i++;//����� �� ������� ������ � ������ ���������� ������ �������� � ������
		}
	}
}
void Search(int arr[], const int length) //������� � ������� ������������� ��������, ������� �� �� �����,
////� ������� �� ����� ���������� ����������

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
			//���� ������� i ��������� � ����� �� ����������� (j), �� ����������� �����
			if ((int)arr[i] == (int)arr[j])
				count++;
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
