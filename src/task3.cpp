#include "task3.h"
#define _CRT_SECURE_NO_WARNINGS
#include <string.h>
#include <stdio.h>

char * convert(char buf[], double angle, char type)
{
	double pi = 3.14;
	int gradus = 180;
	if (type == 'D')
	{
		angle = angle * pi / gradus;
		type = 'R';
	}
	else
	{
		angle = angle * gradus / pi;
		type = 'D';
	}
	sprintf(buf, "%7.3lf", angle);
	int n = strlen(buf);
	buf[n] = type;
	buf[n+1] = '\0';
	return buf;
}