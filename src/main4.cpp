#include "task4.h"
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	puts("Vvedite rost: ");
	int feet = 0, inches = 0;
	scanf("%d'%d", &feet, &inches);
	printf("%0.1f sm\n", convert(feet, inches));
	return 0;
}