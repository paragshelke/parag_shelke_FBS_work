#include<stdio.h>

float checksalary(float);

int main()
{
	
	    float basic;
    
    printf("Enter basic salary: ");
    scanf("%f", &basic);
    
  float total = checksalary(basic);
   printf("total salary is %f",total);
   
   checksalary(basic);
   
}

//main ends

float checksalary(float basic)
{

float da,ta,hra,total;

    if(basic <= 5000)
	 {
        da = 0.10 * basic;
        ta = 0.20 * basic;
        hra = 0.25 * basic;
        
       
    } 
	else 
	{
        da = 0.15 * basic;
        ta = 0.25 * basic;
        hra = 0.30 * basic;
        
       
    }

    total = basic + da + ta + hra;
    return total;

}