#include<stdio.h>

char *rchr(char *,char);
void main()
{
	char str[10]="hello";

	 char *x=rchr(str,'l');
	 
	 if(x==NULL)
	 		printf("not found");
	else
		printf("%s",x);

}

char *rchr(char *str,char c)
{
	int i=0;
	int length=0;
	while(str[i]!='\0')
	{
		length++;
		i++;
	}
	
	int j=length;
	while(j>=0)
	{
		if(str[j]==c)
		return &str[j];
		
		j--;
	}
		return NULL;
	
}

