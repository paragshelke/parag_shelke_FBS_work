#include<stdio.h>
#include<string.h>
void main()
{
	char str[]="Helloworld";
	size_t len = strcspn(str,"r");
	printf("%zu",len);
}