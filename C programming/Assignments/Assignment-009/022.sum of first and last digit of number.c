#include<stdio.h>

void sum(int ,int *);
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
	sum(n,arr);
}

void sum(int n,int *arr)
{
	printf("sum of first and last digit of number is : ");
	for(int i=0;i<n;i++)
	{
		int  lastdigit,firstdigit=arr[i]%10;
		while(arr[i]>0)
		{
			 lastdigit=arr[i]%10;
			arr[i]=arr[i]/10;
		}
		int sum=firstdigit+lastdigit;
		
		printf("%d ",sum);
				
	}
}