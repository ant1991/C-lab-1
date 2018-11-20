#include "task2.h"
#include <stdio.h>

int main()
{
	int hour, min, sec;
	printf("what time is it: ");
	scanf("%d:%d:%d", &hour, &min, &sec);
	printf(greet(hour, min));
	return 0;
}