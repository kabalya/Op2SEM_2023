#include "iostream"
#include "Math.h"
#include "Change.h"
#include "Reversed.h"
#include "Circle.h"
#include "Matrix.h"
#include "Sourse.h"
#include <vector>

using namespace std;
int main()
{
	// Task 3
	int a1 = 10;
	int b1 = 20;
	Change1(a1, b1);
	if (a1 > b1)
	{
		cout << a1 << endl;
	}
	else if (b1 > a1)
	{
		cout << b1 << endl;
	}
	else { cout << "SAME" << endl; }

	int a = 10;
	int b = 20;
	Change2(&a, &b);
	if (a > b)
	{ cout << a << endl; }
	else if (b > a)
	{cout << b << endl;}
	else { cout << "SAME" << endl; }
	// Task 8
	
	cout << " ///////////////////////////////////////////////////////////////////////////" << endl;
	double c = 3;
	double d=-1;
	Reversed1(c, d);
	cout <<c << endl;
	double c1 = 3;
	Reversed2(&c1,&d);
	cout << c1 << endl;



	// Task 11

	cout << " ///////////////////////////////////////////////////////////////////////////" << endl;
	int r1 = 11;
	int length1;
	cout << "Enter Length" << endl;
	cin >> length1;
	int r = 11;
	int length;
	
	Circle1(r1, length1);
	cout <<r1<< "cm"<<endl;
	cout << "Enter Length" << endl;
	cin >> length;
	Circle2(&r, &length);
	cout << r << "cm" << endl;



	// Task 16
	
	int k1, k2;       // Создание переменных отвечающих за размер вектора
	cout << "Size; size" << endl;
	cin >> k1 >> k2;
	

	cout << " ///////////////////////////////////////////////////////////////////////////" << endl;
	int z, d1;
	cout << "what you change?" << endl;
	cin >> z >> d1;
	cout <<  endl;
	Changing_the_term_in_the_matrix1(z, d1,k1,k2);
	cout << "#_-_#" << endl;
    Changing_the_term_in_the_matrix2(&z, &d1,&k1,&k2);

	
	
	

	
	return 0;

}
