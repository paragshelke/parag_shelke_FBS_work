#include <stdio.h>

void main()
 {
    int total_minutes = 135;
    int hours, minutes;

    hours = total_minutes / 60;
    minutes = total_minutes % 60;

    printf("Hours = %d", hours);
    printf("\n Remaining minutes = %d", minutes);
}
