#include <stdio.h>

void main() 
{
    int arr[5];
    int par[3];
    int merged[8];

    printf("Enter 5 numbers in array : ");
    for(int i = 0; i < 5; i++)
	 {
        scanf("%d", &arr[i]);
    }

    printf("Enter 3 numbers in array : ");
    for(int i = 0; i < 3; i++) 
	{
        scanf("%d", &par[i]);
    }

    for(int i = 0; i < 5; i++) 
	{
        merged[i] = arr[i];
    }
    for(int i = 0; i < 3; i++) 
	{
        merged[5 + i] = par[i];
    }

    printf("Merged array: ");
    for(int i = 0; i < 8; i++)
	 {
        printf("%d ", merged[i]);
    }
}
