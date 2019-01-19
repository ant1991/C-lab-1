#define _CRT_SECURE_NO_WARNINGS
#include "task3.h"
#include <stdio.h>

int main() {
	puts("Input grads in x.xD format\nOr\nInput radians in x.xR format");
	double angle;
	char type;
	char buf[20];
	scanf("%lf%c", &angle, &type);
	printf (convert(buf, angle, type));

	return 0;
}