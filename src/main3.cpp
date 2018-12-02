/*программa, которая переводит значение угла из градусов в радианы, и, наоборот,
в зависимости от символа при вводе.
Например: 45.00D - означает значение в градусах, а 45.00R - в радианах.
Ввод данных осуществляется по шаблону %f%c
	Пояснение
Программа должна состоять из двух функций :
char * convert(char buf[], double angle, char type)
main() - организация диалога
Функция convert должна заполнять буфер buf строкой, содержащей значение угла
в градусах или радианах, в зависимости от значений входных параметров.
Пример : convert(buf, 180.0, 'D') выдает строку : 3.14159R.Пример : convert(buf, 3.14159, 'R')
выдает строку : 180.0D.
*/
#pragma warning(disable:4996)
#include<stdio.h>
#include "task3.h"
int main()
	{
	float angle = 0;
	char type;
	char buf[15];
	printf("Enter value of angle and unit \nR if  value in radians \nD - if value in degrees\nvalue is: ");
	scanf("%f%c", &angle, &type);
	//printf("\n value : %.2f%c", angle, type);
	printf("\n value : %s", convert(buf,angle,type));
	}