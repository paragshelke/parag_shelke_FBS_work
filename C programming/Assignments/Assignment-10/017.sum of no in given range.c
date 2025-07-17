#include<stdio.h>

void getsum(int*);

void main ()
{
	int n;
	printf("enter a number ");
	scanf("%d",&n);
	
	getsum(&n);
}

void getsum(int* n)
{
	
	int sum=0;
 	int a=1;
	 
	while(a<=*n)
	{
	
	sum=sum + a;
	
	a++;	
	}
	 printf("Sum = %d", sum);
}