float convert(int feet, int inches)

{
	float cm = 0;

	cm = feet * 30.48 + inches * 2.54;

	return cm;
}