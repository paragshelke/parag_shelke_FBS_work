#include<stdio.h>

int table();

int main()
{
	int n=5;
	printf("enter a number ");
	scanf("%d",&n);
	
	table(n);
	
}

int table(int n)
{
	int a=1,x; 
	
	while(a<=10)
	{
	    x=n*a;
		
		printf("%d ",x);
		a++;
	}

}