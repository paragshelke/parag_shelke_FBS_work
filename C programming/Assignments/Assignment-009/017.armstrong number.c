#include<stdio.h>

void arm(int ,int *);
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
	arm(n,arr);
}

void arm(int n,int *arr)
{
	int flag=0;
	
	printf("\narmstrong numbers are : ");
	for(int i=0;i<n;i++)
	{
		int temp=arr[i];
		int sum=0,r;
		
		int count=0;
		while(temp>0)
		{
			count++;
			temp=temp/10;
		}
		
		temp=arr[i];
		
		while(temp>0)
		{
			r=temp%10;
			
			int fact=1;
			for(int j=1;j<=count;j++)
			{
				fact=fact*r;
			}
			sum=sum+fact;
			temp=temp/10;
		}
		if(sum==arr[i])
		{
		printf("%d ",arr[i]);
		flag=1;
		}
	
	}
	if(flag==0)
	printf("none");
	
	
}