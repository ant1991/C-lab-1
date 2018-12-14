#include "task4.h"
float convert(int feet, int inches)
{
	float cm = 0;
	inches = inches + (feet * 12);
	cm = ((float)inches) * 2.54;
	return cm;
}