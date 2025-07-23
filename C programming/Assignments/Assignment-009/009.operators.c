#include<stdio.h>

void opr(char ,int *);
void main()
{	
	int arr[2];
	printf("Enter two numbers : ");
		for(int i=0;i<2;i++)
	{
		scanf("%d",&arr[i]);
	}
	
	char o;
	printf("Enter operator : ");
	scanf(" %c",&o);

	opr(o,arr);
}
void opr(char o,int *arr)
{
	int result;
	if(o=='+')
	{
		result=arr[0]+arr[1];
	}
	if(o=='-')
	{
		result=arr[0]-arr[1];
	}	
	if(o=='*')
	{
		result=arr[0]*arr[1];
	}
	if(o=='/')
	{
		result=arr[0]/arr[1];
	}
	if(o=='%')
	{
		result=arr[0]%arr[1];
	}
	printf("%d",result);
}