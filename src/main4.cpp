#define _CRT_SECURE_NO_WARNINGS
#include "task4.h"
#include <stdio.h>

int main() {
	puts("Input heights in feet'inches format");
	int feet, inches;
	scanf("%d'%d", &feet, &inches);
	float height = convert(feet, inches);
	printf("%f", height);
	return 0;
}