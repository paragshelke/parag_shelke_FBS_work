#include<stdio.h>
void salary(float*);

void main() 
{
    float basic;
    
    printf("Enter basic salary: ");
    scanf("%f", &basic);
    
    salary(&basic);

}

void salary(float* basic)
{
	float da, ta, hra, total;
    if(*basic <= 5000)
	 {
        da = 0.10 * *basic;
        ta = 0.20 * *basic;
        hra = 0.25 * *basic;
    } 
	else 
	{
        da = 0.15 * *basic;
        ta = 0.25 * *basic;
        hra = 0.30 * *basic;
    }

    total = *basic + da + ta + hra;
    printf("Total Salary = %f", total);
}