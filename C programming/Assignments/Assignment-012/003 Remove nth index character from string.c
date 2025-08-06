#include<stdio.h>
char* rem(char *,int);
void main()
{
	char str[20];
	printf("Enter the string : ");
	scanf("%s",str);
	
		int index;
	printf("Enter the index to remove : ");
	scanf("%d",&index);
	
	char *x=rem(str,index);
	printf("%s",x);
}
char* rem(char* str,int index)
{
	int i=index;
	while(str[i]!='\0')
	{
		str[i]=str[i+1];
		i++;	 
	}
	return str;
}