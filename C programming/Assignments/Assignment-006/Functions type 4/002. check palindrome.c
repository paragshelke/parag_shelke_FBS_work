#include<stdio.h>

int ispalindrome(int);

int main()
{
	   int num;

    printf("Enter a 3-digit number: ");
    scanf("%d", &num);
    
	int x= ispalindrome(num);
	if(x==1)
	 printf("is palindrome");
	 else
	 printf(" not palindrome");
	 
	 ispalindrome(num);
}
///// main ends

int ispalindrome(int num)
{
	 	int r1, r2, r3, rev;
	int q1;

    r1 = num%10;
	q1 = num/10;
	r2 = q1%10; 
    r3 = q1/10;           

    rev = r1 * 100 + r2 * 10 + r3;  

    if(rev == num){
	
  return 1;
}
	else{
	
       return 0;
    }
}