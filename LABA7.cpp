#include <iostream>
#include <algorithm>
#include "CircleBuff.h"
using namespace std;

int main()
{
	//setlocale(LC_ALL, "RU");
	CircleBuffer<int> buf(4);
	int n, p;
	cout << "Added Numbers" << endl;
	buf.pushBack(1);
	buf.pushBack(2);
	buf.pushBack(3);
	buf.pushBack(4);
	result(buf);
	cout << "Pop Numbers" << endl;
	buf.popFront();
	buf.popBack();
	result(buf);
	cout << "Add Number(?) into Position(?)" << endl;
	cin >> n >> p;
	buf.insert(p, n);
	result(buf);
	cout << "Delete number with index (?)" << endl;
	cin >> n;
	buf.remove(n);
	result(buf);
	cout << "Lets make Capasiti= 5 and add nembers 100, 26,40 to the end" << endl;
	buf.resize(5);
	buf.pushBack(100);
	buf.pushBack(26);
	buf.pushBack(40);
	result(buf);
	cout << "sort" << endl;
	cout << "before: " << endl;
	result(buf);
	std::sort(buf.begin(), buf.end(), [](auto first, auto second) -> bool {return	first > second; });

	cout << "after" << endl;
	result(buf);
	return 0;
}
