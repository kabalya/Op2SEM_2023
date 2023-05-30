#include "FigureSystem.h"
#include <algorithm>


namespace Figures {
    FigureSystem::FigureSystem() = default;

    void FigureSystem::addSection(int x1, int y1, int x2, int y2, int mas) {
        FigureSystem::s.emplace_back(x1,y1,x2,y2,mas);
    }

    void FigureSystem::addElips(int littleHalfpAxis, int bigHalfAxis, int mas, int x, int y) {
        FigureSystem::e.emplace_back(littleHalfpAxis,bigHalfAxis,mas,x,y);
    }

    void FigureSystem::PrintS() {
        for (int i = 0; i < s.size(); ++i) {
            s[i].draw();
        }
    }

    void FigureSystem::PrintE() {
        for (int i = 0; i < e.size(); ++i) {
            e[i].draw();
        }
    }

    int FigureSystem::SquaresSection() {
        int summ = 0;
        for (int i = 0; i < s.size(); ++i) {
            summ += s[i].square();
        }
        std::cout << summ << "\n";
        return summ;
    }

    int FigureSystem::SquaresElipses() {
        int summ = 0;
        for (int i = 0; i < e.size(); ++i) {
            summ += e[i].square();
        }
        std::cout << summ << "\n";
        return summ;
    }

    int FigureSystem::PerimetersSections() {
        int summ = 0;
        for (int i = 0; i < s.size(); ++i) {
            summ += s[i].perimeter();
        }
        std::cout << summ << "\n";
        return summ;
    }

    int FigureSystem::PerimetersElipses() {
        int summ = 0;
        for (int i = 0; i < e.size(); ++i) {
            summ += e[i].perimeter();
        }
        std::cout << summ << "\n";
        return summ;
    }

    int FigureSystem::AllMass() {
        int summ=0;
        for (int i = 0; i < s.size(); ++i) {
            summ += s[i].mass();
        }
        for (int i = 0; i < e.size(); ++i) {
            summ += e[i].mass();
        }
        std::cout << summ<<"\n";
        return summ;
    }

    int FigureSystem::SizeOfSystem() {
        return sizeof(s) + sizeof(e);
    }

    int FigureSystem::FigureSort(std::vector<Elips> e, std::vector<Elips> s)
    {
       
        int x=sizeof(e)+sizeof(s);
        std::vector<int> v(x);
        std::sort(e.begin(), e.end());
        std::sort(s.begin(), s.end());
       
        v.insert(v.end(), s.begin(), s.end());
        std:: sort(v.begin(), v.end());  // сортировка
        std::cout << "After sort: ";
        
        for (int i = 0; i < sizeof(v); i++) {
           std:: cout << v[i] << " ";
        }
       
        
        return 0;
    }


} 