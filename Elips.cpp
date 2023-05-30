#include "Elips.h"
#include "cmath"
#define Pi  3.14159265359;

namespace Figures {
    Elips::Elips(int littleHalfpAxis, int bigHalfAxis, int mas,int x,int y)
    {

        this->_position.x = x;
        this->_position.y = y;
        this->littleHalfpAxis = littleHalfpAxis;
        this->bigHalfAxis = bigHalfAxis;
        this->mas = mas;
    }

    double Elips::square() {
        return Elips::littleHalfpAxis * Elips::bigHalfAxis * Pi;
    }

    double Elips::perimeter() {
        return  (Elips::littleHalfpAxis * Elips::bigHalfAxis * 3.14 + (Elips::littleHalfpAxis - Elips::bigHalfAxis))/(Elips::littleHalfpAxis + Elips::bigHalfAxis);
    }

    double Elips::mass() {

       // return this->_position.x + this->length / 2 + this->_position.y + this->height / 2;
        return mas;
    }
    unsigned int Elips::size() {
       return sizeof(*this);
    }

    Figures::CVector2d Elips::position() {
        return _position;
    }

    bool Elips::operator==(IPhysObject& ob) {
        return this->mass() == ob.mass();
    }

    bool Elips::operator<(IPhysObject& ob) {
        return this->mass() < ob.mass();
    }

    void Elips::draw() {
        std::cout << "Here is Elips: \n";
        std::cout << "Square: " << square() << "\n";
        std::cout << "Perimeter: " << perimeter() << "\n";
        std::cout << "Center: " << position().x << " " << position().y << "\n";
        std::cout << "Size: " << size() << "\n";
        std::cout << "Mass: " << mass() << "\n";
    }
    void Elips::startInfo() {
        std::cout << "Enter Big Axis,Small Axis,X and Y: ";
        std::cin >> littleHalfpAxis >> bigHalfAxis>>x>>y ;
        std::cout << "Enter mass: ";
        std::cin >> mas;
    }

} // Figures