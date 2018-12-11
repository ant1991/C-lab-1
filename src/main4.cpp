#include <stdio.h>
#include "task4.h"


int main()

{
	int feet = 0;
	int inches = 0;
	
	printf("Enter value in feet and inches (For Example: 15'60) : ");
	scanf("%d'%d",&feet,&inches);
	printf("%.1fcm\n",convert(feet,inches));
	return 0;
}