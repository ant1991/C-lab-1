#define PI 3.14159

char * convert(char buf[], double angle, char type)
{
	if (type == 'D')
		sprintf(buf, "%0.5lf%c", angle*PI / 180, 'R');
	else if (type == 'R')
		sprintf(buf, "%0.1lf%c", 180 * angle / PI, 'D');
	return buf;
}
