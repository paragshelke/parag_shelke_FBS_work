#include<stdio.h>

int isleap(int);

int main()
{
		  int year;
  
  printf("enter year ");  
  scanf("%d",&year); 
  
  int x=isleap(year);
  
	if(x==1)
		printf("is leap year");
	else
	printf("not leap year");
	
	isleap(year);
}

//main ends 

int isleap(int year)
{

   
  if(year%4==0 && year%100!=0 || year%400==0)
  {
  return 1;
}
  else 
  {
  	return 0;
	  }	

}