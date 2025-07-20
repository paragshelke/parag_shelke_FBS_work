#include<stdio.h>

int getsum(int);

int main ()
{
	int n;
	printf("enter a number ");
	scanf("%d",&n);
	
	int x=getsum(n);
	
	printf("sum=%d",x);
	
	getsum(n);
}

int getsum(int n)
{
	
	int sum=0;
 	int a=1;
	 
	while(a<=n)
	{
	
	sum=sum + a;
	
	a++;	
	}
	return sum;
}