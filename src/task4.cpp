#include <stdio.h>

float convert(int feet,int inches)

{
	float result = 0;

	result = ((feet*12)+inches)*2.54;

	/*feet = 12 inches;
	inches = 2.54 cm;*/

	return result;
}