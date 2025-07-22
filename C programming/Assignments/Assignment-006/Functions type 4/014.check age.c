#include<stdio.h>

int agee(int);

void main()
{
	int age;
	printf("Enter your age : ");
	scanf("%d",&age);
	
	int x=agee(age);
	
	if(x==1)
	{
		printf(" child");
	}
	else if(x==2)
		{
		printf("teenager");
		}
		else if(x==3)
		{
		printf(" adult");
		}
		else
		{
		printf("senior");
		}
	

}

int agee(int age)
{
	if(age<12)
	{
		return 1;
	}
	else if(age>=12&&age<=19)
		{
		return 2;
		}
		else if(age>=20&&age<=59)
		{
		return 3;
		}
		else
		{
		return 4;
		}
}