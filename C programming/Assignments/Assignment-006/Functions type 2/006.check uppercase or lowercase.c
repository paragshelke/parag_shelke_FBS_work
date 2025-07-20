#include<stdio.h>

int isuppercase();

void main()
{
	int x=isuppercase();
	if(x==1)
	printf("is upper case");
	else
	printf("is lowercase");
}

int isuppercase()
{
		char c;
	
	printf("enter a character ");
	scanf("%c",&c);
	
	if(c>='A'&&c<='Z')
	{
		return 1;
	}
	else
	{
		return 0;
	}
}