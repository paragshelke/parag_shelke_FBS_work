#include<stdio.h>

void range(int*);

void  main()
{
		int a=1;
		
		range(&a);
}

void range(int* a)
{
	
	while(*a<=10)
	{
		printf("%d ",*a);
		
		(*a)++;
	}
}