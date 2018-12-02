#pragma warning(disable:4996)
#include<stdio.h>
#include"task2.h"

int main()
{
	int hh = 0;
	int mm = 0;
	int ss = 0;
	printf("what time is it now? hh:mm:ss  ");
	scanf("%d:%d:%d", &hh , &mm , &ss );
	//printf("hh=%d,mm=%d, ss=%d\n", hh, mm, ss);
	printf("%s", greet(hh, mm));
	return 0;
}