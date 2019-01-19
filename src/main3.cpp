/*
Программа переводит значение угла из градусов в радианы, и, наоборот, в зависимости от символа при вводе.
Например: 45.00D - означает значение в градусах, а 45.00R - в радианах.
*/

#define _CRT_SECURE_NO_WARNINGS
#include <string.h>
#include <stdio.h>
#include "task3.h"

int main()
{
	double angle = 0;
	char type = 'X';
	char buf[256];

	printf("Enter the angle and the dimension (R or D): ");
	scanf("%lf%c", &angle, &type);

	if (type != 'D' && type != 'R')
	{
		printf("The angle value is not correct! Enter the letters R or D without a space.\n");
		return 1;
	}

	printf("%s", convert(buf, angle, type));

	return 0;
}