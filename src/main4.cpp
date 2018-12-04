#define _CRT_SECURE_NO_WARNINGS
#include "task4.h"
#include <stdio.h>

int main()
{
	int feet, inches;
	printf("input feets and inches (format: f'i): ");
	scanf("%d'%d", &feet, &inches);
	printf("result is: %.1f cm\n", convert(feet, inches));
}