#include<stdio.h>

char *ncat(char *,char *,int);
void main()
{
	char str1[10]="hello";
	char str2[10]="world";
	
	char *x=ncat(str1,str2,2);
	printf("%s",x);
}

char *ncat(char *str1,char *str2,int n)
{
	int length=0;
	int i=0;
	while(str1[i]!='\0')
	{
		length++;
		i++;
	}

	int j=0;
	while(j<n)
	{
		str1[length+j]=str2[j];
		j++;
	}
	str1[length+j]='\0';
	return str1;	
}
