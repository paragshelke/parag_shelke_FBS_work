#include<stdio.h>
#include<string.h>
void main()
{
	char str[]="Hello world";
	char* x=strpbrk(str,"o");
	printf("%s",x);
}