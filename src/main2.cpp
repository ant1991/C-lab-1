#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include "task2.h"
#include <time.h>


int main()
{
	int hour = 0;
	int min = 0;
	int sec = 0;
	printf("Enter time v fomate HH:MM:SS\n");
	scanf("%d%d%d", &hour, &min, &sec);
	puts(greet(hour, min));

	return 0;
}