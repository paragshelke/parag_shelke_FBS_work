#include<stdio.h>

int isvowel();

void main()
{
   int x=isvowel();
   if(x==1)
   printf("character is vowel");
   else
   	printf("character is constant");
}

int isvowel()
{
		  char c;
  
  printf("enter a character ");  
  scanf("%c",&c); 
   
 if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u')
  {
 	return 1;
}
  else 
  {
  	return 0;

	  }	
}