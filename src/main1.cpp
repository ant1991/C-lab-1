#include "task1.h"
#include <stdio.h>

   int main()
   {
	   char gender;
	   float height=0;
	   float weight=0;

	   printf("Please, enter your gender,height and weight (For example: m,185,82)   ");
	   scanf("%c,%f,%f", &gender,&height,&weight);

	   if (getRecommendation(gender, height, weight)==-1)
	   		   printf("Your weight is too small. You should gain weight.\n");
	   
	   else if (getRecommendation(gender, height, weight)==0)
	   		   printf("Your weight is ideal. Keep track on it!\n");
	   
	   else if (getRecommendation(gender, height, weight)==1)
	   		   printf("Your weight is too big. You should lose weight\n");
	   
	   return 0;
   }