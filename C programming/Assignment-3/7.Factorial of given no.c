#include <stdio.h>

void main() 
{
    int n = 4;
    int x = 1;
    int i = 1;
    

    while (i<=n) 
	{
        x=x*i;
        i++;
    }

    printf(" factorial of 5 is %d",x);
}
