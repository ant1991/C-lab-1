#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "task4.h"

int main()
{

	char type;
	int feet, inches;

	printf("Enter feet'inches\n");

	scanf("%d%c%d", &feet, &type, &inches);

	
	printf("%.1f", convert(feet, inches));

	return 0;
}