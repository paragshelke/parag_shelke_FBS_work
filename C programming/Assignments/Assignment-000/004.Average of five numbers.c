#include <stdio.h>

void main()
 {
	int num1,num2,num3,num4,num5;
	
    printf("enter any 5 no : ");
    scanf("%d  %d %d %d %d",&num1,&num2,&num3,&num4,&num5);

    float average;

    average = (num1 + num2 + num3 + num4 + num5)/5;
  
    printf("Average = %f", average);
}
