#include<stdio.h>

void type(int*,int*,int*);

void main()
{
	int a,b,c;
	printf("enter three sides of triangle");
	scanf("%d %d %d",&a,&b,&c);
	
	type(&a,&b,&c);
}

void type(int* a,int* b,int* c)
{
		if(*a==*b&&*a==*c)
	{
		printf("Triangle is equilateral");
	}
	else
	{
		if(*a==*b||*b==*c||*c==*a)
		{
			printf("Triangle is isosceles");
		}
		else
		{
			printf("Triangle is scalene");
		}
	}	
}