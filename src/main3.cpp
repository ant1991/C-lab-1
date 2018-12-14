#include <stdio.h>
#include "task3.h"

int main()
{
	double angle = 0;
	char type;
	char buf[20];

	printf("Enter angle value in degrees or radians (xx.xxD or xx.xxR): ");
	scanf("%lf%c", &angle, &type);
	
	printf(convert(buf, angle, type));
	
	return 0;
}