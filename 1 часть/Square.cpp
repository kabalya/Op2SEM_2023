#include "Square.h"
#include "Square.h"
#include <cmath>
#include <iostream>
using namespace std;

Square::Square(double x, double y, double length, double angle_degrees) {
	this->x = x;
	this->y = y;
	this->length = length;
	this->angle_degrees = angle_degrees;
}

Square Square::operator*(double num)
{
	return Square(this->x, this->y, this->length * num, this->angle_degrees);
}

Square Square::operator+(const Square& s) 
{
	return Square(this->x + s.x, this->y + s.y, this->length, this->angle_degrees);
}

double Square::getArea() const
{
	return pow(this->length, 2);
}

bool Square::operator==(const Square& s)
{
	return (this->getArea() == s.getArea());
}

bool Square::operator!=(const Square& s)
{
	return (this->getArea() != s.getArea());
}

bool Square::operator<(const Square& s) 
{
	return (this->getArea() < s.getArea());
}

bool Square::operator>(const Square& s) 
{
	return (this->getArea() > s.getArea());
}



void Square::print() const
{
	cout << "Square coordinates: " << this->x << ", " << this->y << endl;
	cout << "Side length: " << this->length << endl;
	cout << "Angle of rotation: " << this->angle_degrees << endl;
	cout << "Area: " << this->getArea() << endl;
}
