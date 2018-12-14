#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
char * convert(char buf[], double angle, char type)
{
	float result;
	if (type == 68) 
		sprintf(buf, "%fR\n", result = angle * 3.14159 / 180);
	else if (type == 82) 
		sprintf(buf, "%fD\n", result = 180 / 3.14159 *angle);
	return 0;
}