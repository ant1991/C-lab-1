#include <stdio.h>
#include "task1.h"

int main(){

	char gender = 0;
	float height = 0, weight = 0;

	printf("\nWrite your gender:  ");
	scanf("%c", &gender);
	printf("\nWrite your height:  ");
	scanf("%f", &height);
	printf("\nWrite your weight:  ");
	scanf("%f", &weight);
	int recom = getRecommendation(gender, height, weight);
	recom == 0 ? printf("Norm\n") : (recom == 1 ? printf("Lose weight\n") : printf("Get fat\n"));

	return 0;
}