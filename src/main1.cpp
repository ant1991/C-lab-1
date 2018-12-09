#include <stdio.h>
#include "task1.h"
int main()
{

	char gender = 'm';
	printf("Enter 'm' or 'w': ");
	scanf("%c", &gender);
	int height = 0;
	printf("Enter your height: ");
	scanf("%d", &height);
	int weight = 0;
	printf("Enter your weight: ");
	scanf("%d", &weight);
	int result = getRecommendation(gender, height, weight);

	if (result == 0)
		printf("Your weight is normall");

	if (result == -1)
		printf("Recommend more eat");

	if (result == 1)
		printf("Recommend to have a diet");
	return 0;


}