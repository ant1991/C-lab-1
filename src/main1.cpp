#include "task1.h"
#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS


int main()
{
	char gender;
	int height, weight,ans;
	printf("Input gender, height,weight: ");
	scanf("%c %d %d", &gender, &height, &weight);
	ans = getRecommendation(gender, height, weight);
	switch (ans)
	{
		case 0:
			printf("All ok\n");
			break;
		case 1:
			printf("stop eating\n");
			break;
		case -1:
			printf("let's go to lunch\n");
			break;
	}
	return 0;
	
}