#include<stdio.h>
void findVowel(char*);
void main()
{
	char str[10];
	printf("Enter your string : ");
	scanf("%s",str);
	findVowel(str);
}
void findVowel(char* s)
{
	int flag=0;
	
	for(int i=0;s[i]!='\0';i++)
	{
		if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u')
		{
				printf("%c ",s[i]);
			flag=1;
		}
	}
	if(flag==0)
	printf("no vowels in string");
}