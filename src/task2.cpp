#include <stdio.h>

const char* greet(int hour, int min)
{
	if (hour >= 0 && hour < 6)
		return "Good night!";
	else if (hour > 5 && hour < 11)
		return "Good morning!";
	else if (hour > 10 && hour < 18)
		return "Good day!";
	else if (hour > 17 && hour < 24)
		return "Good evening!";
	else
		return "Uncorrect time!";


}