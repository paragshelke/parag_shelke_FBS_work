#include<stdio.h>

void main()
{
	int a,b;
	
	printf("Enter starting number and ending number : ");
	scanf("%d %d",&a,&b);
	
	
	for(int i=a;i<=b;i++)
	{
		printf("\nfactors of %d are : ",i);
		for(int j=1;j<=i;j++)
		{
				if(i%j==0)
				printf("%d ",j);
		}
	}
}