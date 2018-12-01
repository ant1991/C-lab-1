#include <stdio.h>
int getRecommendation(char gender, float height, float weight)
{
	float etalon = 0;

	switch (gender)
	{
		case 'm': etalon = height - 100; break;
		case 'w': etalon = height - 110; break;
		default: printf("Error! Gender code is wrong!\n");
	}
		
	if (weight < etalon) return -1;
	if (weight > etalon) return 1;
	return 0;
}