#include<stdio.h>

char *ncpy(char *,char *,int);
void main()
{
	char str[]="hello";
	char demo[10];
	
	char *x=ncpy(demo,str,2);
	printf("%s",x);
}

char *ncpy(char *demo,char *str,int n)
{
	int i=0;
	while(i<n)
	{
		demo[i]=str[i];
		i++;
	}
	demo[i]='\0';
	return demo;
}
