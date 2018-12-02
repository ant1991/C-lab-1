#include <stdio.h>
int getRecommendation(char(gender), float(height), float(weight))
{
	float wom = height - 110;
	float men = height - 100;

	if (weight < wom && gender == 'w')
		return -1;
	else if (weight < men && gender == 'm')
		return -1;
	else if (weight == men && gender == 'm')
		return 0;
	else if (weight == wom && gender == 'w')
		return 0;
	else if (weight > wom && gender == 'w')
		return 1;
	else if (weight > men && gender == 'm')
		return 1;
}
