#include "task4.h"
#include <stdio.h>

int main()
{
	int feet, inches;
	printf("Input height (feet'inches): ");
	scanf("%d'%d", &feet, &inches);
	printf("%0.1f sm\n", convert(feet, inches));

	return 0;
}