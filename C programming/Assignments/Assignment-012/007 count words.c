#include<stdio.h>
void Findwords(char*);
void main()
{	
	int size;
	char str[20];
	printf("Enter your string : ");
		gets(str);
	Findwords(str);
}
void Findwords(char* s)
{	
	int count=1;
	for(int i=0;s[i]!='\0';i++)
	{
		if(s[i]==' ')
		{
			count++;
		}
	}
	printf("no of words = %d",count);
}