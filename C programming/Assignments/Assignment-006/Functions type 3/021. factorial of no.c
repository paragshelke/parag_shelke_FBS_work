#include<stdio.h>

int factorial(int);

int main ()
{
		int n;
	printf("enter a number ");
	scanf("%d",&n);
	
	factorial(n);
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

    printf(" factorial of 5 is %d",x);
}