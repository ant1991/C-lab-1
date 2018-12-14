#define FINC 12
#define INCSM 2.54

float convert(int feet, int inches)
{
	float sm;
	sm = (float)(((feet*FINC) + inches)*INCSM);
	return sm;
}