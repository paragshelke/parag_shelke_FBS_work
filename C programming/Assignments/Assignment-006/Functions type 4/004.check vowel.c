#include<stdio.h>

int isvowel(char);

void main()
{
	 char c;
  
  printf("enter a character ");  
  scanf("%c",&c); 
  
	isvowel(c);
}

int isvowel(char c)
{
	if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u')
  {
 	printf("character is vowel");
}
  else 
  {
  	printf("character is consonant");
	  }	
}