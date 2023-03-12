#include "Change.h"

void Change1(int &a1, int &b1)
{
	if (a1 > b1)
	{
		a1=  a1 + (a1 % b1);
		
	}
	else if (b1 > a1)
	{
		b1=  b1 + (b1 % a1);
		
	}
	else { a1,b1= 0; }
}

void Change2(int* pa, int* pb)
{
	
	if (*pa > *pb)
	{
		*pa =*pa+ (*pa % *pb);
		
	}
	else if (*pb > *pa)
	{
		*pb = *pb + (*pb % *pa);
		
	}
	
}
