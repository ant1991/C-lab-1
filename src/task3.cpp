#define _USE_MATH_DEFINES
#include <math.h>
#include <stdio.h>

char * convert(char buf[], double angle, char type)
{
	if (type == 'D')
		sprintf(buf, "%lfR", (angle* M_PI) / 180);
	else
		sprintf(buf, "%lfD", (angle * 180) / M_PI);
	return buf;
}