#include<stdio.h>
#include<string.h>
void main()
{
	char str[] = "Hello_World";
	char *token = strtok(str, "_");
	while(token != NULL) {
	    printf("%s\n", token);
	    token = strtok(NULL, "_");
	}
}