#include<stdio.h>

void main()
{
	int n,expression;
	printf("Enter a number and expression: ");
	scanf("%d %d",&n,&expression);
	
	int fact=1;
	for(int i=1;i<=expression;i++)
	{
		 fact=fact*n;
	}
	printf("power of %d is %d ",n,fact);
	
}