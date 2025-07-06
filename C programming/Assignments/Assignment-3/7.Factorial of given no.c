#include <stdio.h>

void main() 
{
    int n = 4;
    int x = 1;
    int a = 1;
    

    while (a<=n) 
	{
        x=x*a;
        a++;
    }

    printf(" factorial of 5 is %d",x);
}
