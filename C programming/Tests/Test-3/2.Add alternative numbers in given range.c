#include<stdio.h>

void main()
{
	int a,b,sum=0;
	printf("enter a range a and b : ");
	scanf("%d%d",&a,&b);
	
	for(int i=a;i<=b;i=i+2)
	{
		sum=sum+i;
		
	}
		printf("sum=%d",sum);
		
	}