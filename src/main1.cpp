#include "task1.h"
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	char gender = 0;
	float height = 0, weight = 0;
	printf("What is your gender? Enter \"w\" if you are a woman, enter \"m\" if you are a man: " );
	scanf("%c", &gender);
	printf("Enter your height in cm: ");
	scanf("%f", &height);
	printf("Enter your weight in kg: ");
	scanf("%f", &weight);
	int result = getRecommendation(gender, height, weight);
	if (result == 1)
		puts("You have overweight. \nProbably you should try to reduce your weight.");
	else if (result == -1)
		puts("Your weight is too low. \nProbably you should try to increase your weight.");
	else 
		puts("You are an ideal! \nJust enjoy yourself!");
	return 0;
}