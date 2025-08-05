#include<stdio.h>
#include<stdlib.h>
void main()
{
	int* arr=(int*)malloc(sizeof(int)*4);
	int* par=(int*)malloc(sizeof(int)*4);
	int* omk=(int*)malloc(sizeof(int)*4);
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