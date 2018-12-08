#include <stdio.h>
#include "task3.h"
#define M_PI 3.14


char * convert(char buf[], double angle, char type)
{
	switch (type)
	{
	case 'D':
		sprintf(buf, "%.5lfR", angle * M_PI / 180);
		return buf;
		break;
	case 'R':
		sprintf(buf, "%.3lfD", angle * 180 / M_PI);
		return buf;
		break;
	default:
		return 0;
	}
}