#include <stdio.h>
#include "task1.h"

#define _CRT_SECURE_NO_WARNINGS
int main()
{
	float height = 0;
	float weight = 0;
	int res;
	char gender = 'b';
	while (gender != 'm' && gender != 'w')
	{
		printf("Enter 'm' or 'w':\n");
		scanf("%c", &gender);
	}
	printf("Enter height:");
	scanf("%f", &height);
	printf("Enter weight:");
	scanf("%f", &weight);
	res = getRecommendation(gender, height, weight);
	if (res == 1)
		printf("overweight\n");
	if (res == 0)
		printf("normal\n");
	else
		printf("thin\n");

	return 0;
}
