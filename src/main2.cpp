#include "task2.h"
#include <stdio.h>

int main()
{
	int hour = 0;
	int min = 0;
	int sec = 0;
	printf ("Enter time hh:mm\n");
	scanf ("%d:%d", &hour, &min, &sec);
	printf(greet(hour, min));
	
	return 0;
}
		

		


	

	
		
		
		
		