#include<stdio.h>
void prime(int ,int *);
void main()
{
	int n;
	printf("enter size of array : ");
	scanf("%d",&n);
	
	int arr[n];
	printf("enter %d numbers : ",n);
	for(int i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	
	prime(n,arr);
}
void prime(int n,int *arr)
{
	int flag=1;
	printf("prime numbers are : ");
	for(int i=0;i<n;i++)
	{
		for(int j=2;j<arr[i]/2;j++)
		{
			if(arr[i]%j==0)
			flag=0;
			break;	
		}
		if(flag==1)
		{
		printf("%d",arr[i]);	
		}	
	}
	if(flag==0)
	printf("none");
	
}