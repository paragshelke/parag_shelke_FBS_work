#include<stdio.h>
#include<stdlib.h>
void main()
{
	int* arr=(int*)malloc(sizeof(int)*5);
	
	printf("Enter 5 numbers : ");
	
	for(int i=0;i<5;i++)
	 scanf("%d",&arr[i]);
	 
	 for(int i=0;i<5;i=i+2)
	 {
	 	printf("%d ",arr[i]);
	 }
		
		
}