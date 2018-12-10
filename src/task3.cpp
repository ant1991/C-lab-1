#include <stdio.h>
const float PI = 3.14159;

char * convert(char buf[], double angle, char type)
{
   if(type == 'D')
   {
       sprintf(buf, "Угол в %lf%c равен углу %lfR", angle, type, angle*PI/180);
   }
   else
   {
       sprintf(buf, "Угол в %lf%c равен углу %lfD", angle, type, angle*180/PI);
   }

   return buf;
}
