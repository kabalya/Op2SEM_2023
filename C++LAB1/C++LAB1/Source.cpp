#include <vector>
#include <iostream>
#include "Sourse.h"
using namespace std;
void CreateMatrix (int &k1,int&k2)
{
	vector < vector <int> > matrix(k1, vector <int>(k2));
	
	for (int i = 0; i < k1; i++)     // ����, ������� ��� �� �������
		for (int j = 0; j < k2; j++) // ����, ������� ��� �� ���������
		{
			cin >> matrix[i][j]; // ���������� ������� ��� ������� (� ������ ������ ����)
		}
}

/*void ChangeLinesinMatrix(vector<vector<int>>& matrix, int z, int d1, int k1, int k2)
{
	int m1;
	vector < vector <int> > matrix(k1, vector <int>(k2));
	for (int i = 0; i < 3; i++)
	{
		m1 = matrix[z][i];
		matrix[z][i] = matrix[d1][i];
		matrix[d1][i] = m1;
	}
}

//void ChangeLinesinMatrix(int k1, int k2, int z, int d1)*/
