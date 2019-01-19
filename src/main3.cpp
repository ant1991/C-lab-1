#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>
#include "task3.h"
#include <stdlib.h>


int main()
{
	int D;
	int R;
	char type;
	float angle = 0;
	char buf[256];
	printf("Enter D or R:\n");
	scanf("%f%c", &angle, &type);
	printf ("%s\n", convert(buf, angle, type));
	return 0;
}