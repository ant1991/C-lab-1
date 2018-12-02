#include <stdio.h>
#include "Task1.h"
int main()
{

		char gender = 'm';
		printf("Enter 'm' or 'w': ");
		scanf("%c", &gender);
		int height = 0;
		printf("Enter your height: ");
		scanf("%d", &height);
		int weight = 0;
		printf("Enter your weight: ");
		scanf("%d", &weight);

		
			return (getRecommendation(char(gender), float(height), float(weight)));
		
		 
}