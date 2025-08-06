#include<stdio.h>
#include<string.h>
void main()
{
	char str[20];
	char *x = stpcpy(str, "Hello");
	printf("%c", *(x-4));
}