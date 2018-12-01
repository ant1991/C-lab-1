#include "task3.h"

char * convert(char buf[], double angle, char type)
{
	if (type == 'R')
		sprintf(buf, "%f%c", angle * 180 / 3.1416, 'D');
	else if (type == 'D')
		sprintf(buf, "%f%c", angle * 3.1416 / 180, 'R');
	else
		sprintf(buf, "Inccorect!");
	return buf;
}