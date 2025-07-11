#include<stdio.h>

void getsum();

void main()
{
	getsum();
}

void getsum()
{
	int sum=0;
 	int a=1;
	 
	while(a<=5)
	{
	
	sum=sum + a;
	
	a++;	
	}
	 printf("Sum = %d", sum);
}