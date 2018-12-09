#include <stdio.h>
#include "task2.h"

void clean_stdin()
{
	int c;
	do
		c = getchar();
	while (c != '\n'&&c != EOF);
}


int main()
{
	int hour = 0;
	int min = 0;
	int sec = 0;
	while (1)
	{

		printf("Enter Hours:Minutes:Seconds:");
		int result=scanf("%d:%d:%d", &hour, &min, &sec);
		if (result !=3|| hour < 0 || hour >= 24 || min < 0 || min >= 60 || sec < 0 || sec >= 60)
		{
			printf("Incorrect time!\n");
			clean_stdin();
		}
		else
			break;
	}
	printf(greet(hour, min));

	return 0;
}