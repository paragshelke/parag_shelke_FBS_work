#include<stdio.h>
#include<string.h>
void main()
{
	char str[]="Hello";
	char* x=strchr(str,'o');
	printf("%s",x);
}