#pragma warning(disable:4996)
#include <stdio.h>
#include "task1.h"

int main()
{
	char gender; 
	float height = 0;
	float weight = 0;
		
	printf("what is your gender? enter 'm' if  man or 'w' if women ");
	scanf("%c", &gender);
	
	while (gender != 'm' && gender != 'w')
	{
		while (getchar() != '\n');
		
		printf("\ngender is incorrect,\nenter your gender again 'm' if  man or 'w' if women ");
		scanf("%c", &gender);
	}


	printf("what is your height? ");
	scanf("%f", &height);
	
	printf("what is your weight? ");
	scanf("%f", &weight);
	
	printf("your gender %c your height is %3.1f, and your weight is %3.1f\n",gender, height, weight);
	
	if (getRecommendation(gender, height, weight) == -1)
		printf("Recommendation: You should eat more (-1)\n");
	else if (getRecommendation(gender, height, weight) == 0)
		printf("Recommendation: Keep it up! (0)\n");
	else if (getRecommendation(gender, height, weight) == 1)
		printf("Recommendation: You should eat less (1)\n");
	return 0;
}