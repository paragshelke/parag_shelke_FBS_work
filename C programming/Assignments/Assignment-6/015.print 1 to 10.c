#include<stdio.h>

void print();

void main()
{
	print();
}

void print()
{
	int a=1;
	
	while(a<=10)
	{
		printf("%d ",a);
		
		a++;
	}
}