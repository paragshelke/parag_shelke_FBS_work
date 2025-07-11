#include<stdio.h>
int sum();
void main()
{	
	int x;
	x=sum();
	printf("Sum of your number is %d",x);
}
int sum()
{
	int sum=0;
 	int a=1;
	 
	while(a<=5)
	{
	
	sum=sum + a;
	
	a++;	
	}
	 return sum;	
}