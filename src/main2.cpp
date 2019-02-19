#include "task2.h"
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	puts("enter the time hh:mm:ss ");
	int hour = 0, min = 0, sec = 0;
	scanf("%d:%d:%d", &hour, &min, &sec);
	printf(greet(hour, min));
	return 0;
}