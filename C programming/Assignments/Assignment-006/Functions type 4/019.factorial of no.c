#include<stdio.h>

int factorial(int);

void main ()
{
		int n;
	printf("enter a number ");
	scanf("%d",&n);
	
	int x=factorial(n);
	printf("%d",x);
	
	
	
	
}

int factorial(int n)
{
	int x = 1;
    int a = 1;
    

    while (a<=n) 
	{
        x=x*a;
        a++;
    }

    return x;
}