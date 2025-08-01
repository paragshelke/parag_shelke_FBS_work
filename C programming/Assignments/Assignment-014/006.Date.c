#include<stdio.h>

struct date 
{
	int date;
	int month;
	int year;
};

struct date storedate();
void display(struct date datee);

void main()
{
	struct date d1;
	
	d1=storedate();
	display(d1);
}

struct date storedate()
{
		struct date datee;
	printf("enter date month year : ");
	scanf("%d %d %d",&datee.date,&datee.month,&datee.year);
	
	return datee;
}

void display(struct date datee)
{
	printf("date:%d,month:%d,year:%d",datee.date,datee.month,datee.year);
}