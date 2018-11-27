#include <stdio.h>
#include <time.h>
#include "task2.h"


int main()
{
	time_t now;
	time(&now);
	struct tm*t = localtime(&now);
	
	int tsec = t->tm_sec;
	int tmin = t->tm_min;
	int thour = t->tm_hour;

    printf("Now is %d:%d:%d\n", thour, tmin, tsec);
	printf(greet(thour,tmin));
	return 0;
	

	
}