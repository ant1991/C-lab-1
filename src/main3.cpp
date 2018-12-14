#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "task3.h"

#define SIZE 40

int main()
{
	char type;
	char buf[SIZE];
	float angle;
	printf("input angle and it's type - radians (R) or degrees (D): ");
	scanf("%f%c", &angle, &type);
	printf(convert(buf, angle, type));
	return 0;
}