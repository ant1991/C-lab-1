#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "task4.h"

int main()
{
int feet = 0;
int inches = 0;

printf("Enter your height: feet and inches.\n");
int result = scanf("%d%d", &feet, &inches);
	
convert(feet, inches);
printf("Your height is %f centimeters", convert(feet, inches));

getchar();
getchar();
return 0;
}