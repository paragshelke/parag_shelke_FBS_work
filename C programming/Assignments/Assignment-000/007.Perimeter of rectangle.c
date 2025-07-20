#include <stdio.h>

void main() 
{
    int length ;
    int width ;
    int perimeter;
    
    printf("enter length : ");
        scanf("%d",&length);
    printf("\nenter width : ");
    scanf("%d",&width);
    

    perimeter = 2 * (length + width);

    printf("\nPerimeter of rectangle = %d", perimeter);
}
