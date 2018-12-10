#include <stdio.h>
const char * greet(int hour, int min)
{
	if (hour >= 0 && hour < 6)
		return printf ("Good night!");
	else if (hour >= 6 && hour < 11)
		return printf ("Good morning!");
	else if (hour >= 11 && hour < 18)
		return printf ("Good day!");
	else if (hour >= 18 && hour < 24)
		return printf ("Good evening!");
	else
		return printf("Uncorrect time!");
}
