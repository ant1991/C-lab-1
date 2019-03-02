#include<stdio.h>
#include"task3.h"

int main()
{
	char buf[64] = {0};
	double angle = 0;
	char type=0;
	printf("Enter angle and type:");
	scanf("%lf%c", &angle, &type);
	printf(convert(buf, angle, type));
	
	return 0;
}