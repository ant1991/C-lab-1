#include<stdio.h>

char * convert(char buf[], double angle, char type)
{
	const double pi = 3.14159;
		
	if (type == 'D')
	{
		angle = angle * pi / 180;
		type = 'R';
		sprintf(buf, "%.5f%c", angle, type);	
	}
	else if (type == 'R')
	{
		angle = (180 * angle) / pi;
		type = 'D';
		sprintf(buf, "%.1f%c", angle, type);
	}	
	return buf;
}