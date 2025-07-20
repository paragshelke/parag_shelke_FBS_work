#include<stdio.h>

void main()
{
	int a,b,c;
	printf("enter three sides of triangle");
	scanf("%d %d %d",&a,&b,&c);
	
	if(a==b&&a==c)
	{
		printf("Triangle is equilateral");
	}
	else
	{
		if(a==b||b==c||c==a)
		{
			printf("Triangle is isosceles");
		}
		else
		{
			printf("Triangle is scalene");
		}
	}
}