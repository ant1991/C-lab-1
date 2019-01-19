#define _USE_MATH_DEFINES 
#include <math.h>
#include <stdio.h>


char * convert(char buf[], double angle, char type)

{
	if (type == 'D')
		sprintf(buf, "%f%c", angle * M_PI / 180, 'R');
	else if (type == 'R')
		sprintf(buf, "%f%c", angle * 180 / M_PI, 'D');
	else
		sprintf(buf, "Incorrect!");
	return buf;
}