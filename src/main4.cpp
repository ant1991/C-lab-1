/*программа, которая переводит рост из американской системы(футы, дюймы) в европейскую(сантиметры).
Данные вводятся в виде двух целых чисел, выводятся в виде вещественного
числа с точностью до 1 знака. 1 фут = 12 дюймов. 1 дюйм = 2.54см.
Ввод данных в программу осуществляется в виде : футы'дюймы, например 5'11.*/

#pragma warning(disable:4996)
#include <stdio.h>
#include "task4.h"
int main()
{
	int feet = 0;
	int inches = 0;
	printf("Enter your height  feet'inches: ");
	scanf("%d'%d", &feet, &inches);
	printf("your haight is %d feets and %d inches\n", feet, inches);
	printf("it is %.1f cantimetres\n\n", convert(feet, inches));
}
