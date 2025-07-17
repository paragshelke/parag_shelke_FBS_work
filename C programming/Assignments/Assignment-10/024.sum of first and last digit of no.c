#include<stdio.h>

void sum(int*);

void main ()
{
		int n;
	printf("enter a number ");
	scanf("%d",&n);
	
	sum(&n);
}

void sum(int *n)
{
	int lastdigit = *n % 10;
    int firstdigit;
    while(*n>0) 
	{
		firstdigit=*n%10;
        *n = *n / 10;
        
    }
    int sum = firstdigit + lastdigit; 
    
    printf("Sum = %d",sum );
 
}