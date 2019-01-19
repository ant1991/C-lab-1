#define _CRT_SECURE_NO_WARNINGS

#include "task3.h"
#include <stdio.h>
#include <string.h>



static const float pi=3.14, num=180;

char *convert(char buf[], double angle, char type)
 
{
	double form = 0;
	if (type == 'D')
	{
		form = angle * (pi / num);
		sprintf(buf, "%f%c", form, 'R');
	}
	else if (type == 'R')
	{
		form = angle * (num / pi);
		sprintf(buf, "%f%c", form, 'D');
	}
	else
	{
		printf ("Error\n");
	}
	return buf;
}