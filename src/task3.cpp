#include <stdio.h>
char * convert(char buf[], double angle, char type)
{
	float PI = 3.14159265;

	if (type == 'D')
	{
		angle = angle * (PI / 180.0);
		sprintf(buf, "%.2lf%c", angle, 'R');
	}
	if (type == 'R')
	{
		angle = angle * (180.0 / PI);
		sprintf(buf, "%lf%c", angle, 'D');
	}
		
	return buf;
}