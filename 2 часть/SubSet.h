#pragma once

#include <vector>

using namespace std;

namespace Subset 
{
	class SubSet {
	private:
		vector<int> newSubSet;
	public:
		SubSet(vector<int> SubSet);

		void printSubset();

		SubSet* operator+(SubSet other); //����������� ���� �������� (operator+).

		bool operator==(SubSet other);//��������� (== � !=).


		bool operator!=(SubSet other);//��������� (== � !=).

		SubSet* operator+=(int number);//���������� ����� � ��������� (operator+=).


		SubSet* operator-=(int number); //������� ����� �� ���������(operator-=).


		


	};
}


