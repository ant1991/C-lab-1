#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "task1.h"

int main()
{
char gender = 'm';
float height = 0;
float weight = 0;

printf("Enter 'm' or 'w': ");
scanf("%c", &gender);
	
printf("Enter your height: ");
scanf("%f", &height);
		
printf("Enter your weight: ");
scanf("%f", &weight);
		

	getRecommendation(gender, height, weight);
	if (getRecommendation(gender, height, weight) == 0)
		printf("Nice! Your weight is perfect!");
	else if (getRecommendation(gender, height, weight) == 1)
		printf("Sorry but you are fat. You should eat less.");
	else if (getRecommendation(gender, height, weight) == -1)
		printf("You are too thin. You should eat more!");

	getchar();
	getchar();
	return 0;
}