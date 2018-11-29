int getRecommendation(char gender, float height, float weight)
{
   if(weight <(height - 100) && gender == 'm')
       return -1;
   else if(weight <(height - 110) && gender == 'w')
       return -1;
   else if (weight >(height - 100) && gender == 'm')
       return 1;
   else if (weight >(height - 110) && gender == 'w')
       return 1;
   else
       return 0;
}
