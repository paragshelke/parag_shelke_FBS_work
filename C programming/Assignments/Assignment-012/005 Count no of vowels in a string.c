#include<stdio.h>
void count_vowel(char*);
void main()
{
	char str[20];
	printf("Enter the string : ");
	scanf("%s",str);
	count_vowel(str);
}
void count_vowel(char* s)
{
	int flag=0;
	int count=0;
	for(int i=0;s[i]!='\0';i++)
	{
		if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u')
		{
				count++;
			flag=1;
		}
	}
	if(flag==0)
	printf("no vowels in string");
	else
		printf("no of vowels=%d",count);
}