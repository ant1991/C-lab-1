#include "task2.h"
const char* greet(int hour, int min)
{
	if (hour >= 6 && hour < 11 && min <= 59 && min >= 0)
		return "Good morning!";
	else if (hour >= 11 && hour < 18 && min <= 59 && min >= 0)
		return "Good day!";
	else if (hour >= 18 && hour <= 23 && min <= 59 && min >= 0)
		return "Good evening!";
	else if (hour >= 0 && hour <= 6 && min <= 59 && min >= 0)
		return "Good night!";
	else
		return "Uncorrect time!";
}