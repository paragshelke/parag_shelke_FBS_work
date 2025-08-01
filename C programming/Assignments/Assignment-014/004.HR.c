#include<stdio.h>

struct hr
{
	int id;
	char name[50];
	int salary;
	int commision;

};

void main()
{
	struct hr hr1;
	
	printf("enter id,name,salary,commision : ");
	scanf("%d %s %d %d",&hr1.id,&hr1.name,&hr1.salary,&hr1.commision);
	
	printf("id = %d,name = %s,salary = %d,commision = %d",hr1.id,hr1.name,hr1.salary,hr1.salary,hr1.commision);
	
}