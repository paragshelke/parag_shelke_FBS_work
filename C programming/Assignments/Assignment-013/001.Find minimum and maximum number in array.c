#include<stdio.h>
#include<stdlib.h>
void main()
{
	int n;
	printf("Enter size of your array : ");
	scanf("%d",&n);
	
	int *arr=(int*)malloc(sizeof(int)*n);
	printf("Enter %d numbers : ");
	for(int i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	int max=arr[0];
	int min=arr[0];
	for(int i=0;i<n;i++)
	{
		if(max<arr[i])
		{
			max=arr[i];
		}
		if(min>arr[i])
		{
			min=arr[i];
		}
	}
	printf("maximum number is %d",max);
	printf("\nminium number is %d",min);
}