#include <stdio.h>
#include "task1.h"

int main()
{
	char gender;
	float height;
	float weight;

	printf("Enter your gender: m or w\n");
	scanf("%c", &gender);
	printf("Enter your height:\n");
	scanf("%f", &height);
	printf("Enter your weight:\n");
	scanf("%f", &weight);

	if (getRecommendation(gender,height,weight) == 0)
		printf("Excellent!\n");
		
	if (getRecommendation(gender, height, weight) == 1)
		printf("You too fat!\n");
	
	if (getRecommendation(gender, height, weight) == -1)	
		printf("You too thin!\n");
	
	return 0;
}