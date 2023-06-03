#include "Degree.h"
#include <algorithm>
template <class T>
 T pow(T deg, int num) {
    T result = 1;

    if (deg % 1 > 0)
    {
        throw Exceptions::ExceptionDegree("This index  not correct");
    }
    else
    {
        result = pow(num, deg);
        std::cout << num << "^" << deg << " = " << std::pow(num, deg) << std::endl;
    }
   
    return result;
}