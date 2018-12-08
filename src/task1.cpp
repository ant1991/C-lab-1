#include <stdio.h>

int getRecommendation(char gender, float height, float weight)
{
	float c = 100;
	if (gender == 'w')
		c += 10;

	if ((height - c) > weight)
	{
		printf("Get fat!\n");
		return -1;
	}
	else if ((height - c) < weight)
	{
		printf("lose weight!\n");
		return 1;
	}
	else
	{
		printf("Normal\n");
		return 0;
	}
}