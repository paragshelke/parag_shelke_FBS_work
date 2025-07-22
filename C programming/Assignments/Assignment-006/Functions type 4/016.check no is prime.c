#include<stdio.h>

int isprime(int);

void main ()
{
		int n;
	printf("enter a number ");
	scanf("%d",&n);
	
	int x=isprime(n);
	
	    if (x==1)
        printf("%d is a prime number", n);
    else
        printf("%d is not a prime number", n);
	

}

int isprime(int n)
{
	
    int i = 2;
    int x = 0;

    while (i <= n / 2)
    {
        if (n % i == 0)
		{
            x = 1;
            break;
        }
        i++;
    }

    if (x==0)
        return 1;
    else
        return 2;
}
