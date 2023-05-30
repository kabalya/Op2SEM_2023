#ifndef LAB4_IPHYSOBJECT_H
#define LAB4_IPHYSOBJECT_H

#include "CVector2d.h"

namespace Figures {

    class IPhysObject : public CVector2d {
    public:
        virtual double mass() = 0;
       
        virtual Figures::CVector2d position() = 0;        // ���������� ������ ����, �.
       
        virtual bool operator== (IPhysObject& ob) = 0;    // ��������� �� �����.
       
        virtual bool operator< (IPhysObject& ob) = 0;     // ��������� �� �����.
    };

} // Figures

#endif //LAB4_IPHYSOBJECT_H

