
#include<iostream>
using namespace std;

int Add(int a, int b);	//�������� ������� (���������� ������� - Function declaration)
int Sub(int a, int b);
int Mul(int a, int b);
int Div(int a, int b);
double Pow(double a, int b);

void main()
{
	setlocale(LC_ALL, "");
	int a, b;
	cout << "������� ��� ����� 1: ";
	cin >> a;
	cout << "������� ��� ����� 2: ";
	cin >> b;
	int c = Add(a, b);	//������������� ������� (����� ������� - Function call)
	cout << a << " + " << b << " = " << c << endl;
	cout << a << " - " << b << " = " << Sub(a, b) << endl;
	cout << a << " * " << b << " = " << Mul(a, b) << endl;
	cout << a << " / " << b << " = " << Div(a, b) << endl;
	cout << a << " ^ " << b << " = " << Pow(a, b) << endl;

}

int Add(int a, int b)	//���������� ������� (����������� ������� - Function definition)
{
	//Addition - ��������
	int sum = a + b;
	return sum;
}
int Sub(int a, int b)
{
	//Subtraction - ���������
	return a - b;
}
int Mul(int a, int b)
{
	//Multiplication - ���������
	return a * b;
}
int Div(int a, int b)
{
	//Division - �������
	return a / b;
}
double Pow(double a, int b)
{
	double chislo = a;
	for (size_t i = 0; i < b - 1; i++)
	{
		chislo *= a;
	}
	return chislo;
}
