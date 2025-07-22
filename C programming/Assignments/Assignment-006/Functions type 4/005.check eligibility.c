#include<stdio.h>

int iseligible(int);

void main()
{
		 	int age;
	
	printf("enter age ");
	scanf("%d",&age);
	
	int x=iseligible(age);
	
	if(x==1)
		printf("is eligible");
		
	else
	printf("not eligible");
	


}

///main ends

int iseligible(int age)
{

 	 	
 	if(age>=18)
 	{
 	return 1;
	 }
	 else
	 {
	 return 0;
	 }
}