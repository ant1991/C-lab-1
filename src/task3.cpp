#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
char * convert(char buf[], double angle, char type)
{
	double c1 = 0.017453292;						//Коэффициент для перевода в радианы
	double c2 = 57.29577951;						//Коэффициент для перевода в градусы


	if (type == 'D')
	{
		angle = angle * c1;							//to radians
		sprintf(buf, "%f%c", angle, 'R');
		return buf;
	}
		else
		{
			angle = angle * c2;						//to degrees
			sprintf(buf, "%f%c", angle, 'D');
			return buf;
		}
	return buf;
}