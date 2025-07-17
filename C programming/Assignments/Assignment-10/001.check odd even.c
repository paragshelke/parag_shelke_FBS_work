#include<stdio.h>

void oddeven(int *);

void main()
{
		  int no;
  
  printf("enter a number ");
  scanf("%d",&no);
  
  oddeven(&no);
}

void oddeven( int *no)
{

  if(*no%2==0)
  {
  printf("no %d is even",*no);
 }
  else 
  {
  	printf("no is odd");
	  }		
}