#include <stdio.h>
#include "task4.h"
#include <stdlib.h>


int main()
{
	int feet;
	int inches;
	printf("Enter size: feet' inches\n");
	scanf("%d'%d", &feet, &inches);
	printf("%2.f sm", convert(feet, inches));
	return 0;
}