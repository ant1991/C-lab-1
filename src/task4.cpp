#include "task4.h"
#include <stdio.h>

float convert(int feet, int inches)
{
	float result = (feet * 12 * 2.54 + inches * 2.54);
	return result;
}