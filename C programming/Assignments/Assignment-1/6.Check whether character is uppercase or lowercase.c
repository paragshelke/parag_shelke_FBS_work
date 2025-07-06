#include<stdio.h>

void main()
{
	char c;
	
	printf("enter a character");
	scanf("%c",&c);
	
	if(c>='A'&&c<='Z')
	{
		printf(" character is Uppercase ");
	}
	else
	{
		printf("character is Lowercase");
	}
}