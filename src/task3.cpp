#include <stdio.h>

char * convert(char buf[], double angle, char type)

{
	if (type == 'D')
	{
		angle = angle*3.14/180;
		sprintf(buf,"%fR\n",angle);
	}

	else if (type == 'R')
	{
		angle = angle*180/3.14;
		sprintf(buf,"%fD\n",angle);
	}
	return buf;
}