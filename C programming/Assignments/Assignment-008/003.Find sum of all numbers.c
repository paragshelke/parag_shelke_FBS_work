#include<stdio.h>

void main()
{
	int arr[3];
	
	printf("Enter 3 numbers : ");
	
	for(int i=0;i<3;i++)
		scanf("%d",&arr[i]);
		
		int sum=0;
		for(int i=0;i<3;i++)
		{
			sum=sum+arr[i];
		}
		printf("sum of all numbers in array is %d",sum);
		
}