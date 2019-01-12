#include "task4.h"
#include <stdio.h>

int main()

{
	int feet = 0;
	int inches = 0;
	float result = 0;

	printf("Vvedite dannie v formate futi'dyimi:");
	scanf("%d'%d", &feet, &inches);
	printf("cm=%.1f", convert(feet, inches));

	return 0;
}