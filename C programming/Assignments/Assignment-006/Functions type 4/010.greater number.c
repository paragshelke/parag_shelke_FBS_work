#include<stdio.h>
int greater(int,int,int);

void main()
{
	int a,b,c;
	printf("enter any three numbers");
	scanf("%d %d %d",&a,&b,&c);
	
	int x=greater(a,b,c);
	if(x==1)
	printf("a is greater");
	 else if(x==2)
	printf("c is greater");
	else if(x==3)
	printf("b is greater");
	else 
	printf("c is greater");
	
	
	
}

int greater(int a,int b,int c)
{
		if(a>b)
		{
		if(a>c)
		{
			return 1;
		}
		else 
		{
			return 2 ;
		}
		return 0;
	}
	else 
	{
	 	 if(b>c)
	  	{
	  	return 3;
	 	 }
	  	else 
	 	 {
	  	return 4;
	  	}
	}
}