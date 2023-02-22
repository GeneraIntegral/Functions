//Dmitrieva_Olesya_Andreevna_SBD211

#include<iostream>
using namespace std;

void FillRand(int arr[], const int n);
void Print(int arr[], const int n);
void Sort(int arr[], const int n);

void main()
{
	setlocale(LC_ALL, "");

	cout << "Задача #1 [Arrays]                                                                                \n";
	cout << endl;
	cout << "В Solution Functions добавить проект Arrays,                                                      \n";
	cout << "и в этом проекте реализовать следующие функции:                                                   \n";
	cout << endl;
	cout << "- FillRand(???);	- заполняет массив случайными числами                                          \n";
	cout << "- Print(???);		- выводит массив на экран                                                      \n";
	cout << "- Sum(???);		- возвращает сумму элементов массива                                           \n";
	cout << "- Avg(???);		- возвращает среднее-арифметическое элементов массива                          \n";
	cout << "- minValueIn(???);      - возвращает минимальное значение из массива                              \n";
	cout << "- maxValueIn(???);      - возвращает максимальное значение из массива                             \n";
	cout << "- Sort(???);		- сортирует массив                                                             \n";
	cout << "- shiftLeft(???);	- выполняет циклический сдвиг массива на заданное число элемменто влево        \n";
	cout << "- shiftRight(???);	- выполняет циклический сдвиг массива на заданное число элемменто вправо       \n";
	cout << "- UniqueRand(???);	- заполняет массив уникальными случайными числами в заданном диапазоне         \n";
	cout << "- Search(???);		- находит в массиве повторяюшиеся значения,                                    \n";
	cout << "                          выводит их на экран, и выводит на экран количество повторений           \n";
	cout << "------------------------------------------------------------------------------------------------  \n";

	const int n = 5;
	int arr[n];

	FillRand(arr, n);
	Print(arr, n);
	Sort(arr, n);
	Print(arr, n);

	const int SIZE = 8;
	int brr[SIZE];

	FillRand(brr, SIZE);
	Print(brr, SIZE);
	Sort(brr, SIZE);
	Print(brr, SIZE);

	void FillRand(int arr[], const int n)
	{
		//Заполнение массива случайными числами:
		for (int i = 0; i < n; i++)
		{
			arr[i] = rand();
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

	void Sort(int arr[], const int n)
	{
		//Сортировка массива:
		for (int i = 0; i < n; i++)
		{
			for (int j = i + 1; j < n; j++)
			{
				if (arr[j] < arr[i])
				{
					int buffer = arr[i];
					arr[i] = arr[j];
					arr[j] = buffer;
				}
			}
		}
	}
}
