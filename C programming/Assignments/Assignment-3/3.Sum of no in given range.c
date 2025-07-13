#include<stdio.h>

void main()
{	
	int a,b;
	printf("enter a range a and b ");
	scanf("%d%d",&a,&b);
	
	int sum=0;
 	int i=a;
	 
	while(i<=b)
	{
	
	sum=sum + i;
	
	i++;	
	}
	 printf("Sum = %d", sum);	
}

