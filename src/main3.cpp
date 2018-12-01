#include "task3.h"
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main()
{
	double angle;
	char type = 0;
	printf("Enter angle and specify unit of measure - print \"d\" for degrees, \"r\" for radians\n");
	scanf("%lf%c", &angle, &type);
	char buf[30] = { 0 };
	convert(buf, angle, type);
	printf("%s\n", buf);
	return 0;
}