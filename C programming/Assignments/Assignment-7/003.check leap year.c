#include<stdio.h>

int isleap();

int main()
{
	if(isleap())
		printf("is leap year");
	else
	printf("not leap year");
}

//main ends 

int isleap()
{
	  int year;
  
  printf("enter year ");  
  scanf("%d",&year); 
   
  if(year%4==0 && year%100!=0 || year%400==0)
  {
  return 1;
}
  else 
  {
  	return 0;
	  }	

}