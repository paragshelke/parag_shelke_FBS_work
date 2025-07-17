#include<stdio.h>

void table(int*);

void main()
{
	int n=5;
	printf("enter a number ");
	scanf("%d",&n);
	
	table(&n);
	
}

void table(int* n)
{
	int a=1,x; 
	
	while(a<=10)
	{
	    x=*n*a;
		
		printf("%d ",x);
		a++;
	}

}