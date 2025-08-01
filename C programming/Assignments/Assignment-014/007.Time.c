#include<stdio.h>

struct time
{
	int hour;
	int minute;
	int sec;
};

void displaytime(struct time t );
struct time storetime();

void main()
{
	struct time t1,t2;
	
	t1=storetime();
	displaytime(t1);
	
	t2=storetime();
	displaytime(t2);
}

struct time storetime()
{
	struct time t;
	printf("enter hour minutes sec: ");
	scanf("%d %d %d",&t.hour,&t.minute,&t.sec);
	
	return t;
}

void displaytime(struct time t)
{
	printf("hour:%d,minute:%d,sec:%d\n",t.hour,t.minute,t.sec);
}

