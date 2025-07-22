#include<stdio.h>

int isuppercase(char);

void main()
{
			char c;
	
	printf("enter a character ");
	scanf("%c",&c);
	
	int x=isuppercase(c);
	
	if(x==1)
	printf("is upper case");
	else
	printf("is lowercase");
	
	isuppercase(c);
}

int isuppercase(char c)
{

	
	if(c>='A'&&c<='Z')
	{
		return 1;
	}
	else
	{
		return 0;
	}
}