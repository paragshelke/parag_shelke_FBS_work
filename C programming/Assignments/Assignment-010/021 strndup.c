#include<stdio.h>
#include<string.h>
void main()
{
	char str[] = "parag";
	char *cpy = strndup(str,3);
	printf("%s", cpy);
	free(cpy);
}