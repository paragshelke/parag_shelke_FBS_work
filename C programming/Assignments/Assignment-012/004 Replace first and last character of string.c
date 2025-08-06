#include<stdio.h>
char* replace(char*);
void main()
{
	char str[20];
	printf("Enter the string : ");
	scanf("%s",str);
	printf("%s",replace(str));
}
char* replace(char* str)
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