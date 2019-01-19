/* Программа запрашивает время в формате ЧЧ:ММ:СС и выводит соответствующее приветствие */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "task2.h"
int main()
{
	int hour = 0, min = 0, sec = 0;

	printf("Enter Time in format: HH:MM:SS \n");
	scanf("%d%d%d", &hour, &min, &sec);

	//Отдельный блок проверки коррестности ввода секунд (в соотв с ТЗ) 
	if ((sec >= 60) || (sec < 0))
	{
		printf("Uncorrect time!");
		return 0;
	}

	printf("\n %s", greet(hour, min));
	return 0;
}