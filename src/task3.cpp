#include <stdio.h>

char * convert(char buf[], double angle, char type)
{
    float corner;
    if (type == 'R') {
        corner = angle * 3.1415 / 180;
        sprintf(buf, "%6.4fD", corner);
    } else if (type == 'D') {
        corner = angle * 180 / 3.1415;
        sprintf(buf, "%6.4fR", corner);
    }
    return buf;
    
}

