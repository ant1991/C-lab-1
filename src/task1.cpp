#include "task1.h"
#include <math.h>
#define _USE_MATH_DEFINES
#define WOMANCORRECT 10


int getRecommendation(char gender, float height, float weight)
{
	int getRec=0;
	
		if (gender == ('m'))
		{
			getRec = height - weight;
		}
		else if (gender == ('w'))
		{
			getRec = height - weight - WOMANCORRECT;
		}
		if (getRec == 100)
			getRec = 0;
		else if (getRec > 100)
			getRec = 1;
		else if (getRec < 100)
			getRec = -1;
	
	return getRec;
}