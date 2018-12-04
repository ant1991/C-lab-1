#include "task3.h"
#include <stdio.h>

char * convert(char buf[], double angle, char type)
{
	if (type == 'D')
	{
		sprintf(buf, "your angle in radians = %fR\n", ((angle/180)*3.14159));
	}
	if (type == 'R')
	{
		sprintf(buf, "your angle in degrees = %fD\n", ((angle/3.14159)*180));
	}
	return buf;
}