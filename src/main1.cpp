#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "task1.h"

int main()
{
	char gender;
	float height=0, weight=0;
	int result = 10;

	printf("Enter your gender, height and weight!\n");
	   	
	scanf("%c %f %f", &gender, &height, &weight);

	if (gender == 'm'|| gender == 'w')
	{
		result = getRecommendation(gender, height, weight);

		if (result == 0)
			printf("Norm\n");
		else if (result == -1)
			printf("Need to lose weight\n");
		else if (result == 1)
			printf("Need to get fat\n");

	}

	return 0;
}