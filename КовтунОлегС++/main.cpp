
#include<iostream>
using namespace std;

int Add(int a, int b);	//Прототип функции (Объявление функции - Function declaration)
int Sub(int a, int b);
int Mul(int a, int b);
int Div(int a, int b);
double Pow(double a, int b);

void main()
{
	setlocale(LC_ALL, "");
	int a, b;
	cout << "Введите два число 1: ";
	cin >> a;
	cout << "Введите два число 2: ";
	cin >> b;
	int c = Add(a, b);	//Использование функции (Вызов функции - Function call)
	cout << a << " + " << b << " = " << c << endl;
	cout << a << " - " << b << " = " << Sub(a, b) << endl;
	cout << a << " * " << b << " = " << Mul(a, b) << endl;
	cout << a << " / " << b << " = " << Div(a, b) << endl;
	cout << a << " ^ " << b << " = " << Pow(a, b) << endl;

}

int Add(int a, int b)	//Реализация функции (Определение функции - Function definition)
{
	//Addition - сложение
	int sum = a + b;
	return sum;
}
int Sub(int a, int b)
{
	//Subtraction - вычитание
	return a - b;
}
int Mul(int a, int b)
{
	//Multiplication - умножение
	return a * b;
}
int Div(int a, int b)
{
	//Division - деление
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
