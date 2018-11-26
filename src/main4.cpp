#include "task4.h"
#include <stdio.h>

int main()
{
	int feet = 0;
	int inches = 0;

	printf("Enter feet and inches, f'i\n");
	scanf("%d,%d", &feet, &inches);
	printf("%.2f cm", convert(feet, inches));

	
	return 0;
}



