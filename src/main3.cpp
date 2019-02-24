#include "task3.h"
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	puts("Vvedite ugol: ");
	double angle = 0;
	char type = 0;
	char buf[20];
	scanf("%lf%c", &angle, &type);
	char *result = convert(buf,angle, type);
	printf("Znachenie: %s\n", result);
	return 0;
}
