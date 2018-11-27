#include <stdio.h>
#include "task2.h"


int main()
{
	
	
	
	int tmin = 0;
	int thour = 0;

    printf("Enter a time hh:mm :");
	scanf("%d:%d", &thour, &tmin);
	printf(greet(thour,tmin));
	return 0;
	

	
}