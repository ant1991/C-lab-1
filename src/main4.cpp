#include<stdio.h>
#include"task4.h"

int main()
{
	int feet = 0, inches = 0;
	
	printf("Enter height:\n");
	scanf("%d'%d", &feet, &inches);
	if (convert(feet, inches) > 0)
		printf("%.1f", convert(feet, inches));
	else
		printf("Incorrect data");

	return 0;
}