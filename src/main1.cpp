#include "task1.h"
#include <stdio.h>

int main()
{
	char gender = 0;
	float height = 0;
	float weight = 0;
	
	printf("Enter your gender, height, weight\n");
	scanf("%c, %f, %f", &gender, &height, &weight);
		
	int res = getRecommendation(gender, height, weight);

	if (res == -1)
	{
		printf("small");
	}
	if (res == 0)
	{
		printf("ideal");
	}
	if (res == 1)
	{
		printf("big");
	}
	
	return 0;
}