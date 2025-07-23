#include<stdio.h>

void strong(int ,int *);
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
	strong(n,arr);
}
void strong(int n,int *arr)
{
	int flag=0;
	
	printf("\nstrong numbers are : ");
	for(int i=0;i<n;i++)
	{
		int temp=arr[i];
		int r,sum=0;
		
		while(temp>0)
		{
			r=temp%10;
			
			int fact=1;
			for(int j=1;j<=r;j++)
			{
				fact=fact*j;
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