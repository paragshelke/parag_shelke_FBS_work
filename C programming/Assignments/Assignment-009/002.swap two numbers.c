#include<stdio.h>

void swap(int *);
void main()
{
	int arr[2];
	printf("enter two numbers in array : ");
	for(int i=0;i<2;i++)
	{
		scanf("%d",&arr[i]);
	}
	swap(arr);
}

void swap(int *arr)
{
		printf("\n before swap arr[0]=%d and arr[1]=%d",arr[0],arr[1]);
		
		int temp=arr[0];
		arr[0]=arr[1];
		arr[1]=temp;

	
		printf("\n after swap arr[0]=%d and arr[1]=%d",arr[0],arr[1]);
}