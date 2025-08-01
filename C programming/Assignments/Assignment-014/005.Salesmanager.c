#include<stdio.h>

struct sales_manager
{
	int id;
	char name[50];
	int salary;
	int incentive;
	int target;

};

void main()
{
	struct sales_manager hr1;
	
	printf("enter id,name,salary,incentive,target : ");
	scanf("%d %s %d %d %d",&hr1.id,&hr1.name,&hr1.salary,&hr1.incentive,&hr1.target);
	
	printf("id = %d,name = %s,salary = %d,incentive = %d,target = %d",hr1.id,hr1.name,hr1.salary,hr1.salary,hr1.incentive,hr1.target);
	
}