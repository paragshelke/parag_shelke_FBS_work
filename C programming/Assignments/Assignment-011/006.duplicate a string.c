#include<stdio.h>
#include <stdlib.h>

char* dup(char*);
void main()
{
	char str1[]="Hello";
	char *x=dup(str1);
	printf("%s",x);
}
char* dup(char* str1)
{		
	char* str2=(char*)malloc(sizeof(char)*20);
	int i=0;
	while(str1[i]!='\0')
	{
		str2[i]=str1[i];
		i++;
	}
	str2[i]='\0';
	return str2;
}
