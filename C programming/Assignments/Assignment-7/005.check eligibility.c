#include<stdio.h>

int iseligible();

int main()
{
	if(iseligible())
		printf("is eligible");
		
	else
	printf("not eligible");

}

///main ends

int iseligible()
{
	 	int age;
	
	printf("enter age ");
	scanf("%d",&age);
 	 	
 	if(age>=18)
 	{
 	return 1;
	 }
	 else
	 {
	 return 0;
	 }
}