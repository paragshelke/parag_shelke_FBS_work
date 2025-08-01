#include<stdio.h>

struct distance
{
	int feet;
	int inch;
};

void displaydistance(struct distance d );
struct distance storedistance();

void main()
{
	struct distance d1,d2;
	
	d1=storedistance();
	displaydistance(d1);
	
	d2=storedistance();
	displaydistance(d2);
}

struct distance storedistance()
{
	struct distance d;
	printf("enter feet inch : ");
	scanf("%d %d",&d.feet,&d.inch);
	
	return d;
}

void displaydistance(struct distance d)
{
	printf("feet:%d,inch:%d\n",d.feet,d.inch);
}

