﻿//Dmitrieva_Olesya_Andreevna_SBD211

#include<iostream>
using namespace std;

const int ROWS = 5;	//Количесво строк
const int COLS = 8;	//Количество элементов строки (столбцов)

void FillRand(int arr[], const int n, int minRand = 0, int maxRand = 100);
void FillRand(double arr[], const int n, int minRand = 0, int maxRand = 100);
void FillRand(int arr[ROWS][COLS], const int ROWS, const int COLS, int minRand = 0, int maxRand = 100);
void FillRand(double arr[ROWS][COLS], const int ROWS, const int COLS, int minRand = 0, int maxRand = 100);

void Print(int arr[], const int n);
void Print(double arr[], const int n);
void Print(int arr[ROWS][COLS], const int ROWS, const int COLS);
void Print(double arr[ROWS][COLS], const int ROWS, const int COLS);

int Sum(int arr[], const int n);
double Sum(double arr[], const int n);

double Avg(int arr[], const int n);
double Avg(double arr[], const int n);

int minValueIn(int arr[], const int n);
double minValueIn(double arr[], const int n);

int maxValueIn(int arr[], const int n);
double maxValueIn(double arr[], const int n);

void Sort(int arr[], const int n);
void Sort(double arr[], const int n);

void UniqueRand(int arr[], const int n);

void main()
{
	setlocale(LC_ALL, "");

	cout << "Задача #1 [Arrays]                                                                                \n";
	cout << endl;
	cout << "В Solution Functions добавить проект Arrays,                                                      \n";
	cout << "и в этом проекте реализовать следующие функции:                                                   \n";
	cout << endl; 
	cout << "- FillRand();	   - заполняет массив случайными числами                                           \n";
	cout << "- Print();	   - выводит массив на экран                                                           \n";
	cout << "- Sum();	   - возвращает сумму элементов массива                                                \n";
	cout << "- Avg();	   - возвращает среднее-арифметическое элементов массива                               \n";
	cout << "- minValueIn();    - возвращает минимальное значение из массива                                   \n";
	cout << "- maxValueIn();    - возвращает максимальное значение из массива                                  \n";
	cout << "- Sort();	   - сортирует массив                                                                  \n";
	cout << "- shiftLeft();	   - выполняет циклический сдвиг массива на заданное число элемментов влево        \n";
	cout << "- shiftRight();    - выполняет циклический сдвиг массива на заданное число элемментов вправо      \n";
	cout << "- UniqueRand();    - заполняет массив уникальными случайными числами в заданном диапазоне         \n";
	cout << "- Search();	   - находит в массиве повторяюшиеся значения,                                     \n";
	cout << "                     выводит их на экран, и выводит на экран количество повторений                \n";
	cout << "------------------------------------------------------------------------------------------------  \n";

	cout << endl;
	const int n = 10; int arr[n]; int minRand = 200, maxRand = 300;
	UniqueRand(arr, n); Print(arr, n);
	cout << endl;
	cout << "Сумма элементов массива: " << Sum(arr, n) << endl;
	cout << "Среднее-арифметическое элементов массива: " << Avg(arr, n) << endl;
	cout << "Минимальное значение в массиве: " << minValueIn(arr, n) << endl;
	cout << "Максимальное значение в массиве: " << maxValueIn(arr, n) << endl;
	Sort(arr, n); 	cout << endl;
	Print(arr, n);	cout << endl;

	const int SIZE = 8;
	double brr[SIZE];

	/*cout << "Введите минимальное и максимальное случайное число: "; cin >> minRand >> maxRand;
	if (minRand >= maxRand)
	{
		int buffer = minRand;
		minRand = maxRand;
		maxRand = buffer;
	}*/

	FillRand(brr, SIZE, minRand, maxRand); Print(brr, SIZE);
	cout << endl;
	cout << "Сумма элементов массива: " << Sum(brr, SIZE) << endl;
	cout << "Среднее-арифметическое элементов массива: " << Avg(brr, SIZE) << endl;
	cout << "Минимальное значение в массиве: " << minValueIn(brr, SIZE) << endl;
	cout << "Максимальное значение в массиве: " << maxValueIn(brr, SIZE) << endl;
	cout << endl;
	Sort(brr, SIZE); Print(brr, SIZE);

	int i_arr_2[ROWS][COLS];		//i_arr_2 int array 2D
	FillRand(i_arr_2, ROWS, COLS);  cout << endl;
	Print(i_arr_2, ROWS, COLS);     cout << endl;


	double d_arr_2[ROWS][COLS] =
	{
		{2.5, 3.14, 4.2},
		{7.8, 5.1, 2.7},
		{1.1, 2.3, 4.7}
	};
	FillRand(d_arr_2, ROWS, COLS);
	Print(d_arr_2, ROWS, COLS);
}

void FillRand(int arr[], const int n, int minRand, int maxRand)
{
	//Заполнение массива случайными числами:
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % (maxRand - minRand) + minRand;
	}
}

void FillRand(double arr[], const int n, int minRand, int maxRand)
{
	//Заполнение массива случайными числами:
	minRand *= 100; maxRand *= 100;
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % (maxRand - minRand) + minRand;
		arr[i] /= 100;
	}
}

void FillRand(int arr[ROWS][COLS], const int ROWS, const int COLS, int minRand, int maxRand)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			arr[i][j] = rand() % (maxRand - minRand) + minRand;
		}
	}
}

void FillRand(double arr[ROWS][COLS], const int ROWS, const int COLS, int minRand, int maxRand)
{
	minRand *= 100; maxRand *= 100;
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			arr[i][j] = double(rand() % (maxRand - minRand) + minRand) / 100;
		}
	}
}

void Print(int arr[], const int n)
{
	//Вывод массива на экран:
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
}

void Print(double arr[], const int n)
{
	//Вывод массива на экран:
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
}

void Print(int arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			cout << arr[i][j] << "\t";
		}
		cout << endl;
	}
}

void Print(double arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			cout << arr[i][j] << "\t";
		}
		cout << endl;
	}
}

void Sort(int arr[], const int n)
{
	//Сортировка массива:
	for (int i = 0; i < n; i++)	        //Счетчик 'i' выбирает элемент, в который нкжно поместить минимальное значение
	{
		for (int j = i + 1; j < n; j++)	//Счетчик 'j' перебирает элементы в поисках минимального значения.
		{                               //Перебирается только правая часть массива относительно выбранного элемента.
			if (arr[j] < arr[i])
			{
				int buffer = arr[i];
				arr[i] = arr[j];
				arr[j] = buffer;
			}
		}
	}
}
void Sort(double arr[], const int n)
{
	//Сортировка массива:
	for (int i = 0; i < n; i++)	        //Счетчик 'i' выбирает элемент, в который нкжно поместить минимальное значение
	{
		for (int j = i + 1; j < n; j++)	//Счетчик 'j' перебирает элементы в поисках минимального значения.
		{                               //Перебирается только правая часть массива относительно выбранного элемента.
			if (arr[j] < arr[i])
			{
				double buffer = arr[i];
				arr[i] = arr[j];
				arr[j] = buffer;
			}
		}
	}
}

int Sum(int arr[], const int n)
{
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += arr[i];
	}
	return sum;
}

double Sum(double arr[], const int n)
{
	double sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += arr[i];
	}
	return sum;
}

double Avg(int arr[], const int n)
{
	return (double)Sum(arr, n) / n;
}

double Avg(double arr[], const int n)
{
	return Sum(arr, n) / n;
}

int minValueIn(int arr[], const int n)
{
	int min = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] < min)min = arr[i];
	}
	return min;
}

double minValueIn(double arr[], const int n)
{
	double min = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] < min)min = arr[i];
	}
	return min;
}

int maxValueIn(int arr[], const int n)
{
	int max = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] > max)max = arr[i];
	}
	return max;
}

double maxValueIn(double arr[], const int n)
{
	double max = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] > max)max = arr[i];
	}
	return max;
}

void UniqueRand(int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		bool unique;	     //Флаг уникальности
		do
		{
			arr[i] = rand() % n;
			unique = true;	//Предполагаем что случайное число уникально, но это нужно проверить:
			for (int j = 0; j < i; j++)
			{
				if (arr[i] == arr[j])
				{
					unique = false;
					break;	//Ключевое слово break прерывает текущую итерацию, и все последующие.
				}
			}
		} while (!unique);
	}
}