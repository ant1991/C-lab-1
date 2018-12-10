#include "task2.h"
#include <math.h>
#define _USE_MATH_DEFINES



const char * greet(int hour, int min)
{
	if (hour < 0 || hour >= 24 || min < 0 || min >= 60)
	{
		return "Uncorrect time!";
	}

	else if (hour >= 00 && hour <= 05 )
	{
		return "Good night!";
	}
	else if (hour >= 06 && hour <= 10)
	{
		return "Good morning!";
	}
	else if (hour >= 11 && hour <= 17)
	{
		return "Good day!";
	}
	else if (hour >= 18 && hour <= 23)
	{
		return "Good evening!";
	}

}

/*
 - "ночь" - с 00:00 до 06:00
  - "утро" - с 06:00 до 11:00
  - "день" - с 11:00 до 18:00
  - "вечер" - с 18:00 до 00:00
*/