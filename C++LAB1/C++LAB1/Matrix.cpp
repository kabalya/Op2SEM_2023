#include "Matrix.h"
#include "iostream"
#include <vector>
using namespace std;
void Changing_the_term_in_the_matrix1(int &z, int &d1,int &k1,int &k2)
{
	int m1;
	/*
	int m[3][3]
	{
		{ 1, 2, 3 },
		{ 4, 5, 6 },
		{ 7, 8, 9 }
	};
	for (int i=0;i<3;i++)
	{
		m1 = m[z][i];
		m[z][i] = m[d1][i];
		m[d1][i] = m1;
	}
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++)
			cout << m[i][j] << ' ';
		cout << endl;
	}
	*/
	vector < vector <int> > matrix(k1, vector <int>(k2));

	for (int i = 0; i < k1; i++)     // Цикл, который идёт по строкам
		for (int j = 0; j < k2; j++) // Цикл, который идёт по элементам
		{
			cin >> matrix[i][j]; // Заполнение вектора или массива (в данном случае ввод)
		}
	for (int i = 0; i < 3; i++)
	{
		m1 = matrix[z][i];
		matrix[z][i] = matrix[d1][i];
		matrix[d1][i] = m1;
	}
	for (int i = 0; i < k1; i++) // Цикл, который идёт по строкам
	{
		for (int j = 0; j < k2; j++) // Цикл, который идёт по элементам
			cout << matrix[i][j] << ' '; // Вывод элементов i строки вектора
		cout << endl;
	}

}

void Changing_the_term_in_the_matrix2(int* pz,int *pd1,int *pk1,int *pk2)
{
	int m1;
	/*int m[3][3]
	{
		{ 1, 2, 3 },
		{ 4, 5, 6 },
		{ 7, 8, 9 }
	};
	for (int i = 0; i < 3; i++)
	{
		m1 = m[*pz][i];
		m[*pz][i] = m[*pd1][i];
		m[*pd1][i] = m1;
	}
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++)
			cout << m[i][j] << ' ';
		cout << endl;
	}*/
	vector < vector <int> > matrix(*pk1, vector <int>(*pk2));
	for (int i = 0; i < *pk1; i++)     // Цикл, который идёт по строкам
		for (int j = 0; j < *pk2; j++) // Цикл, который идёт по элементам
		{
			cin >> matrix[i][j]; // Заполнение вектора или массива (в данном случае ввод)
		}

	for (int i = 0; i < 3; i++)
	{
		m1 = matrix[*pz][i];
		matrix[*pz][i] = matrix[*pd1][i];
		matrix[*pd1][i] = m1;
	}
	for (int i = 0; i < *pk1; i++) // Цикл, который идёт по строкам
	{
		for (int j = 0; j < *pk2; j++) // Цикл, который идёт по элементам
			cout << matrix[i][j] << ' '; // Вывод элементов i строки вектора
		cout << endl;
	}
	
}


