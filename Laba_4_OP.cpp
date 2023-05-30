#include <iostream>
#include "Elips.h"
#include "Section.h"
#include "FigureSystem.h"
using namespace Figures;
int main() 
{
    FigureSystem test;
    std::cout << "Do not forget that Elips is : Big Axis,Small Axis,mass ,X and Y\n " ;
    std::cout << "Do not forget that Section is : X1,Y1,X2,Y2,mass \n " << std::endl;

    test.addElips(10, 5, 20,0,0);
    test.PrintE();
    test.addSection(1, 1, 5, 7,10);
    test.PrintS();
    std::cout << "\n";
    test.PerimetersElipses();
    test.AllMass();
    test.PerimetersSections();
   
    return 0;
}

