#include<stdio.h>

char *merge(char *,char *,char *);
void main()
{
	char str1[6]="hello";
	char str2[7]="world";
	char mer[13];
	
	char *x=merge(str1,str2,mer);
	printf("%s",x);
	
}

char *merge(char *str1,char *str2,char *mer)
{
	int i=0;
	while(str1[i]!='\0')
	{
		mer[i]=str1[i];
		i++;	
	}
	
	int n=i;
	 i=0;	
	while(str2[i]!='\0')
	{
		mer[i+n]=str2[i];
		i++;	
	}
	mer[n+i]='\0';
	return mer;
}
