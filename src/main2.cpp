#include <stdio.h>
#include "task2.h"


int main(){
	int hour, min, sec;
	char wel;


	printf("Write time hh:mm:ss  -  ");
	scanf("%d:%d:%d", &hour, &min, &sec);

	printf("%s", greet(hour, min));

	return 0;
}