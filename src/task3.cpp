#include <stdio.h>
#include <string.h>

char * convert(char buf[], double angle, char type)
{
	float an;
	int l;
	if (type == 'D')
	{
		an = angle * 3.14159 / 180;
		type = 'R';
	}
	else
	{
		an = angle * 180 / 3.14159;
		type='D';
	}
	sprintf(buf, "%6.2f", an);
	l = strlen(buf);
	buf[l] = type;
	buf[l+1] = '\0';

		
	return buf;
}