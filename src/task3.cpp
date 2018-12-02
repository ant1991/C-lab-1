#define _USE_MATH_DEFINES
#define _CRT_SECURE_NO_WARNINGS
#include <math.h>
#include <stdio.h>

char * convert(char buf[], double angle, char type)
{
	if ((type == 'd')||(type == 'D'))
	{
		angle = (M_PI * angle) / 180;
		type = 'R';
		sprintf(buf, "%.3lf%c", angle, type);

	}
	else if ((type == 'r') || (type == 'R'))
	{
		angle = (angle * 180) / M_PI;
		type = 'D';
		sprintf(buf, "%.3lf%c", angle, type);
	}
	else
	{
		sprintf(buf, "%s", "Incorrect unit of measure!/n");
	}
	return buf;
}