#ifndef LAB4_FIGURESYSTEM_H
#define LAB4_FIGURESYSTEM_H

#include "vector"
#include "iostream"
#include "algorithm"
#include "Elips.h"
#include "Section.h"

namespace Figures {

    class FigureSystem {
    private:
        std::vector<Elips> e;
        std::vector<Section> s;
    public:
        FigureSystem();
        void addSection(int x1, int y1, int x2, int y2, int mas);
        void addElips(int littleHalfpAxis, int bigHalfAxis, int mas, int x, int y);

        void PrintS();
        void PrintE();

        int SquaresSection();
        int SquaresElipses();

        int PerimetersSections();
        int PerimetersElipses();

        int AllMass();
        int SizeOfSystem();

        int FigureSort(std::vector<Elips> e, std::vector<Elips> s);
    };

} 

#endif 