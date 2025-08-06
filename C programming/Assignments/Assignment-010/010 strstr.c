#include<stdio.h>
#include<string.h>
void main()
{
	char str[]="Hello world";
	char* x=strstr(str,"world");
	printf("%s",x);
}