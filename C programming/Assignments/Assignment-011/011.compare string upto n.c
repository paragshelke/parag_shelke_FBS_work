#include<stdio.h>

int ncmp(char*,char*,int);
void main()
{
	char str1[]="Hello";
	char str2[]="Hello";
	
	int x=ncmp(str1,str2,2);
	printf("%d",x);
}
int ncmp(char* str1,char* str2,int n)
{
	int i=0,flag=0;
	while(i<n)
	{
		if(str1[i]!=str2[i])
		{
			flag=1;
			break;
		}
		i++;
	}
	if(flag==0)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
