#include <stdio.h>
#include "task1.h"

int main()

{
	char gender;
	float height = 0;
	float weight = 0;
	printf("Hello! \nWhat's your gender:'w' or 'm'?: ");
	scanf("%c", &gender);
	printf("Enter your height: ");
	scanf("%f", &height);
	printf("And your weight please: ");
	scanf("%f", &weight);


	if (getRecommendation(gender, height, weight) == 1)
		printf("Your weight is overweight!\n");
	else if (getRecommendation(gender, height, weight) == -1)
		printf("Your weight is low!\n");
	else if (getRecommendation(gender, height, weight) == 0)
		printf("Your weight is ideal!\n");

	return 0;

}

