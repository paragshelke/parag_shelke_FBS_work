#include<stdio.h>

void factorial(int ,int *);
void main()
{	
	int n;
	printf("Enter size of array : ");
	scanf("%d",&n);
	
	int arr[n];
	printf("Enter %d numbers : ",n);
	for(int i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	factorial(n,arr);
}

void factorial(int n,int *arr)
{
	printf("factorial of numbers are : ");
	for(int i=0;i<n;i++)
	{
		int fact=1;
		for(int j=1;j<=arr[i];j++)
		{
			fact=fact*j;
		}
		printf("%d ",fact);
	}
}