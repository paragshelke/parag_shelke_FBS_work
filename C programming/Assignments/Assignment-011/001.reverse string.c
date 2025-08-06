#include<stdio.h>

char *reverse (char *);
void main()
{
	char str[6]="hello";
	
	char *x=reverse(str);
	printf("%s",x);
	
}

char *reverse (char *str)
{
	int i=0,length=0;
	while(str[i]!='\0')
	{
		length++;
		i++;
	}
	for(int i=0;i<length/2;i++)
	{
		int temp =str[i];
			str[i]=str[length-1-i];
			str[length-1-i]=temp;
	}
	
	return str;
		
}