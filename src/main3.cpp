#include <stdio.h>
#include "task3.h"
int main()
{
    float angle;
    char type;
    char buf[30];
    printf("Input angle (like '25.00R or 25.00D'):");
    scanf("%f%c", &angle, &type);
    printf("%s\n", convert(buf, angle, type));
    
}
