#include<stdio.h>

struct admin
{
	int id;
	char name[20];
	int salary;
	int allowance;
};

void main()
{
	struct admin e1;
	printf("enter id,name,salary,allowance : ");
	scanf("%d%s%d%d",&e1.id,&e1.name,&e1.salary,&e1.allowance);
	
	printf("id = %d,name = %s,salary = %d,allowance = %d",e1.id,e1.name,e1.salary,e1.allowance);
}