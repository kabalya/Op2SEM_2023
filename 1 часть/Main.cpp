#include <iostream>
#include "Square.h"
using namespace std;


int main() {
    setlocale(LC_ALL, "Russian");
    double x, y, length, angle_degrees;
    cout << "Введите координаты левой верхней точки квадрата(Х,У): ";
    cin >> x >> y;
    cout << "Введите длину стороны квадрата: ";
    cin >> length;
    cout << "Введите угол поворота квадрата в градусах (45/90/180/360): ";
    cin >> angle_degrees;

    double x2, y2, length2, angle_degrees2;
    cout << "Введите координаты левой верхней точки квадрата(Х,У): ";
    cin >> x2 >> y2;
    cout << "Введите длину стороны квадрата: ";
    cin >> length2;
    cout << "Введите угол поворота квадрата в градусах (45/90/180/360): ";
    cin >> angle_degrees2;
    Square s1(x, y, length, angle_degrees);
    Square s2(x2, y2, length2, angle_degrees2);
   

    cout << "Square 1:" << endl;
    s1.print();
    cout << endl;

    cout << "Square 2:" << endl;
    s2.print();
    cout << endl;

    if (s1 == s2)
        cout << "Area of Square 1 == area of Square 2" << endl;
    else
        cout << "Area of Square 1 != area of Square 2" << endl;

    Square s3 = s2 * 2;
    cout << "Square 3 (Square 2 * 2):" << endl;
    s3.print();
    cout << endl;

    Square s4 = s1 + s2;
    cout << "Square 4 (Square 1 + Square 2):" << endl;
    s4.print();
    cout << endl;






    return 0;
}