#include <stdio.h>
#include <math.h>
#include "task3.h"

int main()
{
   char buf[256];
   double angle;
   char type;
   type = 'D';
   type = 'R';

   printf("Введите угол в градусах __.__D или радианах __.__R: \n");
   scanf("%lf%c", &angle, &type);
   convert(buf, angle, type);
   puts(buf);

   return 0;
}
