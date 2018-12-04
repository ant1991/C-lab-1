#include "task1.h"

int getRecommendation(char gender, float height, float weight)
{
	if (gender == 'm')
	{
		if (weight > (height - 100))
			return 1;
		if (weight < (height - 100))
			return - 1;
		else return 0;
	}
	if (gender == 'w')
	{
		if (weight >(height - 110))
			return 1;
		if (weight < (height - 110))
			return -1;
		else return 0;
	}
}