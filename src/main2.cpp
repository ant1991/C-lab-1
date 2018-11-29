#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "task2.h"

int main()
{

	int hour = 0;
	int min = 0;
	int sec = 0;

	printf("What time is it?\npress hours, minutes, seconds:\n");
	int result = scanf("%d%d%d", &hour, &min, &sec);
	
	printf(greet(hour, min));
	
	getchar();
	getchar();
	return 0;
}