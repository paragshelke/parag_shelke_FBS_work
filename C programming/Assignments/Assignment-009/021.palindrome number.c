#include<stdio.h>
void palindrome(int ,int *);
void main()
{
	int n;
	printf("enter size of array : ");
	scanf("%d",&n);
	
	int arr[n];
	printf("enter %d numbers in array : ");
	for(int i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	
	palindrome(n,arr);
}

void palindrome(int n,int *arr)
{	
	int found = 0;
	printf("palindrome numbers are : ");

	for(int i=0;i<n;i++)
	{
		int temp=arr[i],r,rev=0;
		
		while(temp>0)
		{
			 r=temp%10;
			 rev=rev*10+r;
			 temp=temp/10;
		}
		if(rev==arr[i])
		{
		printf("%d ",arr[i]);
			found=1;
		}

	}
	if(found==0)
	printf("none");

}