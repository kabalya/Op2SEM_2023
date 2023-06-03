#pragma once
#ifndef LAB6_FIND_BACKWORDS_H
#define LAB6_FIND_BACKWORDS_H
#include <iterator>
#include <algorithm>
#include "iostream"
namespace Functions {
    template<typename Iterator, typename T>
    Iterator find_backwords(Iterator first, Iterator last, const T& value)
    {
        Iterator result = last;
        

        for (Iterator it = first; it != last; ++it)
        {
            if (*it == value) 
            {
                result = it;
              
            }
        }
        
        if (result != last) 
        {
            std::cout << "Position FIND_BACKWORDS : " << std::distance(first, result) << std::endl;
        }
        else
        {
            std::cout << "Element not found!" << std::endl;
        }
        return result;
    }
}

#endif
