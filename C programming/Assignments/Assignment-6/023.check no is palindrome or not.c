#include<stdio.h>

void ispalindrome();

void main()
{
	ispalindrome();
}

void ispalindrome()
{
	int n = 121;  
    int temp = n;
    int r;
    int reversed = 0;

    while(n > 0) 
	{
        r = n % 10;
        reversed = reversed * 10 + r;
        n = n / 10;
    }

    if(reversed == temp)
        printf("%d is a Palindrome number", temp);
    else
        printf("%d is not a Palindrome number", temp);

}