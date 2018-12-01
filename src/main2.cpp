#include "task2.h"
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
int main()
{
	int hour, min, sec = 0;
	printf("Please, enter current time in the format of 00:00:00\n");
	scanf("%d:%d:%d", &hour, &min, &sec);
	char greeting[30];
	strcpy(greeting, greet(hour, min));
	printf("%s\n", greeting);
	return 0;
}