float convert(int feet, int inches)
{
	const int INCHES_IN_FEET = 12;
	const float SM_IN_INCHES = 2.54;

	return feet * INCHES_IN_FEET * SM_IN_INCHES + inches * SM_IN_INCHES;
}