#include<stdio.h>

void main()
{
	int arr[3];
	
	printf("Enter 3 numbers : ");
	
	for(int i=0;i<3;i++)
		scanf("%d",&arr[i]);
		
		int flag=0;
		printf("Prime numbers are : ");
		for(int i=0;i<3;i++)
		{
			for(int j=2;j<arr[i];j++)
			{
				if(arr[i]%j==0)
				flag=1;
				break;
					
			}
			 if(flag==0)
			printf("%d ",arr[i]);
		}
		
		
}