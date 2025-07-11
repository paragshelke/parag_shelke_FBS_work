#include<stdio.h>

int oddeven();

int main()
{
	if(oddeven())
		printf("is even");
	else
	printf("is odd");
	
	
}

int oddeven()
{
	  int no;
  
  printf("enter a number ");
  scanf("%d",&no);
  	
  if(no%2==0)
  {
  return 1;
}
  else 
  {
  	return 0;
	  }
	  	
}