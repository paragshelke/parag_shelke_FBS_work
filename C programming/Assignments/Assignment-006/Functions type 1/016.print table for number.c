#include<stdio.h>

void print_table();

void main()
{
	print_table();
}

void print_table()
{
		int n=5;
	int a=1,x; 
	
	while(a<=10)
	{
	    x=n*a;
		
			printf("%d ",x);
		a++;
	}


}