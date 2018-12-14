#include "task3.h"
#include <stdio.h>

int main()

{
	double angle;
	char type;
	char buf[100];
	
	printf("Enter a value in degrees or radians (For example: 15.00D or 15.00R) : ");
	scanf("%lf%c", &angle, &type);
	convert(buf,angle,type);
	printf(buf);
	return 0;
}