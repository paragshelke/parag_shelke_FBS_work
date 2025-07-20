#include<stdio.h>

void main()
{
	int arr[4];
	int par[4];
	int omk[4];
	printf("Enter 4 numbers : ");
	
	    for(int i=0;i<4;i++)
		scanf("%d",&arr[i]);
		
	printf("Enter 4 numbers : ");
		
		for(int i=0;i<4;i++)
		scanf("%d",&par[i]);
		
		

		for(int i=0;i<4;i++)
		{
			omk[i]=arr[i]+par[i];
			
		}
		
		for(int i=0;i<4;i++)
		printf("%d ",omk[i]);
		
		
		
		
		
}