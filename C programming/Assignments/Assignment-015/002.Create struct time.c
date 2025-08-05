#include<stdio.h>

typedef struct time
{
	int hour;
	int min;
	int sec;	
}t;

void display(t *);
void totalseconds(t *);
void store(t *);

void main()
{
	t t1;
	
	store(&t1);
	totalseconds(&t1);
	display(&t1);
	
}

void store(t *ptr)
{
			printf("enter hour min sec:");
			scanf("%d %d %d",&ptr->hour,&ptr->min,&ptr->sec);
}

void totalseconds(t *ptr)
{
	int totalsec=(ptr->hour * 3600) + (ptr->min * 60) + ptr->sec;
	printf("total seconds are : %d",totalsec);
}

void display(t *ptr)
{ 
		printf("\nhour:%d min:%d sec:%d",ptr->hour,ptr->min,ptr->sec);
	
}



		