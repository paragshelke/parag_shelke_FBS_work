#include<stdio.h>
void operator(int,int,char);

void main()
{
		int  a,b;
		char o;
		printf("enter two numbers and an operator ");
		scanf("%d %d %c",&a,&b,&o);
		
		operator(a,b,o);
	
} 


void operator(int a,int b,char o)
{
		
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