
#include<iostream>


using namespace std;

//шаблон для наполнения случайными символами
template<typename Mytype>
void FillRand(Mytype arr[], const int length, int minrand = 0, int maxrand = 100);

//шаблон вывода INT,DOUBLE,CHAR массива
template<typename Mytype>
void PrintAr(Mytype arr[], const int length);

// сумма INT и DOUBLE массива 
template<typename Mytype>
double Summ(Mytype arr[], const int length);
void Summ(char arr[], const int length);//прототип-перегрузка для массива типа CHAR

//среднеарифметическая INT и DOUBLE  массива
template<typename Mytype>
double SRSumm(Mytype arr[], const int length);
void SRSumm(char arr[], const int length);//прототип-перегрузка для массива типа CHAR

//возвращает минимальное значение из массива INT и DOUBLE
template<typename Mytype>
double minValueIn(Mytype arr[], const int length);
char minValueIn(char arr[], const int length);//прототип-перегрузка для массива типа CHAR


//возвращает максимальное значение из массива INT
template<typename Mytype>
double maxValueIn(Mytype arr[], const int length);
char maxValueIn(char arr[], const int length);//прототип-перегрузка для массива типа CHAR


template<typename Mytype>
void shiftLeft(Mytype arr[], const int length, int sdvig);//выполняет циклический сдвиг массива на заданное число элементов влево

template<typename Mytype>
void shiftRight(Mytype arr[], const int length, int sdvig);//выполняет циклический сдвиг массива на заданное число элементов право

template<typename Mytype>
void SortVybor(Mytype arr[], const int length);//выполняет сортировку массива в порядке возрастания выбором

template<typename Mytype>
void SortPyzyr(Mytype arr[], const int length);/*выполняет сортировку массива
//в порядке возрастания пузырьком */

template<typename Mytype>
void UniqueRand(Mytype arr[], const int length, int minrand = 0, int maxrand = 100);/*заполняет массив уникальными случайными
//числами в заданном диапазоне*/

template<typename Mytype>
void Search(Mytype arr[], const int length); /*находит в массиве повторяюшиеся значения, выводит их на экран,
//										  и выводит на экран количество повторений*/

#define delimetr "************************************************************************************"

//Тело программы
void main()
{
	setlocale(LC_ALL, "Rus");
	srand(time(NULL));


	/*int int_start, int_stop;
	cout << "Введите начало диапазона массива\n";
	cin >> int_start;
	cout << "\nВведите начало диапазона массива\n";
	cin >> int_stop;
	const int int_length = 10;
	int int_ar[int_length] = {};
	FillRand(int_ar, int_length, int_start, int_stop);
	PrintAr(int_ar, int_length);
	cout << endl;
	cout << "Сумма массива= " << Summ(int_ar, int_length);
	cout << endl;
	cout << "Среднеарифметическое INT массива= " << SRSumm(int_ar, int_length);
	cout << endl;
	cout << "MIN знач массива= " << minValueIn(int_ar, int_length);
	cout << endl;
	cout << "MAX знач массива= " << maxValueIn(int_ar, int_length);
	cout << endl;
	int sdvig_pravo = 0;
	int sdvig_levo = 0;
	cout << "Введите значение на сколько хотите сдвнуть массив вправо \n";
	cin >> sdvig_pravo;
	shiftRight(int_ar, int_length, sdvig_pravo);
	PrintAr(int_ar, int_length);
	cout << endl;
	cout << "Введите значение на сколько хотите сдвнуть массив влево \n";
	cin >> sdvig_levo;
	cout << endl;
	shiftLeft(int_ar, int_length, sdvig_levo);
	PrintAr(int_ar, int_length);
	cout << endl;

	Search(int_ar, int_length);
	cout << endl;
	cout <<"После сортировки" << endl;
	SortVybor(int_ar, int_length);
	PrintAr(int_ar, int_length);
	cout << endl;
	cout << "Введите начало диапазона масива для уникальных значений\n ";
	cin >> int_start;
	cout << "Введите  конец диапазона масива для уникальных значений\n ";
	cin >> int_stop;
	cout << "Наполнение массива уникальными значениями\n ";

	UniqueRand(int_ar, int_length, int_start, int_stop);
	PrintAr(int_ar, int_length);
	cout << endl;*/
	cout << delimetr << endl;
	/*
	const int doub_length = 10;
	double doub_ar[doub_length] = {};
	double doub_start, doub_stop;
	cout << "Введите начало диапазона массива\n";
	cin >> doub_start;
	cout << "\nВведите начало диапазона массива\n";
	cin >> doub_stop;
	FillRand(doub_ar, doub_length, doub_start, doub_stop);
	PrintAr(doub_ar, doub_length);
	cout << endl;
	cout << "Сумма DOUBLE массива= " << Summ(doub_ar, doub_length);
	cout << endl;
	cout << "Среднеарифметическое DOUBLE массива= " << SRSumm(doub_ar, doub_length);
	cout << endl;
	cout << "MIN знач массива= " << minValueIn(doub_ar, doub_length);
	cout << endl;
	cout << "MAX знач массива= " << maxValueIn(doub_ar, doub_length);
	cout << endl;
	int sdvig_doub_pravo = 0;
	int sdvig_doub_levo = 0;
	cout << "Введите значение на сколько хотите сдвнуть массив вправо \n";
	cin >> sdvig_doub_pravo;
	shiftRight(doub_ar, doub_length, sdvig_doub_pravo);
	PrintAr(doub_ar, doub_length);
	cout << endl;
	cout << "Введите значение на сколько хотите сдвнуть массив влево \n";
	cin >> sdvig_doub_levo;
	cout << endl;
	shiftLeft(doub_ar, doub_length, sdvig_doub_levo);
	PrintAr(doub_ar, doub_length);
	cout << endl;

	Search(doub_ar, doub_length);
	cout << endl;
	cout << "После сортировки" << endl;
	SortVybor(doub_ar, doub_length);
	PrintAr(doub_ar, doub_length);
	cout << endl;
	cout << "Введите начало диапазона масива для уникальных значений\n ";
	cin >> doub_start;
	cout << "Введите  конец диапазона масива для уникальных значений\n ";
	cin >> doub_stop;
	cout << "Наполнение массива уникальными значениями\n ";

	UniqueRand(doub_ar, doub_length, doub_start, doub_stop);
	PrintAr(doub_ar, doub_length);
	cout << endl;*/
	cout << delimetr << endl;

	const int char_length = 10;
	char char_ar[char_length] = {};
	char char_start, char_stop;
	cout << "Введите начало  массива(от A(a) - Z(z)\n ";
	cin >> char_start;
	cout << "Введите конец массива(от A(a) - Z(z)\n ";
	cin >> char_stop;
	FillRand(char_ar, char_length, char_start, char_stop);
	PrintAr(char_ar, char_length);
	cout << endl;
	cout << "Результат функции суммы массива типа CHAR равен " << " [ ";
	Summ(char_ar, char_length);
	cout << " ]\n ";
	SRSumm(char_ar, char_length);
	cout << "\nMIN знач массива= " << minValueIn(char_ar, char_length);
	cout << endl;
	cout << "MAX знач массива= " << maxValueIn(char_ar, char_length);
	cout << endl;
	int sdvig_char_pravo = 0;
	int sdvig_doub_levo = 0;
	cout << "Введите значение на сколько хотите сдвнуть массив вправо \n";
	cin >> sdvig_char_pravo;
	shiftRight(char_ar, char_length, sdvig_char_pravo);
	PrintAr(char_ar, char_length);
	cout << endl;
	cout << "Введите значение на сколько хотите сдвнуть массив влево \n";
	cin >> sdvig_doub_levo;
	cout << endl;
	shiftLeft(char_ar, char_length, sdvig_doub_levo);
	PrintAr(char_ar, char_length);
	cout << endl;

	Search(char_ar, char_length);
	cout << endl;
	cout << "После сортировки" << endl;
	SortVybor(char_ar, char_length);
	PrintAr(char_ar, char_length);
	cout << endl;
	cout << "Введите начало диапазона масива для уникальных значений\n ";
	cin >> char_start;
	cout << "Введите  конец диапазона масива для уникальных значений\n ";
	cin >> char_stop;
	cout << "Наполнение массива уникальными значениями\n ";

	UniqueRand(char_ar, char_length, char_start, char_stop);
	PrintAr(char_ar, char_length);
	cout << endl;



	cout << delimetr << endl;
}
////Реализация функции (Определение функции - Function definition)


//заполнение случайными INT и DOUBLE числами
template<typename Mytype>
void FillRand(Mytype arr[], const int length, int minrand, int maxrand)
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
		arr[i] = (minrand + rand() % (maxrand - minrand)) + (1 + rand() % 99 / 100.0);
	}

}
//заполнение случайными CHAR символами
void FillRand(char arr[], const int length, char minrand = 'A', char maxrand = 'Z')
{
	for (size_t i = 0; i < length; i++)
	{
		arr[i] = minrand + rand() % (maxrand - minrand + 1);
	}
}
//вывод функции на экран
template<typename Mytype>
void PrintAr(Mytype arr[], const int length)
{
	for (size_t i = 0; i < length; i++)
	{
		cout << arr[i] << "\t";
	}
}

//Реализация шаблона суммы массива типа INT или DOUBLE
template<typename Mytype>
double Summ(Mytype arr[], const int length)
{
	double sum = 0;
	for (size_t i = 0; i < length; i++)
	{
		sum += arr[i];
	}
	return sum;
}
//перегрузка для массива типа CHAR
void Summ(char arr[], const int length)
{
	string slovo;
	for (size_t i = 0; i < length; i++)
	{
		slovo += arr[i];
	}
	cout << slovo;

}

//Реализация шаблона средней суммы массива типа INT или DOUBLE
template<typename Mytype>
double SRSumm(Mytype arr[], const int length)
{
	double sum = 0;
	for (size_t i = 0; i < length; i++)
	{
		sum += arr[i];
	}
	return sum / length;
}
//перегрузка для массива типа CHAR
void SRSumm(char arr[], const int length)
{
	cout << "Для данного типа массива функция СРЕДНЕАРИФМЕТИЧСКОЕ не подходит ";
}
//возвращает минимальное значение из массива

template<typename Mytype>
double minValueIn(Mytype arr[], const int length)
{
	double min = arr[0];
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
char minValueIn(char arr[], const int length)
{
	char min = arr[0];
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
template<typename Mytype>
double maxValueIn(Mytype arr[], const int length)
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
char maxValueIn(char arr[], const int length)
{
	char max = arr[0];
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
template<typename Mytype>
void shiftLeft(Mytype arr[], const int length, int sdvig)
{

	for (size_t j = 0; j < sdvig; j++)
	{
		Mytype buffer = arr[0];
		for (size_t i = 0; i < length; i++)
		{
			arr[i] = arr[i + 1];
		}
		arr[length - 1] = buffer;
	}

}
//выполняет циклический сдвиг массива на заданное число элементов право
template<typename Mytype>
void shiftRight(Mytype arr[], const int length, int sdvig)
{
	sdvig = length - sdvig;
	for (size_t j = 0; j < sdvig; j++)
	{
		Mytype buffer = arr[0];
		for (size_t i = 0; i < length; i++)
		{
			arr[i] = arr[i + 1];
		}
		arr[length - 1] = buffer;
	}
}
//выполняет сортировку массива в порядке возрастания
template<typename Mytype>
void SortVybor(Mytype arr[], const int length)

{
	int min, poz, kol = 0;
	for (size_t i = 0; i < length; i++)
	{
		//записываеем в минимум первый элемент в неотсортированном участке массива
		min = arr[i];//назначаем минимум
		poz = i;//позиция минимума 
		for (size_t j = i + 1; j < length; j++)// найти минимум в неотсортированном участке 
		{									   // во вложенном цикле это i+1

			if (arr[j] < min)//поиск минимума в неотсортированном участке
			{//если элемент массива меньше минимума то 
				min = arr[j];//элемент массива
				poz = j;//позиция минимума в неотсортированном участке
			}
			kol++;//количество итераций
		}
		// после прохода вложенного цикла происходит обмен
		swap(arr[i], arr[poz]);
	}
}
template<typename Mytype>
void SortPyzyr(Mytype arr[], const int length)
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
template<typename Mytype>
void UniqueRand(Mytype arr[], const int length, int minrand, int maxrand)
{
	if (maxrand - minrand <=  0)
	{
		cout << "Для данного диапазона функция не работает.Необходимо увеличиить диапазон";
	}
	else 
	{
		if (minrand > maxrand)
		{
			swap(minrand, maxrand);
		}
		if (minrand == maxrand)
		{
			maxrand++;
		}
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
}
template<typename Mytype>
void Search(Mytype arr[], const int length)

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
		{
			//если элемент i совпадает с одним из последующих (j), то увеличиваем число
			if ((int)arr[i] == (int)arr[j])
				count++;
		}
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
