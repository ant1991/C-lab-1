#define _USE_MATH_DEFINES
#define _CRT_SECURE_NO_WARNINGS
#include <math.h>
#include <stdio.h>

char * convert(char buf[], double angle, char type)
{
	if (type == 'd')
	{
		angle = (M_PI * angle) / 180;
		type = 'r';
		sprintf(buf, "%.3lf%c", angle, type);

	}
	else if (type == 'r')
	{
		angle = (angle * 180) / M_PI;
		type = 'd';
		sprintf(buf, "%.3lf%c", angle, type);
	}
	else
	{
		sprintf(buf, "%s", "Incorrect unit of measure!/n");
	}
	return;
}