#include<stdio.h>

void ispalindrome(int*);

void main ()
{
		int n;
	printf("enter a number ");
	scanf("%d",&n);
	
	ispalindrome(&n);
}

void ispalindrome(int* n)
{
	 int temp = *n;
    int r;
    int reversed = 0;

    while(*n > 0) 
	{
        r = *n % 10;
        reversed = reversed * 10 + r;
        *n = *n / 10;
    }

    if(reversed == temp)
        printf("%d is a Palindrome number", temp);
    else
        printf("%d is not a Palindrome number", temp);

}