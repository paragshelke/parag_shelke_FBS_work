#include<stdio.h>
void search(char *,char );
void main()
{
	char str[20];
	printf("enter a string :");
	gets(str);
	
	char c;
	printf("enter character to search : ");
	scanf("%c",&c);
	
	
	search(str,c);
}
void search(char *str,char c)
{
	int flag=0;
	int i=0;
	while(str[i]!='\0')
	{
		if(str[i]==c)
		{
			printf("character found at index %d",i);
			flag=1;
			break;
			
		}
		i++;	
	}
	if(flag==0)
	printf("character not found");
	

}
