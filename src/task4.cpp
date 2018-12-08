#include <stdio.h>
static const float fee = 12, in=2.54;

float convert(int feet, int inches)
{
		float c = 0, d;
	c = (float)feet*fee;
	d = (c + (float)inches) * in;
	return d;
}