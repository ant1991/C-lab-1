#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "task2.h"

void clean_stdin()
{
	int c;
	do
		c = getchar();
	while (c != '\n' && c != EOF);
}

int main()
{
	int hour, min, sec;
	hour = 0;
	min = 0;
	sec = 0;
	while (1)
	{
		printf("Pleas Enter the current time in the format hh:mm:ss: ");
		int result = scanf("%d:%d:%d", &hour, &min, &sec);
		if (result != 3 || hour < 0 || hour >= 24 || min < 0 || min >= 60 || sec < 0 || sec >= 60)
		{
			printf("Uncorrect time!\n");
			clean_stdin();
		}
		else
			break;
	}
	printf(greet(hour, min));

	return 0;
}