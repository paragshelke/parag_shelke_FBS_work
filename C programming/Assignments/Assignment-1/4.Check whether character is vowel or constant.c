#include<stdio.h>

void main()
{
  char c;
  
  printf("enter a character ");  
  scanf("%c",&c); 
   
 if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u')
  {
  printf("character is vowel");
}
  else 
  {
  	printf("character is consonant");
	  }	
}