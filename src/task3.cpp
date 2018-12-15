#define _CRT_SECURE_NO_WARNINGS
#include "task3.h"
#include <stdio.h>

char * convert(char buf[], double angle, char type)
{
	if (type == 'D') 
		sprintf(buf, "Angel is %lfR", angle * 3.14 / 180);
	else if (type == 'R') 
		sprintf(buf, "Angle is %lfD", angle * 180 / 3.14);
	return buf;
}