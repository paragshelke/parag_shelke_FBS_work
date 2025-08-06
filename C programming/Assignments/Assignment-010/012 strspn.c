#include<stdio.h>
#include<string.h>
void main()
{
	char str1[]="Hello world";
	size_t len = strspn(str1,"He");
	printf("%zu",len);
}