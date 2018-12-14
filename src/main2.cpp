#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "task2.h"

int main()
{
	int min, hour;
	
	printf("Enter hour and min\n");

	scanf("%d%d", &hour, &min);

	printf("%s", greet( hour,  min));

	return 0;
}