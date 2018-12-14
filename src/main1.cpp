#include <stdio.h>
#include "task1.h"

void clean_stdin()
{
	int c;
	do
		c = getchar();
	while (c != '\n' && c != EOF);
}

int main()
{
	char gender;
	float height, weight;
	printf("Pleas enter your gender: 'm' if you are a man or 'w' if you are a woman?\n");
	scanf("%c", &gender);
	while (1)
	{
		printf("Hello, what is your height and weight?\n");
		int result = scanf("%f %f", &height, &weight);
		if (result != 2)
		{
			printf("Incorrect input!\n");
			clean_stdin();
		}
		else
			break;
	}
	if (getRecommendation(gender, height, weight) == 0)
		printf("Congratulations, your weight is normal!\n");
	else if (getRecommendation(gender, height, weight) == -1)
		printf("You need to get fat!\n");
	else if (getRecommendation(gender, height, weight) == 1)
		printf("You need to lose weight!\n");
	return 0;
}