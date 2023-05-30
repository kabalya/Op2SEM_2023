#ifndef LAB4_PARALLELOGRAM_H
#define LAB4_PARALLELOGRAM_H

#include "iostream"
#include "Figure.h"
#include "IPhysObject.h"
#include "IPrintable.h"

namespace Figures {

    class Elips : virtual Figure, virtual IPhysObject, virtual IPrintable {
    private:
        CVector2d _position;
        int littleHalfpAxis;
        int bigHalfAxis;
        int mas,x,y;
    public:
        Elips(int littleHalfpAxis,int bigHalfAxis,int mas,int x,int y );

        double square() override;
        double perimeter() override;

        double mass() override;
        Figures::CVector2d position() override;
        unsigned int size() ;
        bool operator== (IPhysObject& ob) override;
        bool operator< (IPhysObject& ob) override;

        void draw() override;
        void startInfo();
    };

} // Figures

#endif //LAB4_PARALLELOGRAM_H
