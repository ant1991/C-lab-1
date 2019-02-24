#include "task1.h"
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	puts("enter your gender ");
	char gender = 0;
	scanf("%c", &gender);
	float height = 0;
	puts("enter height ");
	scanf("%f", &height);
	float weight = 0;
	puts("enter weight ");
	scanf("%f", &weight);
	char result = getRecommendation(gender, height, weight);
	if (result == -1)
		printf("get fat\n ");
	else
		if (result == 1)
			printf("lose weight\n ");
		else
			if (result == 2)
				printf("incorrect input\n ");
			else
			    printf("norm\n ");
	return 0;
}
