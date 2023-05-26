#include<iostream>

#include "Subset.h"

using namespace Subset;

int main()
{

   setlocale(LC_ALL, "Russian");

    SubSet First({ 1, 2, 3,5 });

    SubSet Second({ 6, 2, 4, 6, 8, 9 });

    First.operator+(Second)->printSubset();

    Second.operator+=(6)->printSubset();
    cout << "\n";
    First.operator==(Second);
    cout << "\n";
    First.operator!=(Second);

    Second.operator-=(6)->operator-=(7)->printSubset();


    return 0;
}
