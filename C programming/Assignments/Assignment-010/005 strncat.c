#include<stdio.h>
#include<string.h>
void main()
{
	char str1[]="Hello";
	char str2[]="world";
	strncat(str1,str2,4);
	printf("%s",str1);
}