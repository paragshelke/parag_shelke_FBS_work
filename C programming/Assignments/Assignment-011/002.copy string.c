#include<stdio.h>

char *copy(char *,char * );
void main()
{
	char str[]="hello";
	
	char cpy[10];
	
	char *x = copy(cpy, str); 
    printf("%s", x); 	
}

char *copy(char *cpy,char *str)
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