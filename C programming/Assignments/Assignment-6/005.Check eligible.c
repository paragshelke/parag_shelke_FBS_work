#include<stdio.h>

void eligible();

void main()
{
	eligible();
}

void eligible()
 {
 	int age;
	
	printf("enter age");
	scanf("%d",&age);
 	 	
 	if(age>=18)
 	{
 		printf("eligible for voting");
	 }
	 else
	 {
	 	printf("not eligible for voting");
	 }
 }