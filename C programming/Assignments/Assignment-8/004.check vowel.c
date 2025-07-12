#include<stdio.h>
void is_vowel(char);

void main()
{
	  char c;
  
  printf("enter a character ");  
  scanf("%c",&c); 
   
   is_vowel(c);

}

void is_vowel(char c)
{
	 if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u')
  {
 	printf("character is vowel");
}
  else 
  {
  	printf("character is constant");
	  }	
}