#include <stdio.h>

void main()
 {
    int mark1 = 75;
    int mark2 = 85;
    int mark3 = 90;
    int mark4 = 80;
    int mark5 = 70;
    int total_marks;
    float percentage;

    total_marks = mark1 + mark2 + mark3 + mark4 + mark5;
    percentage = (total_marks / 500.0) * 100;

    printf("Total marks = %d", total_marks);
    printf("\nPercentage = %f", percentage);
}


