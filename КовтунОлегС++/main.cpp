
#include<iostream>


using namespace std;
//Прототип функции (Объявление функции - Function declaration)
int Add(int a, int b);//сложение
int Sub(int a, int b);//вычитание
int Mul(int a, int b);//умножение
int Div(int a, int b);//возведение в степень
double Pow(double a, int b);//возведение в степень
void FillRand(int arr[], const int length, int minrand = 0, int maxrand = 100);//наполнение случайными значениями в диапазоне
void PrintAr(int arr[], const int length);//вывод массива
int Summ(int arr[], const int length);//сумма массива
double SRSumm(int arr[], const int length);//среднеарифметическая массива
int minValueIn(int arr[], const int length);//возвращает минимальное значение из массива
int maxValueIn(int arr[], const int length);//возвращает максимальное значение из массива
void shiftLeft(int arr[], const int length, int sdvig);//выполняет циклический сдвиг массива на заданное число элементов влево
void shiftRight(int arr[], const int length, int sdvig);//выполняет циклический сдвиг массива на заданное число элементов право
void SortVybor(int arr[], const int length);//выполняет сортировку массива в порядке возрастания выбором
void SortPyzyr(int arr[], const int length);/*выполняет сортировку массива
в порядке возрастания пузырьком */
void UniqueRand(int arr[], const int length, int minrand = 0, int maxrand = 100);/*заполняет массив уникальными случайными
числами в заданном диапазоне*/
void Search(int arr[], const int length); /*находит в массиве повторяюшиеся значения, выводит их на экран,
										  и выводит на экран количество повторений*/

										  
										  
	//Тело программы
void main()
{
	setlocale(LC_ALL, "");
	srand(time(NULL));
	/*int a, b;
	cout << "Введите два число 1: ";
	cin >> a;
	cout << "Введите два число 2: ";
	cin >> b;
	int c = Add(a, b);	//Использование функции (Вызов функции - Function call)
	cout << a << " + " << b << " = " << c << endl;
	cout << a << " - " << b << " = " << Sub(a, b) << endl;
	cout << a << " * " << b << " = " << Mul(a, b) << endl;
	cout << a << " / " << b << " = " << Div(a, b) << endl;
	cout << a << " ^ " << b << " = " << Pow(a, b) << endl;*/
	int start, b;
	cout << "Введите начало массива : ";
	cin >> start;
	cout << "Введите конец массива : ";
	cin >> b;
	const int n = 10;
	int arr[n] = {};
	FillRand(arr, n, start, b);
	PrintAr(arr, n);
	cout << endl;
	cout << "Сумма массива= " << Summ(arr, n);
	cout << endl;
	cout << "Сумма массива= " << SRSumm(arr, n);
	cout << endl;
	cout << "MIN знач массива= " << minValueIn(arr, n);
	cout << endl;
	cout << "MAX знач массива= " << maxValueIn(arr, n);
	cout << endl;
	cout << "Введите на сколько сдвунуть массив влево = \n ";
	int sdvig;
	cin >> sdvig;
	cout << endl;
	shiftLeft(arr, n, sdvig);
	PrintAr(arr, n);
	cout << endl;
	cout << "Введите на сколько сдвунуть массив вправо = \n ";
	cin >> sdvig;
	shiftRight(arr, n, sdvig);
	PrintAr(arr, n);
	cout << endl;
	SortVybor(arr, n);
	cout << endl;
	cout << "После сортировки\n";
	PrintAr(arr, n);
	cout << endl;
	cout << "После заполнение уникальными значениями\n";
	UniqueRand(arr, n, start, b);
	cout << endl;
	PrintAr(arr, n);
	cout << endl;
	cout << "Генерируем новый массив\n";
	FillRand(arr, n, start, b);
	Search(arr, n);
	PrintAr(arr, n);


}//Реализация функции (Определение функции - Function definition)



//Addition - сложение
int Add(int a, int b)
{
	int sum = a + b;
	return sum;
}
//Subtraction - вычитание
int Sub(int a, int b)
{
	return a - b;
}
//Multiplication - умножение
int Mul(int a, int b)
{
	return a * b;
}
//Division - деление
int Div(int a, int b)
{
	return a / b;
}
//Возведение в степень
double Pow(double a, int b)
{
	double chislo = a;
	for (size_t i = 1; i < b; i++)
	{
		chislo *= a;
	}
	return chislo;
}
//заполнение случайными числами
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
//вывод функции на экран
void PrintAr(int arr[], const int length)
{
	for (size_t i = 0; i < length; i++)
	{
		cout << arr[i] << "\t";
	}
}
//сумма
int Summ(int arr[], const int length)
{
	int sum = 0;
	for (size_t i = 0; i < length; i++)
	{
		sum += arr[i];
	}
	return sum;
}
//средняя сумма
double SRSumm(int arr[], const int length)
{
	double sum = 0;
	for (size_t i = 0; i < length; i++)
	{
		sum += arr[i];
	}
	return sum / length;
}
//возвращает минимальное значение из массива
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
//возвращает минимальное значение из массива
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
//выполняет циклический сдвиг массива на заданное число элементов лево
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
//выполняет циклический сдвиг массива на заданное число элементов право
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
 //выполняет сортировку массива в порядке возрастания
void SortVybor(int arr[], const int length)

{
	int min, poz, kol = 0;
	for (size_t i = 0; i < length; i++)
	{
		//записываеем в минимум первый элемент в неотсортированном участке массива
		min = arr[i];
		poz = i;
		for (size_t j = i + 1; j < length; j++)
		{
			//поиск минимума в неотсортированном участке
			if (arr[j] < min)
			{
				min = arr[j];
				poz = j;
			}
			/*kol++;//количество итераций*/
		}
		//обмен
		swap(arr[i], arr[poz]);
	}
}
void SortPyzyr(int arr[], const int length)
{
	bool key;
	int a = 0, k = 0;
	do
	{
		key = false;//обменов пока не было
		for (size_t i = 0; i < length - 1 - a; i++)//не проверяем те элементы, которые уже стоят на своих местах
		{
			//если следующий элемент меньше, чем текущий - меняем их местами
			if (arr[i + 1] < arr[i])
			{
				swap(arr[i], arr[i + 1]);
				key = true;//произошли обмены
			}
			k++;//количество обменов
		}
		a++;//считает количество полных проходов по массиву = количество элементов, которые стали на место
	} while (key == true);//пока происходят обмены
}
void UniqueRand(int arr[], const int length, int minrand, int maxrand)
{
	bool flag = true;

	for (int i = 0; i < length; )
	{
		flag = false;
		int new_znach = rand() % (maxrand - minrand) + minrand;//наполняем переменную случайным числом из заданного диапазона

		for (int j = 0; j < i; j++)//в цикле проверяем кажый элемент массива на совпадение с переменной 
		{
			if (arr[j] == new_znach)//если == то срабатывает замена
			{
				flag = true;
				break;
			}
		}
		if (flag == false)
		{
			arr[i] = new_znach;
			i++;//сдвиг по массиву только в случае добавления нового элемента в массив
		}
	}
}
void Search(int arr[], const int length) //находит в массиве повторяюшиеся значения, выводит их на экран,
////и выводит на экран количество повторений

{//находит в массиве повторяюшиеся значения, выводит их на экран,
////и выводит на экран количество повторений
	int maxcount = 0;//счетчик частовстречаемого элемента массива
	int max = arr[0];//допускаем что первый элемент наиболее часто встречаем
	//перебираем все элементы массива
	for (size_t i = 0; i < length; i++)
	{
		int count = 0;
		//перебираем все элементы от i до конца
		for (size_t j = i; j < length; j++)
			//если элемент i совпадает с одним из последующих (j), то увеличиваем число
			if ((int)arr[i] == (int)arr[j])
				count++;
		//если число больше ранее сохраненного - перезаписываем
		if (maxcount < count)
		{
			maxcount = count;//макс повтор число
			max = i;//макс число раз
		}
	}
	//если изначальное состояние не изменилось то повторяющихся элементов нет
	if (maxcount == 1)
	{
		cout << "Нет повторяющихся элементов" << "\n";
	}
	else
	{
		cout << "Символ  " << "[ " << arr[max] << " ]" << " повторяется " << maxcount << " раз " << "\n";
	}
}
