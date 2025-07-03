#include <stdio.h>

void main() 
{
    int n = 7;
    int i = 2;
    int x = 1;

    while (i <= n / 2)
    {
        if (n % i == 0)
		{
            x = 0;
            break;
        }
        i++;
    }

    if (x)
        printf("%d is a prime number", n);
    else
        printf("%d is not a prime number", n);
}
