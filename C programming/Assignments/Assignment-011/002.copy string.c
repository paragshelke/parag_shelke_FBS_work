#include<stdio.h>

char *strcpy(char *cpy,char *str );

void main()
{
	char str[]="hello";
	
	char cpy[10];
	
	char *x = strcpy(cpy, str); 
    printf("%s", x); 
	
}

char *strcpy(char *cpy,char *str)
{
	int i=0;
	while(str[i]!='\0')
	{
		cpy[i]=str[i];
		i++;
	}
	cpy[i]='\0';
	return cpy;	
}