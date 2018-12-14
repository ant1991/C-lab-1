#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "task3.h"

int main()
{
	char buf[256];
	double angle = 0;
	char type = 'm';

	printf("Enter numbers of degrees (D) or radians (R)\n");
	scanf("%lf%c", &angle, &type);
			
	convert(buf, angle, type);
	puts(buf);

	
	getchar();
	getchar();
	return 0;
}


