#include <stdio.h>
#include "task2.h"


int main()
{
	int hour;
	int min;

	printf("Enter current time(hh:mm:ss): ");
	scanf("%d:%d", &hour, &min);
	greet(hour, min);
	printf(greet(hour, min));
	return 0;
}