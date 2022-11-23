
#include<iostream>
#include<vector>
using namespace std;
#define delimetr "************************************************************************************"
void RecurElevator(int floor);
int RecurStepen(int x, int y, int sum);
int RecurFactorial(int chislo);
int RecurFibo(int n);
void main()
{
	setlocale(LC_ALL, "Rus");
	srand(time(NULL));

	cout << "Hello Recurtion" << endl;
	cout << "Введите номер этажа" << endl;
	int n;
	cin >> n;
	RecurElevator(n);
	cout << endl << delimetr << endl;
	int fak;
	cout << "Введите число факториала";
	cin >> fak;
	cout << RecurFactorial(fak);
	cout << endl << delimetr << endl;
	cout << "Введите число и степень\n ";
	int chisl, step, mnojitel = 1;
	cin >> chisl >> step;
	cout << RecurStepen(chisl, step, mnojitel);
	cout << endl << delimetr << endl;
	int ch, m = 0, i;
	cout << "Сколько числе вывести в ряду Фибо? ";
	cin >> ch;
	cout << "Ряд Фибо: ";
	for (i = 1; i <= ch; i++)
	{
		cout << " " << RecurFibo(m);
		m++;
	}
	cout << endl << delimetr << endl;
	int ch1, m1 = 0;
	cout << " До какого числа вывести фибо? ";
	cin >> ch1;
	cout << "Ряд Фибо: ";
	while (RecurFibo(m1) <= ch1)
	{
		cout << " " << RecurFibo(m1);
		m1++;
	}




}


void RecurElevator(int floor)
{
	if (floor == 0)
	{
		cout << "Вы в подвале" << endl;
		return;
	}
	cout << "Вы на " << floor << "этаже" << endl;
	RecurElevator(floor - 1);
	cout << "Вы на " << floor << "этаже" << endl;
}

/*1. Написать рекурсивную функцию, которая принимает число, и возвращает Факториал этого числа;*/

int RecurFactorial(int chislo)
{   //!chislo = chislo * (chislo - 1)
	if (chislo == 0)
	{
		return 0;
	}
	if (chislo == 1)
	{
		return 1;
	}
	return chislo * RecurFactorial(chislo - 1);
}

/*2. Написать Рекурсивную функцию, которая возводит число в степень;*/

int RecurStepen(int x, int y, int sum = 1)
{

	sum *= x;
	if (y == 1)
	{
		return sum;
	}
	RecurStepen(x, y - 1, sum);
}
/*3. Написать рекурсивную функцию, которая выводит на экран ряд Фибоначчи до заданного предела;*/
int RecurFibo(int n)
{
	if (n == 0 || n == 1)
		return n;
	return RecurFibo(n - 1) + RecurFibo(n - 2);

}


/* 4. Написать рекурсивную функцию, которая выводит на экран заданное количество членов из ряда Фибоначчи;*/

