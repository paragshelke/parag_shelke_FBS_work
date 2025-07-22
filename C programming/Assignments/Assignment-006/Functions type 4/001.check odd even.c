#include<stdio.h>

int oddeven(int);

void main()
{
		  int no;
  
   printf("enter a number ");
   scanf("%d",&no);
  
	int x= oddeven(no);
	if(x==1)
		printf("is even");
	else
	printf("is odd");
	
	oddeven(no);
}

int oddeven(int no)
{

  	
  if(no%2==0)
  {
  return 1;
}
  else 
  {
  	return 0;
	  }
	  	
}