#include<stdio.h>

int range(int);

int main()
{
		int a=1;
		
		range(a);
}

int range(int a)
{
	
	
	while(a<=10)
	{
		printf("%d ",a);
		
		a++;
	}
}