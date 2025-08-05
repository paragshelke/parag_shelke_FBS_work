#include <stdio.h>

typedef struct ticket
 {
    int age;
    int amount;
} t;

void storee(t *, int );
float totalamount(t *, int );

void main() 
{
    t arr[5];

    storee(arr, 5);
    float x = totalamount(arr, 5);

    printf("total amount of ticket for all persons: %f", x);
    
}

void storee(t *arr, int n) 
{
    for (int i = 0; i < n; i++)
	 {
        printf("enter age and ticket amount for person %d: ", i + 1);
        scanf("%d %d", &arr[i].age, &arr[i].amount);
    }
}

float totalamount(t *arr, int n) 
{
    float finalamount;

    for (int i = 0; i < n; i++)
	 {
        float discount = 0;

        if (arr[i].age < 12) 
		{
            discount = arr[i].amount * 0.30;
        } 
		else if (arr[i].age > 59) 
		{
            discount = arr[i].amount * 0.50;
        }

         finalamount = arr[i].amount - discount;
      
     }

    return finalamount;
}
