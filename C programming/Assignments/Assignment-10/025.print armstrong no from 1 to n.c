#include<stdio.h>

void all_armstrong(int*);

void main ()
{
		int n;
	printf("enter a range n ");
	scanf("%d",&n);
	
	all_armstrong(&n);
}

void all_armstrong(int* n)
{
	int i=1;
	while(i<=*n)
	 {
		int	temp=i;
		int sum=0;

		int count=0;
		while(temp>0)
		 {
			count++;
			temp=temp/10;
		}

		temp=i;

		while(temp>0) 
		{
		int	r=temp%10;

			int fact=1;
			for(int j=1; j<=count; j++)
			{
				fact=fact*r;
			}
			sum=sum+fact;
			temp=temp/10;
		}
		if(sum==i)
		{
			printf("%d ",i);	
		}
		i++;
	}
}