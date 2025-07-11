#include<stdio.h>

void greater();

void main()
{
	greater();
}

void greater()
{
		int a,b,c;
	printf("enter any three numbers");
	scanf("%d %d %d",&a,&b,&c);
	
	if(a>b)
	{
		if(a>c)
		{
			printf(" a is greater");
		}
		else 
		{
			printf("c is greater") ;
		}
	}
	else 
	{
	 	 if(b>c)
	  	{
	  		printf("b is greater");
	 	 }
	  	else 
	 	 {
	  		printf("c is greater");
	  	}
	}
}