//Dmitrieva_Olesya_Andreevna_SBD211
/*
#include<iostream>
using namespace std;

void FillRand(int arr[], const int n);
void Print(int arr[], const int n);
void Sort(int arr[], const int n);

void main()
{
	setlocale(LC_ALL, "");

	cout << "������ #1 [Arrays]                                                                                \n";
	cout << endl;
	cout << "� Solution Functions �������� ������ Arrays,                                                      \n";
	cout << "� � ���� ������� ����������� ��������� �������:                                                   \n";
	cout << endl;
	cout << "- FillRand(???);	- ��������� ������ ���������� �������                                          \n";
	cout << "- Print(???);		- ������� ������ �� �����                                                      \n";
	cout << "- Sum(???);		- ���������� ����� ��������� �������                                           \n";
	cout << "- Avg(???);		- ���������� �������-�������������� ��������� �������                          \n";
	cout << "- minValueIn(???);      - ���������� ����������� �������� �� �������                              \n";
	cout << "- maxValueIn(???);      - ���������� ������������ �������� �� �������                             \n";
	cout << "- Sort(???);		- ��������� ������                                                             \n";
	cout << "- shiftLeft(???);	- ��������� ����������� ����� ������� �� �������� ����� ��������� �����        \n";
	cout << "- shiftRight(???);	- ��������� ����������� ����� ������� �� �������� ����� ��������� ������       \n";
	cout << "- UniqueRand(???);	- ��������� ������ ����������� ���������� ������� � �������� ���������         \n";
	cout << "- Search(???);		- ������� � ������� ������������� ��������,                                    \n";
	cout << "                          ������� �� �� �����, � ������� �� ����� ���������� ����������           \n";
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
		//���������� ������� ���������� �������:
		for (int i = 0; i < n; i++)
		{
			arr[i] = rand();
		}
	}

	void Print(int arr[], const int n)
	{
		//����� ������� �� �����:
		for (int i = 0; i < n; i++)
		{
			cout << arr[i] << "\t";
		}
		cout << endl;
	}

	void Sort(int arr[], const int n)
	{
		//���������� �������:
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
*/