/*
Написать программу, которая переводит рост из американской 
системы (футы, дюймы) в европейскую (сантиметры). Данные вводятся 
в виде двух целых чисел, выводятся в виде вещественного
числа с точностью до 1 знака. 1 фут = 12 дюймов. 
1 дюйм = 2.54 см.
*/


#include <stdio.h>
#include "task4.h"

int main()
{
	int feet = 0;
	int inches = 0;

	printf("Enter your height in the format: feet'inches \n");
	scanf("%d'%d", &feet, &inches);

	// проверка корректности ввода роста:
	if (feet == 0 || inches == 0)
	{
		printf("Enter your height information correctly!!! \n");
		return 1;
	}

	printf("Your height is: %.1f sm. \n", convert(feet, inches));
	
	return 0;
}