#include<stdio.h>

int type(int,int,int);

void main()
{
	int a,b,c;
	printf("enter three sides of triangle");
	scanf("%d %d %d",&a,&b,&c);
	
	int x=type(a,b,c);
	
		if(x==1)
	{
		printf("Triangle is equilateral");
	}
	else
	{
		if(x==2)
		{
			printf("Triangle is isosceles");
		}
		else
		{
			printf("Triangle is scalene");
		}
	}	
	
	
}

int type(int a,int b,int c)
{
		if(a==b&&a==c)
	{
		return 1;
	}
	else
	{
		if(a==b||b==c||c==a)
		{
		return 2;
		}
		else
		{
			return 3;
		}
	}	
}