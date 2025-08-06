#include<stdio.h>
#include<string.h>
void main()
{
	char str[]="Hello";
	char* x=strrchr(str,'e');
	printf("%s",x);
}