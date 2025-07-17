#include<stdio.h>
void checkcase(char*);

void main()
{
	char c;
	
	printf("enter a character ");
	scanf("%c",&c);
	
	checkcase(&c);
}

void checkcase(char* c)
{
		if(*c>='A'&&*c<='Z')
	{
		printf("character is Uppercase ");
	}
	else
	{
		printf("character is Lowercase");
	}
}