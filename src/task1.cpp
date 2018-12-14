#include <stdlib.h>
int getRecommendation(char gender, float height, float weight)
{
	int dif,ans;
	ans = height - weight - (gender == 'm' ? 100 : 110);
	if (ans != 0)
		ans = ans / abs(ans);
	return -ans;

}