#include <stdio.h>
#include "task3.h"
#define _USE_MATH_DEFINES


int main()

{
	double angle = 0;
	char type = 0;
	char buf[100];

	printf("Vvedite chislo gradusov ili radian v formate 45.00D ili 45.00R: ");
	scanf("%lf%c", &angle, &type);
	printf("%s", convert(buf, angle, type));
	return 0;

}