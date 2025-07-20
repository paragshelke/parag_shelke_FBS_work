#include<stdio.h>

float discount(float ,float ,float);

int main()
{
	float price,discount1,discount2;
    	printf("Enter the price : ");
	    scanf("%f%f%f",&price, &discount1, &discount2);
	float x = discount(price,discount1,discount2);
		printf("final price is %f",x);
	         
	discount(price,discount1,discount2);
}


float discount(float price,float discount1,float discount2)
 {  
 	float discount;
 	 if(price>100)
 	 	discount= (price*discount1)/100 ;
 	else
 		discount= (price*discount2)/100 ;
 		
 	float finalprice=price-discount;
 	    
 	    return finalprice;
 		
 }