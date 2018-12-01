#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "task3.h"

int main()
{
	double angle;
	char type;
	char buf[100];
	printf("Ånter the size of the angle, put 'R' if radians and 'D' if degrees: ");
	scanf("%lf%c", &angle, &type);
	printf("%s\n", convert(buf, angle, type));

	return 0;
}