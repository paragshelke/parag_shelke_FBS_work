#include<stdio.h>

void sub(char*,char*);
void main()
{
	char str1[]="Hello world";
	char str2[]="world";
	sub(str1,str2);
}
void sub(char* str1,char* str2)
{
	int i=0,j=0;
	while(str1[i]!='\0')
	{
		if(str1[i]==str2[j])
		{	
			printf("%c",str2[j]);
			j++;
		}
		i++;
	}
}
