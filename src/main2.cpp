/*
Написать программу, которая запрашивает текущее время в
формате ЧЧ:ММ:СС, а затем выводит приветствие в зависимости от
указанного времени ("Доброе утро "Добрый день"и т.д.)
*/


#include <stdio.h>
#include "task2.h"

int main()
{
	int hour = -1;
	int min = -1;

	printf("Enter the time in the format hh:mm \n");
	scanf("%d:%d", &hour, &min);
	printf("%s \n", greet(hour, min));

	return 0;
}