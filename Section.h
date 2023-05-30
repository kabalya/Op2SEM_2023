#ifndef LAB4_RECTANGLE_H
#define LAB4_RECTANGLE_H

#include "iostream"
#include "Figure.h"
#include "IPrintable.h"
#include "IPhysObject.h"

namespace Figures {

    class Section : virtual Figure, virtual IPhysObject, virtual IPrintable {
    private:
        CVector2d _position;
        int x1, y1;
        int x2, y2;
        int mas;
        //int height;
       // int length;
    public:
        Section(int x1, int y1, int x2, int y2,int mas);

        double square() override;
        double perimeter() override;
        double mass() override;
        Figures::CVector2d position() override;
        unsigned int size();
        bool operator== (IPhysObject& ob) override;
        virtual bool operator< (IPhysObject& ob) override;

        void draw() override;
        void startInfo();
            
       
    };

} // Figures

#endif //LAB4_RECTANGLE_H

