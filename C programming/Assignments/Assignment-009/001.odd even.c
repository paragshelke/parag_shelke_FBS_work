#include<stdio.h>

void oddeven(int ,int *);
void main()
{
	int n;
	printf("enter size of array : ");
	scanf("%d",&n);
	
	int arr[n];
	printf("enter %d numbers in array : ",n);
	for(int i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	oddeven(n,arr);		
}

void oddeven(int n,int *arr)
{
	printf("\neven numbers are : ");
	for(int i=0;i<n;i++)
	{
		if(i%2==0)
		printf("%d ",arr[i]);	
	}
	
		printf("\nodd numbers are : ");
		for(int i=0;i<n;i++)
	{
		if(i%2!=0)
		printf("%d ",arr[i]);	
	}
	
}