#include<stdio.h>
int isPallindrome(char*);
void main()
{
	char str[20];
	printf("Enter a string : ");
	scanf("%s",str);
	
	int x=isPallindrome(str);
		if(x==0)
	{
		printf("String is pallindrome");
	}
	else
	{
		printf("String is not pallindrome");
	}
}
int isPallindrome(char* str)
{
	char rev[20];
	int count=0;
	for(int i=0;str[i]!='\0';i++)
	{
		count++;
	}
	int i=0;
	int j=count-1;
	while(str[i]!='\0')
	{
			rev[i]=str[j];
			i++;
			j--;
	}
	rev[count]='\0';
	int flag=0;
	for(int i=0;str[i]!='\0';i++)
	{	
		if(rev[i]!=str[i])
		{
			flag=1;
			break;
		}	
	}
	if(flag==0)
	{
	return 0;
	}
	else
	{
	return 1;
	}
}