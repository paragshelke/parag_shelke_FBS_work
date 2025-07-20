#include<stdio.h>

void checkcase();

void main()
{
	checkcase();
}

void checkcase()
{
		char c;
	
	printf("enter a character ");
	scanf("%c",&c);
	
	if(c>='A'&&c<='Z')
	{
		printf("character is Uppercase ");
	}
	else
	{
		printf("character is Lowercase");
	}
}