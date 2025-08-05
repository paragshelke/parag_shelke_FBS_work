#include<stdio.h>
#include<stdlib.h>
void main() 
{
	int *par=(int*)malloc(sizeof(int)*3);
	
	printf("Enter 3 numbers : ");
	
	for(int i=0;i<3;i++)
	scanf("%d",&par[i]);
	
	int n;
	printf("Enter number to search : ");
	
	scanf("%d",&n);
	
	int i=0,flag=0;
	for(i=0;i<3;i++)
	{
		if(par[i]==n)
		{
	        flag=1;
		break;
		}
	}
	if(flag==1)
	printf("Number found at index %d",i);
	else
	printf("Number is not in the array");
}
