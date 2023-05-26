#include<iostream>
#include<algorithm>
#include <array>
#include "SubSet.h"
#include "Massive.cpp"
using namespace Subset;

int main() 
{

    setlocale(LC_ALL, "Russian");

    SubSet First({ 5, 3, 4 });

    SubSet Second({ 9, 0, 5, 7, 4, 3 });

    First.operator+(Second)->printSubset();
    
    Second.operator+=(6)->printSubset();
    First.operator==(Second);
    cout <<"\n";
    Second.operator-=(6)->operator-=(7)->printSubset();
    
   

}