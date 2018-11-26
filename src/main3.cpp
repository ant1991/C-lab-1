#include "task3.h"
#include <stdio.h>

int main()
{
	char buf[20];
	double angle = 0;
	char type = 0;

	printf("Enter angle value in degrees or radians\n");
	scanf("%lf%c", &angle, &type);
	printf(convert(buf, angle, type));
	scanf("%lf%c", &angle, &type);
	return 0;
}