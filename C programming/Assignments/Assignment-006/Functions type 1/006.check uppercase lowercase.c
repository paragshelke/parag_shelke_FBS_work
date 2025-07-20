#include<stdio.h>
void case();

void main()
{
	case();
}

void case()
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