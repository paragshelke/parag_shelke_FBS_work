#include<stdio.h>

void perfect(int ,int *);
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
	perfect(n,arr);
}
void perfect(int n,int *arr)
{
	int flag=0;
	
	printf("\nperfect numbers are : ");
	for(int i=0;i<n;i++)
	{
		int temp=arr[i];
		int sum=0;
		
		for(int j=1;j<temp;j++)
		{
			if(temp%j==0)
			{
				sum=sum+j;
			}
		}
		if(sum==arr[i])
		{
			printf("%d ",arr[i]);
			flag=1;
		}
	}
	if(flag==0)
	{
		printf("none");
	}
}