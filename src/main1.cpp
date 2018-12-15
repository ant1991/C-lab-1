#include "task1.h"
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main()
{
	puts("What is your gender? m - masculine, f - feminine");
	char gender;
	scanf("%c", &gender);
	puts("What is your height?");
	float height;
	scanf("%f", &height);
	puts("What is your weight?");
	float weight;
	scanf("%f", &weight);
	int result = getRecommendation(gender, height, weight);
	if (1 == result)
		puts("You should lose weight!");
	else if (-1 == result)
		puts("You should gain weight!");
	else
		puts("Your weight is perfect!");
	return 0;
}