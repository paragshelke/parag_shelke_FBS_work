#include<stdio.h>

void elg(int,int *);
void main()
{	
	int n;
	printf("Enter size of array : ");
	scanf("%d",&n);
	
	int arr[n];
	printf("Enter %d ages : ",n);
	for(int i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	elg(n,arr);
}

void elg(int n,int *arr)
{
	printf("\nages eligible are : ");
	for(int i=0;i<n;i++)
	{
		if(arr[i]>=18)
		printf("%d ",arr[i]);

	}
	
		printf("\nages not eligible are : ");
	for(int i=0;i<n;i++)
	{
		if(arr[i]<18)
		printf("%d ",arr[i]);

	}
	
	
}