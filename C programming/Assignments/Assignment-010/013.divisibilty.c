#include <stdio.h>
void div(int*);

void main()
{
	int no;
	printf("enter a no");
	scanf("%d",&no);

div(&no);
}


void div(int* no)
{
		
	if(*no%3==0)
	{
		if(*no%5==0)
		{
			printf("divisible by both");
		}
		else
		{
			printf(" divisible by 3 but not by 5");
		}
	}
	else
	{
		if(*no%5==0)
		{
					printf(" divisible by 5 but not by 3");

		}
		else 
		{
			printf("  divisible by none ");
		}
	}
}