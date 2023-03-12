#include "Circle.h"

void Circle1(int& r1, int& length1)
{
    if (length1 > r1)
    { 
        r1=0; 
    }
    else 
    {
        r1= r1 - length1;
    }
}

void Circle2(int* pr, int* plength)
{
    if (*pr<*plength)
    {
        *pr = 0;
    }
    else
    {
        *pr = *pr - *plength;
    }
}
