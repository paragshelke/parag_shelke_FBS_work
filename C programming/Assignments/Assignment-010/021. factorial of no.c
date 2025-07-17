#include<stdio.h>

void factorial(int*);

void main ()
{
		int n;
	printf("enter a number ");
	scanf("%d",&n);
	
	factorial(&n);
}

void factorial(int* n)
{
	int x = 1;
    int a = 1;
    

    while (a<=*n) 
	{
        x=x*a;
        a++;
    }

    printf(" factorial is %d",x);
}