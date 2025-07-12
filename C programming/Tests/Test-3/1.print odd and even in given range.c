#include<stdio.h>

void main()
{
	int a,b;
	
	printf("enter a range a to b: ");
	scanf("%d%d",&a,&b);
	printf("even numbers are : ");

	
	for(int i=a;i<=b;i++)
	{
		if(i%2==0)
			printf("%d ",i);
			
	}
		printf("\nodd numbers are : ");
	
	for(int j=a;j<=b;j++)
	{
		if(j%2==1)
		printf("%d ",j);
	}
	
}