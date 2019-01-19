#include "task1.h"

int getRecommendation(char gender, float height, float weight)
{
	if (gender == 'm')
	{
		int perfectWeight = height - 100;
		if (perfectWeight > weight)
			return -1;
		else if (perfectWeight < weight)
			return 1;
		else
			return 0;
	}
	else if (gender == 'f')
	{
		int perfectWeight = height - 110;
		if (perfectWeight > weight)
			return -1;
		else if (perfectWeight < weight)
			return 1;
		else
			return 0;
	}
}