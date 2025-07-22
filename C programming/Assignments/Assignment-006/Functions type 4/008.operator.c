#include<stdio.h>
int operator(int,int,char);

void main()
{
		int  a,b;
		char o;
		printf("enter two numbers and an operator ");
		scanf("%d %d %c",&a,&b,&o);
		
		int x=operator(a,b,o);
		
		if(x==1)
		printf("%d",a+b);
		else if(x==2)
		printf("%d",a-b);
		else if(x==3)
		printf("%d",a*b);
		else if(x==4)
		printf("%d",a/b);
		else if(x==5)
		printf("%d",a%b);
		
	
		
	
} 


int operator(int a,int b,char o)
{
		
		if(o=='+')
		{
			return 1;
		}
		else if(o=='-')
		{
			return 2;
		}
		else if(o=='*')
		{
			return 3;
		}
		else if(o=='/')
		{
			return 4;
		}
		else if(o=='%')
		{
			return 5;
    	}
	
}