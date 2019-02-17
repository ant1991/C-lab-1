#include "pch.h"
#include <stdio.h>
#include "task4.h"


int main()
{
	int feet, inches;
	printf("Enter your height in feet and inches in fomate x'yy: ");
	scanf("%d'%d", &feet, &inches);
	printf("Your height in cm = %0.1f", convert(feet, inches));

	return 0;
}