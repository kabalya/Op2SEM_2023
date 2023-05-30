#include "Section.h"
#include "cmath"
namespace Figures {
    Section::Section(int x1, int y1, int x2, int y2,int mas)
    {
        this->_position.x = (x1+x2)/2;//середина отрезка по Х 
        this->_position.y = (y1+y2)/2;//и середина по У
        this->mas = mas;
        this->x1 = x1;
        this->x2 = x2;
        this->y1 = y1;
        this->y2 = y2;
    }

    double Section::square()
    {
        return 0;
    }

    double Section::perimeter() {
        double differenceX = Section::x1 - Section::x2;
        double differenceY = Section::y1 - Section::y2;

        return sqrt(( pow(differenceX,2) + pow(differenceY, 2))) ;
    }

    double Section::mass() {
        //return this->_position.x +  this->_position.y  ;
        //return mas;
        return 0;
    }

    Figures::CVector2d Section::position() {
        return _position;
       
    }
    unsigned int Section::size() {
        return sizeof(*this);
    }

    bool Section::operator==(IPhysObject& ob) {
        return mass() == ob.mass();
    }

    bool Section::operator<(IPhysObject& ob) {
       // return false;
        return mass() < ob.mass();
    }

    void Section::draw() {
        std::cout << "Now here is section of line \n";
        std::cout << "Square: " << square() << "\n";
        std::cout << "Perimeter: " << perimeter() << "\n";
        std::cout << "Center: " << position().x << " " << position().y << "\n";
        std::cout << "Size: " << size() << "\n";
        std::cout << "Mass: " << mass() << "\n";
    }
    void Section::startInfo() {
        std::cout << "Enter x1, y1, x2, y2: ";
        std::cin >> x1 >> y1 >> x2 >> y2;
        std::cout << "Enter mass: ";
        std::cin >> mas;
    }
} // Figures
