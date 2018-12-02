
#include<stdio.h>
#include "Task3.h"
int main()
{
	char buf[20];
	double angle = 0;
	char type = 0;
	printf("Enter angle R or D: ");
	scanf("%lf%c", &angle, &type);
	printf(convert(buf, angle, type));
	scanf("%lf%c", &angle, &type);
	return 0;
}
