
#include<iostream>
#include<vector>
using namespace std;
#define ELEVATOR
#define FAKTORIAL
#define STEPEN
#define ДИАП_ФИБО
#define РЯД_ФИБО

#define delimetr "************************************************************************************"
void RecurElevator(int floor);
double RecurStepen(double x, double y);
int RecurFactorial(int chislo);
int RecurFibo(int n);
int faktorial(int a);
void FiboDochisla(int n,int a=0,int b=1);
void FiboRyad(int n,int i=0, long long int a = 0,long long int b = 1);

void main()
{
	setlocale(LC_ALL, "Rus");
	srand(time(NULL));
	FiboRyad(50);
#ifdef ELEVATOR
	cout << "Hello Recurtion" << endl;
	cout << "Введите номер этажа" << endl;
	int n;
	cin >> n;
	RecurElevator(n);
#endif //ELEVATOR
	cout << endl << delimetr << endl;
#ifdef FAKTORIAL
	int fak;
	cout << "Введите число факториала";
	cin >> fak;
	cout << RecurFactorial(fak);
#endif //FAKTORIAL;
	cout << endl << delimetr << endl;
#ifdef STEPEN
	cout << "Введите число и степень\n ";
	int chisl, step, mnojitel = 1;
	cin >> chisl >> step;
	cout << RecurStepen(chisl, step);
#endif //STEPEN
	cout << endl << delimetr << endl;
#ifdef ДИАП_ФИБО

	int ch, m = 0, i;
	cout << "Сколько числе вывести в ряду Фибо? ";
	cin >> ch;
	cout << "Ряд Фибо: ";
	for (i = 1; i <= ch; i++)
	{
		cout << " " << RecurFibo(m);
		m++;
	}
#endif //ДИАП_ФИБО
	cout << endl << delimetr << endl;
#ifdef РЯД_ФИБО
	int ch1, m1 = 0;
	cout << " До какого числа вывести фибо? ";
	cin >> ch1;
	cout << "Ряд Фибо: ";
	while (RecurFibo(m1) <= ch1)
	{
		cout << " " << RecurFibo(m1);
		m1++;
	}
#endif// РЯД_ФИБО
	int a;
	cout << "\nВведите число до какого выводим фибо\n";
	cin >> a;
	FiboDochisla(a, 0, 1);
}
int faktorial(int a)
{
	return a == 0 ? 1 : a * faktorial(a - 1);
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
double RecurStepen(double x, double y)
{
	{
		return y == 0 ? 1 : y > 0 ? x * RecurStepen(x, y - 1) : 1 / RecurStepen(x, -y);
	}
}
/*3. Написать рекурсивную функцию, которая выводит на экран ряд Фибоначчи до заданного предела;*/
int RecurFibo(int n)
{
	if (n == 0 || n == 1)
		return n;
	return RecurFibo(n - 1) + RecurFibo(n - 2);

}

/*3. Написать рекурсивную функцию, которая выводит на экран ряд Фибоначчи до заданного предела;*/
void FiboDochisla(int n, int a, int b)
{
	if (a > n)return;
	cout << a << "\t";
	FiboDochisla(n, b, a + b);
}

/* 4. Написать рекурсивную функцию, которая выводит на экран заданное количество членов из ряда Фибоначчи;*/
void FiboRyad(int n, int i, long long int a , long long int b )
{

	if (i > n)return;
	cout << i << "\t" << a << "\n";
	FiboRyad(n, i + 1, b, a + b);


}