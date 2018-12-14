#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include "task4.h"

#define FINC 12
#define INCSM 2.54

void clean_stdin()
{
	int c;
	do
		c = getchar();
	while (c != '\n' && c != EOF);
}

int main()
{
	int feet = 0;
	int inches = 0;
	while (1)
	{
		printf("Enter a height in the format feet'inches: ");
		int result = scanf("%d'%d", &feet, &inches);
		if (result != 2)
		{
			printf("Uncorrect height!\n");
			clean_stdin();
		}
		else
			break;
	}
	printf("Height in centimeters: %.1f\n", convert(feet, inches));
	return 0;
}