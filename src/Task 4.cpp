float convert(int feet, int inches)
{
	float cm = 0;
	cm = (feet*12+inches)*2.54;
	return cm;
}