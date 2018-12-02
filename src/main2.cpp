#include <stdio.h>
#include "Task2.h"
int main()
{
	int hour = 0;
	int min = 0;
	printf("Enter curret time (hh:mm:ss): ");
	scanf("%d", &hour, &min);
	
	printf (greet (int(hour), int(min)));

	return 0;
}