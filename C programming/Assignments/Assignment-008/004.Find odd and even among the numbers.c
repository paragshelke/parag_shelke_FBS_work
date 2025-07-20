#include<stdio.h>

void main()
{
	int arr[3];
	
	printf("Enter 3 numbers : ");
	
	for(int i=0;i<3;i++)
		scanf("%d",&arr[i]);
	
	printf("Even numbers are : ");	
	 for(int i=0;i<3;i++)
	 {
	 	if(arr[i]%2==0)
	 printf("%d ",arr[i]);
	}
	
	printf("\nodd numbers are : ");	
	for(int i=0;i<3;i++)
	 {
	 	if(arr[i]%2!=0)
	 printf("%d ",arr[i]);
	}	
}