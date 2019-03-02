#include<stdio.h>

float convert(int feet, int inches)
{
	float centimeter = 0;
	
	if (feet >= 0 && inches>=0)
	{
		centimeter = feet * 12*2.54 + inches*2.54;	
		return centimeter;
	}
	else if (feet < 0 || inches<0)
	{
		return 0;
	}
}
