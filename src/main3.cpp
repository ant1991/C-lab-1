#include "task3.h"
#include <stdio.h>

int main()
{
	float an;
	char tp,buf[10];
	char* pb;
	printf("Input angle: ");
	scanf("%f%c", &an, &tp);
	pb = convert(buf, an, tp);
	printf("%s", pb);

	return 0;

}