#include<stdio.h>
int largest_string(char*,char*);
void main()
{
	char str1[20];
	char str2[20];
	printf("enter first string : ");
	scanf("%s",str1);
	
	printf("enter second string : ");
	scanf("%s",str2);
	int x=largest_string(str1,str2);
	if(x==0)
	{
		printf("first string is larger");
	}
	else
	{
		printf("second string is larger");
	}
}
int largest_string(char* str1,char* str2)
{
	int count1=0,count2=0;
	for(int i=0;str1[i]!='\0';i++)
	{
		count1++;
	}
	for(int i=0;str2[i]!='\0';i++)
	{
		count2++;
	}
	if(count1>count2)
	{
	return 0;
	}
	else
	{
	return 1;
	}
}