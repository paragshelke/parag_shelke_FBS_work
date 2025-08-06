#include<stdio.h>
 char* replace(char*);
void main()
{
	char str[20];
	printf("Enter the string : ");
	scanf("%s",str);

	char *x=replace(str);
	if(x==str)
		printf("%s",x);
	else
	printf("not found");


} 
char* replace(char* str)
{
	int found=0;
	int i=0;
	while(str[i]!='\0')
	{
		if(str[i]=='a')
		{
			str[i]='$';
			found=1;
		}
			
			i++;
	}
	if(found==0)
	return NULL;
	else
	return str;
}