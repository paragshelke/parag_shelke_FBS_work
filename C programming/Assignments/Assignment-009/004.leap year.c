#include<stdio.h>

void leapyear(int ,int *);
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
	
	leapyear(n,arr);
	
}

void leapyear(int n,int *arr)
{
	int flag=0;
	
	printf("\nleap years are : ");
	for(int i=0;i<n;i++)
	{
		if(arr[i]%4==0 && arr[i]%100!=0 || arr[i]%400==0)
		{
			flag=1;
			printf("%d",arr[i]);
		}
	}
	if(flag==0)
	printf("none");
}