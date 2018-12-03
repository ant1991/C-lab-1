#include <stdio.h>
#include "task4.h"

int main()
{
	int feet;
	int inches;

	printf("Enter feet and inches: ");
	scanf("%d'%d", &feet, &inches);
	printf("%.1f cm", convert(feet, inches));

	return 0;
}