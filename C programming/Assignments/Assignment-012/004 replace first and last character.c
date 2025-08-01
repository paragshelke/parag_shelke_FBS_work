#include<stdio.h>
char* replaceFL(char*);
void main()
{
	char str[10];
	printf("Enter your string : ");
	scanf("%s",str);
	printf("%s",replaceFL(str));
}
char* replaceFL(char* str)
{	
	int i=0;
	while(str[i]!='\0')
	{
		i++;
	}
	
	int j=i-1;
	int temp=str[0];
	str[0]=str[j];
	str[j]=temp;
	
	return str;
}