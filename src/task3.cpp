#define _USE_MATH_DEFINES  // для числа Pi (M_PI)
#include <math.h>  // для числа Pi (M_PI)

char * convert(char buf[], double angle, char type)
{
	switch (type)
	{
	case 'D':
		sprintf(buf, "%.5lfR", angle * M_PI / 180);
		return buf;
		break;
	case 'R':
		sprintf(buf, "%.3lfD", angle * 180 / M_PI );
		return buf;
		break;
	default:
		return "Enter data correctly!!!";
	}
}