#include<stdio.h>
#include<string.h>
void main()
{
	char str[]="Hello";
	char cpy[20];
	strncpy(cpy,str,4);
	printf("%s",cpy);
}