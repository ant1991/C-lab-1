#include <stdio.h>
#include "task1.h"
int main()
{

	char gender = 0;
	int height = 0;
	int weight = 0;

	printf("Enter 'm' or 'w': ");
	scanf("%c", &gender);
	printf("Enter your height: ");
	scanf("%d", &height);
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
