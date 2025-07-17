#include<stdio.h>
void iseligible(int*);


void main()
 {
 	int age;
	
	printf("enter age ");
	scanf("%d",&age);
	
	iseligible(&age);
 
 }
 
 void iseligible(int* age)
 {
 		 	
 	if(*age>=18)
 	{
 		printf("eligible for voting");
	 }
	 else
	 {
	 	printf("not eligible for voting");
	 }
 }