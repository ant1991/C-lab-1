#include <stdio.h>
#include "task1.h"

   int main()
   {
      float height = 0;
      float weight = 0;
      char gender;
      gender='m';
      gender='w';

      printf("Введите ваш пол 'm' или 'w', рост в см и вес в кг: \n");
      scanf("%c, %f, %f", &gender, &height, &weight);
      
      int getRecommendation(char gender, float height, float weight);
      if(getRecommendation(gender, height, weight) == 0)
          printf("У вас идеальный вес!\n");
      else
          if(getRecommendation(gender, height, weight) == -1)
              printf("Недостаточный вес\n");
          else
              if(getRecommendation(gender, height, weight) == 1)
                  printf("Избыточный вес\n");
      
      return 0;
   }
