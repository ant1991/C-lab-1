#include <stdio.h>
#include "task1.h"

void clean_stdin()          //очистить буфер клавиатуры
{
	int c;
	do
		c = getchar();
	while (c != '\n' && c != EOF);
}

int main()
{
	float height, weight;
	char gender;

	printf("Hello, enter 'm' or 'w':");
	scanf("%c", &gender);
	clean_stdin();

	while (1)
	{
		printf("Enter you height in sm: ");
		float result = scanf("%f", &height);

		if (result == 0 || height < 0 || height >250)
		{
			printf("The height is incorrect!\n");
			clean_stdin();
		}
		else
			break;
	}

	while (1)
	{
		printf("Enter you weight in kg: ");
		float result = scanf("%f", &weight);

		if (result == 0 || weight < 0 || weight >200)
		{
			printf("The weight is incorrect!\n");
			clean_stdin();
		}
		else
			break;
	}
	
	getRecommendation(gender, height, weight);
	printf("%d", getRecommendation(gender, height, weight));
	return 0;
}