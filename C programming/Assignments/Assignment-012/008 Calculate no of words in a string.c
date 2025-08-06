#include<stdio.h>
int count_words(char*);
void main()
{	
	int size;
	char str[20];
	printf("Enter a string : ");
		gets(str);
	int x=count_words(str);
	printf("no of words in string = %d",x);
}
int count_words(char* str)
{	
	int count=1;
	for(int i=0;str[i]!='\0';i++)
	{
		if(str[i]==' ')
		{
			count++;
		}
	}
	return count;
}