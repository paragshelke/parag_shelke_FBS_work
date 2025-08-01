#include<stdio.h>

struct employee 
{
	int id;
	char name[15];
	int salary;
};
 
void main()
{
	struct employee s1;
	printf("enter id,name,salary :");
		scanf("%d",&s1.id);
		scanf("%s",&s1.name);
		scanf("%d",&s1.salary);
		
		printf("id = %d , name = %s , salary = %d",s1.id,s1.name,s1.salary);
}