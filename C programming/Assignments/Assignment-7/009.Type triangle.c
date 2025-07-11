#include<stdio.h>

int type();

int main()
{
	int x = type();
	if(x==1)
	printf("eqilateral triangle");
	else if(x==2)
	printf("isoceles triangle");
	else
	printf("scalene triangle");
	
}

int type()
{
		int a,b,c;
	printf("enter three sides of triangle");
	scanf("%d %d %d",&a,&b,&c);
	
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