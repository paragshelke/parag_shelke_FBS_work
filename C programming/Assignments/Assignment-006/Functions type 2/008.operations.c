#include<stdio.h>

int operation();

void main()
{
	int result=operation();
	printf("%d",result);
}

int operation()
{
			int  a,b;
		char o;
		printf("enter two numbers and an operator ");
		scanf("%d %d %c",&a,&b,&o);
		
		if(o=='+')
		{
			return a+b;
		}
		else if(o=='-')
		{
			return a-b;
		}
		else if(o=='*')
		{
			return a*b;
		}
		else if(o=='/')
		{
			return a/b;
		}
		else if(o=='%')
		{
			 return a%b;
    	}
}