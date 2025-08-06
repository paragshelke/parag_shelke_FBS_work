#include<stdio.h>
#include<string.h>
void main()
{
	char str[] = "Hello";
	char *cpy = strdup(str);
	printf("%s",cpy);
	free(cpy);
}