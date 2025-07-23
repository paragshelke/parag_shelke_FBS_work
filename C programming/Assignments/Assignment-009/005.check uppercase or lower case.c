#include<stdio.h>

void casee(int ,char *);

void main()
{
	int n;
	printf("enter size of array : ");
	scanf("%d",&n);
	
	char arr[n];
	printf("enter %d characters in array : ");
	
	for(int i=0;i<n;i++)
	{
	   scanf(" %c",&arr[i]);	
	}
		
	casee(n,arr);
}

void casee(int n,char *arr)
{

		printf("\nupper case characters are : ");
	for(int i=0;i<n;i++)
	{
		if(arr[i]>='A' && arr[i]<='z')
		printf("%c",arr[i]);
	}
	
		printf("\nlower case characters are : ");
	for(int i=0;i<n;i++)
	{
		if(arr[i]>='a' && arr[i]<='z')
		printf("%c",arr[i]);
	}
	
}
