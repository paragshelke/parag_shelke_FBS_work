#include <stdio.h>

void main()
 {
    int num, d1, d2, d3, rev;

    printf("Enter a 3-digit number: ");
    scanf("%d", &num);

    d1 = num / 100;          
    d2 = (num / 10) % 10;    
    d3 = num % 10;           

    rev = d3 * 100 + d2 * 10 + d1;  

    if(rev == num){
	
        printf("The number is a palindrome\n");
}
	else{
	
        printf("The number is not a palindrome\n");
    }
}