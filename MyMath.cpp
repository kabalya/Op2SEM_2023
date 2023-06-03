#include "MyMath.h"
template<typename T>
T power(T base, int exponent) {
    if (exponent == 0)
        return 1;
    else
        return base * power(base, exponent - 1);
}