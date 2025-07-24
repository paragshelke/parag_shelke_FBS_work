#include<stdio.h>

int strlength(char *str);

void main()
{
	char str[]="hello";
	
	int x=strlength(str);
	printf("%d",x);
}
int strlength(char *str)
{
	int i=0;
	int count=0;
	while(str[i]!='\0')
	{
		count++;
		i++;
	}
	return count;
}