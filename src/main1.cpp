#define _CRT_SECURE_NO_WARNINGS
#include "task1.h"
#include <stdio.h>

int main()
{
	char gender;
	float height, weight;
	printf("input your gender ('m' for man, 'w' for woman): ");
	scanf("%c", &gender);
	printf("input your height: ");
	scanf("%f", &height);
	printf("input your weight: ");
	scanf("%f", &weight);
	if (getRecommendation(gender, height, weight) == 1)
		printf("you need to lose weight\n");
	if (getRecommendation(gender, height, weight) == -1)
		printf("you need to gain weight\n");
	if (getRecommendation(gender, height, weight) == 0)
		printf("you have a normal weight\n");
	return 0;
}