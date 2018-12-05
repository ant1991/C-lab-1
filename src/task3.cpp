#define _USE_MATH_DEFINES
#include <math.h>
#include <stdio.h>

char * convert(char buf[], double angle, char type)
{
	if (type == 'R')
		sprintf(buf, "%lfD", (angle * 180) / M_PI);
	else
		sprintf(buf, "%lfR", (angle* M_PI) / 180);
	return buf;
}