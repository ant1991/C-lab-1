#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "task4.h"


int main()
{
	int feet = 0, inches = 0;
	
	printf("Enter your height in feet and inches (f'ii): ");
	scanf("%d%d", &feet, &inches);
	//printf("\nfeet = %d , inches = %d\n", feet, inches);
	if (feet < 3 || feet >= 8 || inches < 0 || inches >= 12) printf("Height is incorrect!");
		else printf("\nYour height is %4.1f centimeters", convert(feet, inches));
	return 0;
}