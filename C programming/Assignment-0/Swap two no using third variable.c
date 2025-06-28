#include <stdio.h>

void main() 

{
    int a = 10;
    int b = 20;
    int temp;

    printf("Before swapping:\n");
    printf("a = %d\n", a);
    printf("b = %d\n", b);

    temp = a;
    a = b;
    b = temp;

    printf("After swapping:\n");
    printf("a = %d\n", a);
    printf("b = %d\n", b);
}
