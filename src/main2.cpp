#define _CRT_SECURE_NO_WARNINGS
#include "task2.h"
#include <stdio.h>

int main()
{
	int hour, min;
	printf("input time: ");
	scanf("%d%d", &hour, &min);
	printf(greet(hour, min));
	return 0;
}