#include<stdio.h>

void isarmstrong();

void main()
{
	isarmstrong();
}

void isarmstrong()
{
		int n;
	printf("enter a no ");
	scanf("%d",&n);
	
	int r,sum=0,temp=n;
	
	int count=0;
	while(n>0)
		{
			n=n/10;
			count++;
	} 
	n=temp;
	while(n>0)
	{
		r=n%10;
		int fact =1;
		for(int i=1;i<=count;i++)
		{
			fact=fact*r;
	    }
			sum=sum+fact;
			n=n/10;
    }
			
	if(sum==temp)
	{
		printf("number is armstrong");
	}
	else 
	{
	printf("number is not armstrong");
	}
}