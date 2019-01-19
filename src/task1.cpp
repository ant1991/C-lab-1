#include "task1.h"
#include <stdio.h>
int getRecommendation(char gender, float height, float weight)
{
	float ideal = 0;
	if (gender == 'm') ideal = height - 100;
	else if (gender == 'w') ideal = height - 110;
	else
	{
		printf("unknown gender\n");
		return 0;
	}
	if (weight == ideal)
		return 0;
	if (weight > ideal)
		return 1;
	return -1;
}

