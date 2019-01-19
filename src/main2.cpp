#define _CRT_SECURE_NO_WARNINGS
#include "task2.h"
#include <stdio.h>
#include <time.h>

int main() {
	puts("Input time in HH:MM format");
	int hour, min;
	scanf("%d:%d", &hour, &min);
	const char* time = greet(hour, min);
	puts(time);
	return 0;
}