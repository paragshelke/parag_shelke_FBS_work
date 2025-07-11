#include<stdio.h>

void operations();

void main()
{
	operations();
}

void operations()
{
			int  a,b;
		char o;
		printf("enter two numbers and an operator ");
		scanf("%d %d %c",&a,&b,&o);
		
		if(o=='+')
		{
			printf("%d",a+b);
		}
		else if(o=='-')
		{
			printf("%d",a-b);
		}
		else if(o=='*')
		{
			printf("%d",a*b);
		}
		else if(o=='/')
		{
			printf("%d",a/b);
		}
		else if(o=='%')
		{
			printf("%d",a%b);
    	}
}