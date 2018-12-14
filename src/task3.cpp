#pragma warning(disable:4996)
#define PI 3.14159265358979323846
#include<stdio.h>
char * convert(char buf[], double angle, char type)
{
	if (type == 'D')
	{
		angle = (angle * PI) / 180;
		sprintf(buf, "%.5fR", angle);
	}

	else if (type == 'R')
	{
		angle = (angle * 180) / PI;
		sprintf(buf, "%.1fD", angle);
	}
	return buf;
}