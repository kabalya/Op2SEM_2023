#pragma once
#include <iostream>
#include <cmath>

using namespace std;


struct Point
{
    double x, y;
};

class Square {
public:
    Square(Point point, double length, double angle) {
        this->point = point;
        this->length = length;
        this->angle = angle;
    }

    Point getPoint() {
        return point;
    }

    double getLength() {
        return length;
    }

    double getAngle() {
        return angle;
    }

    double getSquare() {
        return pow(length, 2);
    }
    
    

private:
    Point point;
    double length, angle;
};

