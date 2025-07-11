#include<stdio.h>

int age();

int main()
{
	int x=age();
	if(x==0)
		printf("child");
	else if(x==1)
		printf("teenager");
	else if(x==2)
		printf("adult");
	else
	printf("senior");
}


int age()
{
	int age;
	printf("Enter your age : ");
	scanf("%d",&age);
	
	if(age<12)
	{
		return 0;
	}
	else if(age>=12&&age<=19)
		{
		return 1;
		}
		else if(age>=20&&age<=59)
		{
		return 2;
		}
		else
		{
		return 3;
		}
}