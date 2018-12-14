#include "task4.h"
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int feet, inches = 0;
	printf("Please, enter the height in the format of: \"feet'inches\" and press ENTER\n");
	scanf("%d'%d", &feet, &inches);
	float cm = (convert (feet, inches));
	printf("%d feet %d inches are equal to %.1f cm\n", feet, inches, cm);
	return 0;
}