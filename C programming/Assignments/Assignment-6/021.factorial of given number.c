#include<stdio.h>

void factorial();

void main()
{
	factorial();
}

void factorial()
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