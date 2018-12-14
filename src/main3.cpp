#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "task3.h"

int main()
{
	char buf[200];
	double angle;
	char type;

	printf("Enter angle and type\n");

	scanf("%lf%c", &angle, &type);
	
	convert(buf,  angle,  type);


	printf("%s", buf);

	return 0;
}