#include<stdio.h>

int cmp(char *str1,char *str2);
void main()
{
	char str1[10]="hello";
	char str2[10]="hello";
	
	int x=cmp(str1,str2);
	if(x==0)
		printf("strings are equal");
	else
		printf("strings are not equal");
}

int cmp(char *str1,char *str2)
{
	int i=0;
	while(str1[i]==str2[i])
	{
		if(str1[i] == '\0') 
		  return 0;
		i++;
	}
	return 1;	
}

