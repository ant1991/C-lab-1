#include <stdio.h>
const char * convert(char buf[], double angle, char type)
{
	if (type == 'D')
		sprintf(buf, "Angle = %fR", (angle / 57.2958));
	else if (type == 'R')
		sprintf(buf, "Angle = %fD", (angle) / 0.01745);
	return buf;
}