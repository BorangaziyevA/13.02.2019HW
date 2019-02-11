#include<iostream>
#include<iomanip>
#include<Windows.h>
#include<locale.h>

using namespace std;

int BiggerThan(double A[], int n, double X)
{
	int count = 0;
	for (size_t i = 0; i < n; i++)
	{
		if (A[i] > X)
		{
			count++;
		}
	}
	return count;
}
int BiggerThan(int A[],int n, int X)
{
	int count = 0;
	for (size_t i = 0; i < n; i++)
	{
		if (A[i] > X)
		{
			count++;
		}
	}
	return count;
}

void FillArray(double A[], int n)
{
	for (size_t i = 0; i < n; i++)
	{
		A[i] = 0 + rand() % 100;
	}
}
void FillArray(int A[], int n)
{
	for (size_t i = 0; i < n; i++)
	{
		A[i] = 0 + rand() % 100;
	}
}

void PrintArray(double A[], int n)
{
	for (size_t i = 0; i < n; i++)
	{
		cout << A[i] << " ";
	}
	cout << endl;
}
void PrintArray(int A[], int n)
{
	for (size_t i = 0; i < n; i++)
	{
		cout << A[i] << " ";
	}
	cout << endl;
}

void ReverseArray(double A[], int n)
{
	int  b = 9;
	double a;
	for (size_t i = 0; i < n / 2; i++)
	{
		a = A[i];
		A[i] = A[b];
		A[b] = a;
		b--;
	}
}
void ReverseArray(int A[], int n)
{
	int a, b = 9;
	for (size_t i = 0; i < n/2; i++)
	{
		a = A[i];
		A[i] = A[b];
		A[b] = a;
		b--;
	}
}

int main()
{
	setlocale(LC_ALL, "");
	srand(time(NULL));

	int flag, task;

	do
	{
		cout << "Введите номер задания:";
		cin >> task;
		const int n = 10;

		switch (task)
		{
		case 1:
	/*		double A[n] = {3.14};
			int x;
			cin >> x;
			FillArray(A, 10);
			PrintArray(A, 10);
			cout << BiggerThan(A, 10, x) << endl;*/

		case 2:
			double B[n] = { 3.14 };
			PrintArray(B, 10);
			ReverseArray(B, 10);
			PrintArray(B, 10);

		}

		cout << "Хотите продолжить?1/0";
		cin >> flag;

	} while (flag == 1);
}