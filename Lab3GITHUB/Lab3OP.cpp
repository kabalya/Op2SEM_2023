#include <iostream>
#include <cmath>
#include "Square.h"
#include <algorithm>
using namespace std;




int main() 
{
    setlocale(LC_ALL, "Russian");
    // Ввод координат левой верхней точки квадрата, длины стороны и угла поворота
    double x, y, length, angle_degrees;
    cout << "Введите координаты левой верхней точки квадрата(Х,У): ";
    cin >> x >> y;
    cout << "Введите длину стороны квадрата: ";
    cin >> length;
    cout << "Введите угол поворота квадрата в градусах (45/90/180/360): ";
    cin >> angle_degrees;
    if (angle_degrees != 45 && angle_degrees != 90 && angle_degrees != 180 && angle_degrees != 360)
    {
        cout << "Error!";
    }
    else{};
        cout << endl;

    // Создание объекта квадрата
    Square square(Point{ x, y }, length, angle_degrees);

    // Вывод точек квадрата и его площади
    cout << "Квадрат с координатами (" << square.getPoint().x << ", " << square.getPoint().y << "), длиной стороны "
        << square.getLength() 
        << " и углом поворота "
        << square.getAngle() 
        << " градусов." << endl;
    cout << "Площадь квадрата: " << square.getSquare() << endl;

    cout << "Точка 2 (Северо-Восток) (" << square.getPoint().x + square.getLength() << ", " << square.getPoint().y << ");"<<endl;
    cout << "Точка 3 (Юго-Запад) (" << square.getPoint().x  << ", " << square.getPoint().y - square.getLength() << ");" << endl;
    cout << "Точка 4 (Юго-Восток) (" << square.getPoint().x + square.getLength() << ", " << square.getPoint().y - square.getLength() << ");" << endl << endl;

   
    //X
    int x1 = square.getPoint().x;
    int x2 = square.getPoint().x + square.getLength();
    int x3 = square.getPoint().x;
    int x4 = square.getPoint().x + square.getLength();
    //Y
    int y1 = square.getPoint().y;
    int y2 = square.getPoint().x;
    int y3 = square.getPoint().x - square.getLength();
    int y4 = square.getPoint().x - square.getLength();
    //Поворот квадрата
    if (angle_degrees == 45)
    {
        x1 = x1 * 1.5; y1 = 0;
        x2 = 0; y2 = y2 * 1.5;
        x3 = 0; y3 = y3 * 1.5;
        x4 = x4 * 1.5; y = 0;
    }
    else if (angle_degrees == 90)
    {
        int xx, yy;
        xx = x1; yy = y1;
        x1 = x3; y1 = y3;
        x3 = x4; y3 = y4;
        x4 = x2; y4 = y2;
        x2 = xx; y2 = yy;

    }
    else if (angle_degrees == 180)
    {
        int xx1, yy1;
        int xx2, yy2;

        xx1 = x1; yy1 = y1;
        xx2 = x2; yy2 = y2;
        x1 = x3; y1 = y3;
        x2 = x4; y2 = y4;
        x3 = xx1; y3 = yy1;
        x4 = xx2; y4 = yy2;
    }
    else { cout << "Nothing changed..."<<endl; }
    
    //Вывод Новых координат точек
    cout << "Точка 1 (Северо-Запад) (" << x1 << ", " << y1 << ");" << endl;
    cout << "Точка 2 (Северо-Восток) (" << x2 << ", " << y2 << ");" << endl;
    cout << "Точка 3 (Юго-Запад) (" << x3 << ", " << y3 << ");" << endl;
    cout << "Точка 4 (Юго-Восток) (" << x4 << ", " << y4 << ");" << endl;
   
//Подзадача 1
    int square_input;
    cout << "Введите площадь вашего квадрата 2.0"<<endl;
        cin >> square_input;
        if (square.getSquare()==square_input)
        {
            cout << "They are Same!" << endl;
        }
        else if(square.getSquare()< square_input)
        {
            cout << "Площадь первого первого квадрата меньше чем площадь второго квадрата"<<endl;
        }
        else if (square.getSquare() > square_input)
        {
            cout << "Площадь первого первого квадрата ,больше чем площадь второго квадрата" << endl;
        }
        else {
            cout << "Либо чтото пошло не так...либо вы изобрели новую математику "<<endl;
        }
        //Умножение стороны квадрата
        //Подзадача 2
        cout << "В какое число желаете увеличить длинну стороны квадрата,сударь?";
            int number;
            cin >> number;
            cout << "Сторона квадрата равна " << square.getLength() * number << endl;
            
            cout << "Квадрат с координатами (" << square.getPoint().x << ", " << square.getPoint().y << "), длиной стороны "
                << square.getLength() * number
                << " и углом поворота "
                << square.getAngle()
                << " градусов." << endl;
            cout << "Площадь квадрата: " << square.getSquare()*number*number << endl;

            cout << "Точка 2 (Северо-Восток) (" << square.getPoint().x + square.getLength()*number << ", " << square.getPoint().y << ");" << endl;
            cout << "Точка 3 (Юго-Запад) (" << square.getPoint().x << ", " << square.getPoint().y - square.getLength()*number << ");" << endl;
            cout << "Точка 4 (Юго-Восток) (" << square.getPoint().x + square.getLength()*number << ", " << square.getPoint().y - square.getLength()*number << ");" << endl << endl;
           

            //Подзадача 3 Про вектор
            cout << "На какой (Х.У) вы желаете подвинуть квадрат?";
            int xxxx; int  yyyy;
            cin >> xxxx;
            cin>>yyyy;
            cout << "Квадрат с координатами (" << square.getPoint().x+xxxx << ", " << square.getPoint().y+yyyy << "), длиной стороны "
                << square.getLength()
                << " и углом поворота "
                << square.getAngle()
                << " градусов." << endl;
            cout << "Площадь квадрата: " << square.getSquare() << endl;

            cout << "Точка 2 (Северо-Восток) (" << square.getPoint().x+xxxx + square.getLength() << ", " << square.getPoint().y+yyyy << ");" << endl;
            cout << "Точка 3 (Юго-Запад) (" << square.getPoint().x+xxxx << ", " << square.getPoint().y +yyyy - square.getLength() << ");" << endl;
            cout << "Точка 4 (Юго-Восток) (" << square.getPoint().x+xxxx + square.getLength() << ", " << square.getPoint().y+yyyy - square.getLength() << ");" << endl << endl;



            //**************************************************************

            char arr1[] = { '1', '2', '3', '4', '5','6', '7','8', '9', '0' };

            char arr2[] = { 'Z', 'A','K', 'O', 'N'};

            char arr3[15];
            //Подзадача 1

            for (int i = 0; i < 10; i++) {
                arr3[i] = arr1[i];
            }

            for (int i = 10; i < 16; i++) {
                arr3[i] = arr2[i- sizeof(arr1)];
            }

            for (int i = 0; i < 15; i++) {
                cout << arr3[i] << ' ';
            }
            cout << endl;
            //Подзадача 2
            if (sizeof(arr1)!=sizeof(arr2))
            {
                cout << "Они по определению не могут быть равны так как их размеры различны!";
            }
            else {
                sort(arr1, arr1 + 16);
                sort(arr2, arr2 + 16);

                for (int i = 0; i < 16; ++i)
                {
                    if (arr1[i] != arr2[i])
                    {
                        cout << "False";
                    }
                    else { cout << "True"; }
                }

            }

            //Добавление елемента
            char arr4[20];
            
            
            char arr5[sizeof(arr4)+5];
            for (int i = 0; i < sizeof(arr4); i++)
            {
                cin >> arr4[i];
            }

            for (int i = 0; i < sizeof(arr3); i++) {
                arr5[i] = arr3[i];
            }
            
            for (int i = sizeof(arr3); i < sizeof(arr4); i++) {
                arr5[i] = arr4[i - sizeof(arr3)];
            }

            for (int i = 0; i < sizeof(arr5); i++) {
                cout << arr5[i] << ' ';
            }
            cout << endl;
            //Удалить из массива
            cout << "Введите номер елемента который нужно удалить";
            int n = 35;
            int k;
            cin >> k;
                for (int i = k; i < n; ++i)
            {
                arr5[i] = arr5[i + 1];
            }
            for (int i = 0; i < sizeof(arr5)-1; ++i)
            {
                cout<<arr5[i];
            }


}
           


                



        





       
