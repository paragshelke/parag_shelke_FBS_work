#include<stdio.h>

struct complex
{
	int real;
	int imaginary;
};

void display(struct complex c );
struct complex store();

void main()
{
	struct complex c1;
	
	c1=store();
	display(c1);
	
}

struct complex store()
{
	struct complex c;
	printf("enter real imaginary : ");
	scanf("%d %d",&c.real,&c.imaginary);
	
	return c;
}

void display(struct complex c)
{
	printf("real:%d,imaginary:%d\n",c.real,c.imaginary);
}

