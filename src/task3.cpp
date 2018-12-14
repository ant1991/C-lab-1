#include <stdio.h>

static const float pi = 3.141592653, num=180;

char * convert(char buf[], double angle, char type)
{
	double b=0;
	if (type =='D')
	{
		b = angle *(pi / num);
		sprintf(buf, "%lf, %c", b, 'R');
	}
	else if (type =='R')
	{
		b = angle * (num / pi);
		sprintf(buf, "%lf, %c", b, 'D');
	}
	else
	{
		printf("Error");
	}
	return buf;
}