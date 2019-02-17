#include "pch.h"

#include <stdio.h>
#include "task3.h"



int main()
{
	char buf[40];
	double angle;
	char type;

	printf("Enter angle with letter D or R: ");
	scanf("%lf%c", &angle, &type);
	printf("%s", convert(buf, angle, type));
		
	return 0;
}