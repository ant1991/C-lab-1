#include <stdio.h>
#include "task2.h"

int main()
{
    int hour = 0;
    int min = 0;

    printf("Enter time (hh:mm): \n");
    scanf("%d:%d", &hour, &min);
    printf("\n%s", greet(hour, min));

    return 0;

}
