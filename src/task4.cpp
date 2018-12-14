#include "task4.h"


float convert(int feet, int inches)
{
	float convert;
	convert = (12 * feet + inches)*2.54;
	return convert;
}