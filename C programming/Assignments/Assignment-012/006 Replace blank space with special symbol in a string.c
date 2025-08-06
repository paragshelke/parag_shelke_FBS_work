#include<stdio.h>
char* Replace(char*);
void main()
{
	char str[20];
	printf("Enter a string : ");
	gets(str);
	char *x=Replace(str);
		printf("%s",x);
}
char* Replace(char* s)
{
	for(int i=0;s[i]!='\0';i++)
	{
		if(s[i]==' ')
		{
			s[i]='$';
		}
	}
	return s;
}