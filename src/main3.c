/*
Ќаписать программу, котора€ переводит значение угла из градусов 
в радианы, и наоборот, в зависимости от символа при вводе.
Ќапример: 45.00D - означает значение в градусах, а 45.00R - 
в радианах. ¬вод данных осуществл€етс€ по шаблону %f%c
*/


#include <stdio.h>
#include <ctype.h> // for toupper (преобразование строчных букв в прописные)
#include "task3.h"

int main()
{
	double angle;
	char type;
	char buf[15];

	printf("Enter the angle in degrees or radians. \n");
	printf("For example: 3.14R or 180D \n");
	scanf("%lf%c", &angle, &type);
	type = toupper(type);

	printf("%s \n", convert(buf, angle, type));

	return 0;
}