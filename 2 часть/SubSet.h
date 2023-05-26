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

		SubSet* operator+(SubSet other); //Объединение двух множеств (operator+).

		bool operator==(SubSet other);//Сравнение (== и !=).


		bool operator!=(SubSet other);//Сравнение (== и !=).

		SubSet* operator+=(int number);//Добавление числа в множество (operator+=).


		SubSet* operator-=(int number); //Изъятие числа из множества(operator-=).


		


	};
}


