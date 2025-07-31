#include<stdio.h>
void common_element(int *,int *);
void main()
{
	int arr[]={1,2,3,4,5};
	int brr[]={1,6,7,3,2};
	
	common_element(arr,brr);	
}
void common_element(int *arr,int *brr)
{
	int flag=0;
	printf("common elements are : ");
	for(int i=0;i<5;i++)
	{
		for(int j=0;j<5;j++)
		{
				if(arr[i]==brr[j])
				{		
					printf("%d ",arr[i]);
					flag=1;
				}
		}
	}
	if(flag==0)
		printf("no common elements");
}