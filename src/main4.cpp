#include <stdio.h>
#include "task4.h"


int main()
{
   int feet, inches;

   printf("Введите длину в виде фут'дюйм: \n");
   scanf("%d'%d", &feet, &inches);

   printf("Длина в см составляет %.2f \n", convert(feet,inches));

   return 0;

}
