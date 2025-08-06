#include<stdio.h>
#include<string.h>
void main()
{
	char str1[]="Hello";
	char str2[]="world";
	int x=strncmp(str1,str2,4);
	printf("%d",x);
}