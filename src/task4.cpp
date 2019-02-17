float convert(int feet, int inches)
{
	float height_cm;
	height_cm = (feet * 12 + inches)*2.54;
	return height_cm;
}
